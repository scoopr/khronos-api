    The XML OpenGL / OpenGL ES API Registry

Introduction
------------

The Registry is the successor to the ancient ".spec" files used for many
years to describe the GL, WGL, and GLX APIs. The .spec files had a
number of issues including:

  - Almost completely undocumented
  - Used ancient Perl scripts to read and process the registry.
  - Hard to extend and did not semantically capture a variety of things
    we would like to know about an API.
  - Attempted to represent data types using a syntax that bore no
    description to any actual programming language. Generating this
    syntax from OpenGL extensions, which describe C bindings, was
    error-prone and painful for the registry maintainer.
  - Could not easily represent related APIs such as OpenGL ES.
  - There was an annoying inconsistency about presence of function/token
    prefixes and vendor suffixes depending on which of the GL, WGL, and
    GLX .spec files was being used.

The new registry uses an XML representation of the API and a set of
Python 3 scripts to manipulate the XML, based on the lxml Python
bindings. It comes with an XML schema and validator, is somewhat better
documented, and we will be much more responsive about updating it.

Some groups outside Khronos have their own XML based API descriptions,
often used for additional purposes such as library code generators or
extension loaders, and it may be desirable to construct XSLT or other
translators between the schema.

Getting Started
---------------

If you're running in a Linux command-line environment and have
Python 3, the lxml Python bindings, and libxml installed,
you should just be able to

    $ make

and generate C/C++ header files for OpenGL, OpenGL core profile, and
OpenGL ES 1/2/3. Following the Makefile rules and inspecting the files
gl.xml, genheaders.py, and reg.py will be necessary if you want to
repurpose the registry for reasons other than header file generation, or
to generate headers for languages other than C.

If you're running in a Windows, MaxOS X, or other environment, there are
equivalent versions of Python and GNU Make, although we haven't tested
this ourselves. Feedback would be helpful.

Header Generation Scripts (genheaders.py)
-----------------------------------------

When generating header files using the genheaders.py script, an API name
and profile name are required, as shown in the Makefile examples.
Additionally, specific versions and extensions can be required or
excluded. Based on this information, the generator script extracts the
relevant interfaces and creates a C-language header file for them.
genheaders.py contains predefined generator options for OpenGL, OpenGL
core profile, OpenGL ES 1 / 2 / 3, GLX, and WGL headers.

The generator script is intended to be generalizable to other languages
by writing new generator classes. Such generators would have to rewrite
the C types and definitions in the XML to something appropriate to their
language.

Registry Processing Script (reg.py)
-----------------------------------

Actual XML registry processing is done in reg.py, which contains several
objects and methods for loading registries and extracting interfaces and
extensions for use in header generation. There is some internal
documentation in the form of comments although nothing more extensive
exists yet, and it's possible the Python scripts will evolve
significantly based on public feedback.

XML Registry Format (gl.xml, glx.xml, wgl.xml, egl.xml)
-------------------------------------------------------

The format of an XML registry is a top level <registry> tag containing
<types>, <enums>, <commands>, <feature>, and <extension> tags describing
the different elements of an API, as explained below.

API types (<types> tag)
-----------------------

The <types> tag contains individual <type> tags describing each of the
derived types used in the API.

Each <type> tag contains legal C code, with attributes or embedded tags
denoting the type name.

Enumerants (<enums> tag)
------------------------

The <enums> tags contain individual <enum> tags describing each of the
token (enumerant) names used in the API. Each <enums> may have
attributes for a namespace string (used primarily to segregate bitfields
from other tokens, since bitfields live in their own allocation space);
start and end values which identify an enumerant range allocated for the
use of a specific vendor; and a vendor string to whom the range is
assigned.

Each <enum> tag contains name and value attributes for the enumerant
name and its value. These are legal C strings, with the value normally
being a hexadecimal integer. There may also a type attribute containing
a legal C postfix to a constant, used in a few places for 64-bit integer
constants.

The values are legal C, although there is some additional semantic
tagging in a few places, mostly for 64-bit integer constants.

Commands (<commands> tag)
-------------------------

The <commands> tag contains individual <command> tags describing
each of the functions (commands) used in the API.

Each <command> tag contains a <proto> tag with the return type and
function <name>, and zero or more <param> tags for each parameter of the
function defining the parameter type (using <ptype> for derived types)
and parameter <name>. <command> tags may also contain <alias> tags which
mark the function as being semantically equivalent to another function,
and <glx> tags defining GLX protocol opcode information, where that is
defined. The <param> and <ptype> tags again contain legal C fragments
which can be reassembled into a C function prototype.

API Features / Versions (<feature> tag)
---------------------------------------

API features are described in individual <feature> tags. A feature is
the set of required interfaces (enumerants and commands) defined by a
particular API and version, such as OpenGL 4.0 or OpenGL ES 3.0. A
<feature> tag includes attributes for the API name and version number
being described, as well as the C preprocessor symbol corresponding to
the feature.

Each <feature> tag may contain multiple <require> tags. Each <require>
tag may optionally have a profile attribute which restricts its
applicability to the specified profile string, and contains zero or more
<command> and <enum> tags which are required by the API version being
described.

Each <feature> tag may also contain multiple <remove> tags. <remove>
tags are like <require> tags, but identify interfaces which are removed
by the API version (and profile, if specified). This is primarily useful
in OpenGL, which removed many interfaces when it introduced the core /
compatibility profile mechanism in OpenGL 3.2.

API Extensions (<extension> tag)
--------------------------------

API extensions are described in individual <extension> tags. <extension>
is similar to <feature> but instead of having a version attribute, has a
supported attribute, which describes the set of API names which that
extension can potentially be implemented against. The name attribute is
the extension name string.

Profiles
--------

Types and enumerants can have different definitions depending on the API
profile requested, which allows us to accomodate minor incompatibilities
in the OpenGL and OpenGL ES APIs, for example. Features and extensions
can include some elements conditionally depending on the API profile
requested.

Feature Enhancements
--------------------

There are lots of tools and additional tags that would make the XML
format more expressive and the tools more capable. Khronos is open to
hosting additional processing scripts for other purposes. We're hoping
to be much more responsive to bugs filed in the Khronos public bugzilla
now that there's a more modern and maintainable framework to build on.

Feature Regressions Relative to .spec Files
-------------------------------------------

Some information from the .spec files is not included because it is
inaccurate ("version" tags from .spec rarely had anything to do with
reality, nor was their actual meaning well-defined) or cannot be easily
represented (such as the (supposed) length of array parameters). It
would be a big job to go backwards from the XML to .spec formats, and we
don't want to support this or enhance the .spec files going forward.
Hopefully, people using the .spec files for other purposes will be able
to transition to the XML registry.

