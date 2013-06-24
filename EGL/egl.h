#ifndef __egl_h_
#define __egl_h_ 1

#ifdef __cplusplus
extern "C" {
#endif

/*
** Copyright (c) 2013 The Khronos Group Inc.
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and/or associated documentation files (the
** "Materials"), to deal in the Materials without restriction, including
** without limitation the rights to use, copy, modify, merge, publish,
** distribute, sublicense, and/or sell copies of the Materials, and to
** permit persons to whom the Materials are furnished to do so, subject to
** the following conditions:
**
** The above copyright notice and this permission notice shall be included
** in all copies or substantial portions of the Materials.
**
** THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
** MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
** CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
** TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
** MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
*/
/*
** This header is generated from the Khronos OpenGL / OpenGL ES XML
** API Registry. The current version of the Registry, generator scripts
** used to make the header, and the header can be found at
**   http://www.opengl.org/registry/
**
** Khronos $Revision$ on $Date$
*/

#include <EGL/eglplatform.h>

#define EGL_EGLEXT_VERSION 20130624

/* Generated C header for:
 * API: egl
 * Versions considered: .*
 * Versions emitted: .*
 * Default extensions included: egl
 * Additional extensions included: _nomatch_^
 * Extensions removed: _nomatch_^
 */

#ifndef EGL_VERSION_1_0
#define EGL_VERSION_1_0 1
typedef unsigned int EGLBoolean;
typedef void *EGLDisplay;
typedef void *EGLConfig;
typedef void *EGLSurface;
#include <KHR/khrplatform.h>
#include <EGL/eglplatform.h>
typedef void *EGLContext;
typedef void (*__eglMustCastToProperFunctionPointerType)(void);
#define EGL_ALPHA_SIZE                    0x3021
#define EGL_BAD_ACCESS                    0x3002
#define EGL_BAD_ALLOC                     0x3003
#define EGL_BAD_ATTRIBUTE                 0x3004
#define EGL_BAD_CONFIG                    0x3005
#define EGL_BAD_CONTEXT                   0x3006
#define EGL_BAD_CURRENT_SURFACE           0x3007
#define EGL_BAD_DISPLAY                   0x3008
#define EGL_BAD_MATCH                     0x3009
#define EGL_BAD_NATIVE_PIXMAP             0x300A
#define EGL_BAD_NATIVE_WINDOW             0x300B
#define EGL_BAD_PARAMETER                 0x300C
#define EGL_BAD_SURFACE                   0x300D
#define EGL_BLUE_SIZE                     0x3022
#define EGL_BUFFER_SIZE                   0x3020
#define EGL_CONFIG_CAVEAT                 0x3027
#define EGL_CONFIG_ID                     0x3028
#define EGL_CORE_NATIVE_ENGINE            0x305B
#define EGL_DEPTH_SIZE                    0x3025
#define EGL_DONT_CARE                     ((EGLint)-1)
#define EGL_DRAW                          0x3059
#define EGL_EXTENSIONS                    0x3055
#define EGL_FALSE                         0
#define EGL_GREEN_SIZE                    0x3023
#define EGL_HEIGHT                        0x3056
#define EGL_LARGEST_PBUFFER               0x3058
#define EGL_LEVEL                         0x3029
#define EGL_MAX_PBUFFER_HEIGHT            0x302A
#define EGL_MAX_PBUFFER_PIXELS            0x302B
#define EGL_MAX_PBUFFER_WIDTH             0x302C
#define EGL_NATIVE_RENDERABLE             0x302D
#define EGL_NATIVE_VISUAL_ID              0x302E
#define EGL_NATIVE_VISUAL_TYPE            0x302F
#define EGL_NONE                          0x3038
#define EGL_NON_CONFORMANT_CONFIG         0x3051
#define EGL_NOT_INITIALIZED               0x3001
#define EGL_NO_CONTEXT                    ((EGLContext)0)
#define EGL_NO_DISPLAY                    ((EGLDisplay)0)
#define EGL_NO_SURFACE                    ((EGLSurface)0)
#define EGL_PBUFFER_BIT                   0x0001
#define EGL_PIXMAP_BIT                    0x0002
#define EGL_READ                          0x305A
#define EGL_RED_SIZE                      0x3024
#define EGL_SAMPLES                       0x3031
#define EGL_SAMPLE_BUFFERS                0x3032
#define EGL_SLOW_CONFIG                   0x3050
#define EGL_STENCIL_SIZE                  0x3026
#define EGL_SUCCESS                       0x3000
#define EGL_SURFACE_TYPE                  0x3033
#define EGL_TRANSPARENT_BLUE_VALUE        0x3035
#define EGL_TRANSPARENT_GREEN_VALUE       0x3036
#define EGL_TRANSPARENT_RED_VALUE         0x3037
#define EGL_TRANSPARENT_RGB               0x3052
#define EGL_TRANSPARENT_TYPE              0x3034
#define EGL_TRUE                          1
#define EGL_VENDOR                        0x3053
#define EGL_VERSION                       0x3054
#define EGL_WIDTH                         0x3057
#define EGL_WINDOW_BIT                    0x0004
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLBoolean EGLAPIENTRY eglChooseConfig (EGLDisplay dpy, const EGLint *attrib_list, EGLConfig *configs, EGLint config_size, EGLint *num_config);
EGLAPI EGLBoolean EGLAPIENTRY eglCopyBuffers (EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target);
EGLAPI EGLContext EGLAPIENTRY eglCreateContext (EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint *attrib_list);
EGLAPI EGLSurface EGLAPIENTRY eglCreatePbufferSurface (EGLDisplay dpy, EGLConfig config, const EGLint *attrib_list);
EGLAPI EGLSurface EGLAPIENTRY eglCreatePixmapSurface (EGLDisplay dpy, EGLConfig config, EGLNativePixmapType pixmap, const EGLint *attrib_list);
EGLAPI EGLSurface EGLAPIENTRY eglCreateWindowSurface (EGLDisplay dpy, EGLConfig config, EGLNativeWindowType win, const EGLint *attrib_list);
EGLAPI EGLBoolean EGLAPIENTRY eglDestroyContext (EGLDisplay dpy, EGLContext ctx);
EGLAPI EGLBoolean EGLAPIENTRY eglDestroySurface (EGLDisplay dpy, EGLSurface surface);
EGLAPI EGLBoolean EGLAPIENTRY eglGetConfigAttrib (EGLDisplay dpy, EGLConfig config, EGLint attribute, EGLint *value);
EGLAPI EGLBoolean EGLAPIENTRY eglGetConfigs (EGLDisplay dpy, EGLConfig *configs, EGLint config_size, EGLint *num_config);
EGLAPI EGLDisplay EGLAPIENTRY eglGetCurrentDisplay (void);
EGLAPI EGLSurface EGLAPIENTRY eglGetCurrentSurface (EGLint readdraw);
EGLAPI EGLDisplay EGLAPIENTRY eglGetDisplay (EGLNativeDisplayType display_id);
EGLAPI EGLint EGLAPIENTRY eglGetError (void);
EGLAPI __eglMustCastToProperFunctionPointerType EGLAPIENTRY eglGetProcAddress (const char *procname);
EGLAPI EGLBoolean EGLAPIENTRY eglInitialize (EGLDisplay dpy, EGLint *major, EGLint *minor);
EGLAPI EGLBoolean EGLAPIENTRY eglMakeCurrent (EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx);
EGLAPI EGLBoolean EGLAPIENTRY eglQueryContext (EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint *value);
EGLAPI const char *EGLAPIENTRY eglQueryString (EGLDisplay dpy, EGLint name);
EGLAPI EGLBoolean EGLAPIENTRY eglQuerySurface (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint *value);
EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffers (EGLDisplay dpy, EGLSurface surface);
EGLAPI EGLBoolean EGLAPIENTRY eglTerminate (EGLDisplay dpy);
EGLAPI EGLBoolean EGLAPIENTRY eglWaitGL (void);
EGLAPI EGLBoolean EGLAPIENTRY eglWaitNative (EGLint engine);
#endif
#endif /* EGL_VERSION_1_0 */

#ifndef EGL_VERSION_1_1
#define EGL_VERSION_1_1 1
#define EGL_BACK_BUFFER                   0x3084
#define EGL_BIND_TO_TEXTURE_RGB           0x3039
#define EGL_BIND_TO_TEXTURE_RGBA          0x303A
#define EGL_CONTEXT_LOST                  0x300E
#define EGL_MIN_SWAP_INTERVAL             0x303B
#define EGL_MAX_SWAP_INTERVAL             0x303C
#define EGL_MIPMAP_TEXTURE                0x3082
#define EGL_MIPMAP_LEVEL                  0x3083
#define EGL_NO_TEXTURE                    0x305C
#define EGL_TEXTURE_2D                    0x305F
#define EGL_TEXTURE_FORMAT                0x3080
#define EGL_TEXTURE_RGB                   0x305D
#define EGL_TEXTURE_RGBA                  0x305E
#define EGL_TEXTURE_TARGET                0x3081
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLBoolean EGLAPIENTRY eglBindTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
EGLAPI EGLBoolean EGLAPIENTRY eglReleaseTexImage (EGLDisplay dpy, EGLSurface surface, EGLint buffer);
EGLAPI EGLBoolean EGLAPIENTRY eglSurfaceAttrib (EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value);
EGLAPI EGLBoolean EGLAPIENTRY eglSwapInterval (EGLDisplay dpy, EGLint interval);
#endif
#endif /* EGL_VERSION_1_1 */

#ifndef EGL_VERSION_1_2
#define EGL_VERSION_1_2 1
typedef unsigned int EGLenum;
typedef void *EGLClientBuffer;
#define EGL_ALPHA_FORMAT                  0x3088
#define EGL_ALPHA_FORMAT_NONPRE           0x308B
#define EGL_ALPHA_FORMAT_PRE              0x308C
#define EGL_ALPHA_MASK_SIZE               0x303E
#define EGL_BUFFER_PRESERVED              0x3094
#define EGL_BUFFER_DESTROYED              0x3095
#define EGL_CLIENT_APIS                   0x308D
#define EGL_COLORSPACE                    0x3087
#define EGL_COLORSPACE_sRGB               0x3089
#define EGL_COLORSPACE_LINEAR             0x308A
#define EGL_COLOR_BUFFER_TYPE             0x303F
#define EGL_CONTEXT_CLIENT_TYPE           0x3097
#define EGL_DISPLAY_SCALING               10000
#define EGL_HORIZONTAL_RESOLUTION         0x3090
#define EGL_LUMINANCE_BUFFER              0x308F
#define EGL_LUMINANCE_SIZE                0x303D
#define EGL_OPENGL_ES_BIT                 0x0001
#define EGL_OPENVG_BIT                    0x0002
#define EGL_OPENGL_ES_API                 0x30A0
#define EGL_OPENVG_API                    0x30A1
#define EGL_OPENVG_IMAGE                  0x3096
#define EGL_PIXEL_ASPECT_RATIO            0x3092
#define EGL_RENDERABLE_TYPE               0x3040
#define EGL_RENDER_BUFFER                 0x3086
#define EGL_RGB_BUFFER                    0x308E
#define EGL_SINGLE_BUFFER                 0x3085
#define EGL_SWAP_BEHAVIOR                 0x3093
#define EGL_UNKNOWN                       ((EGLint)-1)
#define EGL_VERTICAL_RESOLUTION           0x3091
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLBoolean EGLAPIENTRY eglBindAPI (EGLenum api);
EGLAPI EGLenum EGLAPIENTRY eglQueryAPI (void);
EGLAPI EGLSurface EGLAPIENTRY eglCreatePbufferFromClientBuffer (EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint *attrib_list);
EGLAPI EGLBoolean EGLAPIENTRY eglReleaseThread (void);
EGLAPI EGLBoolean EGLAPIENTRY eglWaitClient (void);
#endif
#endif /* EGL_VERSION_1_2 */

#ifndef EGL_VERSION_1_3
#define EGL_VERSION_1_3 1
#define EGL_CONFORMANT                    0x3042
#define EGL_CONTEXT_CLIENT_VERSION        0x3098
#define EGL_MATCH_NATIVE_PIXMAP           0x3041
#define EGL_OPENGL_ES2_BIT                0x0004
#define EGL_VG_ALPHA_FORMAT               0x3088
#define EGL_VG_ALPHA_FORMAT_NONPRE        0x308B
#define EGL_VG_ALPHA_FORMAT_PRE           0x308C
#define EGL_VG_ALPHA_FORMAT_PRE_BIT       0x0040
#define EGL_VG_COLORSPACE                 0x3087
#define EGL_VG_COLORSPACE_sRGB            0x3089
#define EGL_VG_COLORSPACE_LINEAR          0x308A
#define EGL_VG_COLORSPACE_LINEAR_BIT      0x0020
#endif /* EGL_VERSION_1_3 */

#ifndef EGL_VERSION_1_4
#define EGL_VERSION_1_4 1
#define EGL_DEFAULT_DISPLAY               ((EGLNativeDisplayType)0)
#define EGL_MULTISAMPLE_RESOLVE_BOX_BIT   0x0200
#define EGL_MULTISAMPLE_RESOLVE           0x3099
#define EGL_MULTISAMPLE_RESOLVE_DEFAULT   0x309A
#define EGL_MULTISAMPLE_RESOLVE_BOX       0x309B
#define EGL_OPENGL_API                    0x30A2
#define EGL_OPENGL_BIT                    0x0008
#define EGL_SWAP_BEHAVIOR_PRESERVED_BIT   0x0400
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLContext EGLAPIENTRY eglGetCurrentContext (void);
#endif
#endif /* EGL_VERSION_1_4 */

#ifndef EGL_KHR_config_attribs
#define EGL_KHR_config_attribs 1
#define EGL_CONFORMANT_KHR                0x3042
#define EGL_VG_COLORSPACE_LINEAR_BIT_KHR  0x0020
#define EGL_VG_ALPHA_FORMAT_PRE_BIT_KHR   0x0040
#endif /* EGL_KHR_config_attribs */

#ifndef EGL_KHR_create_context
#define EGL_KHR_create_context 1
#define EGL_CONTEXT_MAJOR_VERSION_KHR     0x3098
#define EGL_CONTEXT_MINOR_VERSION_KHR     0x30FB
#define EGL_CONTEXT_FLAGS_KHR             0x30FC
#define EGL_CONTEXT_OPENGL_PROFILE_MASK_KHR 0x30FD
#define EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_KHR 0x31BD
#define EGL_NO_RESET_NOTIFICATION_KHR     0x31BE
#define EGL_LOSE_CONTEXT_ON_RESET_KHR     0x31BF
#define EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR  0x00000001
#define EGL_CONTEXT_OPENGL_FORWARD_COMPATIBLE_BIT_KHR 0x00000002
#define EGL_CONTEXT_OPENGL_ROBUST_ACCESS_BIT_KHR 0x00000004
#define EGL_CONTEXT_OPENGL_CORE_PROFILE_BIT_KHR 0x00000001
#define EGL_CONTEXT_OPENGL_COMPATIBILITY_PROFILE_BIT_KHR 0x00000002
#define EGL_OPENGL_ES3_BIT_KHR            0x00000040
#endif /* EGL_KHR_create_context */

#ifndef EGL_KHR_fence_sync
#define EGL_KHR_fence_sync 1
#ifdef KHRONOS_SUPPORT_INT64
#define EGL_SYNC_PRIOR_COMMANDS_COMPLETE_KHR 0x30F0
#define EGL_SYNC_CONDITION_KHR            0x30F8
#define EGL_SYNC_FENCE_KHR                0x30F9
#endif /* KHRONOS_SUPPORT_INT64 */
#endif /* EGL_KHR_fence_sync */

#ifndef EGL_KHR_gl_renderbuffer_image
#define EGL_KHR_gl_renderbuffer_image 1
#define EGL_GL_RENDERBUFFER_KHR           0x30B9
#endif /* EGL_KHR_gl_renderbuffer_image */

#ifndef EGL_KHR_gl_texture_2D_image
#define EGL_KHR_gl_texture_2D_image 1
#define EGL_GL_TEXTURE_2D_KHR             0x30B1
#define EGL_GL_TEXTURE_LEVEL_KHR          0x30BC
#endif /* EGL_KHR_gl_texture_2D_image */

#ifndef EGL_KHR_gl_texture_3D_image
#define EGL_KHR_gl_texture_3D_image 1
#define EGL_GL_TEXTURE_3D_KHR             0x30B2
#define EGL_GL_TEXTURE_ZOFFSET_KHR        0x30BD
#endif /* EGL_KHR_gl_texture_3D_image */

#ifndef EGL_KHR_gl_texture_cubemap_image
#define EGL_KHR_gl_texture_cubemap_image 1
#define EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_X_KHR 0x30B3
#define EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_X_KHR 0x30B4
#define EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Y_KHR 0x30B5
#define EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_KHR 0x30B6
#define EGL_GL_TEXTURE_CUBE_MAP_POSITIVE_Z_KHR 0x30B7
#define EGL_GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_KHR 0x30B8
#endif /* EGL_KHR_gl_texture_cubemap_image */

#ifndef EGL_KHR_image
#define EGL_KHR_image 1
typedef void *EGLImageKHR;
#define EGL_NATIVE_PIXMAP_KHR             0x30B0
#define EGL_NO_IMAGE_KHR                  ((EGLImageKHR)0)
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLImageKHR EGLAPIENTRY eglCreateImageKHR (EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint *attrib_list);
EGLAPI EGLBoolean EGLAPIENTRY eglDestroyImageKHR (EGLDisplay dpy, EGLImageKHR image);
#endif
#endif /* EGL_KHR_image */

#ifndef EGL_KHR_image_base
#define EGL_KHR_image_base 1
#define EGL_IMAGE_PRESERVED_KHR           0x30D2
#endif /* EGL_KHR_image_base */

#ifndef EGL_KHR_image_pixmap
#define EGL_KHR_image_pixmap 1
#endif /* EGL_KHR_image_pixmap */

#ifndef EGL_KHR_lock_surface
#define EGL_KHR_lock_surface 1
#define EGL_READ_SURFACE_BIT_KHR          0x0001
#define EGL_WRITE_SURFACE_BIT_KHR         0x0002
#define EGL_LOCK_SURFACE_BIT_KHR          0x0080
#define EGL_OPTIMAL_FORMAT_BIT_KHR        0x0100
#define EGL_MATCH_FORMAT_KHR              0x3043
#define EGL_FORMAT_RGB_565_EXACT_KHR      0x30C0
#define EGL_FORMAT_RGB_565_KHR            0x30C1
#define EGL_FORMAT_RGBA_8888_EXACT_KHR    0x30C2
#define EGL_FORMAT_RGBA_8888_KHR          0x30C3
#define EGL_MAP_PRESERVE_PIXELS_KHR       0x30C4
#define EGL_LOCK_USAGE_HINT_KHR           0x30C5
#define EGL_BITMAP_POINTER_KHR            0x30C6
#define EGL_BITMAP_PITCH_KHR              0x30C7
#define EGL_BITMAP_ORIGIN_KHR             0x30C8
#define EGL_BITMAP_PIXEL_RED_OFFSET_KHR   0x30C9
#define EGL_BITMAP_PIXEL_GREEN_OFFSET_KHR 0x30CA
#define EGL_BITMAP_PIXEL_BLUE_OFFSET_KHR  0x30CB
#define EGL_BITMAP_PIXEL_ALPHA_OFFSET_KHR 0x30CC
#define EGL_BITMAP_PIXEL_LUMINANCE_OFFSET_KHR 0x30CD
#define EGL_LOWER_LEFT_KHR                0x30CE
#define EGL_UPPER_LEFT_KHR                0x30CF
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLBoolean EGLAPIENTRY eglLockSurfaceKHR (EGLDisplay display, EGLSurface surface, const EGLint *attrib_list);
EGLAPI EGLBoolean EGLAPIENTRY eglUnlockSurfaceKHR (EGLDisplay display, EGLSurface surface);
#endif
#endif /* EGL_KHR_lock_surface */

#ifndef EGL_KHR_lock_surface2
#define EGL_KHR_lock_surface2 1
#define EGL_BITMAP_PIXEL_SIZE_KHR         0x3110
#endif /* EGL_KHR_lock_surface2 */

#ifndef EGL_KHR_reusable_sync
#define EGL_KHR_reusable_sync 1
typedef void *EGLSyncKHR;
typedef khronos_utime_nanoseconds_t EGLTimeKHR;
#ifdef KHRONOS_SUPPORT_INT64
#define EGL_SYNC_STATUS_KHR               0x30F1
#define EGL_SIGNALED_KHR                  0x30F2
#define EGL_UNSIGNALED_KHR                0x30F3
#define EGL_TIMEOUT_EXPIRED_KHR           0x30F5
#define EGL_CONDITION_SATISFIED_KHR       0x30F6
#define EGL_SYNC_TYPE_KHR                 0x30F7
#define EGL_SYNC_REUSABLE_KHR             0x30FA
#define EGL_SYNC_FLUSH_COMMANDS_BIT_KHR   0x0001
#define EGL_FOREVER_KHR                   0xFFFFFFFFFFFFFFFFull
#define EGL_NO_SYNC_KHR                   ((EGLSyncKHR)0)
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLSyncKHR EGLAPIENTRY eglCreateSyncKHR (EGLDisplay dpy, EGLenum type, const EGLint *attrib_list);
EGLAPI EGLBoolean EGLAPIENTRY eglDestroySyncKHR (EGLDisplay dpy, EGLSyncKHR sync);
EGLAPI EGLint EGLAPIENTRY eglClientWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout);
EGLAPI EGLBoolean EGLAPIENTRY eglSignalSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode);
EGLAPI EGLBoolean EGLAPIENTRY eglGetSyncAttribKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint *value);
#endif
#endif /* KHRONOS_SUPPORT_INT64 */
#endif /* EGL_KHR_reusable_sync */

#ifndef EGL_KHR_stream
#define EGL_KHR_stream 1
typedef void *EGLStreamKHR;
typedef khronos_uint64_t EGLuint64KHR;
#ifdef KHRONOS_SUPPORT_INT64
#define EGL_NO_STREAM_KHR                 ((EGLStreamKHR)0)
#define EGL_CONSUMER_LATENCY_USEC_KHR     0x3210
#define EGL_PRODUCER_FRAME_KHR            0x3212
#define EGL_CONSUMER_FRAME_KHR            0x3213
#define EGL_STREAM_STATE_KHR              0x3214
#define EGL_STREAM_STATE_CREATED_KHR      0x3215
#define EGL_STREAM_STATE_CONNECTING_KHR   0x3216
#define EGL_STREAM_STATE_EMPTY_KHR        0x3217
#define EGL_STREAM_STATE_NEW_FRAME_AVAILABLE_KHR 0x3218
#define EGL_STREAM_STATE_OLD_FRAME_AVAILABLE_KHR 0x3219
#define EGL_STREAM_STATE_DISCONNECTED_KHR 0x321A
#define EGL_BAD_STREAM_KHR                0x321B
#define EGL_BAD_STATE_KHR                 0x321C
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLStreamKHR EGLAPIENTRY eglCreateStreamKHR (EGLDisplay dpy, const EGLint *attrib_list);
EGLAPI EGLBoolean EGLAPIENTRY eglDestroyStreamKHR (EGLDisplay dpy, EGLStreamKHR stream);
EGLAPI EGLBoolean EGLAPIENTRY eglStreamAttribKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value);
EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint *value);
EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamu64KHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR *value);
#endif
#endif /* KHRONOS_SUPPORT_INT64 */
#endif /* EGL_KHR_stream */

#ifndef EGL_KHR_stream_consumer_gltexture
#define EGL_KHR_stream_consumer_gltexture 1
#ifdef EGL_KHR_stream
#define EGL_CONSUMER_ACQUIRE_TIMEOUT_USEC_KHR 0x321E
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerGLTextureExternalKHR (EGLDisplay dpy, EGLStreamKHR stream);
EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerAcquireKHR (EGLDisplay dpy, EGLStreamKHR stream);
EGLAPI EGLBoolean EGLAPIENTRY eglStreamConsumerReleaseKHR (EGLDisplay dpy, EGLStreamKHR stream);
#endif
#endif /* EGL_KHR_stream */
#endif /* EGL_KHR_stream_consumer_gltexture */

#ifndef EGL_KHR_stream_cross_process_fd
#define EGL_KHR_stream_cross_process_fd 1
typedef int EGLNativeFileDescriptorKHR;
#ifdef EGL_KHR_stream
#define EGL_NO_FILE_DESCRIPTOR_KHR        ((EGLNativeFileDescriptorKHR)(-1))
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLNativeFileDescriptorKHR EGLAPIENTRY eglGetStreamFileDescriptorKHR (EGLDisplay dpy, EGLStreamKHR stream);
EGLAPI EGLStreamKHR EGLAPIENTRY eglCreateStreamFromFileDescriptorKHR (EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor);
#endif
#endif /* EGL_KHR_stream */
#endif /* EGL_KHR_stream_cross_process_fd */

#ifndef EGL_KHR_stream_fifo
#define EGL_KHR_stream_fifo 1
#ifdef EGL_KHR_stream
#define EGL_STREAM_FIFO_LENGTH_KHR        0x31FC
#define EGL_STREAM_TIME_NOW_KHR           0x31FD
#define EGL_STREAM_TIME_CONSUMER_KHR      0x31FE
#define EGL_STREAM_TIME_PRODUCER_KHR      0x31FF
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLBoolean EGLAPIENTRY eglQueryStreamTimeKHR (EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR *value);
#endif
#endif /* EGL_KHR_stream */
#endif /* EGL_KHR_stream_fifo */

#ifndef EGL_KHR_stream_producer_aldatalocator
#define EGL_KHR_stream_producer_aldatalocator 1
#ifdef EGL_KHR_stream
#endif /* EGL_KHR_stream */
#endif /* EGL_KHR_stream_producer_aldatalocator */

#ifndef EGL_KHR_stream_producer_eglsurface
#define EGL_KHR_stream_producer_eglsurface 1
#ifdef EGL_KHR_stream
#define EGL_STREAM_BIT_KHR                0x0800
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLSurface EGLAPIENTRY eglCreateStreamProducerSurfaceKHR (EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint *attrib_list);
#endif
#endif /* EGL_KHR_stream */
#endif /* EGL_KHR_stream_producer_eglsurface */

#ifndef EGL_KHR_surfaceless_context
#define EGL_KHR_surfaceless_context 1
#endif /* EGL_KHR_surfaceless_context */

#ifndef EGL_KHR_vg_parent_image
#define EGL_KHR_vg_parent_image 1
#define EGL_VG_PARENT_IMAGE_KHR           0x30BA
#endif /* EGL_KHR_vg_parent_image */

#ifndef EGL_KHR_wait_sync
#define EGL_KHR_wait_sync 1
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLint EGLAPIENTRY eglWaitSyncKHR (EGLDisplay dpy, EGLSyncKHR sync, EGLint flags);
#endif
#endif /* EGL_KHR_wait_sync */

#ifndef EGL_ANDROID_blob_cache
#define EGL_ANDROID_blob_cache 1
typedef khronos_ssize_t EGLsizeiANDROID;
typedef void (*EGLSetBlobFuncANDROID) (const void *key, EGLsizeiANDROID keySize, const void *value, EGLsizeiANDROID valueSize);
typedef EGLsizeiANDROID (*EGLGetBlobFuncANDROID) (const void *key, EGLsizeiANDROID keySize, void *value, EGLsizeiANDROID valueSize);
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI void EGLAPIENTRY eglSetBlobCacheFuncsANDROID (EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get);
#endif
#endif /* EGL_ANDROID_blob_cache */

#ifndef EGL_ANDROID_framebuffer_target
#define EGL_ANDROID_framebuffer_target 1
#define EGL_FRAMEBUFFER_TARGET_ANDROID    0x3147
#endif /* EGL_ANDROID_framebuffer_target */

#ifndef EGL_ANDROID_image_native_buffer
#define EGL_ANDROID_image_native_buffer 1
#define EGL_NATIVE_BUFFER_ANDROID         0x3140
#endif /* EGL_ANDROID_image_native_buffer */

#ifndef EGL_ANDROID_native_fence_sync
#define EGL_ANDROID_native_fence_sync 1
#define EGL_SYNC_NATIVE_FENCE_ANDROID     0x3144
#define EGL_SYNC_NATIVE_FENCE_FD_ANDROID  0x3145
#define EGL_SYNC_NATIVE_FENCE_SIGNALED_ANDROID 0x3146
#define EGL_NO_NATIVE_FENCE_FD_ANDROID    -1
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLint EGLAPIENTRY eglDupNativeFenceFDANDROID (EGLDisplay dpy, EGLSyncKHR sync);
#endif
#endif /* EGL_ANDROID_native_fence_sync */

#ifndef EGL_ANDROID_recordable
#define EGL_ANDROID_recordable 1
#define EGL_RECORDABLE_ANDROID            0x3142
#endif /* EGL_ANDROID_recordable */

#ifndef EGL_ANGLE_d3d_share_handle_client_buffer
#define EGL_ANGLE_d3d_share_handle_client_buffer 1
#define EGL_D3D_TEXTURE_2D_SHARE_HANDLE_ANGLE 0x3200
#endif /* EGL_ANGLE_d3d_share_handle_client_buffer */

#ifndef EGL_ANGLE_query_surface_pointer
#define EGL_ANGLE_query_surface_pointer 1
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLBoolean EGLAPIENTRY eglQuerySurfacePointerANGLE (EGLDisplay dpy, EGLSurface surface, EGLint attribute, void **value);
#endif
#endif /* EGL_ANGLE_query_surface_pointer */

#ifndef EGL_ANGLE_surface_d3d_texture_2d_share_handle
#define EGL_ANGLE_surface_d3d_texture_2d_share_handle 1
#endif /* EGL_ANGLE_surface_d3d_texture_2d_share_handle */

#ifndef EGL_ARM_pixmap_multisample_discard
#define EGL_ARM_pixmap_multisample_discard 1
#define EGL_DISCARD_SAMPLES_ARM           0x3286
#endif /* EGL_ARM_pixmap_multisample_discard */

#ifndef EGL_EXT_buffer_age
#define EGL_EXT_buffer_age 1
#define EGL_BUFFER_AGE_EXT                0x313D
#endif /* EGL_EXT_buffer_age */

#ifndef EGL_EXT_create_context_robustness
#define EGL_EXT_create_context_robustness 1
#define EGL_CONTEXT_OPENGL_ROBUST_ACCESS_EXT 0x30BF
#define EGL_CONTEXT_OPENGL_RESET_NOTIFICATION_STRATEGY_EXT 0x3138
#define EGL_NO_RESET_NOTIFICATION_EXT     0x31BE
#define EGL_LOSE_CONTEXT_ON_RESET_EXT     0x31BF
#endif /* EGL_EXT_create_context_robustness */

#ifndef EGL_EXT_image_dma_buf_import
#define EGL_EXT_image_dma_buf_import 1
#define EGL_LINUX_DMA_BUF_EXT             0x3270
#define EGL_LINUX_DRM_FOURCC_EXT          0x3271
#define EGL_DMA_BUF_PLANE0_FD_EXT         0x3272
#define EGL_DMA_BUF_PLANE0_OFFSET_EXT     0x3273
#define EGL_DMA_BUF_PLANE0_PITCH_EXT      0x3274
#define EGL_DMA_BUF_PLANE1_FD_EXT         0x3275
#define EGL_DMA_BUF_PLANE1_OFFSET_EXT     0x3276
#define EGL_DMA_BUF_PLANE1_PITCH_EXT      0x3277
#define EGL_DMA_BUF_PLANE2_FD_EXT         0x3278
#define EGL_DMA_BUF_PLANE2_OFFSET_EXT     0x3279
#define EGL_DMA_BUF_PLANE2_PITCH_EXT      0x327A
#define EGL_YUV_COLOR_SPACE_HINT_EXT      0x327B
#define EGL_SAMPLE_RANGE_HINT_EXT         0x327C
#define EGL_YUV_CHROMA_HORIZONTAL_SITING_HINT_EXT 0x327D
#define EGL_YUV_CHROMA_VERTICAL_SITING_HINT_EXT 0x327E
#define EGL_ITU_REC601_EXT                0x327F
#define EGL_ITU_REC709_EXT                0x3280
#define EGL_ITU_REC2020_EXT               0x3281
#define EGL_YUV_FULL_RANGE_EXT            0x3282
#define EGL_YUV_NARROW_RANGE_EXT          0x3283
#define EGL_YUV_CHROMA_SITING_0_EXT       0x3284
#define EGL_YUV_CHROMA_SITING_0_5_EXT     0x3285
#endif /* EGL_EXT_image_dma_buf_import */

#ifndef EGL_EXT_multiview_window
#define EGL_EXT_multiview_window 1
#define EGL_MULTIVIEW_VIEW_COUNT_EXT      0x3134
#endif /* EGL_EXT_multiview_window */

#ifndef EGL_EXT_swap_buffers_with_damage
#define EGL_EXT_swap_buffers_with_damage 1
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLBoolean EGLAPIENTRY eglSwapBuffersWithDamageEXT (EGLDisplay dpy, EGLSurface surface, EGLint *rects, EGLint n_rects);
#endif
#endif /* EGL_EXT_swap_buffers_with_damage */

#ifndef EGL_HI_clientpixmap
#define EGL_HI_clientpixmap 1
#define EGL_CLIENT_PIXMAP_POINTER_HI      0x8F74
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLSurface EGLAPIENTRY eglCreatePixmapSurfaceHI (EGLDisplay dpy, EGLConfig config, struct EGLClientPixmapHI *pixmap);
#endif
#endif /* EGL_HI_clientpixmap */

#ifndef EGL_HI_colorformats
#define EGL_HI_colorformats 1
#define EGL_COLOR_FORMAT_HI               0x8F70
#define EGL_COLOR_RGB_HI                  0x8F71
#define EGL_COLOR_RGBA_HI                 0x8F72
#define EGL_COLOR_ARGB_HI                 0x8F73
#endif /* EGL_HI_colorformats */

#ifndef EGL_IMG_context_priority
#define EGL_IMG_context_priority 1
#define EGL_CONTEXT_PRIORITY_LEVEL_IMG    0x3100
#define EGL_CONTEXT_PRIORITY_HIGH_IMG     0x3101
#define EGL_CONTEXT_PRIORITY_MEDIUM_IMG   0x3102
#define EGL_CONTEXT_PRIORITY_LOW_IMG      0x3103
#endif /* EGL_IMG_context_priority */

#ifndef EGL_MESA_drm_image
#define EGL_MESA_drm_image 1
#define EGL_DRM_BUFFER_FORMAT_MESA        0x31D0
#define EGL_DRM_BUFFER_USE_MESA           0x31D1
#define EGL_DRM_BUFFER_FORMAT_ARGB32_MESA 0x31D2
#define EGL_DRM_BUFFER_MESA               0x31D3
#define EGL_DRM_BUFFER_STRIDE_MESA        0x31D4
#define EGL_DRM_BUFFER_USE_SCANOUT_MESA   0x00000001
#define EGL_DRM_BUFFER_USE_SHARE_MESA     0x00000002
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLImageKHR EGLAPIENTRY eglCreateDRMImageMESA (EGLDisplay dpy, const EGLint *attrib_list);
EGLAPI EGLBoolean EGLAPIENTRY eglExportDRMImageMESA (EGLDisplay dpy, EGLImageKHR image, EGLint *name, EGLint *handle, EGLint *stride);
#endif
#endif /* EGL_MESA_drm_image */

#ifndef EGL_NV_3dvision_surface
#define EGL_NV_3dvision_surface 1
#define EGL_AUTO_STEREO_NV                0x3136
#endif /* EGL_NV_3dvision_surface */

#ifndef EGL_NV_coverage_sample
#define EGL_NV_coverage_sample 1
#define EGL_COVERAGE_BUFFERS_NV           0x30E0
#define EGL_COVERAGE_SAMPLES_NV           0x30E1
#endif /* EGL_NV_coverage_sample */

#ifndef EGL_NV_coverage_sample_resolve
#define EGL_NV_coverage_sample_resolve 1
#define EGL_COVERAGE_SAMPLE_RESOLVE_NV    0x3131
#define EGL_COVERAGE_SAMPLE_RESOLVE_DEFAULT_NV 0x3132
#define EGL_COVERAGE_SAMPLE_RESOLVE_NONE_NV 0x3133
#endif /* EGL_NV_coverage_sample_resolve */

#ifndef EGL_NV_depth_nonlinear
#define EGL_NV_depth_nonlinear 1
#define EGL_DEPTH_ENCODING_NV             0x30E2
#define EGL_DEPTH_ENCODING_NONE_NV        0
#define EGL_DEPTH_ENCODING_NONLINEAR_NV   0x30E3
#endif /* EGL_NV_depth_nonlinear */

#ifndef EGL_NV_native_query
#define EGL_NV_native_query 1
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLBoolean EGLAPIENTRY eglQueryNativeDisplayNV (EGLDisplay dpy, EGLNativeDisplayType *display_id);
EGLAPI EGLBoolean EGLAPIENTRY eglQueryNativeWindowNV (EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType *window);
EGLAPI EGLBoolean EGLAPIENTRY eglQueryNativePixmapNV (EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType *pixmap);
#endif
#endif /* EGL_NV_native_query */

#ifndef EGL_NV_post_convert_rounding
#define EGL_NV_post_convert_rounding 1
#endif /* EGL_NV_post_convert_rounding */

#ifndef EGL_NV_post_sub_buffer
#define EGL_NV_post_sub_buffer 1
#define EGL_POST_SUB_BUFFER_SUPPORTED_NV  0x30BE
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLBoolean EGLAPIENTRY eglPostSubBufferNV (EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height);
#endif
#endif /* EGL_NV_post_sub_buffer */

#ifndef EGL_NV_sync
#define EGL_NV_sync 1
typedef void *EGLSyncNV;
typedef khronos_utime_nanoseconds_t EGLTimeNV;
#ifdef KHRONOS_SUPPORT_INT64
#define EGL_SYNC_PRIOR_COMMANDS_COMPLETE_NV 0x30E6
#define EGL_SYNC_STATUS_NV                0x30E7
#define EGL_SIGNALED_NV                   0x30E8
#define EGL_UNSIGNALED_NV                 0x30E9
#define EGL_SYNC_FLUSH_COMMANDS_BIT_NV    0x0001
#define EGL_FOREVER_NV                    0xFFFFFFFFFFFFFFFFull
#define EGL_ALREADY_SIGNALED_NV           0x30EA
#define EGL_TIMEOUT_EXPIRED_NV            0x30EB
#define EGL_CONDITION_SATISFIED_NV        0x30EC
#define EGL_SYNC_TYPE_NV                  0x30ED
#define EGL_SYNC_CONDITION_NV             0x30EE
#define EGL_SYNC_FENCE_NV                 0x30EF
#define EGL_NO_SYNC_NV                    ((EGLSyncNV)0)
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLSyncNV EGLAPIENTRY eglCreateFenceSyncNV (EGLDisplay dpy, EGLenum condition, const EGLint *attrib_list);
EGLAPI EGLBoolean EGLAPIENTRY eglDestroySyncNV (EGLSyncNV sync);
EGLAPI EGLBoolean EGLAPIENTRY eglFenceNV (EGLSyncNV sync);
EGLAPI EGLint EGLAPIENTRY eglClientWaitSyncNV (EGLSyncNV sync, EGLint flags, EGLTimeNV timeout);
EGLAPI EGLBoolean EGLAPIENTRY eglSignalSyncNV (EGLSyncNV sync, EGLenum mode);
EGLAPI EGLBoolean EGLAPIENTRY eglGetSyncAttribNV (EGLSyncNV sync, EGLint attribute, EGLint *value);
#endif
#endif /* KHRONOS_SUPPORT_INT64 */
#endif /* EGL_NV_sync */

#ifndef EGL_NV_system_time
#define EGL_NV_system_time 1
typedef khronos_utime_nanoseconds_t EGLuint64NV;
#ifdef KHRONOS_SUPPORT_INT64
#ifdef GL_GLEXT_PROTOTYPES
EGLAPI EGLuint64NV EGLAPIENTRY eglGetSystemTimeFrequencyNV (void);
EGLAPI EGLuint64NV EGLAPIENTRY eglGetSystemTimeNV (void);
#endif
#endif /* KHRONOS_SUPPORT_INT64 */
#endif /* EGL_NV_system_time */

#ifdef __cplusplus
}
#endif

#endif
