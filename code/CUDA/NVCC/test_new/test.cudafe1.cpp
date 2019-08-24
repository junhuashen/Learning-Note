# 1 "test.cu"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
# 1
#pragma GCC diagnostic push
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"
# 1
#pragma GCC diagnostic ignored "-Wunused-function"
# 1
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
# 1
#pragma GCC diagnostic pop
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"

# 1
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false

# 1
# 56 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
#pragma GCC diagnostic push
# 59
#pragma GCC diagnostic ignored "-Wunused-function"
# 61 "/usr/local/cuda/bin/..//include/device_types.h"
#if 0
# 61
enum cudaRoundMode { 
# 63
cudaRoundNearest, 
# 64
cudaRoundZero, 
# 65
cudaRoundPosInf, 
# 66
cudaRoundMinInf
# 67
}; 
#endif
# 93 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 93
struct char1 { 
# 95
signed char x; 
# 96
}; 
#endif
# 98 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 98
struct uchar1 { 
# 100
unsigned char x; 
# 101
}; 
#endif
# 104 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 104
struct __attribute((aligned(2))) char2 { 
# 106
signed char x, y; 
# 107
}; 
#endif
# 109 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 109
struct __attribute((aligned(2))) uchar2 { 
# 111
unsigned char x, y; 
# 112
}; 
#endif
# 114 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 114
struct char3 { 
# 116
signed char x, y, z; 
# 117
}; 
#endif
# 119 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 119
struct uchar3 { 
# 121
unsigned char x, y, z; 
# 122
}; 
#endif
# 124 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 124
struct __attribute((aligned(4))) char4 { 
# 126
signed char x, y, z, w; 
# 127
}; 
#endif
# 129 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 129
struct __attribute((aligned(4))) uchar4 { 
# 131
unsigned char x, y, z, w; 
# 132
}; 
#endif
# 134 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 134
struct short1 { 
# 136
short x; 
# 137
}; 
#endif
# 139 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 139
struct ushort1 { 
# 141
unsigned short x; 
# 142
}; 
#endif
# 144 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 144
struct __attribute((aligned(4))) short2 { 
# 146
short x, y; 
# 147
}; 
#endif
# 149 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 149
struct __attribute((aligned(4))) ushort2 { 
# 151
unsigned short x, y; 
# 152
}; 
#endif
# 154 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 154
struct short3 { 
# 156
short x, y, z; 
# 157
}; 
#endif
# 159 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 159
struct ushort3 { 
# 161
unsigned short x, y, z; 
# 162
}; 
#endif
# 164 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 164
struct __attribute((aligned(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 165 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 165
struct __attribute((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 167 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 167
struct int1 { 
# 169
int x; 
# 170
}; 
#endif
# 172 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 172
struct uint1 { 
# 174
unsigned x; 
# 175
}; 
#endif
# 177 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 177
struct __attribute((aligned(8))) int2 { int x; int y; }; 
#endif
# 178 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 178
struct __attribute((aligned(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 180 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 180
struct int3 { 
# 182
int x, y, z; 
# 183
}; 
#endif
# 185 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 185
struct uint3 { 
# 187
unsigned x, y, z; 
# 188
}; 
#endif
# 190 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 190
struct __attribute((aligned(16))) int4 { 
# 192
int x, y, z, w; 
# 193
}; 
#endif
# 195 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 195
struct __attribute((aligned(16))) uint4 { 
# 197
unsigned x, y, z, w; 
# 198
}; 
#endif
# 200 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 200
struct long1 { 
# 202
long x; 
# 203
}; 
#endif
# 205 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 205
struct ulong1 { 
# 207
unsigned long x; 
# 208
}; 
#endif
# 215 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 215
struct __attribute((aligned((2) * sizeof(long)))) long2 { 
# 217
long x, y; 
# 218
}; 
#endif
# 220 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 220
struct __attribute((aligned((2) * sizeof(unsigned long)))) ulong2 { 
# 222
unsigned long x, y; 
# 223
}; 
#endif
# 227 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 227
struct long3 { 
# 229
long x, y, z; 
# 230
}; 
#endif
# 232 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 232
struct ulong3 { 
# 234
unsigned long x, y, z; 
# 235
}; 
#endif
# 237 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 237
struct __attribute((aligned(16))) long4 { 
# 239
long x, y, z, w; 
# 240
}; 
#endif
# 242 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 242
struct __attribute((aligned(16))) ulong4 { 
# 244
unsigned long x, y, z, w; 
# 245
}; 
#endif
# 247 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 247
struct float1 { 
# 249
float x; 
# 250
}; 
#endif
# 269 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 269
struct __attribute((aligned(8))) float2 { float x; float y; }; 
#endif
# 274 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 274
struct float3 { 
# 276
float x, y, z; 
# 277
}; 
#endif
# 279 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 279
struct __attribute((aligned(16))) float4 { 
# 281
float x, y, z, w; 
# 282
}; 
#endif
# 284 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 284
struct longlong1 { 
# 286
long long x; 
# 287
}; 
#endif
# 289 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 289
struct ulonglong1 { 
# 291
unsigned long long x; 
# 292
}; 
#endif
# 294 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 294
struct __attribute((aligned(16))) longlong2 { 
# 296
long long x, y; 
# 297
}; 
#endif
# 299 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 299
struct __attribute((aligned(16))) ulonglong2 { 
# 301
unsigned long long x, y; 
# 302
}; 
#endif
# 304 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 304
struct longlong3 { 
# 306
long long x, y, z; 
# 307
}; 
#endif
# 309 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 309
struct ulonglong3 { 
# 311
unsigned long long x, y, z; 
# 312
}; 
#endif
# 314 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 314
struct __attribute((aligned(16))) longlong4 { 
# 316
long long x, y, z, w; 
# 317
}; 
#endif
# 319 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 319
struct __attribute((aligned(16))) ulonglong4 { 
# 321
unsigned long long x, y, z, w; 
# 322
}; 
#endif
# 324 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 324
struct double1 { 
# 326
double x; 
# 327
}; 
#endif
# 329 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 329
struct __attribute((aligned(16))) double2 { 
# 331
double x, y; 
# 332
}; 
#endif
# 334 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 334
struct double3 { 
# 336
double x, y, z; 
# 337
}; 
#endif
# 339 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 339
struct __attribute((aligned(16))) double4 { 
# 341
double x, y, z, w; 
# 342
}; 
#endif
# 356 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef char1 
# 356
char1; 
#endif
# 357 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef uchar1 
# 357
uchar1; 
#endif
# 358 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef char2 
# 358
char2; 
#endif
# 359 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef uchar2 
# 359
uchar2; 
#endif
# 360 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef char3 
# 360
char3; 
#endif
# 361 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef uchar3 
# 361
uchar3; 
#endif
# 362 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef char4 
# 362
char4; 
#endif
# 363 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef uchar4 
# 363
uchar4; 
#endif
# 364 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef short1 
# 364
short1; 
#endif
# 365 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ushort1 
# 365
ushort1; 
#endif
# 366 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef short2 
# 366
short2; 
#endif
# 367 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ushort2 
# 367
ushort2; 
#endif
# 368 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef short3 
# 368
short3; 
#endif
# 369 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ushort3 
# 369
ushort3; 
#endif
# 370 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef short4 
# 370
short4; 
#endif
# 371 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ushort4 
# 371
ushort4; 
#endif
# 372 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef int1 
# 372
int1; 
#endif
# 373 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef uint1 
# 373
uint1; 
#endif
# 374 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef int2 
# 374
int2; 
#endif
# 375 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef uint2 
# 375
uint2; 
#endif
# 376 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef int3 
# 376
int3; 
#endif
# 377 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef uint3 
# 377
uint3; 
#endif
# 378 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef int4 
# 378
int4; 
#endif
# 379 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef uint4 
# 379
uint4; 
#endif
# 380 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef long1 
# 380
long1; 
#endif
# 381 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ulong1 
# 381
ulong1; 
#endif
# 382 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef long2 
# 382
long2; 
#endif
# 383 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ulong2 
# 383
ulong2; 
#endif
# 384 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef long3 
# 384
long3; 
#endif
# 385 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ulong3 
# 385
ulong3; 
#endif
# 386 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef long4 
# 386
long4; 
#endif
# 387 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ulong4 
# 387
ulong4; 
#endif
# 388 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef float1 
# 388
float1; 
#endif
# 389 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef float2 
# 389
float2; 
#endif
# 390 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef float3 
# 390
float3; 
#endif
# 391 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef float4 
# 391
float4; 
#endif
# 392 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef longlong1 
# 392
longlong1; 
#endif
# 393 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ulonglong1 
# 393
ulonglong1; 
#endif
# 394 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef longlong2 
# 394
longlong2; 
#endif
# 395 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ulonglong2 
# 395
ulonglong2; 
#endif
# 396 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef longlong3 
# 396
longlong3; 
#endif
# 397 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ulonglong3 
# 397
ulonglong3; 
#endif
# 398 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef longlong4 
# 398
longlong4; 
#endif
# 399 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef ulonglong4 
# 399
ulonglong4; 
#endif
# 400 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef double1 
# 400
double1; 
#endif
# 401 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef double2 
# 401
double2; 
#endif
# 402 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef double3 
# 402
double3; 
#endif
# 403 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef double4 
# 403
double4; 
#endif
# 411 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
# 411
struct dim3 { 
# 413
unsigned x, y, z; 
# 419
}; 
#endif
# 421 "/usr/local/cuda/bin/..//include/vector_types.h"
#if 0
typedef dim3 
# 421
dim3; 
#endif
# 149 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3
typedef long ptrdiff_t; 
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3
typedef unsigned long size_t; 
#include "crt/host_runtime.h"
# 171 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 171
enum cudaError { 
# 178
cudaSuccess, 
# 184
cudaErrorMissingConfiguration, 
# 190
cudaErrorMemoryAllocation, 
# 196
cudaErrorInitializationError, 
# 206 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorLaunchFailure, 
# 215 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorPriorLaunchFailure, 
# 226 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorLaunchTimeout, 
# 235 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorLaunchOutOfResources, 
# 241
cudaErrorInvalidDeviceFunction, 
# 250 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorInvalidConfiguration, 
# 256
cudaErrorInvalidDevice, 
# 262
cudaErrorInvalidValue, 
# 268
cudaErrorInvalidPitchValue, 
# 274
cudaErrorInvalidSymbol, 
# 279
cudaErrorMapBufferObjectFailed, 
# 284
cudaErrorUnmapBufferObjectFailed, 
# 290
cudaErrorInvalidHostPointer, 
# 296
cudaErrorInvalidDevicePointer, 
# 302
cudaErrorInvalidTexture, 
# 308
cudaErrorInvalidTextureBinding, 
# 315
cudaErrorInvalidChannelDescriptor, 
# 321
cudaErrorInvalidMemcpyDirection, 
# 331 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorAddressOfConstant, 
# 340 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorTextureFetchFailed, 
# 349 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorTextureNotBound, 
# 358 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorSynchronizationError, 
# 364
cudaErrorInvalidFilterSetting, 
# 370
cudaErrorInvalidNormSetting, 
# 378
cudaErrorMixedDeviceExecution, 
# 385
cudaErrorCudartUnloading, 
# 390
cudaErrorUnknown, 
# 398
cudaErrorNotYetImplemented, 
# 407 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorMemoryValueTooLarge, 
# 414
cudaErrorInvalidResourceHandle, 
# 422
cudaErrorNotReady, 
# 429
cudaErrorInsufficientDriver, 
# 442 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorSetOnActiveProcess, 
# 448
cudaErrorInvalidSurface, 
# 454
cudaErrorNoDevice, 
# 460
cudaErrorECCUncorrectable, 
# 465
cudaErrorSharedObjectSymbolNotFound, 
# 470
cudaErrorSharedObjectInitFailed, 
# 476
cudaErrorUnsupportedLimit, 
# 482
cudaErrorDuplicateVariableName, 
# 488
cudaErrorDuplicateTextureName, 
# 494
cudaErrorDuplicateSurfaceName, 
# 504 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorDevicesUnavailable, 
# 509
cudaErrorInvalidKernelImage, 
# 517
cudaErrorNoKernelImageForDevice, 
# 530 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorIncompatibleDriverContext, 
# 537
cudaErrorPeerAccessAlreadyEnabled, 
# 544
cudaErrorPeerAccessNotEnabled, 
# 550
cudaErrorDeviceAlreadyInUse = 54, 
# 557
cudaErrorProfilerDisabled, 
# 565
cudaErrorProfilerNotInitialized, 
# 572
cudaErrorProfilerAlreadyStarted, 
# 579
cudaErrorProfilerAlreadyStopped, 
# 587
cudaErrorAssert, 
# 594
cudaErrorTooManyPeers, 
# 600
cudaErrorHostMemoryAlreadyRegistered, 
# 606
cudaErrorHostMemoryNotRegistered, 
# 611
cudaErrorOperatingSystem, 
# 617
cudaErrorPeerAccessUnsupported, 
# 624
cudaErrorLaunchMaxDepthExceeded, 
# 632
cudaErrorLaunchFileScopedTex, 
# 640
cudaErrorLaunchFileScopedSurf, 
# 655 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorSyncDepthExceeded, 
# 667 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorLaunchPendingCountExceeded, 
# 672
cudaErrorNotPermitted, 
# 678
cudaErrorNotSupported, 
# 687 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorHardwareStackError, 
# 695
cudaErrorIllegalInstruction, 
# 704 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorMisalignedAddress, 
# 715 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorInvalidAddressSpace, 
# 723
cudaErrorInvalidPc, 
# 731
cudaErrorIllegalAddress, 
# 737
cudaErrorInvalidPtx, 
# 742
cudaErrorInvalidGraphicsContext, 
# 748
cudaErrorNvlinkUncorrectable, 
# 755
cudaErrorJitCompilerNotFound, 
# 764 "/usr/local/cuda/bin/..//include/driver_types.h"
cudaErrorCooperativeLaunchTooLarge, 
# 769
cudaErrorStartupFailure = 127, 
# 777
cudaErrorApiFailureBase = 10000
# 778
}; 
#endif
# 783 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 783
enum cudaChannelFormatKind { 
# 785
cudaChannelFormatKindSigned, 
# 786
cudaChannelFormatKindUnsigned, 
# 787
cudaChannelFormatKindFloat, 
# 788
cudaChannelFormatKindNone
# 789
}; 
#endif
# 794 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 794
struct cudaChannelFormatDesc { 
# 796
int x; 
# 797
int y; 
# 798
int z; 
# 799
int w; 
# 800
cudaChannelFormatKind f; 
# 801
}; 
#endif
# 806 "/usr/local/cuda/bin/..//include/driver_types.h"
typedef struct cudaArray *cudaArray_t; 
# 811
typedef const cudaArray *cudaArray_const_t; 
# 813
struct cudaArray; 
# 818
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
# 823
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
# 825
struct cudaMipmappedArray; 
# 830
#if 0
# 830
enum cudaMemoryType { 
# 832
cudaMemoryTypeHost = 1, 
# 833
cudaMemoryTypeDevice
# 834
}; 
#endif
# 839 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 839
enum cudaMemcpyKind { 
# 841
cudaMemcpyHostToHost, 
# 842
cudaMemcpyHostToDevice, 
# 843
cudaMemcpyDeviceToHost, 
# 844
cudaMemcpyDeviceToDevice, 
# 845
cudaMemcpyDefault
# 846
}; 
#endif
# 853 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 853
struct cudaPitchedPtr { 
# 855
void *ptr; 
# 856
size_t pitch; 
# 857
size_t xsize; 
# 858
size_t ysize; 
# 859
}; 
#endif
# 866 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 866
struct cudaExtent { 
# 868
size_t width; 
# 869
size_t height; 
# 870
size_t depth; 
# 871
}; 
#endif
# 878 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 878
struct cudaPos { 
# 880
size_t x; 
# 881
size_t y; 
# 882
size_t z; 
# 883
}; 
#endif
# 888 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 888
struct cudaMemcpy3DParms { 
# 890
cudaArray_t srcArray; 
# 891
cudaPos srcPos; 
# 892
cudaPitchedPtr srcPtr; 
# 894
cudaArray_t dstArray; 
# 895
cudaPos dstPos; 
# 896
cudaPitchedPtr dstPtr; 
# 898
cudaExtent extent; 
# 899
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 900
}; 
#endif
# 905 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 905
struct cudaMemcpy3DPeerParms { 
# 907
cudaArray_t srcArray; 
# 908
cudaPos srcPos; 
# 909
cudaPitchedPtr srcPtr; 
# 910
int srcDevice; 
# 912
cudaArray_t dstArray; 
# 913
cudaPos dstPos; 
# 914
cudaPitchedPtr dstPtr; 
# 915
int dstDevice; 
# 917
cudaExtent extent; 
# 918
}; 
#endif
# 923 "/usr/local/cuda/bin/..//include/driver_types.h"
struct cudaGraphicsResource; 
# 928
#if 0
# 928
enum cudaGraphicsRegisterFlags { 
# 930
cudaGraphicsRegisterFlagsNone, 
# 931
cudaGraphicsRegisterFlagsReadOnly, 
# 932
cudaGraphicsRegisterFlagsWriteDiscard, 
# 933
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
# 934
cudaGraphicsRegisterFlagsTextureGather = 8
# 935
}; 
#endif
# 940 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 940
enum cudaGraphicsMapFlags { 
# 942
cudaGraphicsMapFlagsNone, 
# 943
cudaGraphicsMapFlagsReadOnly, 
# 944
cudaGraphicsMapFlagsWriteDiscard
# 945
}; 
#endif
# 950 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 950
enum cudaGraphicsCubeFace { 
# 952
cudaGraphicsCubeFacePositiveX, 
# 953
cudaGraphicsCubeFaceNegativeX, 
# 954
cudaGraphicsCubeFacePositiveY, 
# 955
cudaGraphicsCubeFaceNegativeY, 
# 956
cudaGraphicsCubeFacePositiveZ, 
# 957
cudaGraphicsCubeFaceNegativeZ
# 958
}; 
#endif
# 963 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 963
enum cudaResourceType { 
# 965
cudaResourceTypeArray, 
# 966
cudaResourceTypeMipmappedArray, 
# 967
cudaResourceTypeLinear, 
# 968
cudaResourceTypePitch2D
# 969
}; 
#endif
# 974 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 974
enum cudaResourceViewFormat { 
# 976
cudaResViewFormatNone, 
# 977
cudaResViewFormatUnsignedChar1, 
# 978
cudaResViewFormatUnsignedChar2, 
# 979
cudaResViewFormatUnsignedChar4, 
# 980
cudaResViewFormatSignedChar1, 
# 981
cudaResViewFormatSignedChar2, 
# 982
cudaResViewFormatSignedChar4, 
# 983
cudaResViewFormatUnsignedShort1, 
# 984
cudaResViewFormatUnsignedShort2, 
# 985
cudaResViewFormatUnsignedShort4, 
# 986
cudaResViewFormatSignedShort1, 
# 987
cudaResViewFormatSignedShort2, 
# 988
cudaResViewFormatSignedShort4, 
# 989
cudaResViewFormatUnsignedInt1, 
# 990
cudaResViewFormatUnsignedInt2, 
# 991
cudaResViewFormatUnsignedInt4, 
# 992
cudaResViewFormatSignedInt1, 
# 993
cudaResViewFormatSignedInt2, 
# 994
cudaResViewFormatSignedInt4, 
# 995
cudaResViewFormatHalf1, 
# 996
cudaResViewFormatHalf2, 
# 997
cudaResViewFormatHalf4, 
# 998
cudaResViewFormatFloat1, 
# 999
cudaResViewFormatFloat2, 
# 1000
cudaResViewFormatFloat4, 
# 1001
cudaResViewFormatUnsignedBlockCompressed1, 
# 1002
cudaResViewFormatUnsignedBlockCompressed2, 
# 1003
cudaResViewFormatUnsignedBlockCompressed3, 
# 1004
cudaResViewFormatUnsignedBlockCompressed4, 
# 1005
cudaResViewFormatSignedBlockCompressed4, 
# 1006
cudaResViewFormatUnsignedBlockCompressed5, 
# 1007
cudaResViewFormatSignedBlockCompressed5, 
# 1008
cudaResViewFormatUnsignedBlockCompressed6H, 
# 1009
cudaResViewFormatSignedBlockCompressed6H, 
# 1010
cudaResViewFormatUnsignedBlockCompressed7
# 1011
}; 
#endif
# 1016 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1016
struct cudaResourceDesc { 
# 1017
cudaResourceType resType; 
# 1019
union { 
# 1020
struct { 
# 1021
cudaArray_t array; 
# 1022
} array; 
# 1023
struct { 
# 1024
cudaMipmappedArray_t mipmap; 
# 1025
} mipmap; 
# 1026
struct { 
# 1027
void *devPtr; 
# 1028
cudaChannelFormatDesc desc; 
# 1029
size_t sizeInBytes; 
# 1030
} linear; 
# 1031
struct { 
# 1032
void *devPtr; 
# 1033
cudaChannelFormatDesc desc; 
# 1034
size_t width; 
# 1035
size_t height; 
# 1036
size_t pitchInBytes; 
# 1037
} pitch2D; 
# 1038
} res; 
# 1039
}; 
#endif
# 1044 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1044
struct cudaResourceViewDesc { 
# 1046
cudaResourceViewFormat format; 
# 1047
size_t width; 
# 1048
size_t height; 
# 1049
size_t depth; 
# 1050
unsigned firstMipmapLevel; 
# 1051
unsigned lastMipmapLevel; 
# 1052
unsigned firstLayer; 
# 1053
unsigned lastLayer; 
# 1054
}; 
#endif
# 1059 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1059
struct cudaPointerAttributes { 
# 1065
cudaMemoryType memoryType; 
# 1076 "/usr/local/cuda/bin/..//include/driver_types.h"
int device; 
# 1082
void *devicePointer; 
# 1088
void *hostPointer; 
# 1093
int isManaged; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1094
}; 
#endif
# 1099 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1099
struct cudaFuncAttributes { 
# 1106
size_t sharedSizeBytes; 
# 1112
size_t constSizeBytes; 
# 1117
size_t localSizeBytes; 
# 1124
int maxThreadsPerBlock; 
# 1129
int numRegs; 
# 1136
int ptxVersion; 
# 1143
int binaryVersion; 
# 1149
int cacheModeCA; 
# 1156
int maxDynamicSharedSizeBytes; 
# 1163
int preferredShmemCarveout; 
# 1164
}; 
#endif
# 1169 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1169
enum cudaFuncAttribute { 
# 1171
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
# 1172
cudaFuncAttributePreferredSharedMemoryCarveout, 
# 1173
cudaFuncAttributeMax
# 1174
}; 
#endif
# 1179 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1179
enum cudaFuncCache { 
# 1181
cudaFuncCachePreferNone, 
# 1182
cudaFuncCachePreferShared, 
# 1183
cudaFuncCachePreferL1, 
# 1184
cudaFuncCachePreferEqual
# 1185
}; 
#endif
# 1191 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1191
enum cudaSharedMemConfig { 
# 1193
cudaSharedMemBankSizeDefault, 
# 1194
cudaSharedMemBankSizeFourByte, 
# 1195
cudaSharedMemBankSizeEightByte
# 1196
}; 
#endif
# 1201 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1201
enum cudaSharedCarveout { 
# 1202
cudaSharedmemCarveoutDefault = (-1), 
# 1203
cudaSharedmemCarveoutMaxShared = 100, 
# 1204
cudaSharedmemCarveoutMaxL1 = 0
# 1205
}; 
#endif
# 1210 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1210
enum cudaComputeMode { 
# 1212
cudaComputeModeDefault, 
# 1213
cudaComputeModeExclusive, 
# 1214
cudaComputeModeProhibited, 
# 1215
cudaComputeModeExclusiveProcess
# 1216
}; 
#endif
# 1221 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1221
enum cudaLimit { 
# 1223
cudaLimitStackSize, 
# 1224
cudaLimitPrintfFifoSize, 
# 1225
cudaLimitMallocHeapSize, 
# 1226
cudaLimitDevRuntimeSyncDepth, 
# 1227
cudaLimitDevRuntimePendingLaunchCount
# 1228
}; 
#endif
# 1233 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1233
enum cudaMemoryAdvise { 
# 1235
cudaMemAdviseSetReadMostly = 1, 
# 1236
cudaMemAdviseUnsetReadMostly, 
# 1237
cudaMemAdviseSetPreferredLocation, 
# 1238
cudaMemAdviseUnsetPreferredLocation, 
# 1239
cudaMemAdviseSetAccessedBy, 
# 1240
cudaMemAdviseUnsetAccessedBy
# 1241
}; 
#endif
# 1246 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1246
enum cudaMemRangeAttribute { 
# 1248
cudaMemRangeAttributeReadMostly = 1, 
# 1249
cudaMemRangeAttributePreferredLocation, 
# 1250
cudaMemRangeAttributeAccessedBy, 
# 1251
cudaMemRangeAttributeLastPrefetchLocation
# 1252
}; 
#endif
# 1257 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1257
enum cudaOutputMode { 
# 1259
cudaKeyValuePair, 
# 1260
cudaCSV
# 1261
}; 
#endif
# 1266 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1266
enum cudaDeviceAttr { 
# 1268
cudaDevAttrMaxThreadsPerBlock = 1, 
# 1269
cudaDevAttrMaxBlockDimX, 
# 1270
cudaDevAttrMaxBlockDimY, 
# 1271
cudaDevAttrMaxBlockDimZ, 
# 1272
cudaDevAttrMaxGridDimX, 
# 1273
cudaDevAttrMaxGridDimY, 
# 1274
cudaDevAttrMaxGridDimZ, 
# 1275
cudaDevAttrMaxSharedMemoryPerBlock, 
# 1276
cudaDevAttrTotalConstantMemory, 
# 1277
cudaDevAttrWarpSize, 
# 1278
cudaDevAttrMaxPitch, 
# 1279
cudaDevAttrMaxRegistersPerBlock, 
# 1280
cudaDevAttrClockRate, 
# 1281
cudaDevAttrTextureAlignment, 
# 1282
cudaDevAttrGpuOverlap, 
# 1283
cudaDevAttrMultiProcessorCount, 
# 1284
cudaDevAttrKernelExecTimeout, 
# 1285
cudaDevAttrIntegrated, 
# 1286
cudaDevAttrCanMapHostMemory, 
# 1287
cudaDevAttrComputeMode, 
# 1288
cudaDevAttrMaxTexture1DWidth, 
# 1289
cudaDevAttrMaxTexture2DWidth, 
# 1290
cudaDevAttrMaxTexture2DHeight, 
# 1291
cudaDevAttrMaxTexture3DWidth, 
# 1292
cudaDevAttrMaxTexture3DHeight, 
# 1293
cudaDevAttrMaxTexture3DDepth, 
# 1294
cudaDevAttrMaxTexture2DLayeredWidth, 
# 1295
cudaDevAttrMaxTexture2DLayeredHeight, 
# 1296
cudaDevAttrMaxTexture2DLayeredLayers, 
# 1297
cudaDevAttrSurfaceAlignment, 
# 1298
cudaDevAttrConcurrentKernels, 
# 1299
cudaDevAttrEccEnabled, 
# 1300
cudaDevAttrPciBusId, 
# 1301
cudaDevAttrPciDeviceId, 
# 1302
cudaDevAttrTccDriver, 
# 1303
cudaDevAttrMemoryClockRate, 
# 1304
cudaDevAttrGlobalMemoryBusWidth, 
# 1305
cudaDevAttrL2CacheSize, 
# 1306
cudaDevAttrMaxThreadsPerMultiProcessor, 
# 1307
cudaDevAttrAsyncEngineCount, 
# 1308
cudaDevAttrUnifiedAddressing, 
# 1309
cudaDevAttrMaxTexture1DLayeredWidth, 
# 1310
cudaDevAttrMaxTexture1DLayeredLayers, 
# 1311
cudaDevAttrMaxTexture2DGatherWidth = 45, 
# 1312
cudaDevAttrMaxTexture2DGatherHeight, 
# 1313
cudaDevAttrMaxTexture3DWidthAlt, 
# 1314
cudaDevAttrMaxTexture3DHeightAlt, 
# 1315
cudaDevAttrMaxTexture3DDepthAlt, 
# 1316
cudaDevAttrPciDomainId, 
# 1317
cudaDevAttrTexturePitchAlignment, 
# 1318
cudaDevAttrMaxTextureCubemapWidth, 
# 1319
cudaDevAttrMaxTextureCubemapLayeredWidth, 
# 1320
cudaDevAttrMaxTextureCubemapLayeredLayers, 
# 1321
cudaDevAttrMaxSurface1DWidth, 
# 1322
cudaDevAttrMaxSurface2DWidth, 
# 1323
cudaDevAttrMaxSurface2DHeight, 
# 1324
cudaDevAttrMaxSurface3DWidth, 
# 1325
cudaDevAttrMaxSurface3DHeight, 
# 1326
cudaDevAttrMaxSurface3DDepth, 
# 1327
cudaDevAttrMaxSurface1DLayeredWidth, 
# 1328
cudaDevAttrMaxSurface1DLayeredLayers, 
# 1329
cudaDevAttrMaxSurface2DLayeredWidth, 
# 1330
cudaDevAttrMaxSurface2DLayeredHeight, 
# 1331
cudaDevAttrMaxSurface2DLayeredLayers, 
# 1332
cudaDevAttrMaxSurfaceCubemapWidth, 
# 1333
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
# 1334
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
# 1335
cudaDevAttrMaxTexture1DLinearWidth, 
# 1336
cudaDevAttrMaxTexture2DLinearWidth, 
# 1337
cudaDevAttrMaxTexture2DLinearHeight, 
# 1338
cudaDevAttrMaxTexture2DLinearPitch, 
# 1339
cudaDevAttrMaxTexture2DMipmappedWidth, 
# 1340
cudaDevAttrMaxTexture2DMipmappedHeight, 
# 1341
cudaDevAttrComputeCapabilityMajor, 
# 1342
cudaDevAttrComputeCapabilityMinor, 
# 1343
cudaDevAttrMaxTexture1DMipmappedWidth, 
# 1344
cudaDevAttrStreamPrioritiesSupported, 
# 1345
cudaDevAttrGlobalL1CacheSupported, 
# 1346
cudaDevAttrLocalL1CacheSupported, 
# 1347
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
# 1348
cudaDevAttrMaxRegistersPerMultiprocessor, 
# 1349
cudaDevAttrManagedMemory, 
# 1350
cudaDevAttrIsMultiGpuBoard, 
# 1351
cudaDevAttrMultiGpuBoardGroupID, 
# 1352
cudaDevAttrHostNativeAtomicSupported, 
# 1353
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
# 1354
cudaDevAttrPageableMemoryAccess, 
# 1355
cudaDevAttrConcurrentManagedAccess, 
# 1356
cudaDevAttrComputePreemptionSupported, 
# 1357
cudaDevAttrCanUseHostPointerForRegisteredMem, 
# 1358
cudaDevAttrReserved92, 
# 1359
cudaDevAttrReserved93, 
# 1360
cudaDevAttrReserved94, 
# 1361
cudaDevAttrCooperativeLaunch, 
# 1362
cudaDevAttrCooperativeMultiDeviceLaunch, 
# 1363
cudaDevAttrMaxSharedMemoryPerBlockOptin
# 1364
}; 
#endif
# 1370 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1370
enum cudaDeviceP2PAttr { 
# 1371
cudaDevP2PAttrPerformanceRank = 1, 
# 1372
cudaDevP2PAttrAccessSupported, 
# 1373
cudaDevP2PAttrNativeAtomicSupported
# 1374
}; 
#endif
# 1378 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1378
struct cudaDeviceProp { 
# 1380
char name[256]; 
# 1381
size_t totalGlobalMem; 
# 1382
size_t sharedMemPerBlock; 
# 1383
int regsPerBlock; 
# 1384
int warpSize; 
# 1385
size_t memPitch; 
# 1386
int maxThreadsPerBlock; 
# 1387
int maxThreadsDim[3]; 
# 1388
int maxGridSize[3]; 
# 1389
int clockRate; 
# 1390
size_t totalConstMem; 
# 1391
int major; 
# 1392
int minor; 
# 1393
size_t textureAlignment; 
# 1394
size_t texturePitchAlignment; 
# 1395
int deviceOverlap; 
# 1396
int multiProcessorCount; 
# 1397
int kernelExecTimeoutEnabled; 
# 1398
int integrated; 
# 1399
int canMapHostMemory; 
# 1400
int computeMode; 
# 1401
int maxTexture1D; 
# 1402
int maxTexture1DMipmap; 
# 1403
int maxTexture1DLinear; 
# 1404
int maxTexture2D[2]; 
# 1405
int maxTexture2DMipmap[2]; 
# 1406
int maxTexture2DLinear[3]; 
# 1407
int maxTexture2DGather[2]; 
# 1408
int maxTexture3D[3]; 
# 1409
int maxTexture3DAlt[3]; 
# 1410
int maxTextureCubemap; 
# 1411
int maxTexture1DLayered[2]; 
# 1412
int maxTexture2DLayered[3]; 
# 1413
int maxTextureCubemapLayered[2]; 
# 1414
int maxSurface1D; 
# 1415
int maxSurface2D[2]; 
# 1416
int maxSurface3D[3]; 
# 1417
int maxSurface1DLayered[2]; 
# 1418
int maxSurface2DLayered[3]; 
# 1419
int maxSurfaceCubemap; 
# 1420
int maxSurfaceCubemapLayered[2]; 
# 1421
size_t surfaceAlignment; 
# 1422
int concurrentKernels; 
# 1423
int ECCEnabled; 
# 1424
int pciBusID; 
# 1425
int pciDeviceID; 
# 1426
int pciDomainID; 
# 1427
int tccDriver; 
# 1428
int asyncEngineCount; 
# 1429
int unifiedAddressing; 
# 1430
int memoryClockRate; 
# 1431
int memoryBusWidth; 
# 1432
int l2CacheSize; 
# 1433
int maxThreadsPerMultiProcessor; 
# 1434
int streamPrioritiesSupported; 
# 1435
int globalL1CacheSupported; 
# 1436
int localL1CacheSupported; 
# 1437
size_t sharedMemPerMultiprocessor; 
# 1438
int regsPerMultiprocessor; 
# 1439
int managedMemory; 
# 1440
int isMultiGpuBoard; 
# 1441
int multiGpuBoardGroupID; 
# 1442
int hostNativeAtomicSupported; 
# 1443
int singleToDoublePrecisionPerfRatio; 
# 1444
int pageableMemoryAccess; 
# 1445
int concurrentManagedAccess; 
# 1446
int computePreemptionSupported; 
# 1447
int canUseHostPointerForRegisteredMem; 
# 1448
int cooperativeLaunch; 
# 1449
int cooperativeMultiDeviceLaunch; 
# 1450
size_t sharedMemPerBlockOptin; 
# 1451
}; 
#endif
# 1539 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
typedef 
# 1536
struct cudaIpcEventHandle_st { 
# 1538
char reserved[64]; 
# 1539
} cudaIpcEventHandle_t; 
#endif
# 1547 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
typedef 
# 1544
struct cudaIpcMemHandle_st { 
# 1546
char reserved[64]; 
# 1547
} cudaIpcMemHandle_t; 
#endif
# 1558 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
typedef cudaError 
# 1558
cudaError_t; 
#endif
# 1563 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
typedef struct CUstream_st *
# 1563
cudaStream_t; 
#endif
# 1568 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
typedef struct CUevent_st *
# 1568
cudaEvent_t; 
#endif
# 1573 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
typedef cudaGraphicsResource *
# 1573
cudaGraphicsResource_t; 
#endif
# 1578 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
typedef struct CUuuid_st 
# 1578
cudaUUID_t; 
#endif
# 1583 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
typedef cudaOutputMode 
# 1583
cudaOutputMode_t; 
#endif
# 1588 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1588
enum cudaCGScope { 
# 1589
cudaCGScopeInvalid, 
# 1590
cudaCGScopeGrid, 
# 1591
cudaCGScopeMultiGrid
# 1592
}; 
#endif
# 1597 "/usr/local/cuda/bin/..//include/driver_types.h"
#if 0
# 1597
struct cudaLaunchParams { 
# 1599
void *func; 
# 1600
dim3 gridDim; 
# 1601
dim3 blockDim; 
# 1602
void **args; 
# 1603
size_t sharedMem; 
# 1604
cudaStream_t stream; 
# 1605
}; 
#endif
# 84 "/usr/local/cuda/bin/..//include/surface_types.h"
#if 0
# 84
enum cudaSurfaceBoundaryMode { 
# 86
cudaBoundaryModeZero, 
# 87
cudaBoundaryModeClamp, 
# 88
cudaBoundaryModeTrap
# 89
}; 
#endif
# 94 "/usr/local/cuda/bin/..//include/surface_types.h"
#if 0
# 94
enum cudaSurfaceFormatMode { 
# 96
cudaFormatModeForced, 
# 97
cudaFormatModeAuto
# 98
}; 
#endif
# 103 "/usr/local/cuda/bin/..//include/surface_types.h"
#if 0
# 103
struct surfaceReference { 
# 108
cudaChannelFormatDesc channelDesc; 
# 109
}; 
#endif
# 114 "/usr/local/cuda/bin/..//include/surface_types.h"
#if 0
typedef unsigned long long 
# 114
cudaSurfaceObject_t; 
#endif
# 84 "/usr/local/cuda/bin/..//include/texture_types.h"
#if 0
# 84
enum cudaTextureAddressMode { 
# 86
cudaAddressModeWrap, 
# 87
cudaAddressModeClamp, 
# 88
cudaAddressModeMirror, 
# 89
cudaAddressModeBorder
# 90
}; 
#endif
# 95 "/usr/local/cuda/bin/..//include/texture_types.h"
#if 0
# 95
enum cudaTextureFilterMode { 
# 97
cudaFilterModePoint, 
# 98
cudaFilterModeLinear
# 99
}; 
#endif
# 104 "/usr/local/cuda/bin/..//include/texture_types.h"
#if 0
# 104
enum cudaTextureReadMode { 
# 106
cudaReadModeElementType, 
# 107
cudaReadModeNormalizedFloat
# 108
}; 
#endif
# 113 "/usr/local/cuda/bin/..//include/texture_types.h"
#if 0
# 113
struct textureReference { 
# 118
int normalized; 
# 122
cudaTextureFilterMode filterMode; 
# 126
cudaTextureAddressMode addressMode[3]; 
# 130
cudaChannelFormatDesc channelDesc; 
# 134
int sRGB; 
# 138
unsigned maxAnisotropy; 
# 142
cudaTextureFilterMode mipmapFilterMode; 
# 146
float mipmapLevelBias; 
# 150
float minMipmapLevelClamp; 
# 154
float maxMipmapLevelClamp; 
# 155
int __cudaReserved[15]; 
# 156
}; 
#endif
# 161 "/usr/local/cuda/bin/..//include/texture_types.h"
#if 0
# 161
struct cudaTextureDesc { 
# 166
cudaTextureAddressMode addressMode[3]; 
# 170
cudaTextureFilterMode filterMode; 
# 174
cudaTextureReadMode readMode; 
# 178
int sRGB; 
# 182
float borderColor[4]; 
# 186
int normalizedCoords; 
# 190
unsigned maxAnisotropy; 
# 194
cudaTextureFilterMode mipmapFilterMode; 
# 198
float mipmapLevelBias; 
# 202
float minMipmapLevelClamp; 
# 206
float maxMipmapLevelClamp; 
# 207
}; 
#endif
# 212 "/usr/local/cuda/bin/..//include/texture_types.h"
#if 0
typedef unsigned long long 
# 212
cudaTextureObject_t; 
#endif
# 70 "/usr/local/cuda/bin/..//include/library_types.h"
typedef 
# 54
enum cudaDataType_t { 
# 56
CUDA_R_16F = 2, 
# 57
CUDA_C_16F = 6, 
# 58
CUDA_R_32F = 0, 
# 59
CUDA_C_32F = 4, 
# 60
CUDA_R_64F = 1, 
# 61
CUDA_C_64F = 5, 
# 62
CUDA_R_8I = 3, 
# 63
CUDA_C_8I = 7, 
# 64
CUDA_R_8U, 
# 65
CUDA_C_8U, 
# 66
CUDA_R_32I, 
# 67
CUDA_C_32I, 
# 68
CUDA_R_32U, 
# 69
CUDA_C_32U
# 70
} cudaDataType; 
# 78
typedef 
# 73
enum libraryPropertyType_t { 
# 75
MAJOR_VERSION, 
# 76
MINOR_VERSION, 
# 77
PATCH_LEVEL
# 78
} libraryPropertyType; 
# 121 "/usr/local/cuda/bin/..//include/cuda_device_runtime_api.h"
extern "C" {
# 123
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 124
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 125
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 126
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 127
extern cudaError_t cudaDeviceSynchronize(); 
# 128
extern cudaError_t cudaGetLastError(); 
# 129
extern cudaError_t cudaPeekAtLastError(); 
# 130
extern const char *cudaGetErrorString(cudaError_t error); 
# 131
extern const char *cudaGetErrorName(cudaError_t error); 
# 132
extern cudaError_t cudaGetDeviceCount(int * count); 
# 133
extern cudaError_t cudaGetDevice(int * device); 
# 134
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 135
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 136
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 137
__attribute__((unused)) extern cudaError_t cudaStreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 138
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 139
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream); 
# 140
__attribute__((unused)) extern cudaError_t cudaEventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
# 141
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 142
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 143
extern cudaError_t cudaFree(void * devPtr); 
# 144
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 145
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 146
__attribute__((unused)) extern cudaError_t cudaMemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 147
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 148
__attribute__((unused)) extern cudaError_t cudaMemcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 149
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 150
__attribute__((unused)) extern cudaError_t cudaMemcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 151
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 152
__attribute__((unused)) extern cudaError_t cudaMemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 153
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 154
__attribute__((unused)) extern cudaError_t cudaMemset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 155
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 156
__attribute__((unused)) extern cudaError_t cudaMemset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 157
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 178 "/usr/local/cuda/bin/..//include/cuda_device_runtime_api.h"
__attribute__((unused)) extern void *cudaGetParameterBuffer(size_t alignment, size_t size); 
# 206 "/usr/local/cuda/bin/..//include/cuda_device_runtime_api.h"
__attribute__((unused)) extern void *cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
# 207
__attribute__((unused)) extern cudaError_t cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 208
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
# 226 "/usr/local/cuda/bin/..//include/cuda_device_runtime_api.h"
__attribute__((unused)) extern cudaError_t cudaLaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 227
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
# 230
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
# 231
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 233
__attribute__((unused)) extern unsigned long long cudaCGGetIntrinsicHandle(cudaCGScope scope); 
# 234
__attribute__((unused)) extern cudaError_t cudaCGSynchronize(unsigned long long handle, unsigned flags); 
# 235
__attribute__((unused)) extern cudaError_t cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned long long handle); 
# 236
__attribute__((unused)) extern cudaError_t cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned long long handle); 
# 237
}
# 239
template< class T> static inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
# 240
template< class T> static inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
# 241
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
# 242
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 218 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern "C" {
# 251 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceReset(); 
# 270 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSynchronize(); 
# 347 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetLimit(cudaLimit limit, size_t value); 
# 378 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 410 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 446 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
# 489 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
# 519 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 562 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
# 587 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
# 615 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
# 660 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
# 698 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
# 739 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
# 792 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
# 825 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaIpcCloseMemHandle(void * devPtr); 
# 865 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaThreadExit(); 
# 889 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSynchronize(); 
# 936 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSetLimit(cudaLimit limit, size_t value); 
# 967 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
# 1002 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 1048 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
# 1104 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetLastError(); 
# 1147 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaPeekAtLastError(); 
# 1163 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern const char *cudaGetErrorName(cudaError_t error); 
# 1179 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern const char *cudaGetErrorString(cudaError_t error); 
# 1210 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceCount(int * count); 
# 1470 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
# 1647 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 1683 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
# 1702 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
# 1737 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaSetDevice(int device); 
# 1755 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetDevice(int * device); 
# 1784 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaSetValidDevices(int * device_arr, int len); 
# 1847 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaSetDeviceFlags(unsigned flags); 
# 1890 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetDeviceFlags(unsigned * flags); 
# 1928 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreate(cudaStream_t * pStream); 
# 1958 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 2002 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
# 2027 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
# 2050 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
# 2079 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 2113 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 2127 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
typedef void (*cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
# 2185 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
# 2207 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream); 
# 2230 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaStreamQuery(cudaStream_t stream); 
# 2302 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
# 2339 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaEventCreate(cudaEvent_t * event); 
# 2374 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 2406 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
# 2439 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaEventQuery(cudaEvent_t event); 
# 2472 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaEventSynchronize(cudaEvent_t event); 
# 2498 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 2540 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
# 2603 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 2658 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 2755 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
# 2804 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
# 2859 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
# 2894 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 2930 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
# 2954 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaSetDoubleForDevice(double * d); 
# 2978 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaSetDoubleForHost(double * d); 
# 3033 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
# 3077 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
# 3127 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, cudaStream_t stream = 0); 
# 3156 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaSetupArgument(const void * arg, size_t size, size_t offset); 
# 3197 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaLaunch(const void * func); 
# 3316 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
# 3344 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 3375 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMallocHost(void ** ptr, size_t size); 
# 3416 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
# 3460 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
# 3488 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaFree(void * devPtr); 
# 3510 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaFreeHost(void * ptr); 
# 3533 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaFreeArray(cudaArray_t array); 
# 3556 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
# 3617 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
# 3698 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaHostRegister(void * ptr, size_t size, unsigned flags); 
# 3719 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaHostUnregister(void * ptr); 
# 3762 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
# 3782 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaHostGetFlags(unsigned * pFlags, void * pHost); 
# 3819 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
# 3956 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
# 4093 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
# 4120 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
# 4223 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * p); 
# 4252 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
# 4368 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
# 4392 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
# 4413 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemGetInfo(size_t * free, size_t * total); 
# 4437 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
# 4478 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 4511 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
# 4550 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
# 4588 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
# 4627 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 4673 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 4720 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 4767 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
# 4812 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 4853 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
# 4894 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
# 4948 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 4981 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
# 5028 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5074 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5134 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5189 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5243 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5292 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5341 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 5368 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemset(void * devPtr, int value, size_t count); 
# 5400 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
# 5442 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
# 5476 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
# 5515 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
# 5564 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
# 5590 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
# 5615 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetSymbolSize(size_t * size, const void * symbol); 
# 5683 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
# 5770 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
# 5827 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
# 5864 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
# 6018 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
# 6057 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
# 6097 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
# 6117 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDeviceDisablePeerAccess(int peerDevice); 
# 6178 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
# 6211 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
# 6248 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 6281 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 6311 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
# 6347 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
# 6374 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
# 6414 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
# 6450 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
# 6501 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = ((2147483647) * 2U) + 1U); 
# 6556 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
# 6590 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 6626 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
# 6647 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaUnbindTexture(const textureReference * texref); 
# 6672 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
# 6698 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
# 6739 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 6760 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
# 6988 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
# 7005 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDestroyTextureObject(cudaTextureObject_t texObject); 
# 7023 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
# 7041 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
# 7060 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
# 7101 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
# 7118 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
# 7135 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
# 7164 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaDriverGetVersion(int * driverVersion); 
# 7183 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 7188
extern cudaError_t cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
# 7416 "/usr/local/cuda/bin/..//include/cuda_runtime_api.h"
}
# 107 "/usr/local/cuda/bin/..//include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 108
{ 
# 109
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 110
} 
# 112
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
# 113
{ 
# 114
int e = (((int)sizeof(unsigned short)) * 8); 
# 116
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 117
} 
# 119
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
# 120
{ 
# 121
int e = (((int)sizeof(unsigned short)) * 8); 
# 123
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 124
} 
# 126
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
# 127
{ 
# 128
int e = (((int)sizeof(unsigned short)) * 8); 
# 130
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 131
} 
# 133
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
# 134
{ 
# 135
int e = (((int)sizeof(unsigned short)) * 8); 
# 137
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 138
} 
# 140
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
# 141
{ 
# 142
int e = (((int)sizeof(char)) * 8); 
# 147
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 149
} 
# 151
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
# 152
{ 
# 153
int e = (((int)sizeof(signed char)) * 8); 
# 155
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 156
} 
# 158
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
# 159
{ 
# 160
int e = (((int)sizeof(unsigned char)) * 8); 
# 162
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 163
} 
# 165
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
# 166
{ 
# 167
int e = (((int)sizeof(signed char)) * 8); 
# 169
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 170
} 
# 172
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
# 173
{ 
# 174
int e = (((int)sizeof(unsigned char)) * 8); 
# 176
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 177
} 
# 179
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
# 180
{ 
# 181
int e = (((int)sizeof(signed char)) * 8); 
# 183
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 184
} 
# 186
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
# 187
{ 
# 188
int e = (((int)sizeof(unsigned char)) * 8); 
# 190
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 191
} 
# 193
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
# 194
{ 
# 195
int e = (((int)sizeof(signed char)) * 8); 
# 197
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 198
} 
# 200
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
# 201
{ 
# 202
int e = (((int)sizeof(unsigned char)) * 8); 
# 204
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 205
} 
# 207
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
# 208
{ 
# 209
int e = (((int)sizeof(short)) * 8); 
# 211
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 212
} 
# 214
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
# 215
{ 
# 216
int e = (((int)sizeof(unsigned short)) * 8); 
# 218
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 219
} 
# 221
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
# 222
{ 
# 223
int e = (((int)sizeof(short)) * 8); 
# 225
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 226
} 
# 228
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
# 229
{ 
# 230
int e = (((int)sizeof(unsigned short)) * 8); 
# 232
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 233
} 
# 235
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
# 236
{ 
# 237
int e = (((int)sizeof(short)) * 8); 
# 239
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 240
} 
# 242
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
# 243
{ 
# 244
int e = (((int)sizeof(unsigned short)) * 8); 
# 246
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 247
} 
# 249
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
# 250
{ 
# 251
int e = (((int)sizeof(short)) * 8); 
# 253
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 254
} 
# 256
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
# 257
{ 
# 258
int e = (((int)sizeof(unsigned short)) * 8); 
# 260
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 261
} 
# 263
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
# 264
{ 
# 265
int e = (((int)sizeof(int)) * 8); 
# 267
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 268
} 
# 270
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
# 271
{ 
# 272
int e = (((int)sizeof(unsigned)) * 8); 
# 274
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 275
} 
# 277
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
# 278
{ 
# 279
int e = (((int)sizeof(int)) * 8); 
# 281
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 282
} 
# 284
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
# 285
{ 
# 286
int e = (((int)sizeof(unsigned)) * 8); 
# 288
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 289
} 
# 291
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
# 292
{ 
# 293
int e = (((int)sizeof(int)) * 8); 
# 295
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 296
} 
# 298
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
# 299
{ 
# 300
int e = (((int)sizeof(unsigned)) * 8); 
# 302
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 303
} 
# 305
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
# 306
{ 
# 307
int e = (((int)sizeof(int)) * 8); 
# 309
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 310
} 
# 312
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
# 313
{ 
# 314
int e = (((int)sizeof(unsigned)) * 8); 
# 316
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 317
} 
# 379 "/usr/local/cuda/bin/..//include/channel_descriptor.h"
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
# 380
{ 
# 381
int e = (((int)sizeof(float)) * 8); 
# 383
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 384
} 
# 386
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
# 387
{ 
# 388
int e = (((int)sizeof(float)) * 8); 
# 390
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 391
} 
# 393
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
# 394
{ 
# 395
int e = (((int)sizeof(float)) * 8); 
# 397
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 398
} 
# 400
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
# 401
{ 
# 402
int e = (((int)sizeof(float)) * 8); 
# 404
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 405
} 
# 79 "/usr/local/cuda/bin/..//include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
# 80
{ 
# 81
cudaPitchedPtr s; 
# 83
(s.ptr) = d; 
# 84
(s.pitch) = p; 
# 85
(s.xsize) = xsz; 
# 86
(s.ysize) = ysz; 
# 88
return s; 
# 89
} 
# 106 "/usr/local/cuda/bin/..//include/driver_functions.h"
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
# 107
{ 
# 108
cudaPos p; 
# 110
(p.x) = x; 
# 111
(p.y) = y; 
# 112
(p.z) = z; 
# 114
return p; 
# 115
} 
# 132 "/usr/local/cuda/bin/..//include/driver_functions.h"
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
# 133
{ 
# 134
cudaExtent e; 
# 136
(e.width) = w; 
# 137
(e.height) = h; 
# 138
(e.depth) = d; 
# 140
return e; 
# 141
} 
# 75 "/usr/local/cuda/bin/..//include/vector_functions.h"
static inline char1 make_char1(signed char x); 
# 77
static inline uchar1 make_uchar1(unsigned char x); 
# 79
static inline char2 make_char2(signed char x, signed char y); 
# 81
static inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
# 83
static inline char3 make_char3(signed char x, signed char y, signed char z); 
# 85
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
# 87
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
# 89
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
# 91
static inline short1 make_short1(short x); 
# 93
static inline ushort1 make_ushort1(unsigned short x); 
# 95
static inline short2 make_short2(short x, short y); 
# 97
static inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
# 99
static inline short3 make_short3(short x, short y, short z); 
# 101
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
# 103
static inline short4 make_short4(short x, short y, short z, short w); 
# 105
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
# 107
static inline int1 make_int1(int x); 
# 109
static inline uint1 make_uint1(unsigned x); 
# 111
static inline int2 make_int2(int x, int y); 
# 113
static inline uint2 make_uint2(unsigned x, unsigned y); 
# 115
static inline int3 make_int3(int x, int y, int z); 
# 117
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
# 119
static inline int4 make_int4(int x, int y, int z, int w); 
# 121
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
# 123
static inline long1 make_long1(long x); 
# 125
static inline ulong1 make_ulong1(unsigned long x); 
# 127
static inline long2 make_long2(long x, long y); 
# 129
static inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
# 131
static inline long3 make_long3(long x, long y, long z); 
# 133
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
# 135
static inline long4 make_long4(long x, long y, long z, long w); 
# 137
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
# 139
static inline float1 make_float1(float x); 
# 141
static inline float2 make_float2(float x, float y); 
# 143
static inline float3 make_float3(float x, float y, float z); 
# 145
static inline float4 make_float4(float x, float y, float z, float w); 
# 147
static inline longlong1 make_longlong1(long long x); 
# 149
static inline ulonglong1 make_ulonglong1(unsigned long long x); 
# 151
static inline longlong2 make_longlong2(long long x, long long y); 
# 153
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y); 
# 155
static inline longlong3 make_longlong3(long long x, long long y, long long z); 
# 157
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z); 
# 159
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w); 
# 161
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w); 
# 163
static inline double1 make_double1(double x); 
# 165
static inline double2 make_double2(double x, double y); 
# 167
static inline double3 make_double3(double x, double y, double z); 
# 169
static inline double4 make_double4(double x, double y, double z, double w); 
# 75 "/usr/local/cuda/bin/..//include/vector_functions.hpp"
static inline char1 make_char1(signed char x) 
# 76
{ 
# 77
char1 t; (t.x) = x; return t; 
# 78
} 
# 80
static inline uchar1 make_uchar1(unsigned char x) 
# 81
{ 
# 82
uchar1 t; (t.x) = x; return t; 
# 83
} 
# 85
static inline char2 make_char2(signed char x, signed char y) 
# 86
{ 
# 87
char2 t; (t.x) = x; (t.y) = y; return t; 
# 88
} 
# 90
static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
# 91
{ 
# 92
uchar2 t; (t.x) = x; (t.y) = y; return t; 
# 93
} 
# 95
static inline char3 make_char3(signed char x, signed char y, signed char z) 
# 96
{ 
# 97
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 98
} 
# 100
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
# 101
{ 
# 102
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 103
} 
# 105
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
# 106
{ 
# 107
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 108
} 
# 110
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
# 111
{ 
# 112
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 113
} 
# 115
static inline short1 make_short1(short x) 
# 116
{ 
# 117
short1 t; (t.x) = x; return t; 
# 118
} 
# 120
static inline ushort1 make_ushort1(unsigned short x) 
# 121
{ 
# 122
ushort1 t; (t.x) = x; return t; 
# 123
} 
# 125
static inline short2 make_short2(short x, short y) 
# 126
{ 
# 127
short2 t; (t.x) = x; (t.y) = y; return t; 
# 128
} 
# 130
static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
# 131
{ 
# 132
ushort2 t; (t.x) = x; (t.y) = y; return t; 
# 133
} 
# 135
static inline short3 make_short3(short x, short y, short z) 
# 136
{ 
# 137
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 138
} 
# 140
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
# 141
{ 
# 142
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 143
} 
# 145
static inline short4 make_short4(short x, short y, short z, short w) 
# 146
{ 
# 147
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 148
} 
# 150
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
# 151
{ 
# 152
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 153
} 
# 155
static inline int1 make_int1(int x) 
# 156
{ 
# 157
int1 t; (t.x) = x; return t; 
# 158
} 
# 160
static inline uint1 make_uint1(unsigned x) 
# 161
{ 
# 162
uint1 t; (t.x) = x; return t; 
# 163
} 
# 165
static inline int2 make_int2(int x, int y) 
# 166
{ 
# 167
int2 t; (t.x) = x; (t.y) = y; return t; 
# 168
} 
# 170
static inline uint2 make_uint2(unsigned x, unsigned y) 
# 171
{ 
# 172
uint2 t; (t.x) = x; (t.y) = y; return t; 
# 173
} 
# 175
static inline int3 make_int3(int x, int y, int z) 
# 176
{ 
# 177
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 178
} 
# 180
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
# 181
{ 
# 182
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 183
} 
# 185
static inline int4 make_int4(int x, int y, int z, int w) 
# 186
{ 
# 187
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 188
} 
# 190
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
# 191
{ 
# 192
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 193
} 
# 195
static inline long1 make_long1(long x) 
# 196
{ 
# 197
long1 t; (t.x) = x; return t; 
# 198
} 
# 200
static inline ulong1 make_ulong1(unsigned long x) 
# 201
{ 
# 202
ulong1 t; (t.x) = x; return t; 
# 203
} 
# 205
static inline long2 make_long2(long x, long y) 
# 206
{ 
# 207
long2 t; (t.x) = x; (t.y) = y; return t; 
# 208
} 
# 210
static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
# 211
{ 
# 212
ulong2 t; (t.x) = x; (t.y) = y; return t; 
# 213
} 
# 215
static inline long3 make_long3(long x, long y, long z) 
# 216
{ 
# 217
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 218
} 
# 220
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
# 221
{ 
# 222
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 223
} 
# 225
static inline long4 make_long4(long x, long y, long z, long w) 
# 226
{ 
# 227
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 228
} 
# 230
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
# 231
{ 
# 232
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 233
} 
# 235
static inline float1 make_float1(float x) 
# 236
{ 
# 237
float1 t; (t.x) = x; return t; 
# 238
} 
# 240
static inline float2 make_float2(float x, float y) 
# 241
{ 
# 242
float2 t; (t.x) = x; (t.y) = y; return t; 
# 243
} 
# 245
static inline float3 make_float3(float x, float y, float z) 
# 246
{ 
# 247
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 248
} 
# 250
static inline float4 make_float4(float x, float y, float z, float w) 
# 251
{ 
# 252
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 253
} 
# 255
static inline longlong1 make_longlong1(long long x) 
# 256
{ 
# 257
longlong1 t; (t.x) = x; return t; 
# 258
} 
# 260
static inline ulonglong1 make_ulonglong1(unsigned long long x) 
# 261
{ 
# 262
ulonglong1 t; (t.x) = x; return t; 
# 263
} 
# 265
static inline longlong2 make_longlong2(long long x, long long y) 
# 266
{ 
# 267
longlong2 t; (t.x) = x; (t.y) = y; return t; 
# 268
} 
# 270
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
# 271
{ 
# 272
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
# 273
} 
# 275
static inline longlong3 make_longlong3(long long x, long long y, long long z) 
# 276
{ 
# 277
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 278
} 
# 280
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z) 
# 281
{ 
# 282
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 283
} 
# 285
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w) 
# 286
{ 
# 287
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 288
} 
# 290
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w) 
# 291
{ 
# 292
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 293
} 
# 295
static inline double1 make_double1(double x) 
# 296
{ 
# 297
double1 t; (t.x) = x; return t; 
# 298
} 
# 300
static inline double2 make_double2(double x, double y) 
# 301
{ 
# 302
double2 t; (t.x) = x; (t.y) = y; return t; 
# 303
} 
# 305
static inline double3 make_double3(double x, double y, double z) 
# 306
{ 
# 307
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 308
} 
# 310
static inline double4 make_double4(double x, double y, double z, double w) 
# 311
{ 
# 312
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 313
} 
# 27 "/usr/include/string.h" 3
extern "C" {
# 42 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 43
 __attribute((__nonnull__(1, 2))); 
# 46
extern void *memmove(void * __dest, const void * __src, size_t __n) throw()
# 47
 __attribute((__nonnull__(1, 2))); 
# 54
extern void *memccpy(void *__restrict__ __dest, const void *__restrict__ __src, int __c, size_t __n) throw()
# 56
 __attribute((__nonnull__(1, 2))); 
# 62
extern void *memset(void * __s, int __c, size_t __n) throw() __attribute((__nonnull__(1))); 
# 65
extern int memcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 66
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 70
extern "C++" {
# 72
extern void *memchr(void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 73
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 74
extern const void *memchr(const void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 75
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 90 "/usr/include/string.h" 3
}
# 101
extern "C++" void *rawmemchr(void * __s, int __c) throw() __asm__("rawmemchr")
# 102
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 103
extern "C++" const void *rawmemchr(const void * __s, int __c) throw() __asm__("rawmemchr")
# 104
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 112
extern "C++" void *memrchr(void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 113
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 114
extern "C++" const void *memrchr(const void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 115
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 125
extern char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 126
 __attribute((__nonnull__(1, 2))); 
# 128
extern char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 130
 __attribute((__nonnull__(1, 2))); 
# 133
extern char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 134
 __attribute((__nonnull__(1, 2))); 
# 136
extern char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 137
 __attribute((__nonnull__(1, 2))); 
# 140
extern int strcmp(const char * __s1, const char * __s2) throw()
# 141
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 143
extern int strncmp(const char * __s1, const char * __s2, size_t __n) throw()
# 144
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 147
extern int strcoll(const char * __s1, const char * __s2) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 150
extern size_t strxfrm(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 152
 __attribute((__nonnull__(2))); 
# 39 "/usr/include/xlocale.h" 3
typedef 
# 27
struct __locale_struct { 
# 30
struct __locale_data *__locales[13]; 
# 33
const unsigned short *__ctype_b; 
# 34
const int *__ctype_tolower; 
# 35
const int *__ctype_toupper; 
# 38
const char *__names[13]; 
# 39
} *__locale_t; 
# 42
typedef __locale_t locale_t; 
# 162 "/usr/include/string.h" 3
extern int strcoll_l(const char * __s1, const char * __s2, __locale_t __l) throw()
# 163
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 165
extern size_t strxfrm_l(char * __dest, const char * __src, size_t __n, __locale_t __l) throw()
# 166
 __attribute((__nonnull__(2, 4))); 
# 171
extern char *strdup(const char * __s) throw()
# 172
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 179
extern char *strndup(const char * __string, size_t __n) throw()
# 180
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 209 "/usr/include/string.h" 3
extern "C++" {
# 211
extern char *strchr(char * __s, int __c) throw() __asm__("strchr")
# 212
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 213
extern const char *strchr(const char * __s, int __c) throw() __asm__("strchr")
# 214
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 229 "/usr/include/string.h" 3
}
# 236
extern "C++" {
# 238
extern char *strrchr(char * __s, int __c) throw() __asm__("strrchr")
# 239
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 240
extern const char *strrchr(const char * __s, int __c) throw() __asm__("strrchr")
# 241
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 256 "/usr/include/string.h" 3
}
# 267
extern "C++" char *strchrnul(char * __s, int __c) throw() __asm__("strchrnul")
# 268
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 269
extern "C++" const char *strchrnul(const char * __s, int __c) throw() __asm__("strchrnul")
# 270
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 280
extern size_t strcspn(const char * __s, const char * __reject) throw()
# 281
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 284
extern size_t strspn(const char * __s, const char * __accept) throw()
# 285
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 288
extern "C++" {
# 290
extern char *strpbrk(char * __s, const char * __accept) throw() __asm__("strpbrk")
# 291
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 292
extern const char *strpbrk(const char * __s, const char * __accept) throw() __asm__("strpbrk")
# 293
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 308 "/usr/include/string.h" 3
}
# 315
extern "C++" {
# 317
extern char *strstr(char * __haystack, const char * __needle) throw() __asm__("strstr")
# 318
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 319
extern const char *strstr(const char * __haystack, const char * __needle) throw() __asm__("strstr")
# 320
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 335 "/usr/include/string.h" 3
}
# 343
extern char *strtok(char *__restrict__ __s, const char *__restrict__ __delim) throw()
# 344
 __attribute((__nonnull__(2))); 
# 349
extern char *__strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 352
 __attribute((__nonnull__(2, 3))); 
# 354
extern char *strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 356
 __attribute((__nonnull__(2, 3))); 
# 362
extern "C++" char *strcasestr(char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 363
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 364
extern "C++" const char *strcasestr(const char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 366
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 377 "/usr/include/string.h" 3
extern void *memmem(const void * __haystack, size_t __haystacklen, const void * __needle, size_t __needlelen) throw()
# 379
 __attribute((__pure__)) __attribute((__nonnull__(1, 3))); 
# 383
extern void *__mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 385
 __attribute((__nonnull__(1, 2))); 
# 386
extern void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 388
 __attribute((__nonnull__(1, 2))); 
# 394
extern size_t strlen(const char * __s) throw()
# 395
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 401
extern size_t strnlen(const char * __string, size_t __maxlen) throw()
# 402
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 408
extern char *strerror(int __errnum) throw(); 
# 433 "/usr/include/string.h" 3
extern char *strerror_r(int __errnum, char * __buf, size_t __buflen) throw()
# 434
 __attribute((__nonnull__(2))); 
# 440
extern char *strerror_l(int __errnum, __locale_t __l) throw(); 
# 446
extern void __bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 450
extern void bcopy(const void * __src, void * __dest, size_t __n) throw()
# 451
 __attribute((__nonnull__(1, 2))); 
# 454
extern void bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 457
extern int bcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 458
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 462
extern "C++" {
# 464
extern char *index(char * __s, int __c) throw() __asm__("index")
# 465
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 466
extern const char *index(const char * __s, int __c) throw() __asm__("index")
# 467
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 482 "/usr/include/string.h" 3
}
# 490
extern "C++" {
# 492
extern char *rindex(char * __s, int __c) throw() __asm__("rindex")
# 493
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 494
extern const char *rindex(const char * __s, int __c) throw() __asm__("rindex")
# 495
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 510 "/usr/include/string.h" 3
}
# 518
extern int ffs(int __i) throw() __attribute((const)); 
# 523
extern int ffsl(long __l) throw() __attribute((const)); 
# 524
__extension__ extern int ffsll(long long __ll) throw()
# 525
 __attribute((const)); 
# 529
extern int strcasecmp(const char * __s1, const char * __s2) throw()
# 530
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 533
extern int strncasecmp(const char * __s1, const char * __s2, size_t __n) throw()
# 534
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 540
extern int strcasecmp_l(const char * __s1, const char * __s2, __locale_t __loc) throw()
# 542
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 544
extern int strncasecmp_l(const char * __s1, const char * __s2, size_t __n, __locale_t __loc) throw()
# 546
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4))); 
# 552
extern char *strsep(char **__restrict__ __stringp, const char *__restrict__ __delim) throw()
# 554
 __attribute((__nonnull__(1, 2))); 
# 559
extern char *strsignal(int __sig) throw(); 
# 562
extern char *__stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 563
 __attribute((__nonnull__(1, 2))); 
# 564
extern char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 565
 __attribute((__nonnull__(1, 2))); 
# 569
extern char *__stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 571
 __attribute((__nonnull__(1, 2))); 
# 572
extern char *stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 574
 __attribute((__nonnull__(1, 2))); 
# 579
extern int strverscmp(const char * __s1, const char * __s2) throw()
# 580
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 583
extern char *strfry(char * __string) throw() __attribute((__nonnull__(1))); 
# 586
extern void *memfrob(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 594
extern "C++" char *basename(char * __filename) throw() __asm__("basename")
# 595
 __attribute((__nonnull__(1))); 
# 596
extern "C++" const char *basename(const char * __filename) throw() __asm__("basename")
# 597
 __attribute((__nonnull__(1))); 
# 658 "/usr/include/string.h" 3
}
# 29 "/usr/include/time.h" 3
extern "C" {
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char; 
# 31
typedef unsigned short __u_short; 
# 32
typedef unsigned __u_int; 
# 33
typedef unsigned long __u_long; 
# 36
typedef signed char __int8_t; 
# 37
typedef unsigned char __uint8_t; 
# 38
typedef signed short __int16_t; 
# 39
typedef unsigned short __uint16_t; 
# 40
typedef signed int __int32_t; 
# 41
typedef unsigned __uint32_t; 
# 43
typedef signed long __int64_t; 
# 44
typedef unsigned long __uint64_t; 
# 52
typedef long __quad_t; 
# 53
typedef unsigned long __u_quad_t; 
# 124 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned long __dev_t; 
# 125
typedef unsigned __uid_t; 
# 126
typedef unsigned __gid_t; 
# 127
typedef unsigned long __ino_t; 
# 128
typedef unsigned long __ino64_t; 
# 129
typedef unsigned __mode_t; 
# 130
typedef unsigned long __nlink_t; 
# 131
typedef long __off_t; 
# 132
typedef long __off64_t; 
# 133
typedef int __pid_t; 
# 134
typedef struct { int __val[2]; } __fsid_t; 
# 135
typedef long __clock_t; 
# 136
typedef unsigned long __rlim_t; 
# 137
typedef unsigned long __rlim64_t; 
# 138
typedef unsigned __id_t; 
# 139
typedef long __time_t; 
# 140
typedef unsigned __useconds_t; 
# 141
typedef long __suseconds_t; 
# 143
typedef int __daddr_t; 
# 144
typedef int __key_t; 
# 147
typedef int __clockid_t; 
# 150
typedef void *__timer_t; 
# 153
typedef long __blksize_t; 
# 158
typedef long __blkcnt_t; 
# 159
typedef long __blkcnt64_t; 
# 162
typedef unsigned long __fsblkcnt_t; 
# 163
typedef unsigned long __fsblkcnt64_t; 
# 166
typedef unsigned long __fsfilcnt_t; 
# 167
typedef unsigned long __fsfilcnt64_t; 
# 170
typedef long __fsword_t; 
# 172
typedef long __ssize_t; 
# 175
typedef long __syscall_slong_t; 
# 177
typedef unsigned long __syscall_ulong_t; 
# 181
typedef __off64_t __loff_t; 
# 182
typedef __quad_t *__qaddr_t; 
# 183
typedef char *__caddr_t; 
# 186
typedef long __intptr_t; 
# 189
typedef unsigned __socklen_t; 
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval { 
# 32
__time_t tv_sec; 
# 33
__suseconds_t tv_usec; 
# 34
}; 
# 25 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
struct timex { 
# 27
unsigned modes; 
# 28
__syscall_slong_t offset; 
# 29
__syscall_slong_t freq; 
# 30
__syscall_slong_t maxerror; 
# 31
__syscall_slong_t esterror; 
# 32
int status; 
# 33
__syscall_slong_t constant; 
# 34
__syscall_slong_t precision; 
# 35
__syscall_slong_t tolerance; 
# 36
timeval time; 
# 37
__syscall_slong_t tick; 
# 38
__syscall_slong_t ppsfreq; 
# 39
__syscall_slong_t jitter; 
# 40
int shift; 
# 41
__syscall_slong_t stabil; 
# 42
__syscall_slong_t jitcnt; 
# 43
__syscall_slong_t calcnt; 
# 44
__syscall_slong_t errcnt; 
# 45
__syscall_slong_t stbcnt; 
# 47
int tai; 
# 50
int:32; int:32; int:32; int:32; 
# 51
int:32; int:32; int:32; int:32; 
# 52
int:32; int:32; int:32; 
# 53
}; 
# 90 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
extern "C" {
# 93
extern int clock_adjtime(__clockid_t __clock_id, timex * __utx) throw(); 
# 95
}
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t; 
# 75 "/usr/include/time.h" 3
typedef __time_t time_t; 
# 91 "/usr/include/time.h" 3
typedef __clockid_t clockid_t; 
# 103 "/usr/include/time.h" 3
typedef __timer_t timer_t; 
# 120 "/usr/include/time.h" 3
struct timespec { 
# 122
__time_t tv_sec; 
# 123
__syscall_slong_t tv_nsec; 
# 124
}; 
# 133
struct tm { 
# 135
int tm_sec; 
# 136
int tm_min; 
# 137
int tm_hour; 
# 138
int tm_mday; 
# 139
int tm_mon; 
# 140
int tm_year; 
# 141
int tm_wday; 
# 142
int tm_yday; 
# 143
int tm_isdst; 
# 146
long tm_gmtoff; 
# 147
const char *tm_zone; 
# 152
}; 
# 161
struct itimerspec { 
# 163
timespec it_interval; 
# 164
timespec it_value; 
# 165
}; 
# 168
struct sigevent; 
# 174
typedef __pid_t pid_t; 
# 189 "/usr/include/time.h" 3
extern clock_t clock() throw(); 
# 192
extern time_t time(time_t * __timer) throw(); 
# 195
extern double difftime(time_t __time1, time_t __time0) throw()
# 196
 __attribute((const)); 
# 199
extern time_t mktime(tm * __tp) throw(); 
# 205
extern size_t strftime(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp) throw(); 
# 213
extern char *strptime(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp) throw(); 
# 223
extern size_t strftime_l(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp, __locale_t __loc) throw(); 
# 230
extern char *strptime_l(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp, __locale_t __loc) throw(); 
# 239
extern tm *gmtime(const time_t * __timer) throw(); 
# 243
extern tm *localtime(const time_t * __timer) throw(); 
# 249
extern tm *gmtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 254
extern tm *localtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 261
extern char *asctime(const tm * __tp) throw(); 
# 264
extern char *ctime(const time_t * __timer) throw(); 
# 272
extern char *asctime_r(const tm *__restrict__ __tp, char *__restrict__ __buf) throw(); 
# 276
extern char *ctime_r(const time_t *__restrict__ __timer, char *__restrict__ __buf) throw(); 
# 282
extern char *__tzname[2]; 
# 283
extern int __daylight; 
# 284
extern long __timezone; 
# 289
extern char *tzname[2]; 
# 293
extern void tzset() throw(); 
# 297
extern int daylight; 
# 298
extern long timezone; 
# 304
extern int stime(const time_t * __when) throw(); 
# 319 "/usr/include/time.h" 3
extern time_t timegm(tm * __tp) throw(); 
# 322
extern time_t timelocal(tm * __tp) throw(); 
# 325
extern int dysize(int __year) throw() __attribute((const)); 
# 334 "/usr/include/time.h" 3
extern int nanosleep(const timespec * __requested_time, timespec * __remaining); 
# 339
extern int clock_getres(clockid_t __clock_id, timespec * __res) throw(); 
# 342
extern int clock_gettime(clockid_t __clock_id, timespec * __tp) throw(); 
# 345
extern int clock_settime(clockid_t __clock_id, const timespec * __tp) throw(); 
# 353
extern int clock_nanosleep(clockid_t __clock_id, int __flags, const timespec * __req, timespec * __rem); 
# 358
extern int clock_getcpuclockid(pid_t __pid, clockid_t * __clock_id) throw(); 
# 363
extern int timer_create(clockid_t __clock_id, sigevent *__restrict__ __evp, timer_t *__restrict__ __timerid) throw(); 
# 368
extern int timer_delete(timer_t __timerid) throw(); 
# 371
extern int timer_settime(timer_t __timerid, int __flags, const itimerspec *__restrict__ __value, itimerspec *__restrict__ __ovalue) throw(); 
# 376
extern int timer_gettime(timer_t __timerid, itimerspec * __value) throw(); 
# 380
extern int timer_getoverrun(timer_t __timerid) throw(); 
# 386
extern int timespec_get(timespec * __ts, int __base) throw()
# 387
 __attribute((__nonnull__(1))); 
# 403 "/usr/include/time.h" 3
extern int getdate_err; 
# 412 "/usr/include/time.h" 3
extern tm *getdate(const char * __string); 
# 426 "/usr/include/time.h" 3
extern int getdate_r(const char *__restrict__ __string, tm *__restrict__ __resbufp); 
# 430
}
# 70 "/usr/local/cuda/bin/..//include/crt/common_functions.h"
extern "C" {
# 73
extern clock_t clock() throw(); 
# 78 "/usr/local/cuda/bin/..//include/crt/common_functions.h"
extern void *memset(void *, int, size_t) throw(); 
# 79 "/usr/local/cuda/bin/..//include/crt/common_functions.h"
extern void *memcpy(void *, const void *, size_t) throw(); 
# 81 "/usr/local/cuda/bin/..//include/crt/common_functions.h"
}
# 98 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern "C" {
# 168 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int abs(int) throw(); 
# 169 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern long labs(long) throw(); 
# 170 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern long long llabs(long long) throw(); 
# 220 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double fabs(double x) throw(); 
# 261 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float fabsf(float x) throw(); 
# 265 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern inline int min(int, int); 
# 267
extern inline unsigned umin(unsigned, unsigned); 
# 268
extern inline long long llmin(long long, long long); 
# 269
extern inline unsigned long long ullmin(unsigned long long, unsigned long long); 
# 290 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float fminf(float x, float y) throw(); 
# 310 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double fmin(double x, double y) throw(); 
# 317 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern inline int max(int, int); 
# 319
extern inline unsigned umax(unsigned, unsigned); 
# 320
extern inline long long llmax(long long, long long); 
# 321
extern inline unsigned long long ullmax(unsigned long long, unsigned long long); 
# 342 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float fmaxf(float x, float y) throw(); 
# 362 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double fmax(double, double) throw(); 
# 406 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double sin(double x) throw(); 
# 439 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double cos(double x) throw(); 
# 458 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern void sincos(double x, double * sptr, double * cptr) throw(); 
# 474 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern void sincosf(float x, float * sptr, float * cptr) throw(); 
# 519 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double tan(double x) throw(); 
# 588 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double sqrt(double x) throw(); 
# 660 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double rsqrt(double x); 
# 730 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float rsqrtf(float x); 
# 786 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double log2(double x) throw(); 
# 811 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double exp2(double x) throw(); 
# 836 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float exp2f(float x) throw(); 
# 863 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double exp10(double x) throw(); 
# 886 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float exp10f(float x) throw(); 
# 932 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double expm1(double x) throw(); 
# 977 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float expm1f(float x) throw(); 
# 1032 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float log2f(float x) throw(); 
# 1086 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double log10(double x) throw(); 
# 1157 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double log(double x) throw(); 
# 1251 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double log1p(double x) throw(); 
# 1348 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float log1pf(float x) throw(); 
# 1423 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double floor(double x) throw(); 
# 1462 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double exp(double x) throw(); 
# 1493 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double cosh(double x) throw(); 
# 1523 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double sinh(double x) throw(); 
# 1553 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double tanh(double x) throw(); 
# 1588 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double acosh(double x) throw(); 
# 1626 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float acoshf(float x) throw(); 
# 1642 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double asinh(double x) throw(); 
# 1658 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float asinhf(float x) throw(); 
# 1712 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double atanh(double x) throw(); 
# 1766 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float atanhf(float x) throw(); 
# 1825 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double ldexp(double x, int exp) throw(); 
# 1881 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float ldexpf(float x, int exp) throw(); 
# 1933 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double logb(double x) throw(); 
# 1988 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float logbf(float x) throw(); 
# 2018 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int ilogb(double x) throw(); 
# 2048 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int ilogbf(float x) throw(); 
# 2124 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double scalbn(double x, int n) throw(); 
# 2200 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float scalbnf(float x, int n) throw(); 
# 2276 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double scalbln(double x, long n) throw(); 
# 2352 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float scalblnf(float x, long n) throw(); 
# 2430 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double frexp(double x, int * nptr) throw(); 
# 2505 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float frexpf(float x, int * nptr) throw(); 
# 2519 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double round(double x) throw(); 
# 2536 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float roundf(float x) throw(); 
# 2554 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern long lround(double x) throw(); 
# 2572 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern long lroundf(float x) throw(); 
# 2590 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern long long llround(double x) throw(); 
# 2608 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern long long llroundf(float x) throw(); 
# 2660 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float rintf(float x) throw(); 
# 2676 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern long lrint(double x) throw(); 
# 2692 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern long lrintf(float x) throw(); 
# 2708 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern long long llrint(double x) throw(); 
# 2724 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern long long llrintf(float x) throw(); 
# 2777 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double nearbyint(double x) throw(); 
# 2830 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float nearbyintf(float x) throw(); 
# 2892 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double ceil(double x) throw(); 
# 2904 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double trunc(double x) throw(); 
# 2919 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float truncf(float x) throw(); 
# 2945 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double fdim(double x, double y) throw(); 
# 2971 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float fdimf(float x, float y) throw(); 
# 3007 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double atan2(double y, double x) throw(); 
# 3038 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double atan(double x) throw(); 
# 3061 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double acos(double x) throw(); 
# 3093 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double asin(double x) throw(); 
# 3139 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double hypot(double x, double y) throw(); 
# 3191 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double rhypot(double x, double y) throw(); 
# 3237 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float hypotf(float x, float y) throw(); 
# 3289 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float rhypotf(float x, float y) throw(); 
# 3333 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double norm3d(double a, double b, double c) throw(); 
# 3384 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double rnorm3d(double a, double b, double c) throw(); 
# 3433 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double norm4d(double a, double b, double c, double d) throw(); 
# 3489 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double rnorm4d(double a, double b, double c, double d) throw(); 
# 3534 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double norm(int dim, const double * t) throw(); 
# 3585 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double rnorm(int dim, const double * t) throw(); 
# 3637 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float rnormf(int dim, const float * a) throw(); 
# 3681 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float normf(int dim, const float * a) throw(); 
# 3726 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float norm3df(float a, float b, float c) throw(); 
# 3777 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float rnorm3df(float a, float b, float c) throw(); 
# 3826 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float norm4df(float a, float b, float c, float d) throw(); 
# 3882 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float rnorm4df(float a, float b, float c, float d) throw(); 
# 3969 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double cbrt(double x) throw(); 
# 4055 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float cbrtf(float x) throw(); 
# 4110 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double rcbrt(double x); 
# 4160 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float rcbrtf(float x); 
# 4220 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double sinpi(double x); 
# 4280 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float sinpif(float x); 
# 4332 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double cospi(double x); 
# 4384 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float cospif(float x); 
# 4414 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern void sincospi(double x, double * sptr, double * cptr); 
# 4444 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern void sincospif(float x, float * sptr, float * cptr); 
# 4756 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double pow(double x, double y) throw(); 
# 4812 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double modf(double x, double * iptr) throw(); 
# 4871 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double fmod(double x, double y) throw(); 
# 4957 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double remainder(double x, double y) throw(); 
# 5047 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float remainderf(float x, float y) throw(); 
# 5101 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double remquo(double x, double y, int * quo) throw(); 
# 5155 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float remquof(float x, float y, int * quo) throw(); 
# 5196 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double j0(double x) throw(); 
# 5238 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float j0f(float x) throw(); 
# 5299 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double j1(double x) throw(); 
# 5360 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float j1f(float x) throw(); 
# 5403 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double jn(int n, double x) throw(); 
# 5446 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float jnf(int n, float x) throw(); 
# 5498 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double y0(double x) throw(); 
# 5550 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float y0f(float x) throw(); 
# 5602 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double y1(double x) throw(); 
# 5654 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float y1f(float x) throw(); 
# 5707 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double yn(int n, double x) throw(); 
# 5760 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float ynf(int n, float x) throw(); 
# 5787 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double cyl_bessel_i0(double x) throw(); 
# 5813 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float cyl_bessel_i0f(float x) throw(); 
# 5840 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double cyl_bessel_i1(double x) throw(); 
# 5866 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float cyl_bessel_i1f(float x) throw(); 
# 5949 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double erf(double x) throw(); 
# 6031 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float erff(float x) throw(); 
# 6095 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double erfinv(double y); 
# 6152 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float erfinvf(float y); 
# 6191 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double erfc(double x) throw(); 
# 6229 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float erfcf(float x) throw(); 
# 6357 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double lgamma(double x) throw(); 
# 6420 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double erfcinv(double y); 
# 6476 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float erfcinvf(float y); 
# 6534 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double normcdfinv(double y); 
# 6592 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float normcdfinvf(float y); 
# 6635 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double normcdf(double y); 
# 6678 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float normcdff(float y); 
# 6753 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double erfcx(double x); 
# 6828 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float erfcxf(float x); 
# 6962 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float lgammaf(float x) throw(); 
# 7071 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double tgamma(double x) throw(); 
# 7180 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float tgammaf(float x) throw(); 
# 7193 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double copysign(double x, double y) throw(); 
# 7206 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float copysignf(float x, float y) throw(); 
# 7243 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double nextafter(double x, double y) throw(); 
# 7280 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float nextafterf(float x, float y) throw(); 
# 7296 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double nan(const char * tagp) throw(); 
# 7312 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float nanf(const char * tagp) throw(); 
# 7319 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __isinff(float) throw(); 
# 7320 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __isnanf(float) throw(); 
# 7330 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __finite(double) throw(); 
# 7331 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __finitef(float) throw(); 
# 7332 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __signbit(double) throw(); 
# 7333 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __isnan(double) throw(); 
# 7334 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __isinf(double) throw(); 
# 7337 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __signbitf(float) throw(); 
# 7496 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern double fma(double x, double y, double z) throw(); 
# 7654 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float fmaf(float x, float y, float z) throw(); 
# 7665 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __signbitl(long double) throw(); 
# 7671 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __finitel(long double) throw(); 
# 7672 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __isinfl(long double) throw(); 
# 7673 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern int __isnanl(long double) throw(); 
# 7723 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float acosf(float x) throw(); 
# 7763 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float asinf(float x) throw(); 
# 7803 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float atanf(float x) throw(); 
# 7836 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float atan2f(float y, float x) throw(); 
# 7860 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float cosf(float x) throw(); 
# 7902 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float sinf(float x) throw(); 
# 7944 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float tanf(float x) throw(); 
# 7968 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float coshf(float x) throw(); 
# 8009 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float sinhf(float x) throw(); 
# 8039 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float tanhf(float x) throw(); 
# 8090 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float logf(float x) throw(); 
# 8140 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float expf(float x) throw(); 
# 8191 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float log10f(float x) throw(); 
# 8246 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float modff(float x, float * iptr) throw(); 
# 8554 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float powf(float x, float y) throw(); 
# 8623 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float sqrtf(float x) throw(); 
# 8682 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float ceilf(float x) throw(); 
# 8754 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float floorf(float x) throw(); 
# 8813 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern float fmodf(float x, float y) throw(); 
# 8828 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
}
# 28 "/usr/include/math.h" 3
extern "C" {
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
typedef float float_t; 
# 29
typedef double double_t; 
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double acos(double __x) throw(); extern double __acos(double __x) throw(); 
# 56
extern double asin(double __x) throw(); extern double __asin(double __x) throw(); 
# 58
extern double atan(double __x) throw(); extern double __atan(double __x) throw(); 
# 60
extern double atan2(double __y, double __x) throw(); extern double __atan2(double __y, double __x) throw(); 
# 63
extern double cos(double __x) throw(); extern double __cos(double __x) throw(); 
# 65
extern double sin(double __x) throw(); extern double __sin(double __x) throw(); 
# 67
extern double tan(double __x) throw(); extern double __tan(double __x) throw(); 
# 72
extern double cosh(double __x) throw(); extern double __cosh(double __x) throw(); 
# 74
extern double sinh(double __x) throw(); extern double __sinh(double __x) throw(); 
# 76
extern double tanh(double __x) throw(); extern double __tanh(double __x) throw(); 
# 81
extern void sincos(double __x, double * __sinx, double * __cosx) throw(); extern void __sincos(double __x, double * __sinx, double * __cosx) throw(); 
# 88
extern double acosh(double __x) throw(); extern double __acosh(double __x) throw(); 
# 90
extern double asinh(double __x) throw(); extern double __asinh(double __x) throw(); 
# 92
extern double atanh(double __x) throw(); extern double __atanh(double __x) throw(); 
# 100
extern double exp(double __x) throw(); extern double __exp(double __x) throw(); 
# 103
extern double frexp(double __x, int * __exponent) throw(); extern double __frexp(double __x, int * __exponent) throw(); 
# 106
extern double ldexp(double __x, int __exponent) throw(); extern double __ldexp(double __x, int __exponent) throw(); 
# 109
extern double log(double __x) throw(); extern double __log(double __x) throw(); 
# 112
extern double log10(double __x) throw(); extern double __log10(double __x) throw(); 
# 115
extern double modf(double __x, double * __iptr) throw(); extern double __modf(double __x, double * __iptr) throw() __attribute((__nonnull__(2))); 
# 120
extern double exp10(double __x) throw(); extern double __exp10(double __x) throw(); 
# 122
extern double pow10(double __x) throw(); extern double __pow10(double __x) throw(); 
# 128
extern double expm1(double __x) throw(); extern double __expm1(double __x) throw(); 
# 131
extern double log1p(double __x) throw(); extern double __log1p(double __x) throw(); 
# 134
extern double logb(double __x) throw(); extern double __logb(double __x) throw(); 
# 141
extern double exp2(double __x) throw(); extern double __exp2(double __x) throw(); 
# 144
extern double log2(double __x) throw(); extern double __log2(double __x) throw(); 
# 153
extern double pow(double __x, double __y) throw(); extern double __pow(double __x, double __y) throw(); 
# 156
extern double sqrt(double __x) throw(); extern double __sqrt(double __x) throw(); 
# 162
extern double hypot(double __x, double __y) throw(); extern double __hypot(double __x, double __y) throw(); 
# 169
extern double cbrt(double __x) throw(); extern double __cbrt(double __x) throw(); 
# 178
extern double ceil(double __x) throw() __attribute((const)); extern double __ceil(double __x) throw() __attribute((const)); 
# 181
extern double fabs(double __x) throw() __attribute((const)); extern double __fabs(double __x) throw() __attribute((const)); 
# 184
extern double floor(double __x) throw() __attribute((const)); extern double __floor(double __x) throw() __attribute((const)); 
# 187
extern double fmod(double __x, double __y) throw(); extern double __fmod(double __x, double __y) throw(); 
# 192
extern int __isinf(double __value) throw() __attribute((const)); 
# 195
extern int __finite(double __value) throw() __attribute((const)); 
# 204
extern inline int isinf(double __value) throw() __attribute((const)); 
# 208
extern int finite(double __value) throw() __attribute((const)); 
# 211
extern double drem(double __x, double __y) throw(); extern double __drem(double __x, double __y) throw(); 
# 215
extern double significand(double __x) throw(); extern double __significand(double __x) throw(); 
# 221
extern double copysign(double __x, double __y) throw() __attribute((const)); extern double __copysign(double __x, double __y) throw() __attribute((const)); 
# 228
extern double nan(const char * __tagb) throw() __attribute((const)); extern double __nan(const char * __tagb) throw() __attribute((const)); 
# 234
extern int __isnan(double __value) throw() __attribute((const)); 
# 241
extern inline int isnan(double __value) throw() __attribute((const)); 
# 247
extern double j0(double) throw(); extern double __j0(double) throw(); 
# 248
extern double j1(double) throw(); extern double __j1(double) throw(); 
# 249
extern double jn(int, double) throw(); extern double __jn(int, double) throw(); 
# 250
extern double y0(double) throw(); extern double __y0(double) throw(); 
# 251
extern double y1(double) throw(); extern double __y1(double) throw(); 
# 252
extern double yn(int, double) throw(); extern double __yn(int, double) throw(); 
# 259
extern double erf(double) throw(); extern double __erf(double) throw(); 
# 260
extern double erfc(double) throw(); extern double __erfc(double) throw(); 
# 261
extern double lgamma(double) throw(); extern double __lgamma(double) throw(); 
# 268
extern double tgamma(double) throw(); extern double __tgamma(double) throw(); 
# 274
extern double gamma(double) throw(); extern double __gamma(double) throw(); 
# 281
extern double lgamma_r(double, int * __signgamp) throw(); extern double __lgamma_r(double, int * __signgamp) throw(); 
# 289
extern double rint(double __x) throw(); extern double __rint(double __x) throw(); 
# 292
extern double nextafter(double __x, double __y) throw() __attribute((const)); extern double __nextafter(double __x, double __y) throw() __attribute((const)); 
# 294
extern double nexttoward(double __x, long double __y) throw() __attribute((const)); extern double __nexttoward(double __x, long double __y) throw() __attribute((const)); 
# 298
extern double remainder(double __x, double __y) throw(); extern double __remainder(double __x, double __y) throw(); 
# 302
extern double scalbn(double __x, int __n) throw(); extern double __scalbn(double __x, int __n) throw(); 
# 306
extern int ilogb(double __x) throw(); extern int __ilogb(double __x) throw(); 
# 311
extern double scalbln(double __x, long __n) throw(); extern double __scalbln(double __x, long __n) throw(); 
# 315
extern double nearbyint(double __x) throw(); extern double __nearbyint(double __x) throw(); 
# 319
extern double round(double __x) throw() __attribute((const)); extern double __round(double __x) throw() __attribute((const)); 
# 323
extern double trunc(double __x) throw() __attribute((const)); extern double __trunc(double __x) throw() __attribute((const)); 
# 328
extern double remquo(double __x, double __y, int * __quo) throw(); extern double __remquo(double __x, double __y, int * __quo) throw(); 
# 335
extern long lrint(double __x) throw(); extern long __lrint(double __x) throw(); 
# 337
__extension__ extern long long llrint(double __x) throw(); extern long long __llrint(double __x) throw(); 
# 341
extern long lround(double __x) throw(); extern long __lround(double __x) throw(); 
# 343
__extension__ extern long long llround(double __x) throw(); extern long long __llround(double __x) throw(); 
# 347
extern double fdim(double __x, double __y) throw(); extern double __fdim(double __x, double __y) throw(); 
# 350
extern double fmax(double __x, double __y) throw() __attribute((const)); extern double __fmax(double __x, double __y) throw() __attribute((const)); 
# 353
extern double fmin(double __x, double __y) throw() __attribute((const)); extern double __fmin(double __x, double __y) throw() __attribute((const)); 
# 357
extern int __fpclassify(double __value) throw()
# 358
 __attribute((const)); 
# 361
extern int __signbit(double __value) throw()
# 362
 __attribute((const)); 
# 366
extern double fma(double __x, double __y, double __z) throw(); extern double __fma(double __x, double __y, double __z) throw(); 
# 375
extern int __issignaling(double __value) throw()
# 376
 __attribute((const)); 
# 383
extern double scalb(double __x, double __n) throw(); extern double __scalb(double __x, double __n) throw(); 
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern float acosf(float __x) throw(); extern float __acosf(float __x) throw(); 
# 56
extern float asinf(float __x) throw(); extern float __asinf(float __x) throw(); 
# 58
extern float atanf(float __x) throw(); extern float __atanf(float __x) throw(); 
# 60
extern float atan2f(float __y, float __x) throw(); extern float __atan2f(float __y, float __x) throw(); 
# 63
extern float cosf(float __x) throw(); 
# 65
extern float sinf(float __x) throw(); 
# 67
extern float tanf(float __x) throw(); 
# 72
extern float coshf(float __x) throw(); extern float __coshf(float __x) throw(); 
# 74
extern float sinhf(float __x) throw(); extern float __sinhf(float __x) throw(); 
# 76
extern float tanhf(float __x) throw(); extern float __tanhf(float __x) throw(); 
# 81
extern void sincosf(float __x, float * __sinx, float * __cosx) throw(); 
# 88
extern float acoshf(float __x) throw(); extern float __acoshf(float __x) throw(); 
# 90
extern float asinhf(float __x) throw(); extern float __asinhf(float __x) throw(); 
# 92
extern float atanhf(float __x) throw(); extern float __atanhf(float __x) throw(); 
# 100
extern float expf(float __x) throw(); 
# 103
extern float frexpf(float __x, int * __exponent) throw(); extern float __frexpf(float __x, int * __exponent) throw(); 
# 106
extern float ldexpf(float __x, int __exponent) throw(); extern float __ldexpf(float __x, int __exponent) throw(); 
# 109
extern float logf(float __x) throw(); 
# 112
extern float log10f(float __x) throw(); 
# 115
extern float modff(float __x, float * __iptr) throw(); extern float __modff(float __x, float * __iptr) throw() __attribute((__nonnull__(2))); 
# 120
extern float exp10f(float __x) throw(); 
# 122
extern float pow10f(float __x) throw(); extern float __pow10f(float __x) throw(); 
# 128
extern float expm1f(float __x) throw(); extern float __expm1f(float __x) throw(); 
# 131
extern float log1pf(float __x) throw(); extern float __log1pf(float __x) throw(); 
# 134
extern float logbf(float __x) throw(); extern float __logbf(float __x) throw(); 
# 141
extern float exp2f(float __x) throw(); extern float __exp2f(float __x) throw(); 
# 144
extern float log2f(float __x) throw(); 
# 153
extern float powf(float __x, float __y) throw(); 
# 156
extern float sqrtf(float __x) throw(); extern float __sqrtf(float __x) throw(); 
# 162
extern float hypotf(float __x, float __y) throw(); extern float __hypotf(float __x, float __y) throw(); 
# 169
extern float cbrtf(float __x) throw(); extern float __cbrtf(float __x) throw(); 
# 178
extern float ceilf(float __x) throw() __attribute((const)); extern float __ceilf(float __x) throw() __attribute((const)); 
# 181
extern float fabsf(float __x) throw() __attribute((const)); extern float __fabsf(float __x) throw() __attribute((const)); 
# 184
extern float floorf(float __x) throw() __attribute((const)); extern float __floorf(float __x) throw() __attribute((const)); 
# 187
extern float fmodf(float __x, float __y) throw(); extern float __fmodf(float __x, float __y) throw(); 
# 192
extern int __isinff(float __value) throw() __attribute((const)); 
# 195
extern int __finitef(float __value) throw() __attribute((const)); 
# 204
extern int isinff(float __value) throw() __attribute((const)); 
# 208
extern int finitef(float __value) throw() __attribute((const)); 
# 211
extern float dremf(float __x, float __y) throw(); extern float __dremf(float __x, float __y) throw(); 
# 215
extern float significandf(float __x) throw(); extern float __significandf(float __x) throw(); 
# 221
extern float copysignf(float __x, float __y) throw() __attribute((const)); extern float __copysignf(float __x, float __y) throw() __attribute((const)); 
# 228
extern float nanf(const char * __tagb) throw() __attribute((const)); extern float __nanf(const char * __tagb) throw() __attribute((const)); 
# 234
extern int __isnanf(float __value) throw() __attribute((const)); 
# 241
extern int isnanf(float __value) throw() __attribute((const)); 
# 247
extern float j0f(float) throw(); extern float __j0f(float) throw(); 
# 248
extern float j1f(float) throw(); extern float __j1f(float) throw(); 
# 249
extern float jnf(int, float) throw(); extern float __jnf(int, float) throw(); 
# 250
extern float y0f(float) throw(); extern float __y0f(float) throw(); 
# 251
extern float y1f(float) throw(); extern float __y1f(float) throw(); 
# 252
extern float ynf(int, float) throw(); extern float __ynf(int, float) throw(); 
# 259
extern float erff(float) throw(); extern float __erff(float) throw(); 
# 260
extern float erfcf(float) throw(); extern float __erfcf(float) throw(); 
# 261
extern float lgammaf(float) throw(); extern float __lgammaf(float) throw(); 
# 268
extern float tgammaf(float) throw(); extern float __tgammaf(float) throw(); 
# 274
extern float gammaf(float) throw(); extern float __gammaf(float) throw(); 
# 281
extern float lgammaf_r(float, int * __signgamp) throw(); extern float __lgammaf_r(float, int * __signgamp) throw(); 
# 289
extern float rintf(float __x) throw(); extern float __rintf(float __x) throw(); 
# 292
extern float nextafterf(float __x, float __y) throw() __attribute((const)); extern float __nextafterf(float __x, float __y) throw() __attribute((const)); 
# 294
extern float nexttowardf(float __x, long double __y) throw() __attribute((const)); extern float __nexttowardf(float __x, long double __y) throw() __attribute((const)); 
# 298
extern float remainderf(float __x, float __y) throw(); extern float __remainderf(float __x, float __y) throw(); 
# 302
extern float scalbnf(float __x, int __n) throw(); extern float __scalbnf(float __x, int __n) throw(); 
# 306
extern int ilogbf(float __x) throw(); extern int __ilogbf(float __x) throw(); 
# 311
extern float scalblnf(float __x, long __n) throw(); extern float __scalblnf(float __x, long __n) throw(); 
# 315
extern float nearbyintf(float __x) throw(); extern float __nearbyintf(float __x) throw(); 
# 319
extern float roundf(float __x) throw() __attribute((const)); extern float __roundf(float __x) throw() __attribute((const)); 
# 323
extern float truncf(float __x) throw() __attribute((const)); extern float __truncf(float __x) throw() __attribute((const)); 
# 328
extern float remquof(float __x, float __y, int * __quo) throw(); extern float __remquof(float __x, float __y, int * __quo) throw(); 
# 335
extern long lrintf(float __x) throw(); extern long __lrintf(float __x) throw(); 
# 337
__extension__ extern long long llrintf(float __x) throw(); extern long long __llrintf(float __x) throw(); 
# 341
extern long lroundf(float __x) throw(); extern long __lroundf(float __x) throw(); 
# 343
__extension__ extern long long llroundf(float __x) throw(); extern long long __llroundf(float __x) throw(); 
# 347
extern float fdimf(float __x, float __y) throw(); extern float __fdimf(float __x, float __y) throw(); 
# 350
extern float fmaxf(float __x, float __y) throw() __attribute((const)); extern float __fmaxf(float __x, float __y) throw() __attribute((const)); 
# 353
extern float fminf(float __x, float __y) throw() __attribute((const)); extern float __fminf(float __x, float __y) throw() __attribute((const)); 
# 357
extern int __fpclassifyf(float __value) throw()
# 358
 __attribute((const)); 
# 361
extern int __signbitf(float __value) throw()
# 362
 __attribute((const)); 
# 366
extern float fmaf(float __x, float __y, float __z) throw(); extern float __fmaf(float __x, float __y, float __z) throw(); 
# 375
extern int __issignalingf(float __value) throw()
# 376
 __attribute((const)); 
# 383
extern float scalbf(float __x, float __n) throw(); extern float __scalbf(float __x, float __n) throw(); 
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern long double acosl(long double __x) throw(); extern long double __acosl(long double __x) throw(); 
# 56
extern long double asinl(long double __x) throw(); extern long double __asinl(long double __x) throw(); 
# 58
extern long double atanl(long double __x) throw(); extern long double __atanl(long double __x) throw(); 
# 60
extern long double atan2l(long double __y, long double __x) throw(); extern long double __atan2l(long double __y, long double __x) throw(); 
# 63
extern long double cosl(long double __x) throw(); extern long double __cosl(long double __x) throw(); 
# 65
extern long double sinl(long double __x) throw(); extern long double __sinl(long double __x) throw(); 
# 67
extern long double tanl(long double __x) throw(); extern long double __tanl(long double __x) throw(); 
# 72
extern long double coshl(long double __x) throw(); extern long double __coshl(long double __x) throw(); 
# 74
extern long double sinhl(long double __x) throw(); extern long double __sinhl(long double __x) throw(); 
# 76
extern long double tanhl(long double __x) throw(); extern long double __tanhl(long double __x) throw(); 
# 81
extern void sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); extern void __sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); 
# 88
extern long double acoshl(long double __x) throw(); extern long double __acoshl(long double __x) throw(); 
# 90
extern long double asinhl(long double __x) throw(); extern long double __asinhl(long double __x) throw(); 
# 92
extern long double atanhl(long double __x) throw(); extern long double __atanhl(long double __x) throw(); 
# 100
extern long double expl(long double __x) throw(); extern long double __expl(long double __x) throw(); 
# 103
extern long double frexpl(long double __x, int * __exponent) throw(); extern long double __frexpl(long double __x, int * __exponent) throw(); 
# 106
extern long double ldexpl(long double __x, int __exponent) throw(); extern long double __ldexpl(long double __x, int __exponent) throw(); 
# 109
extern long double logl(long double __x) throw(); extern long double __logl(long double __x) throw(); 
# 112
extern long double log10l(long double __x) throw(); extern long double __log10l(long double __x) throw(); 
# 115
extern long double modfl(long double __x, long double * __iptr) throw(); extern long double __modfl(long double __x, long double * __iptr) throw() __attribute((__nonnull__(2))); 
# 120
extern long double exp10l(long double __x) throw(); extern long double __exp10l(long double __x) throw(); 
# 122
extern long double pow10l(long double __x) throw(); extern long double __pow10l(long double __x) throw(); 
# 128
extern long double expm1l(long double __x) throw(); extern long double __expm1l(long double __x) throw(); 
# 131
extern long double log1pl(long double __x) throw(); extern long double __log1pl(long double __x) throw(); 
# 134
extern long double logbl(long double __x) throw(); extern long double __logbl(long double __x) throw(); 
# 141
extern long double exp2l(long double __x) throw(); extern long double __exp2l(long double __x) throw(); 
# 144
extern long double log2l(long double __x) throw(); extern long double __log2l(long double __x) throw(); 
# 153
extern long double powl(long double __x, long double __y) throw(); extern long double __powl(long double __x, long double __y) throw(); 
# 156
extern long double sqrtl(long double __x) throw(); extern long double __sqrtl(long double __x) throw(); 
# 162
extern long double hypotl(long double __x, long double __y) throw(); extern long double __hypotl(long double __x, long double __y) throw(); 
# 169
extern long double cbrtl(long double __x) throw(); extern long double __cbrtl(long double __x) throw(); 
# 178
extern long double ceill(long double __x) throw() __attribute((const)); extern long double __ceill(long double __x) throw() __attribute((const)); 
# 181
extern long double fabsl(long double __x) throw() __attribute((const)); extern long double __fabsl(long double __x) throw() __attribute((const)); 
# 184
extern long double floorl(long double __x) throw() __attribute((const)); extern long double __floorl(long double __x) throw() __attribute((const)); 
# 187
extern long double fmodl(long double __x, long double __y) throw(); extern long double __fmodl(long double __x, long double __y) throw(); 
# 192
extern int __isinfl(long double __value) throw() __attribute((const)); 
# 195
extern int __finitel(long double __value) throw() __attribute((const)); 
# 204
extern int isinfl(long double __value) throw() __attribute((const)); 
# 208
extern int finitel(long double __value) throw() __attribute((const)); 
# 211
extern long double dreml(long double __x, long double __y) throw(); extern long double __dreml(long double __x, long double __y) throw(); 
# 215
extern long double significandl(long double __x) throw(); extern long double __significandl(long double __x) throw(); 
# 221
extern long double copysignl(long double __x, long double __y) throw() __attribute((const)); extern long double __copysignl(long double __x, long double __y) throw() __attribute((const)); 
# 228
extern long double nanl(const char * __tagb) throw() __attribute((const)); extern long double __nanl(const char * __tagb) throw() __attribute((const)); 
# 234
extern int __isnanl(long double __value) throw() __attribute((const)); 
# 241
extern int isnanl(long double __value) throw() __attribute((const)); 
# 247
extern long double j0l(long double) throw(); extern long double __j0l(long double) throw(); 
# 248
extern long double j1l(long double) throw(); extern long double __j1l(long double) throw(); 
# 249
extern long double jnl(int, long double) throw(); extern long double __jnl(int, long double) throw(); 
# 250
extern long double y0l(long double) throw(); extern long double __y0l(long double) throw(); 
# 251
extern long double y1l(long double) throw(); extern long double __y1l(long double) throw(); 
# 252
extern long double ynl(int, long double) throw(); extern long double __ynl(int, long double) throw(); 
# 259
extern long double erfl(long double) throw(); extern long double __erfl(long double) throw(); 
# 260
extern long double erfcl(long double) throw(); extern long double __erfcl(long double) throw(); 
# 261
extern long double lgammal(long double) throw(); extern long double __lgammal(long double) throw(); 
# 268
extern long double tgammal(long double) throw(); extern long double __tgammal(long double) throw(); 
# 274
extern long double gammal(long double) throw(); extern long double __gammal(long double) throw(); 
# 281
extern long double lgammal_r(long double, int * __signgamp) throw(); extern long double __lgammal_r(long double, int * __signgamp) throw(); 
# 289
extern long double rintl(long double __x) throw(); extern long double __rintl(long double __x) throw(); 
# 292
extern long double nextafterl(long double __x, long double __y) throw() __attribute((const)); extern long double __nextafterl(long double __x, long double __y) throw() __attribute((const)); 
# 294
extern long double nexttowardl(long double __x, long double __y) throw() __attribute((const)); extern long double __nexttowardl(long double __x, long double __y) throw() __attribute((const)); 
# 298
extern long double remainderl(long double __x, long double __y) throw(); extern long double __remainderl(long double __x, long double __y) throw(); 
# 302
extern long double scalbnl(long double __x, int __n) throw(); extern long double __scalbnl(long double __x, int __n) throw(); 
# 306
extern int ilogbl(long double __x) throw(); extern int __ilogbl(long double __x) throw(); 
# 311
extern long double scalblnl(long double __x, long __n) throw(); extern long double __scalblnl(long double __x, long __n) throw(); 
# 315
extern long double nearbyintl(long double __x) throw(); extern long double __nearbyintl(long double __x) throw(); 
# 319
extern long double roundl(long double __x) throw() __attribute((const)); extern long double __roundl(long double __x) throw() __attribute((const)); 
# 323
extern long double truncl(long double __x) throw() __attribute((const)); extern long double __truncl(long double __x) throw() __attribute((const)); 
# 328
extern long double remquol(long double __x, long double __y, int * __quo) throw(); extern long double __remquol(long double __x, long double __y, int * __quo) throw(); 
# 335
extern long lrintl(long double __x) throw(); extern long __lrintl(long double __x) throw(); 
# 337
__extension__ extern long long llrintl(long double __x) throw(); extern long long __llrintl(long double __x) throw(); 
# 341
extern long lroundl(long double __x) throw(); extern long __lroundl(long double __x) throw(); 
# 343
__extension__ extern long long llroundl(long double __x) throw(); extern long long __llroundl(long double __x) throw(); 
# 347
extern long double fdiml(long double __x, long double __y) throw(); extern long double __fdiml(long double __x, long double __y) throw(); 
# 350
extern long double fmaxl(long double __x, long double __y) throw() __attribute((const)); extern long double __fmaxl(long double __x, long double __y) throw() __attribute((const)); 
# 353
extern long double fminl(long double __x, long double __y) throw() __attribute((const)); extern long double __fminl(long double __x, long double __y) throw() __attribute((const)); 
# 357
extern int __fpclassifyl(long double __value) throw()
# 358
 __attribute((const)); 
# 361
extern int __signbitl(long double __value) throw()
# 362
 __attribute((const)); 
# 366
extern long double fmal(long double __x, long double __y, long double __z) throw(); extern long double __fmal(long double __x, long double __y, long double __z) throw(); 
# 375
extern int __issignalingl(long double __value) throw()
# 376
 __attribute((const)); 
# 383
extern long double scalbl(long double __x, long double __n) throw(); extern long double __scalbl(long double __x, long double __n) throw(); 
# 168 "/usr/include/math.h" 3
extern int signgam; 
# 210 "/usr/include/math.h" 3
enum { 
# 211
FP_NAN, 
# 214
FP_INFINITE, 
# 217
FP_ZERO, 
# 220
FP_SUBNORMAL, 
# 223
FP_NORMAL
# 226
}; 
# 354 "/usr/include/math.h" 3
typedef 
# 348
enum { 
# 349
_IEEE_ = (-1), 
# 350
_SVID_ = 0, 
# 351
_XOPEN_, 
# 352
_POSIX_, 
# 353
_ISOC_
# 354
} _LIB_VERSION_TYPE; 
# 359
extern _LIB_VERSION_TYPE _LIB_VERSION; 
# 370 "/usr/include/math.h" 3
struct __exception { 
# 375
int type; 
# 376
char *name; 
# 377
double arg1; 
# 378
double arg2; 
# 379
double retval; 
# 380
}; 
# 383
extern int matherr(__exception * __exc) throw(); 
# 534 "/usr/include/math.h" 3
}
# 34 "/usr/include/stdlib.h" 3
extern "C" {
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
typedef 
# 51
enum { 
# 52
P_ALL, 
# 53
P_PID, 
# 54
P_PGID
# 55
} idtype_t; 
# 45 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
static inline unsigned __bswap_32(unsigned __bsx) 
# 46
{ 
# 47
return __builtin_bswap32(__bsx); 
# 48
} 
# 109 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
static inline __uint64_t __bswap_64(__uint64_t __bsx) 
# 110
{ 
# 111
return __builtin_bswap64(__bsx); 
# 112
} 
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
union wait { 
# 68
int w_status; 
# 70
struct { 
# 72
unsigned __w_termsig:7; 
# 73
unsigned __w_coredump:1; 
# 74
unsigned __w_retcode:8; 
# 75
unsigned:16; 
# 83
} __wait_terminated; 
# 85
struct { 
# 87
unsigned __w_stopval:8; 
# 88
unsigned __w_stopsig:8; 
# 89
unsigned:16; 
# 96
} __wait_stopped; 
# 97
}; 
# 101 "/usr/include/stdlib.h" 3
typedef 
# 98
struct { 
# 99
int quot; 
# 100
int rem; 
# 101
} div_t; 
# 109
typedef 
# 106
struct { 
# 107
long quot; 
# 108
long rem; 
# 109
} ldiv_t; 
# 121
__extension__ typedef 
# 118
struct { 
# 119
long long quot; 
# 120
long long rem; 
# 121
} lldiv_t; 
# 139 "/usr/include/stdlib.h" 3
extern size_t __ctype_get_mb_cur_max() throw(); 
# 144
extern double atof(const char * __nptr) throw()
# 145
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 147
extern int atoi(const char * __nptr) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 150
extern long atol(const char * __nptr) throw()
# 151
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 157
__extension__ extern long long atoll(const char * __nptr) throw()
# 158
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 164
extern double strtod(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 166
 __attribute((__nonnull__(1))); 
# 172
extern float strtof(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 173
 __attribute((__nonnull__(1))); 
# 175
extern long double strtold(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 177
 __attribute((__nonnull__(1))); 
# 183
extern long strtol(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 185
 __attribute((__nonnull__(1))); 
# 187
extern unsigned long strtoul(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 189
 __attribute((__nonnull__(1))); 
# 195
__extension__ extern long long strtoq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 197
 __attribute((__nonnull__(1))); 
# 200
__extension__ extern unsigned long long strtouq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 202
 __attribute((__nonnull__(1))); 
# 209
__extension__ extern long long strtoll(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 211
 __attribute((__nonnull__(1))); 
# 214
__extension__ extern unsigned long long strtoull(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 216
 __attribute((__nonnull__(1))); 
# 239 "/usr/include/stdlib.h" 3
extern long strtol_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 241
 __attribute((__nonnull__(1, 4))); 
# 243
extern unsigned long strtoul_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 246
 __attribute((__nonnull__(1, 4))); 
# 249
__extension__ extern long long strtoll_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 252
 __attribute((__nonnull__(1, 4))); 
# 255
__extension__ extern unsigned long long strtoull_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 258
 __attribute((__nonnull__(1, 4))); 
# 260
extern double strtod_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 262
 __attribute((__nonnull__(1, 3))); 
# 264
extern float strtof_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 266
 __attribute((__nonnull__(1, 3))); 
# 268
extern long double strtold_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 271
 __attribute((__nonnull__(1, 3))); 
# 305 "/usr/include/stdlib.h" 3
extern char *l64a(long __n) throw(); 
# 308
extern long a64l(const char * __s) throw()
# 309
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" {
# 33
typedef __u_char u_char; 
# 34
typedef __u_short u_short; 
# 35
typedef __u_int u_int; 
# 36
typedef __u_long u_long; 
# 37
typedef __quad_t quad_t; 
# 38
typedef __u_quad_t u_quad_t; 
# 39
typedef __fsid_t fsid_t; 
# 44
typedef __loff_t loff_t; 
# 48
typedef __ino_t ino_t; 
# 55
typedef __ino64_t ino64_t; 
# 60
typedef __dev_t dev_t; 
# 65
typedef __gid_t gid_t; 
# 70
typedef __mode_t mode_t; 
# 75
typedef __nlink_t nlink_t; 
# 80
typedef __uid_t uid_t; 
# 86
typedef __off_t off_t; 
# 93
typedef __off64_t off64_t; 
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __id_t id_t; 
# 109
typedef __ssize_t ssize_t; 
# 115
typedef __daddr_t daddr_t; 
# 116
typedef __caddr_t caddr_t; 
# 122
typedef __key_t key_t; 
# 136 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __useconds_t useconds_t; 
# 140
typedef __suseconds_t suseconds_t; 
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef unsigned long ulong; 
# 151
typedef unsigned short ushort; 
# 152
typedef unsigned uint; 
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef signed char int8_t __attribute((__mode__(__QI__))); 
# 195
typedef short int16_t __attribute((__mode__(__HI__))); 
# 196
typedef int int32_t __attribute((__mode__(__SI__))); 
# 197
typedef long int64_t __attribute((__mode__(__DI__))); 
# 200
typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); 
# 201
typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); 
# 202
typedef unsigned u_int32_t __attribute((__mode__(__SI__))); 
# 203
typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); 
# 205
typedef long register_t __attribute((__mode__(__word__))); 
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t; 
# 30
typedef 
# 28
struct { 
# 29
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))]; 
# 30
} __sigset_t; 
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t; 
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef long __fd_mask; 
# 75 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef 
# 65
struct { 
# 69
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))]; 
# 75
} fd_set; 
# 82
typedef __fd_mask fd_mask; 
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern "C" {
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern int select(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, timeval *__restrict__ __timeout); 
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern int pselect(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, const timespec *__restrict__ __timeout, const __sigset_t *__restrict__ __sigmask); 
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
}
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" {
# 27
__extension__ extern unsigned gnu_dev_major(unsigned long long __dev) throw()
# 28
 __attribute((const)); 
# 30
__extension__ extern unsigned gnu_dev_minor(unsigned long long __dev) throw()
# 31
 __attribute((const)); 
# 33
__extension__ extern unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw()
# 35
 __attribute((const)); 
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
}
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t; 
# 235
typedef __blkcnt_t blkcnt_t; 
# 239
typedef __fsblkcnt_t fsblkcnt_t; 
# 243
typedef __fsfilcnt_t fsfilcnt_t; 
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blkcnt64_t blkcnt64_t; 
# 263
typedef __fsblkcnt64_t fsblkcnt64_t; 
# 264
typedef __fsfilcnt64_t fsfilcnt64_t; 
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long pthread_t; 
# 63
union pthread_attr_t { 
# 65
char __size[56]; 
# 66
long __align; 
# 67
}; 
# 69
typedef pthread_attr_t pthread_attr_t; 
# 79
typedef 
# 75
struct __pthread_internal_list { 
# 77
__pthread_internal_list *__prev; 
# 78
__pthread_internal_list *__next; 
# 79
} __pthread_list_t; 
# 128 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef 
# 91 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union { 
# 92
struct __pthread_mutex_s { 
# 94
int __lock; 
# 95
unsigned __count; 
# 96
int __owner; 
# 98
unsigned __nusers; 
# 102
int __kind; 
# 104
short __spins; 
# 105
short __elision; 
# 106
__pthread_list_t __list; 
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
} __data; 
# 126
char __size[40]; 
# 127
long __align; 
# 128
} pthread_mutex_t; 
# 134
typedef 
# 131
union { 
# 132
char __size[4]; 
# 133
int __align; 
# 134
} pthread_mutexattr_t; 
# 154
typedef 
# 140
union { 
# 142
struct { 
# 143
int __lock; 
# 144
unsigned __futex; 
# 145
__extension__ unsigned long long __total_seq; 
# 146
__extension__ unsigned long long __wakeup_seq; 
# 147
__extension__ unsigned long long __woken_seq; 
# 148
void *__mutex; 
# 149
unsigned __nwaiters; 
# 150
unsigned __broadcast_seq; 
# 151
} __data; 
# 152
char __size[48]; 
# 153
__extension__ long long __align; 
# 154
} pthread_cond_t; 
# 160
typedef 
# 157
union { 
# 158
char __size[4]; 
# 159
int __align; 
# 160
} pthread_condattr_t; 
# 164
typedef unsigned pthread_key_t; 
# 168
typedef int pthread_once_t; 
# 222 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef 
# 175 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
union { 
# 178
struct { 
# 179
int __lock; 
# 180
unsigned __nr_readers; 
# 181
unsigned __readers_wakeup; 
# 182
unsigned __writer_wakeup; 
# 183
unsigned __nr_readers_queued; 
# 184
unsigned __nr_writers_queued; 
# 185
int __writer; 
# 186
int __shared; 
# 187
signed char __rwelision; 
# 192
unsigned char __pad1[7]; 
# 195
unsigned long __pad2; 
# 198
unsigned __flags; 
# 200
} __data; 
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
char __size[56]; 
# 221
long __align; 
# 222
} pthread_rwlock_t; 
# 228
typedef 
# 225
union { 
# 226
char __size[8]; 
# 227
long __align; 
# 228
} pthread_rwlockattr_t; 
# 234
typedef volatile int pthread_spinlock_t; 
# 243
typedef 
# 240
union { 
# 241
char __size[32]; 
# 242
long __align; 
# 243
} pthread_barrier_t; 
# 249
typedef 
# 246
union { 
# 247
char __size[4]; 
# 248
int __align; 
# 249
} pthread_barrierattr_t; 
# 273 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
}
# 321 "/usr/include/stdlib.h" 3
extern long random() throw(); 
# 324
extern void srandom(unsigned __seed) throw(); 
# 330
extern char *initstate(unsigned __seed, char * __statebuf, size_t __statelen) throw()
# 331
 __attribute((__nonnull__(2))); 
# 335
extern char *setstate(char * __statebuf) throw() __attribute((__nonnull__(1))); 
# 343
struct random_data { 
# 345
int32_t *fptr; 
# 346
int32_t *rptr; 
# 347
int32_t *state; 
# 348
int rand_type; 
# 349
int rand_deg; 
# 350
int rand_sep; 
# 351
int32_t *end_ptr; 
# 352
}; 
# 354
extern int random_r(random_data *__restrict__ __buf, int32_t *__restrict__ __result) throw()
# 355
 __attribute((__nonnull__(1, 2))); 
# 357
extern int srandom_r(unsigned __seed, random_data * __buf) throw()
# 358
 __attribute((__nonnull__(2))); 
# 360
extern int initstate_r(unsigned __seed, char *__restrict__ __statebuf, size_t __statelen, random_data *__restrict__ __buf) throw()
# 363
 __attribute((__nonnull__(2, 4))); 
# 365
extern int setstate_r(char *__restrict__ __statebuf, random_data *__restrict__ __buf) throw()
# 367
 __attribute((__nonnull__(1, 2))); 
# 374
extern int rand() throw(); 
# 376
extern void srand(unsigned __seed) throw(); 
# 381
extern int rand_r(unsigned * __seed) throw(); 
# 389
extern double drand48() throw(); 
# 390
extern double erand48(unsigned short  __xsubi[3]) throw() __attribute((__nonnull__(1))); 
# 393
extern long lrand48() throw(); 
# 394
extern long nrand48(unsigned short  __xsubi[3]) throw()
# 395
 __attribute((__nonnull__(1))); 
# 398
extern long mrand48() throw(); 
# 399
extern long jrand48(unsigned short  __xsubi[3]) throw()
# 400
 __attribute((__nonnull__(1))); 
# 403
extern void srand48(long __seedval) throw(); 
# 404
extern unsigned short *seed48(unsigned short  __seed16v[3]) throw()
# 405
 __attribute((__nonnull__(1))); 
# 406
extern void lcong48(unsigned short  __param[7]) throw() __attribute((__nonnull__(1))); 
# 412
struct drand48_data { 
# 414
unsigned short __x[3]; 
# 415
unsigned short __old_x[3]; 
# 416
unsigned short __c; 
# 417
unsigned short __init; 
# 418
__extension__ unsigned long long __a; 
# 420
}; 
# 423
extern int drand48_r(drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 424
 __attribute((__nonnull__(1, 2))); 
# 425
extern int erand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 427
 __attribute((__nonnull__(1, 2))); 
# 430
extern int lrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 432
 __attribute((__nonnull__(1, 2))); 
# 433
extern int nrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 436
 __attribute((__nonnull__(1, 2))); 
# 439
extern int mrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 441
 __attribute((__nonnull__(1, 2))); 
# 442
extern int jrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 445
 __attribute((__nonnull__(1, 2))); 
# 448
extern int srand48_r(long __seedval, drand48_data * __buffer) throw()
# 449
 __attribute((__nonnull__(2))); 
# 451
extern int seed48_r(unsigned short  __seed16v[3], drand48_data * __buffer) throw()
# 452
 __attribute((__nonnull__(1, 2))); 
# 454
extern int lcong48_r(unsigned short  __param[7], drand48_data * __buffer) throw()
# 456
 __attribute((__nonnull__(1, 2))); 
# 466
extern void *malloc(size_t __size) throw() __attribute((__malloc__)); 
# 468
extern void *calloc(size_t __nmemb, size_t __size) throw()
# 469
 __attribute((__malloc__)); 
# 480
extern void *realloc(void * __ptr, size_t __size) throw()
# 481
 __attribute((__warn_unused_result__)); 
# 483
extern void free(void * __ptr) throw(); 
# 488
extern void cfree(void * __ptr) throw(); 
# 26 "/usr/include/alloca.h" 3
extern "C" {
# 32
extern void *alloca(size_t __size) throw(); 
# 38
}
# 498 "/usr/include/stdlib.h" 3
extern void *valloc(size_t __size) throw() __attribute((__malloc__)); 
# 503
extern int posix_memalign(void ** __memptr, size_t __alignment, size_t __size) throw()
# 504
 __attribute((__nonnull__(1))); 
# 509
extern void *aligned_alloc(size_t __alignment, size_t __size) throw()
# 510
 __attribute((__malloc__)) __attribute((__alloc_size__(2))); 
# 515
extern void abort() throw() __attribute((__noreturn__)); 
# 519
extern int atexit(void (* __func)(void)) throw() __attribute((__nonnull__(1))); 
# 524
extern "C++" int at_quick_exit(void (* __func)(void)) throw() __asm__("at_quick_exit")
# 525
 __attribute((__nonnull__(1))); 
# 535
extern int on_exit(void (* __func)(int __status, void * __arg), void * __arg) throw()
# 536
 __attribute((__nonnull__(1))); 
# 543
extern void exit(int __status) throw() __attribute((__noreturn__)); 
# 549
extern void quick_exit(int __status) throw() __attribute((__noreturn__)); 
# 557
extern void _Exit(int __status) throw() __attribute((__noreturn__)); 
# 564
extern char *getenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 570
extern char *secure_getenv(const char * __name) throw()
# 571
 __attribute((__nonnull__(1))); 
# 578
extern int putenv(char * __string) throw() __attribute((__nonnull__(1))); 
# 584
extern int setenv(const char * __name, const char * __value, int __replace) throw()
# 585
 __attribute((__nonnull__(2))); 
# 588
extern int unsetenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 595
extern int clearenv() throw(); 
# 606 "/usr/include/stdlib.h" 3
extern char *mktemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 619 "/usr/include/stdlib.h" 3
extern int mkstemp(char * __template) __attribute((__nonnull__(1))); 
# 629 "/usr/include/stdlib.h" 3
extern int mkstemp64(char * __template) __attribute((__nonnull__(1))); 
# 641 "/usr/include/stdlib.h" 3
extern int mkstemps(char * __template, int __suffixlen) __attribute((__nonnull__(1))); 
# 651 "/usr/include/stdlib.h" 3
extern int mkstemps64(char * __template, int __suffixlen)
# 652
 __attribute((__nonnull__(1))); 
# 662 "/usr/include/stdlib.h" 3
extern char *mkdtemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 673 "/usr/include/stdlib.h" 3
extern int mkostemp(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 683 "/usr/include/stdlib.h" 3
extern int mkostemp64(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 693 "/usr/include/stdlib.h" 3
extern int mkostemps(char * __template, int __suffixlen, int __flags)
# 694
 __attribute((__nonnull__(1))); 
# 705 "/usr/include/stdlib.h" 3
extern int mkostemps64(char * __template, int __suffixlen, int __flags)
# 706
 __attribute((__nonnull__(1))); 
# 716
extern int system(const char * __command); 
# 723
extern char *canonicalize_file_name(const char * __name) throw()
# 724
 __attribute((__nonnull__(1))); 
# 733 "/usr/include/stdlib.h" 3
extern char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) throw(); 
# 741
typedef int (*__compar_fn_t)(const void *, const void *); 
# 744
typedef __compar_fn_t comparison_fn_t; 
# 748
typedef int (*__compar_d_fn_t)(const void *, const void *, void *); 
# 754
extern void *bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 756
 __attribute((__nonnull__(1, 2, 5))); 
# 764
extern void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 765
 __attribute((__nonnull__(1, 4))); 
# 767
extern void qsort_r(void * __base, size_t __nmemb, size_t __size, __compar_d_fn_t __compar, void * __arg)
# 769
 __attribute((__nonnull__(1, 4))); 
# 774
extern int abs(int __x) throw() __attribute((const)); 
# 775
extern long labs(long __x) throw() __attribute((const)); 
# 779
__extension__ extern long long llabs(long long __x) throw()
# 780
 __attribute((const)); 
# 788
extern div_t div(int __numer, int __denom) throw()
# 789
 __attribute((const)); 
# 790
extern ldiv_t ldiv(long __numer, long __denom) throw()
# 791
 __attribute((const)); 
# 796
__extension__ extern lldiv_t lldiv(long long __numer, long long __denom) throw()
# 798
 __attribute((const)); 
# 811 "/usr/include/stdlib.h" 3
extern char *ecvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 812
 __attribute((__nonnull__(3, 4))); 
# 817
extern char *fcvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 818
 __attribute((__nonnull__(3, 4))); 
# 823
extern char *gcvt(double __value, int __ndigit, char * __buf) throw()
# 824
 __attribute((__nonnull__(3))); 
# 829
extern char *qecvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 831
 __attribute((__nonnull__(3, 4))); 
# 832
extern char *qfcvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 834
 __attribute((__nonnull__(3, 4))); 
# 835
extern char *qgcvt(long double __value, int __ndigit, char * __buf) throw()
# 836
 __attribute((__nonnull__(3))); 
# 841
extern int ecvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 843
 __attribute((__nonnull__(3, 4, 5))); 
# 844
extern int fcvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 846
 __attribute((__nonnull__(3, 4, 5))); 
# 848
extern int qecvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 851
 __attribute((__nonnull__(3, 4, 5))); 
# 852
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 855
 __attribute((__nonnull__(3, 4, 5))); 
# 862
extern int mblen(const char * __s, size_t __n) throw(); 
# 865
extern int mbtowc(wchar_t *__restrict__ __pwc, const char *__restrict__ __s, size_t __n) throw(); 
# 869
extern int wctomb(char * __s, wchar_t __wchar) throw(); 
# 873
extern size_t mbstowcs(wchar_t *__restrict__ __pwcs, const char *__restrict__ __s, size_t __n) throw(); 
# 876
extern size_t wcstombs(char *__restrict__ __s, const wchar_t *__restrict__ __pwcs, size_t __n) throw(); 
# 887
extern int rpmatch(const char * __response) throw() __attribute((__nonnull__(1))); 
# 898 "/usr/include/stdlib.h" 3
extern int getsubopt(char **__restrict__ __optionp, char *const *__restrict__ __tokens, char **__restrict__ __valuep) throw()
# 901
 __attribute((__nonnull__(1, 2, 3))); 
# 907
extern void setkey(const char * __key) throw() __attribute((__nonnull__(1))); 
# 915
extern int posix_openpt(int __oflag); 
# 923
extern int grantpt(int __fd) throw(); 
# 927
extern int unlockpt(int __fd) throw(); 
# 932
extern char *ptsname(int __fd) throw(); 
# 939
extern int ptsname_r(int __fd, char * __buf, size_t __buflen) throw()
# 940
 __attribute((__nonnull__(2))); 
# 943
extern int getpt(); 
# 950
extern int getloadavg(double  __loadavg[], int __nelem) throw()
# 951
 __attribute((__nonnull__(1))); 
# 967 "/usr/include/stdlib.h" 3
}
# 194 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3
namespace std { 
# 196
typedef unsigned long size_t; 
# 197
typedef long ptrdiff_t; 
# 202
}
# 216 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3
namespace std { 
# 218
inline namespace __cxx11 __attribute((__abi_tag__("cxx11"))) { }
# 219
}
# 220
namespace __gnu_cxx { 
# 222
inline namespace __cxx11 __attribute((__abi_tag__("cxx11"))) { }
# 223
}
# 68 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 72
template< class _Iterator, class _Container> class __normal_iterator; 
# 76
}
# 78
namespace std __attribute((__visibility__("default"))) { 
# 82
struct __true_type { }; 
# 83
struct __false_type { }; 
# 85
template< bool > 
# 86
struct __truth_type { 
# 87
typedef __false_type __type; }; 
# 90
template<> struct __truth_type< true>  { 
# 91
typedef __true_type __type; }; 
# 95
template< class _Sp, class _Tp> 
# 96
struct __traitor { 
# 98
enum { __value = ((bool)_Sp::__value) || ((bool)_Tp::__value)}; 
# 99
typedef typename __truth_type< __value> ::__type __type; 
# 100
}; 
# 103
template< class , class > 
# 104
struct __are_same { 
# 106
enum { __value}; 
# 107
typedef __false_type __type; 
# 108
}; 
# 110
template< class _Tp> 
# 111
struct __are_same< _Tp, _Tp>  { 
# 113
enum { __value = 1}; 
# 114
typedef __true_type __type; 
# 115
}; 
# 118
template< class _Tp> 
# 119
struct __is_void { 
# 121
enum { __value}; 
# 122
typedef __false_type __type; 
# 123
}; 
# 126
template<> struct __is_void< void>  { 
# 128
enum { __value = 1}; 
# 129
typedef __true_type __type; 
# 130
}; 
# 135
template< class _Tp> 
# 136
struct __is_integer { 
# 138
enum { __value}; 
# 139
typedef __false_type __type; 
# 140
}; 
# 147
template<> struct __is_integer< bool>  { 
# 149
enum { __value = 1}; 
# 150
typedef __true_type __type; 
# 151
}; 
# 154
template<> struct __is_integer< char>  { 
# 156
enum { __value = 1}; 
# 157
typedef __true_type __type; 
# 158
}; 
# 161
template<> struct __is_integer< signed char>  { 
# 163
enum { __value = 1}; 
# 164
typedef __true_type __type; 
# 165
}; 
# 168
template<> struct __is_integer< unsigned char>  { 
# 170
enum { __value = 1}; 
# 171
typedef __true_type __type; 
# 172
}; 
# 176
template<> struct __is_integer< wchar_t>  { 
# 178
enum { __value = 1}; 
# 179
typedef __true_type __type; 
# 180
}; 
# 200 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< short>  { 
# 202
enum { __value = 1}; 
# 203
typedef __true_type __type; 
# 204
}; 
# 207
template<> struct __is_integer< unsigned short>  { 
# 209
enum { __value = 1}; 
# 210
typedef __true_type __type; 
# 211
}; 
# 214
template<> struct __is_integer< int>  { 
# 216
enum { __value = 1}; 
# 217
typedef __true_type __type; 
# 218
}; 
# 221
template<> struct __is_integer< unsigned>  { 
# 223
enum { __value = 1}; 
# 224
typedef __true_type __type; 
# 225
}; 
# 228
template<> struct __is_integer< long>  { 
# 230
enum { __value = 1}; 
# 231
typedef __true_type __type; 
# 232
}; 
# 235
template<> struct __is_integer< unsigned long>  { 
# 237
enum { __value = 1}; 
# 238
typedef __true_type __type; 
# 239
}; 
# 242
template<> struct __is_integer< long long>  { 
# 244
enum { __value = 1}; 
# 245
typedef __true_type __type; 
# 246
}; 
# 249
template<> struct __is_integer< unsigned long long>  { 
# 251
enum { __value = 1}; 
# 252
typedef __true_type __type; 
# 253
}; 
# 270 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
template<> struct __is_integer< __int128_t>  { enum { __value = 1}; typedef __true_type __type; }; template<> struct __is_integer< __uint128_t>  { enum { __value = 1}; typedef __true_type __type; }; 
# 287 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
template< class _Tp> 
# 288
struct __is_floating { 
# 290
enum { __value}; 
# 291
typedef __false_type __type; 
# 292
}; 
# 296
template<> struct __is_floating< float>  { 
# 298
enum { __value = 1}; 
# 299
typedef __true_type __type; 
# 300
}; 
# 303
template<> struct __is_floating< double>  { 
# 305
enum { __value = 1}; 
# 306
typedef __true_type __type; 
# 307
}; 
# 310
template<> struct __is_floating< long double>  { 
# 312
enum { __value = 1}; 
# 313
typedef __true_type __type; 
# 314
}; 
# 319
template< class _Tp> 
# 320
struct __is_pointer { 
# 322
enum { __value}; 
# 323
typedef __false_type __type; 
# 324
}; 
# 326
template< class _Tp> 
# 327
struct __is_pointer< _Tp *>  { 
# 329
enum { __value = 1}; 
# 330
typedef __true_type __type; 
# 331
}; 
# 336
template< class _Tp> 
# 337
struct __is_normal_iterator { 
# 339
enum { __value}; 
# 340
typedef __false_type __type; 
# 341
}; 
# 343
template< class _Iterator, class _Container> 
# 344
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> >  { 
# 347
enum { __value = 1}; 
# 348
typedef __true_type __type; 
# 349
}; 
# 354
template< class _Tp> 
# 355
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> >  { 
# 357
}; 
# 362
template< class _Tp> 
# 363
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> >  { 
# 365
}; 
# 370
template< class _Tp> 
# 371
struct __is_char { 
# 373
enum { __value}; 
# 374
typedef __false_type __type; 
# 375
}; 
# 378
template<> struct __is_char< char>  { 
# 380
enum { __value = 1}; 
# 381
typedef __true_type __type; 
# 382
}; 
# 386
template<> struct __is_char< wchar_t>  { 
# 388
enum { __value = 1}; 
# 389
typedef __true_type __type; 
# 390
}; 
# 393
template< class _Tp> 
# 394
struct __is_byte { 
# 396
enum { __value}; 
# 397
typedef __false_type __type; 
# 398
}; 
# 401
template<> struct __is_byte< char>  { 
# 403
enum { __value = 1}; 
# 404
typedef __true_type __type; 
# 405
}; 
# 408
template<> struct __is_byte< signed char>  { 
# 410
enum { __value = 1}; 
# 411
typedef __true_type __type; 
# 412
}; 
# 415
template<> struct __is_byte< unsigned char>  { 
# 417
enum { __value = 1}; 
# 418
typedef __true_type __type; 
# 419
}; 
# 424
template< class _Tp> 
# 425
struct __is_move_iterator { 
# 427
enum { __value}; 
# 428
typedef __false_type __type; 
# 429
}; 
# 444 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
}
# 37 "/usr/include/c++/5/ext/type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 42
template< bool , class > 
# 43
struct __enable_if { 
# 44
}; 
# 46
template< class _Tp> 
# 47
struct __enable_if< true, _Tp>  { 
# 48
typedef _Tp __type; }; 
# 52
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 53
struct __conditional_type { 
# 54
typedef _Iftrue __type; }; 
# 56
template< class _Iftrue, class _Iffalse> 
# 57
struct __conditional_type< false, _Iftrue, _Iffalse>  { 
# 58
typedef _Iffalse __type; }; 
# 62
template< class _Tp> 
# 63
struct __add_unsigned { 
# 66
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 69
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 70
}; 
# 73
template<> struct __add_unsigned< char>  { 
# 74
typedef unsigned char __type; }; 
# 77
template<> struct __add_unsigned< signed char>  { 
# 78
typedef unsigned char __type; }; 
# 81
template<> struct __add_unsigned< short>  { 
# 82
typedef unsigned short __type; }; 
# 85
template<> struct __add_unsigned< int>  { 
# 86
typedef unsigned __type; }; 
# 89
template<> struct __add_unsigned< long>  { 
# 90
typedef unsigned long __type; }; 
# 93
template<> struct __add_unsigned< long long>  { 
# 94
typedef unsigned long long __type; }; 
# 98
template<> struct __add_unsigned< bool> ; 
# 101
template<> struct __add_unsigned< wchar_t> ; 
# 105
template< class _Tp> 
# 106
struct __remove_unsigned { 
# 109
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 112
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 113
}; 
# 116
template<> struct __remove_unsigned< char>  { 
# 117
typedef signed char __type; }; 
# 120
template<> struct __remove_unsigned< unsigned char>  { 
# 121
typedef signed char __type; }; 
# 124
template<> struct __remove_unsigned< unsigned short>  { 
# 125
typedef short __type; }; 
# 128
template<> struct __remove_unsigned< unsigned>  { 
# 129
typedef int __type; }; 
# 132
template<> struct __remove_unsigned< unsigned long>  { 
# 133
typedef long __type; }; 
# 136
template<> struct __remove_unsigned< unsigned long long>  { 
# 137
typedef long long __type; }; 
# 141
template<> struct __remove_unsigned< bool> ; 
# 144
template<> struct __remove_unsigned< wchar_t> ; 
# 148
template< class _Type> inline bool 
# 150
__is_null_pointer(_Type *__ptr) 
# 151
{ return __ptr == 0; } 
# 153
template< class _Type> inline bool 
# 155
__is_null_pointer(_Type) 
# 156
{ return false; } 
# 165 "/usr/include/c++/5/ext/type_traits.h" 3
template< class _Tp, bool  = std::__is_integer< _Tp> ::__value> 
# 166
struct __promote { 
# 167
typedef double __type; }; 
# 172
template< class _Tp> 
# 173
struct __promote< _Tp, false>  { 
# 174
}; 
# 177
template<> struct __promote< long double>  { 
# 178
typedef long double __type; }; 
# 181
template<> struct __promote< double>  { 
# 182
typedef double __type; }; 
# 185
template<> struct __promote< float>  { 
# 186
typedef float __type; }; 
# 188
template< class _Tp, class _Up, class 
# 189
_Tp2 = typename __promote< _Tp> ::__type, class 
# 190
_Up2 = typename __promote< _Up> ::__type> 
# 191
struct __promote_2 { 
# 193
typedef __typeof__(_Tp2() + _Up2()) __type; 
# 194
}; 
# 196
template< class _Tp, class _Up, class _Vp, class 
# 197
_Tp2 = typename __promote< _Tp> ::__type, class 
# 198
_Up2 = typename __promote< _Up> ::__type, class 
# 199
_Vp2 = typename __promote< _Vp> ::__type> 
# 200
struct __promote_3 { 
# 202
typedef __typeof__((_Tp2() + _Up2()) + _Vp2()) __type; 
# 203
}; 
# 205
template< class _Tp, class _Up, class _Vp, class _Wp, class 
# 206
_Tp2 = typename __promote< _Tp> ::__type, class 
# 207
_Up2 = typename __promote< _Up> ::__type, class 
# 208
_Vp2 = typename __promote< _Vp> ::__type, class 
# 209
_Wp2 = typename __promote< _Wp> ::__type> 
# 210
struct __promote_4 { 
# 212
typedef __typeof__(((_Tp2() + _Up2()) + _Vp2()) + _Wp2()) __type; 
# 213
}; 
# 216
}
# 75 "/usr/include/c++/5/cmath" 3
namespace std __attribute((__visibility__("default"))) { 
# 81
inline double abs(double __x) 
# 82
{ return __builtin_fabs(__x); } 
# 87
inline float abs(float __x) 
# 88
{ return __builtin_fabsf(__x); } 
# 91
inline long double abs(long double __x) 
# 92
{ return __builtin_fabsl(__x); } 
# 95
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 99
abs(_Tp __x) 
# 100
{ return __builtin_fabs(__x); } 
# 102
using ::acos;
# 106
inline float acos(float __x) 
# 107
{ return __builtin_acosf(__x); } 
# 110
inline long double acos(long double __x) 
# 111
{ return __builtin_acosl(__x); } 
# 114
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 118
acos(_Tp __x) 
# 119
{ return __builtin_acos(__x); } 
# 121
using ::asin;
# 125
inline float asin(float __x) 
# 126
{ return __builtin_asinf(__x); } 
# 129
inline long double asin(long double __x) 
# 130
{ return __builtin_asinl(__x); } 
# 133
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 137
asin(_Tp __x) 
# 138
{ return __builtin_asin(__x); } 
# 140
using ::atan;
# 144
inline float atan(float __x) 
# 145
{ return __builtin_atanf(__x); } 
# 148
inline long double atan(long double __x) 
# 149
{ return __builtin_atanl(__x); } 
# 152
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 156
atan(_Tp __x) 
# 157
{ return __builtin_atan(__x); } 
# 159
using ::atan2;
# 163
inline float atan2(float __y, float __x) 
# 164
{ return __builtin_atan2f(__y, __x); } 
# 167
inline long double atan2(long double __y, long double __x) 
# 168
{ return __builtin_atan2l(__y, __x); } 
# 171
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 174
atan2(_Tp __y, _Up __x) 
# 175
{ 
# 176
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 177
return atan2((__type)__y, (__type)__x); 
# 178
} 
# 180
using ::ceil;
# 184
inline float ceil(float __x) 
# 185
{ return __builtin_ceilf(__x); } 
# 188
inline long double ceil(long double __x) 
# 189
{ return __builtin_ceill(__x); } 
# 192
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 196
ceil(_Tp __x) 
# 197
{ return __builtin_ceil(__x); } 
# 199
using ::cos;
# 203
inline float cos(float __x) 
# 204
{ return __builtin_cosf(__x); } 
# 207
inline long double cos(long double __x) 
# 208
{ return __builtin_cosl(__x); } 
# 211
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 215
cos(_Tp __x) 
# 216
{ return __builtin_cos(__x); } 
# 218
using ::cosh;
# 222
inline float cosh(float __x) 
# 223
{ return __builtin_coshf(__x); } 
# 226
inline long double cosh(long double __x) 
# 227
{ return __builtin_coshl(__x); } 
# 230
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 234
cosh(_Tp __x) 
# 235
{ return __builtin_cosh(__x); } 
# 237
using ::exp;
# 241
inline float exp(float __x) 
# 242
{ return __builtin_expf(__x); } 
# 245
inline long double exp(long double __x) 
# 246
{ return __builtin_expl(__x); } 
# 249
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 253
exp(_Tp __x) 
# 254
{ return __builtin_exp(__x); } 
# 256
using ::fabs;
# 260
inline float fabs(float __x) 
# 261
{ return __builtin_fabsf(__x); } 
# 264
inline long double fabs(long double __x) 
# 265
{ return __builtin_fabsl(__x); } 
# 268
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 272
fabs(_Tp __x) 
# 273
{ return __builtin_fabs(__x); } 
# 275
using ::floor;
# 279
inline float floor(float __x) 
# 280
{ return __builtin_floorf(__x); } 
# 283
inline long double floor(long double __x) 
# 284
{ return __builtin_floorl(__x); } 
# 287
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 291
floor(_Tp __x) 
# 292
{ return __builtin_floor(__x); } 
# 294
using ::fmod;
# 298
inline float fmod(float __x, float __y) 
# 299
{ return __builtin_fmodf(__x, __y); } 
# 302
inline long double fmod(long double __x, long double __y) 
# 303
{ return __builtin_fmodl(__x, __y); } 
# 306
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 309
fmod(_Tp __x, _Up __y) 
# 310
{ 
# 311
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 312
return fmod((__type)__x, (__type)__y); 
# 313
} 
# 315
using ::frexp;
# 319
inline float frexp(float __x, int *__exp) 
# 320
{ return __builtin_frexpf(__x, __exp); } 
# 323
inline long double frexp(long double __x, int *__exp) 
# 324
{ return __builtin_frexpl(__x, __exp); } 
# 327
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 331
frexp(_Tp __x, int *__exp) 
# 332
{ return __builtin_frexp(__x, __exp); } 
# 334
using ::ldexp;
# 338
inline float ldexp(float __x, int __exp) 
# 339
{ return __builtin_ldexpf(__x, __exp); } 
# 342
inline long double ldexp(long double __x, int __exp) 
# 343
{ return __builtin_ldexpl(__x, __exp); } 
# 346
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 350
ldexp(_Tp __x, int __exp) 
# 351
{ return __builtin_ldexp(__x, __exp); } 
# 353
using ::log;
# 357
inline float log(float __x) 
# 358
{ return __builtin_logf(__x); } 
# 361
inline long double log(long double __x) 
# 362
{ return __builtin_logl(__x); } 
# 365
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 369
log(_Tp __x) 
# 370
{ return __builtin_log(__x); } 
# 372
using ::log10;
# 376
inline float log10(float __x) 
# 377
{ return __builtin_log10f(__x); } 
# 380
inline long double log10(long double __x) 
# 381
{ return __builtin_log10l(__x); } 
# 384
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 388
log10(_Tp __x) 
# 389
{ return __builtin_log10(__x); } 
# 391
using ::modf;
# 395
inline float modf(float __x, float *__iptr) 
# 396
{ return __builtin_modff(__x, __iptr); } 
# 399
inline long double modf(long double __x, long double *__iptr) 
# 400
{ return __builtin_modfl(__x, __iptr); } 
# 403
using ::pow;
# 407
inline float pow(float __x, float __y) 
# 408
{ return __builtin_powf(__x, __y); } 
# 411
inline long double pow(long double __x, long double __y) 
# 412
{ return __builtin_powl(__x, __y); } 
# 418
inline double pow(double __x, int __i) 
# 419
{ return __builtin_powi(__x, __i); } 
# 422
inline float pow(float __x, int __n) 
# 423
{ return __builtin_powif(__x, __n); } 
# 426
inline long double pow(long double __x, int __n) 
# 427
{ return __builtin_powil(__x, __n); } 
# 431
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 434
pow(_Tp __x, _Up __y) 
# 435
{ 
# 436
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 437
return pow((__type)__x, (__type)__y); 
# 438
} 
# 440
using ::sin;
# 444
inline float sin(float __x) 
# 445
{ return __builtin_sinf(__x); } 
# 448
inline long double sin(long double __x) 
# 449
{ return __builtin_sinl(__x); } 
# 452
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 456
sin(_Tp __x) 
# 457
{ return __builtin_sin(__x); } 
# 459
using ::sinh;
# 463
inline float sinh(float __x) 
# 464
{ return __builtin_sinhf(__x); } 
# 467
inline long double sinh(long double __x) 
# 468
{ return __builtin_sinhl(__x); } 
# 471
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 475
sinh(_Tp __x) 
# 476
{ return __builtin_sinh(__x); } 
# 478
using ::sqrt;
# 482
inline float sqrt(float __x) 
# 483
{ return __builtin_sqrtf(__x); } 
# 486
inline long double sqrt(long double __x) 
# 487
{ return __builtin_sqrtl(__x); } 
# 490
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 494
sqrt(_Tp __x) 
# 495
{ return __builtin_sqrt(__x); } 
# 497
using ::tan;
# 501
inline float tan(float __x) 
# 502
{ return __builtin_tanf(__x); } 
# 505
inline long double tan(long double __x) 
# 506
{ return __builtin_tanl(__x); } 
# 509
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 513
tan(_Tp __x) 
# 514
{ return __builtin_tan(__x); } 
# 516
using ::tanh;
# 520
inline float tanh(float __x) 
# 521
{ return __builtin_tanhf(__x); } 
# 524
inline long double tanh(long double __x) 
# 525
{ return __builtin_tanhl(__x); } 
# 528
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 532
tanh(_Tp __x) 
# 533
{ return __builtin_tanh(__x); } 
# 536
}
# 555 "/usr/include/c++/5/cmath" 3
namespace std __attribute((__visibility__("default"))) { 
# 831 "/usr/include/c++/5/cmath" 3
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 834
fpclassify(_Tp __f) 
# 835
{ 
# 836
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 837
return __builtin_fpclassify(0, 1, 4, 3, 2, (__type)__f); 
# 839
} 
# 841
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 844
isfinite(_Tp __f) 
# 845
{ 
# 846
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 847
return __builtin_isfinite((__type)__f); 
# 848
} 
# 850
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 853
isinf(_Tp __f) 
# 854
{ 
# 855
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 856
return __builtin_isinf((__type)__f); 
# 857
} 
# 859
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 862
isnan(_Tp __f) 
# 863
{ 
# 864
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 865
return __builtin_isnan((__type)__f); 
# 866
} 
# 868
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 871
isnormal(_Tp __f) 
# 872
{ 
# 873
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 874
return __builtin_isnormal((__type)__f); 
# 875
} 
# 877
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 880
signbit(_Tp __f) 
# 881
{ 
# 882
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 883
return (sizeof(__type) == sizeof(float)) ? __builtin_signbitf((__type)__f) : ((sizeof(__type) == sizeof(double)) ? __builtin_signbit((__type)__f) : __builtin_signbitl((__type)__f)); 
# 888
} 
# 890
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 893
isgreater(_Tp __f1, _Tp __f2) 
# 894
{ 
# 895
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 896
return __builtin_isgreater((__type)__f1, (__type)__f2); 
# 897
} 
# 899
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 902
isgreaterequal(_Tp __f1, _Tp __f2) 
# 903
{ 
# 904
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 905
return __builtin_isgreaterequal((__type)__f1, (__type)__f2); 
# 906
} 
# 908
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 911
isless(_Tp __f1, _Tp __f2) 
# 912
{ 
# 913
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 914
return __builtin_isless((__type)__f1, (__type)__f2); 
# 915
} 
# 917
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 920
islessequal(_Tp __f1, _Tp __f2) 
# 921
{ 
# 922
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 923
return __builtin_islessequal((__type)__f1, (__type)__f2); 
# 924
} 
# 926
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 929
islessgreater(_Tp __f1, _Tp __f2) 
# 930
{ 
# 931
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 932
return __builtin_islessgreater((__type)__f1, (__type)__f2); 
# 933
} 
# 935
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 938
isunordered(_Tp __f1, _Tp __f2) 
# 939
{ 
# 940
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 941
return __builtin_isunordered((__type)__f1, (__type)__f2); 
# 942
} 
# 947
}
# 114 "/usr/include/c++/5/cstdlib" 3
namespace std __attribute((__visibility__("default"))) { 
# 118
using ::div_t;
# 119
using ::ldiv_t;
# 121
using ::abort;
# 122
using ::abs;
# 123
using ::atexit;
# 129
using ::atof;
# 130
using ::atoi;
# 131
using ::atol;
# 132
using ::bsearch;
# 133
using ::calloc;
# 134
using ::div;
# 135
using ::exit;
# 136
using ::free;
# 137
using ::getenv;
# 138
using ::labs;
# 139
using ::ldiv;
# 140
using ::malloc;
# 142
using ::mblen;
# 143
using ::mbstowcs;
# 144
using ::mbtowc;
# 146
using ::qsort;
# 152
using ::rand;
# 153
using ::realloc;
# 154
using ::srand;
# 155
using ::strtod;
# 156
using ::strtol;
# 157
using ::strtoul;
# 158
using ::system;
# 160
using ::wcstombs;
# 161
using ::wctomb;
# 166
inline long abs(long __i) { return __builtin_labs(__i); } 
# 169
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); } 
# 174
inline long long abs(long long __x) { return __builtin_llabs(__x); } 
# 179
inline __int128_t abs(__int128_t __x) { return (__x >= (0)) ? __x : (-__x); } 
# 196 "/usr/include/c++/5/cstdlib" 3
}
# 209 "/usr/include/c++/5/cstdlib" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 214
using ::lldiv_t;
# 220
using ::_Exit;
# 224
using ::llabs;
# 227
inline lldiv_t div(long long __n, long long __d) 
# 228
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; } 
# 230
using ::lldiv;
# 241 "/usr/include/c++/5/cstdlib" 3
using ::atoll;
# 242
using ::strtoll;
# 243
using ::strtoull;
# 245
using ::strtof;
# 246
using ::strtold;
# 249
}
# 251
namespace std { 
# 254
using __gnu_cxx::lldiv_t;
# 256
using __gnu_cxx::_Exit;
# 258
using __gnu_cxx::llabs;
# 259
using __gnu_cxx::div;
# 260
using __gnu_cxx::lldiv;
# 262
using __gnu_cxx::atoll;
# 263
using __gnu_cxx::strtof;
# 264
using __gnu_cxx::strtoll;
# 265
using __gnu_cxx::strtoull;
# 266
using __gnu_cxx::strtold;
# 267
}
# 8942 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
__attribute((always_inline)) inline int signbit(float x); 
# 8946
__attribute((always_inline)) inline int signbit(double x); 
# 8948
__attribute((always_inline)) inline int signbit(long double x); 
# 8950
__attribute((always_inline)) inline int isfinite(float x); 
# 8954
__attribute((always_inline)) inline int isfinite(double x); 
# 8956
__attribute((always_inline)) inline int isfinite(long double x); 
# 8958
__attribute((always_inline)) inline int isnan(float x); 
# 8962
extern "C" __attribute((always_inline)) inline int isnan(double x) throw(); 
# 8964
__attribute((always_inline)) inline int isnan(long double x); 
# 8966
__attribute((always_inline)) inline int isinf(float x); 
# 8970
extern "C" __attribute((always_inline)) inline int isinf(double x) throw(); 
# 8972
__attribute((always_inline)) inline int isinf(long double x); 
# 9029 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
namespace std { 
# 9031
template< class T> extern T __pow_helper(T, int); 
# 9032
template< class T> extern T __cmath_power(T, unsigned); 
# 9033
}
# 9035
using std::abs;
# 9036
using std::fabs;
# 9037
using std::ceil;
# 9038
using std::floor;
# 9039
using std::sqrt;
# 9041
using std::pow;
# 9043
using std::log;
# 9044
using std::log10;
# 9045
using std::fmod;
# 9046
using std::modf;
# 9047
using std::exp;
# 9048
using std::frexp;
# 9049
using std::ldexp;
# 9050
using std::asin;
# 9051
using std::sin;
# 9052
using std::sinh;
# 9053
using std::acos;
# 9054
using std::cos;
# 9055
using std::cosh;
# 9056
using std::atan;
# 9057
using std::atan2;
# 9058
using std::tan;
# 9059
using std::tanh;
# 9424 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
namespace std { 
# 9433 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern inline long long abs(long long); 
# 9443 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern inline long abs(long); 
# 9444
extern inline float abs(float); 
# 9445
extern inline double abs(double); 
# 9446
extern inline float fabs(float); 
# 9447
extern inline float ceil(float); 
# 9448
extern inline float floor(float); 
# 9449
extern inline float sqrt(float); 
# 9450
extern inline float pow(float, float); 
# 9459 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
extern inline float pow(float, int); 
# 9460
extern inline double pow(double, int); 
# 9465
extern inline float log(float); 
# 9466
extern inline float log10(float); 
# 9467
extern inline float fmod(float, float); 
# 9468
extern inline float modf(float, float *); 
# 9469
extern inline float exp(float); 
# 9470
extern inline float frexp(float, int *); 
# 9471
extern inline float ldexp(float, int); 
# 9472
extern inline float asin(float); 
# 9473
extern inline float sin(float); 
# 9474
extern inline float sinh(float); 
# 9475
extern inline float acos(float); 
# 9476
extern inline float cos(float); 
# 9477
extern inline float cosh(float); 
# 9478
extern inline float atan(float); 
# 9479
extern inline float atan2(float, float); 
# 9480
extern inline float tan(float); 
# 9481
extern inline float tanh(float); 
# 9555 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
}
# 9698 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
static inline float logb(float a); 
# 9700
static inline int ilogb(float a); 
# 9702
static inline float scalbn(float a, int b); 
# 9704
static inline float scalbln(float a, long b); 
# 9706
static inline float exp2(float a); 
# 9708
static inline float expm1(float a); 
# 9710
static inline float log2(float a); 
# 9712
static inline float log1p(float a); 
# 9714
static inline float acosh(float a); 
# 9716
static inline float asinh(float a); 
# 9718
static inline float atanh(float a); 
# 9720
static inline float hypot(float a, float b); 
# 9722
static inline float norm3d(float a, float b, float c); 
# 9724
static inline float norm4d(float a, float b, float c, float d); 
# 9726
static inline float cbrt(float a); 
# 9728
static inline float erf(float a); 
# 9730
static inline float erfc(float a); 
# 9732
static inline float lgamma(float a); 
# 9734
static inline float tgamma(float a); 
# 9736
static inline float copysign(float a, float b); 
# 9738
static inline float nextafter(float a, float b); 
# 9740
static inline float remainder(float a, float b); 
# 9742
static inline float remquo(float a, float b, int * quo); 
# 9744
static inline float round(float a); 
# 9746
static inline long lround(float a); 
# 9748
static inline long long llround(float a); 
# 9750
static inline float trunc(float a); 
# 9752
static inline float rint(float a); 
# 9754
static inline long lrint(float a); 
# 9756
static inline long long llrint(float a); 
# 9758
static inline float nearbyint(float a); 
# 9760
static inline float fdim(float a, float b); 
# 9762
static inline float fma(float a, float b, float c); 
# 9764
static inline float fmax(float a, float b); 
# 9766
static inline float fmin(float a, float b); 
# 9807 "/usr/local/cuda/bin/..//include/crt/math_functions.h"
static inline float exp10(float a); 
# 9809
static inline float rsqrt(float a); 
# 9811
static inline float rcbrt(float a); 
# 9813
static inline float sinpi(float a); 
# 9815
static inline float cospi(float a); 
# 9817
static inline void sincospi(float a, float * sptr, float * cptr); 
# 9819
static inline void sincos(float a, float * sptr, float * cptr); 
# 9821
static inline float j0(float a); 
# 9823
static inline float j1(float a); 
# 9825
static inline float jn(int n, float a); 
# 9827
static inline float y0(float a); 
# 9829
static inline float y1(float a); 
# 9831
static inline float yn(int n, float a); 
# 9833
static inline float cyl_bessel_i0(float a); 
# 9835
static inline float cyl_bessel_i1(float a); 
# 9837
static inline float erfinv(float a); 
# 9839
static inline float erfcinv(float a); 
# 9841
static inline float normcdfinv(float a); 
# 9843
static inline float normcdf(float a); 
# 9845
static inline float erfcx(float a); 
# 9847
static inline double copysign(double a, float b); 
# 9849
static inline double copysign(float a, double b); 
# 9851
static inline unsigned min(unsigned a, unsigned b); 
# 9853
static inline unsigned min(int a, unsigned b); 
# 9855
static inline unsigned min(unsigned a, int b); 
# 9857
static inline long min(long a, long b); 
# 9859
static inline unsigned long min(unsigned long a, unsigned long b); 
# 9861
static inline unsigned long min(long a, unsigned long b); 
# 9863
static inline unsigned long min(unsigned long a, long b); 
# 9865
static inline long long min(long long a, long long b); 
# 9867
static inline unsigned long long min(unsigned long long a, unsigned long long b); 
# 9869
static inline unsigned long long min(long long a, unsigned long long b); 
# 9871
static inline unsigned long long min(unsigned long long a, long long b); 
# 9873
static inline float min(float a, float b); 
# 9875
static inline double min(double a, double b); 
# 9877
static inline double min(float a, double b); 
# 9879
static inline double min(double a, float b); 
# 9881
static inline unsigned max(unsigned a, unsigned b); 
# 9883
static inline unsigned max(int a, unsigned b); 
# 9885
static inline unsigned max(unsigned a, int b); 
# 9887
static inline long max(long a, long b); 
# 9889
static inline unsigned long max(unsigned long a, unsigned long b); 
# 9891
static inline unsigned long max(long a, unsigned long b); 
# 9893
static inline unsigned long max(unsigned long a, long b); 
# 9895
static inline long long max(long long a, long long b); 
# 9897
static inline unsigned long long max(unsigned long long a, unsigned long long b); 
# 9899
static inline unsigned long long max(long long a, unsigned long long b); 
# 9901
static inline unsigned long long max(unsigned long long a, long long b); 
# 9903
static inline float max(float a, float b); 
# 9905
static inline double max(double a, double b); 
# 9907
static inline double max(float a, double b); 
# 9909
static inline double max(double a, float b); 
# 281 "/usr/local/cuda/bin/..//include/crt/math_functions.hpp"
__attribute((always_inline)) inline int signbit(float x) { return __signbitf(x); } 
# 285
__attribute((always_inline)) inline int signbit(double x) { return __signbit(x); } 
# 287
__attribute((always_inline)) inline int signbit(long double x) { return __signbitl(x); } 
# 298 "/usr/local/cuda/bin/..//include/crt/math_functions.hpp"
__attribute((always_inline)) inline int isfinite(float x) { return __finitef(x); } 
# 313 "/usr/local/cuda/bin/..//include/crt/math_functions.hpp"
__attribute((always_inline)) inline int isfinite(double x) { return __finite(x); } 
# 326 "/usr/local/cuda/bin/..//include/crt/math_functions.hpp"
__attribute((always_inline)) inline int isfinite(long double x) { return __finitel(x); } 
# 329
__attribute((always_inline)) inline int isnan(float x) { return __isnanf(x); } 
# 333
extern "C" __attribute((always_inline)) inline int isnan(double x) throw() { return __isnan(x); } 
# 335
__attribute((always_inline)) inline int isnan(long double x) { return __isnanl(x); } 
# 337
__attribute((always_inline)) inline int isinf(float x) { return __isinff(x); } 
# 341
extern "C" __attribute((always_inline)) inline int isinf(double x) throw() { return __isinf(x); } 
# 343
__attribute((always_inline)) inline int isinf(long double x) { return __isinfl(x); } 
# 549 "/usr/local/cuda/bin/..//include/crt/math_functions.hpp"
static inline float logb(float a) 
# 550
{ 
# 551
return logbf(a); 
# 552
} 
# 554
static inline int ilogb(float a) 
# 555
{ 
# 556
return ilogbf(a); 
# 557
} 
# 559
static inline float scalbn(float a, int b) 
# 560
{ 
# 561
return scalbnf(a, b); 
# 562
} 
# 564
static inline float scalbln(float a, long b) 
# 565
{ 
# 566
return scalblnf(a, b); 
# 567
} 
# 569
static inline float exp2(float a) 
# 570
{ 
# 571
return exp2f(a); 
# 572
} 
# 574
static inline float expm1(float a) 
# 575
{ 
# 576
return expm1f(a); 
# 577
} 
# 579
static inline float log2(float a) 
# 580
{ 
# 581
return log2f(a); 
# 582
} 
# 584
static inline float log1p(float a) 
# 585
{ 
# 586
return log1pf(a); 
# 587
} 
# 589
static inline float acosh(float a) 
# 590
{ 
# 591
return acoshf(a); 
# 592
} 
# 594
static inline float asinh(float a) 
# 595
{ 
# 596
return asinhf(a); 
# 597
} 
# 599
static inline float atanh(float a) 
# 600
{ 
# 601
return atanhf(a); 
# 602
} 
# 604
static inline float hypot(float a, float b) 
# 605
{ 
# 606
return hypotf(a, b); 
# 607
} 
# 609
static inline float norm3d(float a, float b, float c) 
# 610
{ 
# 611
return norm3df(a, b, c); 
# 612
} 
# 614
static inline float norm4d(float a, float b, float c, float d) 
# 615
{ 
# 616
return norm4df(a, b, c, d); 
# 617
} 
# 619
static inline float cbrt(float a) 
# 620
{ 
# 621
return cbrtf(a); 
# 622
} 
# 624
static inline float erf(float a) 
# 625
{ 
# 626
return erff(a); 
# 627
} 
# 629
static inline float erfc(float a) 
# 630
{ 
# 631
return erfcf(a); 
# 632
} 
# 634
static inline float lgamma(float a) 
# 635
{ 
# 636
return lgammaf(a); 
# 637
} 
# 639
static inline float tgamma(float a) 
# 640
{ 
# 641
return tgammaf(a); 
# 642
} 
# 644
static inline float copysign(float a, float b) 
# 645
{ 
# 646
return copysignf(a, b); 
# 647
} 
# 649
static inline float nextafter(float a, float b) 
# 650
{ 
# 651
return nextafterf(a, b); 
# 652
} 
# 654
static inline float remainder(float a, float b) 
# 655
{ 
# 656
return remainderf(a, b); 
# 657
} 
# 659
static inline float remquo(float a, float b, int *quo) 
# 660
{ 
# 661
return remquof(a, b, quo); 
# 662
} 
# 664
static inline float round(float a) 
# 665
{ 
# 666
return roundf(a); 
# 667
} 
# 669
static inline long lround(float a) 
# 670
{ 
# 671
return lroundf(a); 
# 672
} 
# 674
static inline long long llround(float a) 
# 675
{ 
# 676
return llroundf(a); 
# 677
} 
# 679
static inline float trunc(float a) 
# 680
{ 
# 681
return truncf(a); 
# 682
} 
# 684
static inline float rint(float a) 
# 685
{ 
# 686
return rintf(a); 
# 687
} 
# 689
static inline long lrint(float a) 
# 690
{ 
# 691
return lrintf(a); 
# 692
} 
# 694
static inline long long llrint(float a) 
# 695
{ 
# 696
return llrintf(a); 
# 697
} 
# 699
static inline float nearbyint(float a) 
# 700
{ 
# 701
return nearbyintf(a); 
# 702
} 
# 704
static inline float fdim(float a, float b) 
# 705
{ 
# 706
return fdimf(a, b); 
# 707
} 
# 709
static inline float fma(float a, float b, float c) 
# 710
{ 
# 711
return fmaf(a, b, c); 
# 712
} 
# 714
static inline float fmax(float a, float b) 
# 715
{ 
# 716
return fmaxf(a, b); 
# 717
} 
# 719
static inline float fmin(float a, float b) 
# 720
{ 
# 721
return fminf(a, b); 
# 722
} 
# 730
static inline float exp10(float a) 
# 731
{ 
# 732
return exp10f(a); 
# 733
} 
# 735
static inline float rsqrt(float a) 
# 736
{ 
# 737
return rsqrtf(a); 
# 738
} 
# 740
static inline float rcbrt(float a) 
# 741
{ 
# 742
return rcbrtf(a); 
# 743
} 
# 745
static inline float sinpi(float a) 
# 746
{ 
# 747
return sinpif(a); 
# 748
} 
# 750
static inline float cospi(float a) 
# 751
{ 
# 752
return cospif(a); 
# 753
} 
# 755
static inline void sincospi(float a, float *sptr, float *cptr) 
# 756
{ 
# 757
sincospif(a, sptr, cptr); 
# 758
} 
# 760
static inline void sincos(float a, float *sptr, float *cptr) 
# 761
{ 
# 762
sincosf(a, sptr, cptr); 
# 763
} 
# 765
static inline float j0(float a) 
# 766
{ 
# 767
return j0f(a); 
# 768
} 
# 770
static inline float j1(float a) 
# 771
{ 
# 772
return j1f(a); 
# 773
} 
# 775
static inline float jn(int n, float a) 
# 776
{ 
# 777
return jnf(n, a); 
# 778
} 
# 780
static inline float y0(float a) 
# 781
{ 
# 782
return y0f(a); 
# 783
} 
# 785
static inline float y1(float a) 
# 786
{ 
# 787
return y1f(a); 
# 788
} 
# 790
static inline float yn(int n, float a) 
# 791
{ 
# 792
return ynf(n, a); 
# 793
} 
# 795
static inline float cyl_bessel_i0(float a) 
# 796
{ 
# 797
return cyl_bessel_i0f(a); 
# 798
} 
# 800
static inline float cyl_bessel_i1(float a) 
# 801
{ 
# 802
return cyl_bessel_i1f(a); 
# 803
} 
# 805
static inline float erfinv(float a) 
# 806
{ 
# 807
return erfinvf(a); 
# 808
} 
# 810
static inline float erfcinv(float a) 
# 811
{ 
# 812
return erfcinvf(a); 
# 813
} 
# 815
static inline float normcdfinv(float a) 
# 816
{ 
# 817
return normcdfinvf(a); 
# 818
} 
# 820
static inline float normcdf(float a) 
# 821
{ 
# 822
return normcdff(a); 
# 823
} 
# 825
static inline float erfcx(float a) 
# 826
{ 
# 827
return erfcxf(a); 
# 828
} 
# 830
static inline double copysign(double a, float b) 
# 831
{ 
# 832
return copysign(a, (double)b); 
# 833
} 
# 835
static inline double copysign(float a, double b) 
# 836
{ 
# 837
return copysign((double)a, b); 
# 838
} 
# 840
static inline unsigned min(unsigned a, unsigned b) 
# 841
{ 
# 842
return umin(a, b); 
# 843
} 
# 845
static inline unsigned min(int a, unsigned b) 
# 846
{ 
# 847
return umin((unsigned)a, b); 
# 848
} 
# 850
static inline unsigned min(unsigned a, int b) 
# 851
{ 
# 852
return umin(a, (unsigned)b); 
# 853
} 
# 855
static inline long min(long a, long b) 
# 856
{ 
# 862
if (sizeof(long) == sizeof(int)) { 
# 866
return (long)min((int)a, (int)b); 
# 867
} else { 
# 868
return (long)llmin((long long)a, (long long)b); 
# 869
}  
# 870
} 
# 872
static inline unsigned long min(unsigned long a, unsigned long b) 
# 873
{ 
# 877
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 881
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 882
} else { 
# 883
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 884
}  
# 885
} 
# 887
static inline unsigned long min(long a, unsigned long b) 
# 888
{ 
# 892
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 896
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 897
} else { 
# 898
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 899
}  
# 900
} 
# 902
static inline unsigned long min(unsigned long a, long b) 
# 903
{ 
# 907
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 911
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 912
} else { 
# 913
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 914
}  
# 915
} 
# 917
static inline long long min(long long a, long long b) 
# 918
{ 
# 919
return llmin(a, b); 
# 920
} 
# 922
static inline unsigned long long min(unsigned long long a, unsigned long long b) 
# 923
{ 
# 924
return ullmin(a, b); 
# 925
} 
# 927
static inline unsigned long long min(long long a, unsigned long long b) 
# 928
{ 
# 929
return ullmin((unsigned long long)a, b); 
# 930
} 
# 932
static inline unsigned long long min(unsigned long long a, long long b) 
# 933
{ 
# 934
return ullmin(a, (unsigned long long)b); 
# 935
} 
# 937
static inline float min(float a, float b) 
# 938
{ 
# 939
return fminf(a, b); 
# 940
} 
# 942
static inline double min(double a, double b) 
# 943
{ 
# 944
return fmin(a, b); 
# 945
} 
# 947
static inline double min(float a, double b) 
# 948
{ 
# 949
return fmin((double)a, b); 
# 950
} 
# 952
static inline double min(double a, float b) 
# 953
{ 
# 954
return fmin(a, (double)b); 
# 955
} 
# 957
static inline unsigned max(unsigned a, unsigned b) 
# 958
{ 
# 959
return umax(a, b); 
# 960
} 
# 962
static inline unsigned max(int a, unsigned b) 
# 963
{ 
# 964
return umax((unsigned)a, b); 
# 965
} 
# 967
static inline unsigned max(unsigned a, int b) 
# 968
{ 
# 969
return umax(a, (unsigned)b); 
# 970
} 
# 972
static inline long max(long a, long b) 
# 973
{ 
# 978
if (sizeof(long) == sizeof(int)) { 
# 982
return (long)max((int)a, (int)b); 
# 983
} else { 
# 984
return (long)llmax((long long)a, (long long)b); 
# 985
}  
# 986
} 
# 988
static inline unsigned long max(unsigned long a, unsigned long b) 
# 989
{ 
# 993
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 997
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 998
} else { 
# 999
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 1000
}  
# 1001
} 
# 1003
static inline unsigned long max(long a, unsigned long b) 
# 1004
{ 
# 1008
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1012
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 1013
} else { 
# 1014
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 1015
}  
# 1016
} 
# 1018
static inline unsigned long max(unsigned long a, long b) 
# 1019
{ 
# 1023
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 1027
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 1028
} else { 
# 1029
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 1030
}  
# 1031
} 
# 1033
static inline long long max(long long a, long long b) 
# 1034
{ 
# 1035
return llmax(a, b); 
# 1036
} 
# 1038
static inline unsigned long long max(unsigned long long a, unsigned long long b) 
# 1039
{ 
# 1040
return ullmax(a, b); 
# 1041
} 
# 1043
static inline unsigned long long max(long long a, unsigned long long b) 
# 1044
{ 
# 1045
return ullmax((unsigned long long)a, b); 
# 1046
} 
# 1048
static inline unsigned long long max(unsigned long long a, long long b) 
# 1049
{ 
# 1050
return ullmax(a, (unsigned long long)b); 
# 1051
} 
# 1053
static inline float max(float a, float b) 
# 1054
{ 
# 1055
return fmaxf(a, b); 
# 1056
} 
# 1058
static inline double max(double a, double b) 
# 1059
{ 
# 1060
return fmax(a, b); 
# 1061
} 
# 1063
static inline double max(float a, double b) 
# 1064
{ 
# 1065
return fmax((double)a, b); 
# 1066
} 
# 1068
static inline double max(double a, float b) 
# 1069
{ 
# 1070
return fmax(a, (double)b); 
# 1071
} 
# 1082 "/usr/local/cuda/bin/..//include/crt/math_functions.hpp"
extern "C" inline int min(int a, int b) 
# 1083
{ 
# 1084
return (a < b) ? a : b; 
# 1085
} 
# 1087
extern "C" inline unsigned umin(unsigned a, unsigned b) 
# 1088
{ 
# 1089
return (a < b) ? a : b; 
# 1090
} 
# 1092
extern "C" inline long long llmin(long long a, long long b) 
# 1093
{ 
# 1094
return (a < b) ? a : b; 
# 1095
} 
# 1097
extern "C" inline unsigned long long ullmin(unsigned long long a, unsigned long long 
# 1098
b) 
# 1099
{ 
# 1100
return (a < b) ? a : b; 
# 1101
} 
# 1103
extern "C" inline int max(int a, int b) 
# 1104
{ 
# 1105
return (a > b) ? a : b; 
# 1106
} 
# 1108
extern "C" inline unsigned umax(unsigned a, unsigned b) 
# 1109
{ 
# 1110
return (a > b) ? a : b; 
# 1111
} 
# 1113
extern "C" inline long long llmax(long long a, long long b) 
# 1114
{ 
# 1115
return (a > b) ? a : b; 
# 1116
} 
# 1118
extern "C" inline unsigned long long ullmax(unsigned long long a, unsigned long long 
# 1119
b) 
# 1120
{ 
# 1121
return (a > b) ? a : b; 
# 1122
} 
# 77 "/usr/local/cuda/bin/..//include/cuda_surface_types.h"
template< class T, int dim = 1> 
# 78
struct surface : public surfaceReference { 
# 81
surface() 
# 82
{ 
# 83
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 84
} 
# 86
surface(cudaChannelFormatDesc desc) 
# 87
{ 
# 88
(channelDesc) = desc; 
# 89
} 
# 91
}; 
# 93
template< int dim> 
# 94
struct surface< void, dim>  : public surfaceReference { 
# 97
surface() 
# 98
{ 
# 99
(channelDesc) = cudaCreateChannelDesc< void> (); 
# 100
} 
# 102
}; 
# 77 "/usr/local/cuda/bin/..//include/cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
# 78
struct texture : public textureReference { 
# 81
texture(int norm = 0, cudaTextureFilterMode 
# 82
fMode = cudaFilterModePoint, cudaTextureAddressMode 
# 83
aMode = cudaAddressModeClamp) 
# 84
{ 
# 85
(normalized) = norm; 
# 86
(filterMode) = fMode; 
# 87
((addressMode)[0]) = aMode; 
# 88
((addressMode)[1]) = aMode; 
# 89
((addressMode)[2]) = aMode; 
# 90
(channelDesc) = cudaCreateChannelDesc< T> (); 
# 91
(sRGB) = 0; 
# 92
} 
# 94
texture(int norm, cudaTextureFilterMode 
# 95
fMode, cudaTextureAddressMode 
# 96
aMode, cudaChannelFormatDesc 
# 97
desc) 
# 98
{ 
# 99
(normalized) = norm; 
# 100
(filterMode) = fMode; 
# 101
((addressMode)[0]) = aMode; 
# 102
((addressMode)[1]) = aMode; 
# 103
((addressMode)[2]) = aMode; 
# 104
(channelDesc) = desc; 
# 105
(sRGB) = 0; 
# 106
} 
# 108
}; 
# 79 "/usr/local/cuda/bin/..//include/crt/device_functions.h"
extern "C" {
# 3201 "/usr/local/cuda/bin/..//include/crt/device_functions.h"
}
# 3209
__attribute__((unused)) static inline int mulhi(int a, int b); 
# 3211
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b); 
# 3213
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b); 
# 3215
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b); 
# 3217
__attribute__((unused)) static inline long long mul64hi(long long a, long long b); 
# 3219
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b); 
# 3221
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b); 
# 3223
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b); 
# 3225
__attribute__((unused)) static inline int float_as_int(float a); 
# 3227
__attribute__((unused)) static inline float int_as_float(int a); 
# 3229
__attribute__((unused)) static inline unsigned float_as_uint(float a); 
# 3231
__attribute__((unused)) static inline float uint_as_float(unsigned a); 
# 3233
__attribute__((unused)) static inline float saturate(float a); 
# 3235
__attribute__((unused)) static inline int mul24(int a, int b); 
# 3237
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b); 
# 3239
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero); 
# 3241
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero); 
# 3243
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest); 
# 3245
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 80 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline int mulhi(int a, int b) 
# 81
{int volatile ___ = 1;(void)a;(void)b;
# 83
::exit(___);}
#if 0
# 81
{ 
# 82
return __mulhi(a, b); 
# 83
} 
#endif
# 85 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b) 
# 86
{int volatile ___ = 1;(void)a;(void)b;
# 88
::exit(___);}
#if 0
# 86
{ 
# 87
return __umulhi(a, b); 
# 88
} 
#endif
# 90 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b) 
# 91
{int volatile ___ = 1;(void)a;(void)b;
# 93
::exit(___);}
#if 0
# 91
{ 
# 92
return __umulhi((unsigned)a, b); 
# 93
} 
#endif
# 95 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b) 
# 96
{int volatile ___ = 1;(void)a;(void)b;
# 98
::exit(___);}
#if 0
# 96
{ 
# 97
return __umulhi(a, (unsigned)b); 
# 98
} 
#endif
# 100 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b) 
# 101
{int volatile ___ = 1;(void)a;(void)b;
# 103
::exit(___);}
#if 0
# 101
{ 
# 102
return __mul64hi(a, b); 
# 103
} 
#endif
# 105 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b) 
# 106
{int volatile ___ = 1;(void)a;(void)b;
# 108
::exit(___);}
#if 0
# 106
{ 
# 107
return __umul64hi(a, b); 
# 108
} 
#endif
# 110 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b) 
# 111
{int volatile ___ = 1;(void)a;(void)b;
# 113
::exit(___);}
#if 0
# 111
{ 
# 112
return __umul64hi((unsigned long long)a, b); 
# 113
} 
#endif
# 115 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b) 
# 116
{int volatile ___ = 1;(void)a;(void)b;
# 118
::exit(___);}
#if 0
# 116
{ 
# 117
return __umul64hi(a, (unsigned long long)b); 
# 118
} 
#endif
# 120 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline int float_as_int(float a) 
# 121
{int volatile ___ = 1;(void)a;
# 123
::exit(___);}
#if 0
# 121
{ 
# 122
return __float_as_int(a); 
# 123
} 
#endif
# 125 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline float int_as_float(int a) 
# 126
{int volatile ___ = 1;(void)a;
# 128
::exit(___);}
#if 0
# 126
{ 
# 127
return __int_as_float(a); 
# 128
} 
#endif
# 130 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned float_as_uint(float a) 
# 131
{int volatile ___ = 1;(void)a;
# 133
::exit(___);}
#if 0
# 131
{ 
# 132
return __float_as_uint(a); 
# 133
} 
#endif
# 135 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline float uint_as_float(unsigned a) 
# 136
{int volatile ___ = 1;(void)a;
# 138
::exit(___);}
#if 0
# 136
{ 
# 137
return __uint_as_float(a); 
# 138
} 
#endif
# 139 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline float saturate(float a) 
# 140
{int volatile ___ = 1;(void)a;
# 142
::exit(___);}
#if 0
# 140
{ 
# 141
return __saturatef(a); 
# 142
} 
#endif
# 144 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline int mul24(int a, int b) 
# 145
{int volatile ___ = 1;(void)a;(void)b;
# 147
::exit(___);}
#if 0
# 145
{ 
# 146
return __mul24(a, b); 
# 147
} 
#endif
# 149 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b) 
# 150
{int volatile ___ = 1;(void)a;(void)b;
# 152
::exit(___);}
#if 0
# 150
{ 
# 151
return __umul24(a, b); 
# 152
} 
#endif
# 154 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode) 
# 155
{int volatile ___ = 1;(void)a;(void)mode;
# 160
::exit(___);}
#if 0
# 155
{ 
# 156
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
# 160
} 
#endif
# 162 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode) 
# 163
{int volatile ___ = 1;(void)a;(void)mode;
# 168
::exit(___);}
#if 0
# 163
{ 
# 164
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
# 168
} 
#endif
# 170 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode) 
# 171
{int volatile ___ = 1;(void)a;(void)mode;
# 176
::exit(___);}
#if 0
# 171
{ 
# 172
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
# 176
} 
#endif
# 178 "/usr/local/cuda/bin/..//include/crt/device_functions.hpp"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode) 
# 179
{int volatile ___ = 1;(void)a;(void)mode;
# 184
::exit(___);}
#if 0
# 179
{ 
# 180
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
# 184
} 
#endif
# 107 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 115
{ } 
#endif
# 117 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 117
{ } 
#endif
# 119 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 119
{ } 
#endif
# 121 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 121
{ } 
#endif
# 123 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 123
{ } 
#endif
# 125 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 125
{ } 
#endif
# 127 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 127
{ } 
#endif
# 129 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 129
{ } 
#endif
# 131 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 131
{ } 
#endif
# 133 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 133
{ } 
#endif
# 135 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 135
{ } 
#endif
# 137 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 137
{ } 
#endif
# 139 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 139
{ } 
#endif
# 141 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 141
{ } 
#endif
# 143 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 143
{ } 
#endif
# 145 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 145
{ } 
#endif
# 147 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 147
{ } 
#endif
# 173 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
extern "C" {
# 182
}
# 191 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 191
{ } 
#endif
# 193 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 193
{ } 
#endif
# 195 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 195
{ } 
#endif
# 197 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute((deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 197
{ } 
#endif
# 199 "/usr/local/cuda/bin/..//include/device_atomic_functions.h"
__attribute((deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning)."))) __attribute__((unused)) static inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 199
{ } 
#endif
# 77 "/usr/local/cuda/bin/..//include/crt/device_double_functions.h"
extern "C" {
# 1129 "/usr/local/cuda/bin/..//include/crt/device_double_functions.h"
}
# 1137
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode); 
# 1139
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1141
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1143
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1145
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
# 1147
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
# 1149
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
# 1151
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
# 1153
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1155
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1157
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
# 1159
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 1161
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
# 83 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode) 
# 84
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 89
::exit(___);}
#if 0
# 84
{ 
# 85
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
# 89
} 
#endif
# 91 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode) 
# 92
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 97
::exit(___);}
#if 0
# 92
{ 
# 93
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
# 97
} 
#endif
# 99 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode) 
# 100
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 105
::exit(___);}
#if 0
# 100
{ 
# 101
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
# 105
} 
#endif
# 107 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode) 
# 108
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 113
::exit(___);}
#if 0
# 108
{ 
# 109
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
# 113
} 
#endif
# 115 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode) 
# 116
{int volatile ___ = 1;(void)a;(void)mode;
# 121
::exit(___);}
#if 0
# 116
{ 
# 117
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
# 121
} 
#endif
# 123 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode) 
# 124
{int volatile ___ = 1;(void)a;(void)mode;
# 129
::exit(___);}
#if 0
# 124
{ 
# 125
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
# 129
} 
#endif
# 131 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode) 
# 132
{int volatile ___ = 1;(void)a;(void)mode;
# 137
::exit(___);}
#if 0
# 132
{ 
# 133
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
# 137
} 
#endif
# 139 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode) 
# 140
{int volatile ___ = 1;(void)a;(void)mode;
# 145
::exit(___);}
#if 0
# 140
{ 
# 141
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
# 145
} 
#endif
# 147 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode) 
# 148
{int volatile ___ = 1;(void)a;(void)mode;
# 153
::exit(___);}
#if 0
# 148
{ 
# 149
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
# 153
} 
#endif
# 155 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode) 
# 156
{int volatile ___ = 1;(void)a;(void)mode;
# 161
::exit(___);}
#if 0
# 156
{ 
# 157
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
# 161
} 
#endif
# 163 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode) 
# 164
{int volatile ___ = 1;(void)a;(void)mode;
# 166
::exit(___);}
#if 0
# 164
{ 
# 165
return (double)a; 
# 166
} 
#endif
# 168 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode) 
# 169
{int volatile ___ = 1;(void)a;(void)mode;
# 171
::exit(___);}
#if 0
# 169
{ 
# 170
return (double)a; 
# 171
} 
#endif
# 173 "/usr/local/cuda/bin/..//include/crt/device_double_functions.hpp"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode) 
# 174
{int volatile ___ = 1;(void)a;(void)mode;
# 176
::exit(___);}
#if 0
# 174
{ 
# 175
return (double)a; 
# 176
} 
#endif
# 90 "/usr/local/cuda/bin/..//include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 90
{ } 
#endif
# 101 "/usr/local/cuda/bin/..//include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 101
{ } 
#endif
# 103 "/usr/local/cuda/bin/..//include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 103
{ } 
#endif
# 105 "/usr/local/cuda/bin/..//include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 105
{ } 
#endif
# 107 "/usr/local/cuda/bin/..//include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/usr/local/cuda/bin/..//include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/usr/local/cuda/bin/..//include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/usr/local/cuda/bin/..//include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/usr/local/cuda/bin/..//include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 115
{ } 
#endif
# 117 "/usr/local/cuda/bin/..//include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 117
{ } 
#endif
# 119 "/usr/local/cuda/bin/..//include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 119
{ } 
#endif
# 304 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 304
{ } 
#endif
# 307 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 307
{ } 
#endif
# 310 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 310
{ } 
#endif
# 313 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 313
{ } 
#endif
# 316 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 316
{ } 
#endif
# 319 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 319
{ } 
#endif
# 322 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 322
{ } 
#endif
# 325 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 325
{ } 
#endif
# 328 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 328
{ } 
#endif
# 331 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 331
{ } 
#endif
# 334 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 334
{ } 
#endif
# 337 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 337
{ } 
#endif
# 340 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 340
{ } 
#endif
# 343 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 343
{ } 
#endif
# 346 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 346
{ } 
#endif
# 349 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 349
{ } 
#endif
# 352 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 352
{ } 
#endif
# 355 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 355
{ } 
#endif
# 358 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 358
{ } 
#endif
# 361 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 361
{ } 
#endif
# 364 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 364
{ } 
#endif
# 367 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 367
{ } 
#endif
# 370 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 370
{ } 
#endif
# 373 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 373
{ } 
#endif
# 376 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 376
{ } 
#endif
# 379 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 379
{ } 
#endif
# 382 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 382
{ } 
#endif
# 385 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 385
{ } 
#endif
# 388 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 388
{ } 
#endif
# 391 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 391
{ } 
#endif
# 394 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 394
{ } 
#endif
# 397 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 397
{ } 
#endif
# 400 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 400
{ } 
#endif
# 403 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 403
{ } 
#endif
# 406 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 406
{ } 
#endif
# 409 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 409
{ } 
#endif
# 412 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 412
{ } 
#endif
# 415 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 415
{ } 
#endif
# 418 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 418
{ } 
#endif
# 421 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 421
{ } 
#endif
# 424 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 424
{ } 
#endif
# 427 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 427
{ } 
#endif
# 430 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 430
{ } 
#endif
# 433 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 433
{ } 
#endif
# 436 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 436
{ } 
#endif
# 439 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
# 440
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 440
{ } 
#endif
# 443 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
# 444
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 444
{ } 
#endif
# 447 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_block(unsigned long long *address, unsigned long long 
# 448
compare, unsigned long long 
# 449
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 449
{ } 
#endif
# 452 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_system(unsigned long long *address, unsigned long long 
# 453
compare, unsigned long long 
# 454
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 454
{ } 
#endif
# 457 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 457
{ } 
#endif
# 460 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 460
{ } 
#endif
# 463 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 463
{ } 
#endif
# 466 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 466
{ } 
#endif
# 469 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 469
{ } 
#endif
# 472 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 472
{ } 
#endif
# 475 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 475
{ } 
#endif
# 478 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 478
{ } 
#endif
# 481 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 481
{ } 
#endif
# 484 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 484
{ } 
#endif
# 487 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 487
{ } 
#endif
# 490 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 490
{ } 
#endif
# 493 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 493
{ } 
#endif
# 496 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 496
{ } 
#endif
# 499 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 499
{ } 
#endif
# 502 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 502
{ } 
#endif
# 505 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 505
{ } 
#endif
# 508 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 508
{ } 
#endif
# 511 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 511
{ } 
#endif
# 514 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 514
{ } 
#endif
# 517 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 517
{ } 
#endif
# 520 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 520
{ } 
#endif
# 523 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 523
{ } 
#endif
# 526 "/usr/local/cuda/bin/..//include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 526
{ } 
#endif
# 92 "/usr/local/cuda/bin/..//include/sm_20_intrinsics.h"
extern "C" {
# 1477 "/usr/local/cuda/bin/..//include/sm_20_intrinsics.h"
}
# 1484
__attribute((deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning)."))) __attribute__((unused)) static inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1484
{ } 
#endif
# 1486 "/usr/local/cuda/bin/..//include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1486
{ } 
#endif
# 1488 "/usr/local/cuda/bin/..//include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1488
{ } 
#endif
# 1490 "/usr/local/cuda/bin/..//include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1490
{ } 
#endif
# 1497 "/usr/local/cuda/bin/..//include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1497
{ } 
#endif
# 107 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
# 114
{ } 
#endif
# 115 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
# 115
{ } 
#endif
# 123 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 123
{ } 
#endif
# 124 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 124
{ } 
#endif
# 126 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 126
{ } 
#endif
# 127 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 127
{ } 
#endif
# 129 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 130
{ } 
#endif
# 132 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 132
{ } 
#endif
# 133 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 133
{ } 
#endif
# 135 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 136
{ } 
#endif
# 138 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 138
{ } 
#endif
# 139 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 139
{ } 
#endif
# 141 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 142
{ } 
#endif
# 144 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 145
{ } 
#endif
# 147 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 148
{ } 
#endif
# 150 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 151
{ } 
#endif
# 153 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 154
{ } 
#endif
# 156 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 157
{ } 
#endif
# 160 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long long __shfl(long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 160
{ } 
#endif
# 161 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_sync(unsigned mask, long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 161
{ } 
#endif
# 163 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl(unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 163
{ } 
#endif
# 164 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_sync(unsigned mask, unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 164
{ } 
#endif
# 166 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_up(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_up_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 167
{ } 
#endif
# 169 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_up(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_up_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 170
{ } 
#endif
# 172 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_down(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_down_sync(unsigned mask, long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 173
{ } 
#endif
# 175 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_down(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 175
{ } 
#endif
# 176 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_down_sync(unsigned mask, unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 176
{ } 
#endif
# 178 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long long __shfl_xor(long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_xor_sync(unsigned mask, long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 179
{ } 
#endif
# 181 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long long __shfl_xor(unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_xor_sync(unsigned mask, unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 182
{ } 
#endif
# 184 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 185
{ } 
#endif
# 187 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 187
{ } 
#endif
# 188 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 188
{ } 
#endif
# 190 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 191
{ } 
#endif
# 193 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 193
{ } 
#endif
# 194 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 194
{ } 
#endif
# 198 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 198
{ } 
#endif
# 199 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 199
{ } 
#endif
# 201 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning)."))) __attribute__((unused)) static inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 201
{ } 
#endif
# 202 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 202
{ } 
#endif
# 204 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 205
{ } 
#endif
# 207 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 207
{ } 
#endif
# 208 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 208
{ } 
#endif
# 210 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 210
{ } 
#endif
# 211 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 211
{ } 
#endif
# 213 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 214
{ } 
#endif
# 216 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 216
{ } 
#endif
# 217 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 217
{ } 
#endif
# 219 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute((deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning)."))) __attribute__((unused)) static inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 219
{ } 
#endif
# 220 "/usr/local/cuda/bin/..//include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 220
{ } 
#endif
# 89 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 89
{ } 
#endif
# 90 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 90
{ } 
#endif
# 92 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 103
{ } 
#endif
# 105 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 114
{ } 
#endif
# 115 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 115
{ } 
#endif
# 117 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 117
{ } 
#endif
# 118 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 118
{ } 
#endif
# 119 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 119
{ } 
#endif
# 120 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 120
{ } 
#endif
# 121 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 121
{ } 
#endif
# 125 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 125
{ } 
#endif
# 126 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 126
{ } 
#endif
# 128 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 130
{ } 
#endif
# 131 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 131
{ } 
#endif
# 132 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 132
{ } 
#endif
# 133 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 137
{ } 
#endif
# 138 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 138
{ } 
#endif
# 139 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 139
{ } 
#endif
# 141 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 145
{ } 
#endif
# 146 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 146
{ } 
#endif
# 147 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 149
{ } 
#endif
# 150 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 151
{ } 
#endif
# 153 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 155
{ } 
#endif
# 156 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 157
{ } 
#endif
# 161 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 161
{ } 
#endif
# 162 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 162
{ } 
#endif
# 164 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 165
{ } 
#endif
# 166 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldca(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 173
{ } 
#endif
# 174 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 174
{ } 
#endif
# 175 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 175
{ } 
#endif
# 177 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldca(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 185
{ } 
#endif
# 186 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 186
{ } 
#endif
# 187 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 187
{ } 
#endif
# 189 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 191
{ } 
#endif
# 192 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 192
{ } 
#endif
# 193 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 193
{ } 
#endif
# 197 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 197
{ } 
#endif
# 198 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 198
{ } 
#endif
# 200 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 200
{ } 
#endif
# 201 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 201
{ } 
#endif
# 202 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 202
{ } 
#endif
# 203 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 203
{ } 
#endif
# 204 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcs(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 205
{ } 
#endif
# 206 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 206
{ } 
#endif
# 207 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 207
{ } 
#endif
# 208 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 208
{ } 
#endif
# 209 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 209
{ } 
#endif
# 210 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 210
{ } 
#endif
# 211 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 211
{ } 
#endif
# 213 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 214
{ } 
#endif
# 215 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 215
{ } 
#endif
# 216 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcs(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 216
{ } 
#endif
# 217 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 217
{ } 
#endif
# 218 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 218
{ } 
#endif
# 219 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 219
{ } 
#endif
# 220 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 220
{ } 
#endif
# 221 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 221
{ } 
#endif
# 222 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 222
{ } 
#endif
# 223 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 223
{ } 
#endif
# 225 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 225
{ } 
#endif
# 226 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 226
{ } 
#endif
# 227 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 227
{ } 
#endif
# 228 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 228
{ } 
#endif
# 229 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 229
{ } 
#endif
# 236 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 236
{ } 
#endif
# 237 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 237
{ } 
#endif
# 240 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 240
{ } 
#endif
# 241 "/usr/local/cuda/bin/..//include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 241
{ } 
#endif
# 91 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 91
{ } 
#endif
# 92 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 92
{ } 
#endif
# 94 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 95
{ } 
#endif
# 97 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 98
{ } 
#endif
# 100 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 101
{ } 
#endif
# 108 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/usr/local/cuda/bin/..//include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 112
{ } 
#endif
# 83 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 83
{ } 
#endif
# 84 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 84
{ } 
#endif
# 85 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 85
{ } 
#endif
# 86 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 86
{ } 
#endif
# 87 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, unsigned long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 87
{ } 
#endif
# 88 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, long long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 88
{ } 
#endif
# 89 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 89
{ } 
#endif
# 90 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
# 90
{ } 
#endif
# 92 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, unsigned long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, long long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/local/cuda/bin/..//include/crt/sm_70_rt.h"
__attribute__((unused)) static inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
# 99
{ } 
#endif
# 116 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 117
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dread(T *res, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 118
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
# 122
::exit(___);}
#if 0
# 118
{ 
# 122
} 
#endif
# 124 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 125
__attribute((always_inline)) __attribute__((unused)) static inline T surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 126
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 132
::exit(___);}
#if 0
# 126
{ 
# 132
} 
#endif
# 134 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 135
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dread(T *res, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 136
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
# 140
::exit(___);}
#if 0
# 136
{ 
# 140
} 
#endif
# 143 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 144
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 145
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 149
::exit(___);}
#if 0
# 145
{ 
# 149
} 
#endif
# 151 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 152
__attribute((always_inline)) __attribute__((unused)) static inline T surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 153
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 159
::exit(___);}
#if 0
# 153
{ 
# 159
} 
#endif
# 161 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 162
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 163
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
# 167
::exit(___);}
#if 0
# 163
{ 
# 167
} 
#endif
# 170 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 171
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 172
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 176
::exit(___);}
#if 0
# 172
{ 
# 176
} 
#endif
# 178 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 179
__attribute((always_inline)) __attribute__((unused)) static inline T surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 180
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 186
::exit(___);}
#if 0
# 180
{ 
# 186
} 
#endif
# 188 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 189
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 190
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 194
::exit(___);}
#if 0
# 190
{ 
# 194
} 
#endif
# 198 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 199
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 200
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 204
::exit(___);}
#if 0
# 200
{ 
# 204
} 
#endif
# 206 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 207
__attribute((always_inline)) __attribute__((unused)) static inline T surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 208
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 214
::exit(___);}
#if 0
# 208
{ 
# 214
} 
#endif
# 217 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 218
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 219
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;
# 223
::exit(___);}
#if 0
# 219
{ 
# 223
} 
#endif
# 226 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 227
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 228
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 232
::exit(___);}
#if 0
# 228
{ 
# 232
} 
#endif
# 234 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 235
__attribute((always_inline)) __attribute__((unused)) static inline T surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 236
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 242
::exit(___);}
#if 0
# 236
{ 
# 242
} 
#endif
# 245 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 246
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 247
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 251
::exit(___);}
#if 0
# 247
{ 
# 251
} 
#endif
# 254 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 255
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 256
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 260
::exit(___);}
#if 0
# 256
{ 
# 260
} 
#endif
# 262 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 263
__attribute((always_inline)) __attribute__((unused)) static inline T surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 264
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 271
::exit(___);}
#if 0
# 264
{ 
# 271
} 
#endif
# 273 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 274
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 275
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 279
::exit(___);}
#if 0
# 275
{ 
# 279
} 
#endif
# 282 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 283
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 284
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 288
::exit(___);}
#if 0
# 284
{ 
# 288
} 
#endif
# 290 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 291
__attribute((always_inline)) __attribute__((unused)) static inline T surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 292
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 298
::exit(___);}
#if 0
# 292
{ 
# 298
} 
#endif
# 300 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 301
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 302
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 306
::exit(___);}
#if 0
# 302
{ 
# 306
} 
#endif
# 309 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 310
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 311
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
# 315
::exit(___);}
#if 0
# 311
{ 
# 315
} 
#endif
# 317 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 318
__attribute((always_inline)) __attribute__((unused)) static inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 319
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 323
::exit(___);}
#if 0
# 319
{ 
# 323
} 
#endif
# 327 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 328
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 329
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 333
::exit(___);}
#if 0
# 329
{ 
# 333
} 
#endif
# 335 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 336
__attribute((always_inline)) __attribute__((unused)) static inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 337
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 341
::exit(___);}
#if 0
# 337
{ 
# 341
} 
#endif
# 344 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 345
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 346
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 350
::exit(___);}
#if 0
# 346
{ 
# 350
} 
#endif
# 352 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 353
__attribute((always_inline)) __attribute__((unused)) static inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 354
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 358
::exit(___);}
#if 0
# 354
{ 
# 358
} 
#endif
# 361 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 362
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 363
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 367
::exit(___);}
#if 0
# 363
{ 
# 367
} 
#endif
# 369 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 370
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 371
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 375
::exit(___);}
#if 0
# 371
{ 
# 375
} 
#endif
# 378 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 379
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 380
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 384
::exit(___);}
#if 0
# 380
{ 
# 384
} 
#endif
# 386 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 387
__attribute((always_inline)) __attribute__((unused)) static inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 388
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 392
::exit(___);}
#if 0
# 388
{ 
# 392
} 
#endif
# 395 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 396
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 397
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 401
::exit(___);}
#if 0
# 397
{ 
# 401
} 
#endif
# 403 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 404
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 405
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 409
::exit(___);}
#if 0
# 405
{ 
# 409
} 
#endif
# 413 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 414
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 415
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 419
::exit(___);}
#if 0
# 415
{ 
# 419
} 
#endif
# 421 "/usr/local/cuda/bin/..//include/surface_functions.h"
template< class T> 
# 422
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 423
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 427
::exit(___);}
#if 0
# 423
{ 
# 427
} 
#endif
# 68 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 69
struct __nv_tex_rmet_ret { }; 
# 71
template<> struct __nv_tex_rmet_ret< char>  { typedef char type; }; 
# 72
template<> struct __nv_tex_rmet_ret< signed char>  { typedef signed char type; }; 
# 73
template<> struct __nv_tex_rmet_ret< unsigned char>  { typedef unsigned char type; }; 
# 74
template<> struct __nv_tex_rmet_ret< char1>  { typedef char1 type; }; 
# 75
template<> struct __nv_tex_rmet_ret< uchar1>  { typedef uchar1 type; }; 
# 76
template<> struct __nv_tex_rmet_ret< char2>  { typedef char2 type; }; 
# 77
template<> struct __nv_tex_rmet_ret< uchar2>  { typedef uchar2 type; }; 
# 78
template<> struct __nv_tex_rmet_ret< char4>  { typedef char4 type; }; 
# 79
template<> struct __nv_tex_rmet_ret< uchar4>  { typedef uchar4 type; }; 
# 81
template<> struct __nv_tex_rmet_ret< short>  { typedef short type; }; 
# 82
template<> struct __nv_tex_rmet_ret< unsigned short>  { typedef unsigned short type; }; 
# 83
template<> struct __nv_tex_rmet_ret< short1>  { typedef short1 type; }; 
# 84
template<> struct __nv_tex_rmet_ret< ushort1>  { typedef ushort1 type; }; 
# 85
template<> struct __nv_tex_rmet_ret< short2>  { typedef short2 type; }; 
# 86
template<> struct __nv_tex_rmet_ret< ushort2>  { typedef ushort2 type; }; 
# 87
template<> struct __nv_tex_rmet_ret< short4>  { typedef short4 type; }; 
# 88
template<> struct __nv_tex_rmet_ret< ushort4>  { typedef ushort4 type; }; 
# 90
template<> struct __nv_tex_rmet_ret< int>  { typedef int type; }; 
# 91
template<> struct __nv_tex_rmet_ret< unsigned>  { typedef unsigned type; }; 
# 92
template<> struct __nv_tex_rmet_ret< int1>  { typedef int1 type; }; 
# 93
template<> struct __nv_tex_rmet_ret< uint1>  { typedef uint1 type; }; 
# 94
template<> struct __nv_tex_rmet_ret< int2>  { typedef int2 type; }; 
# 95
template<> struct __nv_tex_rmet_ret< uint2>  { typedef uint2 type; }; 
# 96
template<> struct __nv_tex_rmet_ret< int4>  { typedef int4 type; }; 
# 97
template<> struct __nv_tex_rmet_ret< uint4>  { typedef uint4 type; }; 
# 109 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template<> struct __nv_tex_rmet_ret< float>  { typedef float type; }; 
# 110
template<> struct __nv_tex_rmet_ret< float1>  { typedef float1 type; }; 
# 111
template<> struct __nv_tex_rmet_ret< float2>  { typedef float2 type; }; 
# 112
template<> struct __nv_tex_rmet_ret< float4>  { typedef float4 type; }; 
# 115
template< class T> struct __nv_tex_rmet_cast { typedef T *type; }; 
# 127 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 128
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeElementType>  t, int x) 
# 129
{int volatile ___ = 1;(void)t;(void)x;
# 135
::exit(___);}
#if 0
# 129
{ 
# 135
} 
#endif
# 137 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 138
struct __nv_tex_rmnf_ret { }; 
# 140
template<> struct __nv_tex_rmnf_ret< char>  { typedef float type; }; 
# 141
template<> struct __nv_tex_rmnf_ret< signed char>  { typedef float type; }; 
# 142
template<> struct __nv_tex_rmnf_ret< unsigned char>  { typedef float type; }; 
# 143
template<> struct __nv_tex_rmnf_ret< short>  { typedef float type; }; 
# 144
template<> struct __nv_tex_rmnf_ret< unsigned short>  { typedef float type; }; 
# 145
template<> struct __nv_tex_rmnf_ret< char1>  { typedef float1 type; }; 
# 146
template<> struct __nv_tex_rmnf_ret< uchar1>  { typedef float1 type; }; 
# 147
template<> struct __nv_tex_rmnf_ret< short1>  { typedef float1 type; }; 
# 148
template<> struct __nv_tex_rmnf_ret< ushort1>  { typedef float1 type; }; 
# 149
template<> struct __nv_tex_rmnf_ret< char2>  { typedef float2 type; }; 
# 150
template<> struct __nv_tex_rmnf_ret< uchar2>  { typedef float2 type; }; 
# 151
template<> struct __nv_tex_rmnf_ret< short2>  { typedef float2 type; }; 
# 152
template<> struct __nv_tex_rmnf_ret< ushort2>  { typedef float2 type; }; 
# 153
template<> struct __nv_tex_rmnf_ret< char4>  { typedef float4 type; }; 
# 154
template<> struct __nv_tex_rmnf_ret< uchar4>  { typedef float4 type; }; 
# 155
template<> struct __nv_tex_rmnf_ret< short4>  { typedef float4 type; }; 
# 156
template<> struct __nv_tex_rmnf_ret< ushort4>  { typedef float4 type; }; 
# 158
template< class T> 
# 159
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeNormalizedFloat>  t, int x) 
# 160
{int volatile ___ = 1;(void)t;(void)x;
# 167
::exit(___);}
#if 0
# 160
{ 
# 167
} 
#endif
# 170 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 171
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1D(texture< T, 1, cudaReadModeElementType>  t, float x) 
# 172
{int volatile ___ = 1;(void)t;(void)x;
# 178
::exit(___);}
#if 0
# 172
{ 
# 178
} 
#endif
# 180 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 181
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1D(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x) 
# 182
{int volatile ___ = 1;(void)t;(void)x;
# 189
::exit(___);}
#if 0
# 182
{ 
# 189
} 
#endif
# 193 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 194
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2D(texture< T, 2, cudaReadModeElementType>  t, float x, float y) 
# 195
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 202
::exit(___);}
#if 0
# 195
{ 
# 202
} 
#endif
# 204 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 205
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2D(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y) 
# 206
{int volatile ___ = 1;(void)t;(void)x;(void)y;
# 213
::exit(___);}
#if 0
# 206
{ 
# 213
} 
#endif
# 217 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 218
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeElementType>  t, float x, int layer) 
# 219
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 225
::exit(___);}
#if 0
# 219
{ 
# 225
} 
#endif
# 227 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 228
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) 
# 229
{int volatile ___ = 1;(void)t;(void)x;(void)layer;
# 236
::exit(___);}
#if 0
# 229
{ 
# 236
} 
#endif
# 240 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 241
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer) 
# 242
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 248
::exit(___);}
#if 0
# 242
{ 
# 248
} 
#endif
# 250 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 251
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) 
# 252
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;
# 259
::exit(___);}
#if 0
# 252
{ 
# 259
} 
#endif
# 262 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 263
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3D(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z) 
# 264
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 270
::exit(___);}
#if 0
# 264
{ 
# 270
} 
#endif
# 272 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 273
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3D(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 274
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 281
::exit(___);}
#if 0
# 274
{ 
# 281
} 
#endif
# 284 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 285
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z) 
# 286
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 292
::exit(___);}
#if 0
# 286
{ 
# 292
} 
#endif
# 294 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 295
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) 
# 296
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;
# 303
::exit(___);}
#if 0
# 296
{ 
# 303
} 
#endif
# 306 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 307
struct __nv_tex2dgather_ret { }; 
# 308
template<> struct __nv_tex2dgather_ret< char>  { typedef char4 type; }; 
# 309
template<> struct __nv_tex2dgather_ret< signed char>  { typedef char4 type; }; 
# 310
template<> struct __nv_tex2dgather_ret< char1>  { typedef char4 type; }; 
# 311
template<> struct __nv_tex2dgather_ret< char2>  { typedef char4 type; }; 
# 312
template<> struct __nv_tex2dgather_ret< char3>  { typedef char4 type; }; 
# 313
template<> struct __nv_tex2dgather_ret< char4>  { typedef char4 type; }; 
# 314
template<> struct __nv_tex2dgather_ret< unsigned char>  { typedef uchar4 type; }; 
# 315
template<> struct __nv_tex2dgather_ret< uchar1>  { typedef uchar4 type; }; 
# 316
template<> struct __nv_tex2dgather_ret< uchar2>  { typedef uchar4 type; }; 
# 317
template<> struct __nv_tex2dgather_ret< uchar3>  { typedef uchar4 type; }; 
# 318
template<> struct __nv_tex2dgather_ret< uchar4>  { typedef uchar4 type; }; 
# 320
template<> struct __nv_tex2dgather_ret< short>  { typedef short4 type; }; 
# 321
template<> struct __nv_tex2dgather_ret< short1>  { typedef short4 type; }; 
# 322
template<> struct __nv_tex2dgather_ret< short2>  { typedef short4 type; }; 
# 323
template<> struct __nv_tex2dgather_ret< short3>  { typedef short4 type; }; 
# 324
template<> struct __nv_tex2dgather_ret< short4>  { typedef short4 type; }; 
# 325
template<> struct __nv_tex2dgather_ret< unsigned short>  { typedef ushort4 type; }; 
# 326
template<> struct __nv_tex2dgather_ret< ushort1>  { typedef ushort4 type; }; 
# 327
template<> struct __nv_tex2dgather_ret< ushort2>  { typedef ushort4 type; }; 
# 328
template<> struct __nv_tex2dgather_ret< ushort3>  { typedef ushort4 type; }; 
# 329
template<> struct __nv_tex2dgather_ret< ushort4>  { typedef ushort4 type; }; 
# 331
template<> struct __nv_tex2dgather_ret< int>  { typedef int4 type; }; 
# 332
template<> struct __nv_tex2dgather_ret< int1>  { typedef int4 type; }; 
# 333
template<> struct __nv_tex2dgather_ret< int2>  { typedef int4 type; }; 
# 334
template<> struct __nv_tex2dgather_ret< int3>  { typedef int4 type; }; 
# 335
template<> struct __nv_tex2dgather_ret< int4>  { typedef int4 type; }; 
# 336
template<> struct __nv_tex2dgather_ret< unsigned>  { typedef uint4 type; }; 
# 337
template<> struct __nv_tex2dgather_ret< uint1>  { typedef uint4 type; }; 
# 338
template<> struct __nv_tex2dgather_ret< uint2>  { typedef uint4 type; }; 
# 339
template<> struct __nv_tex2dgather_ret< uint3>  { typedef uint4 type; }; 
# 340
template<> struct __nv_tex2dgather_ret< uint4>  { typedef uint4 type; }; 
# 342
template<> struct __nv_tex2dgather_ret< float>  { typedef float4 type; }; 
# 343
template<> struct __nv_tex2dgather_ret< float1>  { typedef float4 type; }; 
# 344
template<> struct __nv_tex2dgather_ret< float2>  { typedef float4 type; }; 
# 345
template<> struct __nv_tex2dgather_ret< float3>  { typedef float4 type; }; 
# 346
template<> struct __nv_tex2dgather_ret< float4>  { typedef float4 type; }; 
# 348
template< class T> 
# 349
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex2dgather_ret< T> ::type tex2Dgather(texture< T, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) 
# 350
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 357
::exit(___);}
#if 0
# 350
{ 
# 357
} 
#endif
# 360 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> struct __nv_tex2dgather_rmnf_ret { }; 
# 361
template<> struct __nv_tex2dgather_rmnf_ret< char>  { typedef float4 type; }; 
# 362
template<> struct __nv_tex2dgather_rmnf_ret< signed char>  { typedef float4 type; }; 
# 363
template<> struct __nv_tex2dgather_rmnf_ret< unsigned char>  { typedef float4 type; }; 
# 364
template<> struct __nv_tex2dgather_rmnf_ret< char1>  { typedef float4 type; }; 
# 365
template<> struct __nv_tex2dgather_rmnf_ret< uchar1>  { typedef float4 type; }; 
# 366
template<> struct __nv_tex2dgather_rmnf_ret< char2>  { typedef float4 type; }; 
# 367
template<> struct __nv_tex2dgather_rmnf_ret< uchar2>  { typedef float4 type; }; 
# 368
template<> struct __nv_tex2dgather_rmnf_ret< char3>  { typedef float4 type; }; 
# 369
template<> struct __nv_tex2dgather_rmnf_ret< uchar3>  { typedef float4 type; }; 
# 370
template<> struct __nv_tex2dgather_rmnf_ret< char4>  { typedef float4 type; }; 
# 371
template<> struct __nv_tex2dgather_rmnf_ret< uchar4>  { typedef float4 type; }; 
# 372
template<> struct __nv_tex2dgather_rmnf_ret< signed short>  { typedef float4 type; }; 
# 373
template<> struct __nv_tex2dgather_rmnf_ret< unsigned short>  { typedef float4 type; }; 
# 374
template<> struct __nv_tex2dgather_rmnf_ret< short1>  { typedef float4 type; }; 
# 375
template<> struct __nv_tex2dgather_rmnf_ret< ushort1>  { typedef float4 type; }; 
# 376
template<> struct __nv_tex2dgather_rmnf_ret< short2>  { typedef float4 type; }; 
# 377
template<> struct __nv_tex2dgather_rmnf_ret< ushort2>  { typedef float4 type; }; 
# 378
template<> struct __nv_tex2dgather_rmnf_ret< short3>  { typedef float4 type; }; 
# 379
template<> struct __nv_tex2dgather_rmnf_ret< ushort3>  { typedef float4 type; }; 
# 380
template<> struct __nv_tex2dgather_rmnf_ret< short4>  { typedef float4 type; }; 
# 381
template<> struct __nv_tex2dgather_rmnf_ret< ushort4>  { typedef float4 type; }; 
# 383
template< class T> 
# 384
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex2dgather_rmnf_ret< T> ::type tex2Dgather(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) 
# 385
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;
# 392
::exit(___);}
#if 0
# 385
{ 
# 392
} 
#endif
# 396 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 397
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeElementType>  t, float x, float level) 
# 398
{int volatile ___ = 1;(void)t;(void)x;(void)level;
# 404
::exit(___);}
#if 0
# 398
{ 
# 404
} 
#endif
# 406 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 407
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float level) 
# 408
{int volatile ___ = 1;(void)t;(void)x;(void)level;
# 415
::exit(___);}
#if 0
# 408
{ 
# 415
} 
#endif
# 418 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 419
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float level) 
# 420
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
# 426
::exit(___);}
#if 0
# 420
{ 
# 426
} 
#endif
# 428 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 429
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float level) 
# 430
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;
# 437
::exit(___);}
#if 0
# 430
{ 
# 437
} 
#endif
# 440 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 441
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float level) 
# 442
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
# 448
::exit(___);}
#if 0
# 442
{ 
# 448
} 
#endif
# 450 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 451
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float level) 
# 452
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;
# 459
::exit(___);}
#if 0
# 452
{ 
# 459
} 
#endif
# 462 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 463
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float level) 
# 464
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
# 470
::exit(___);}
#if 0
# 464
{ 
# 470
} 
#endif
# 472 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 473
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float level) 
# 474
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;
# 481
::exit(___);}
#if 0
# 474
{ 
# 481
} 
#endif
# 484 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 485
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float level) 
# 486
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 492
::exit(___);}
#if 0
# 486
{ 
# 492
} 
#endif
# 494 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 495
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
# 496
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 503
::exit(___);}
#if 0
# 496
{ 
# 503
} 
#endif
# 506 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 507
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float level) 
# 508
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 514
::exit(___);}
#if 0
# 508
{ 
# 514
} 
#endif
# 516 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 517
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) 
# 518
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;
# 525
::exit(___);}
#if 0
# 518
{ 
# 525
} 
#endif
# 529 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 530
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) 
# 531
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 537
::exit(___);}
#if 0
# 531
{ 
# 537
} 
#endif
# 539 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 540
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) 
# 541
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;
# 548
::exit(___);}
#if 0
# 541
{ 
# 548
} 
#endif
# 552 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 553
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float level) 
# 554
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 560
::exit(___);}
#if 0
# 554
{ 
# 560
} 
#endif
# 562 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 563
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float level) 
# 564
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 571
::exit(___);}
#if 0
# 564
{ 
# 571
} 
#endif
# 575 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 576
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 577
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 583
::exit(___);}
#if 0
# 577
{ 
# 583
} 
#endif
# 585 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 586
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 587
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 594
::exit(___);}
#if 0
# 587
{ 
# 594
} 
#endif
# 598 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 599
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 600
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 606
::exit(___);}
#if 0
# 600
{ 
# 606
} 
#endif
# 608 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 609
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 610
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 617
::exit(___);}
#if 0
# 610
{ 
# 617
} 
#endif
# 621 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 622
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeElementType>  t, float x, float dPdx, float dPdy) 
# 623
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
# 629
::exit(___);}
#if 0
# 623
{ 
# 629
} 
#endif
# 631 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 632
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float dPdx, float dPdy) 
# 633
{int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;
# 640
::exit(___);}
#if 0
# 633
{ 
# 640
} 
#endif
# 644 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 645
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float2 dPdx, float2 dPdy) 
# 646
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 652
::exit(___);}
#if 0
# 646
{ 
# 652
} 
#endif
# 654 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 655
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float2 dPdx, float2 dPdy) 
# 656
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 663
::exit(___);}
#if 0
# 656
{ 
# 663
} 
#endif
# 666 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 667
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float dPdx, float dPdy) 
# 668
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 674
::exit(___);}
#if 0
# 668
{ 
# 674
} 
#endif
# 676 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 677
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float dPdx, float dPdy) 
# 678
{int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 685
::exit(___);}
#if 0
# 678
{ 
# 685
} 
#endif
# 688 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 689
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 690
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 696
::exit(___);}
#if 0
# 690
{ 
# 696
} 
#endif
# 698 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 699
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 700
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 707
::exit(___);}
#if 0
# 700
{ 
# 707
} 
#endif
# 710 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 711
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmet_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 712
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 718
::exit(___);}
#if 0
# 712
{ 
# 718
} 
#endif
# 720 "/usr/local/cuda/bin/..//include/texture_fetch_functions.h"
template< class T> 
# 721
__attribute((always_inline)) __attribute__((unused)) static inline typename __nv_tex_rmnf_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 722
{int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 729
::exit(___);}
#if 0
# 722
{ 
# 729
} 
#endif
# 61 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> struct __nv_itex_trait { }; 
# 62
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
# 63
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
# 64
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
# 65
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
# 66
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
# 67
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
# 68
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
# 69
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
# 70
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
# 71
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
# 72
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
# 73
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
# 74
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
# 75
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
# 76
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
# 77
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
# 78
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
# 79
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
# 80
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
# 81
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
# 82
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
# 83
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
# 84
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
# 85
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
# 86
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
# 97 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
# 98
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
# 99
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
# 100
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
# 104
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 105
tex1Dfetch(T *ptr, cudaTextureObject_t obj, int x) 
# 106
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 110
::exit(___);}
#if 0
# 106
{ 
# 110
} 
#endif
# 112 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 113
tex1Dfetch(cudaTextureObject_t texObject, int x) 
# 114
{int volatile ___ = 1;(void)texObject;(void)x;
# 120
::exit(___);}
#if 0
# 114
{ 
# 120
} 
#endif
# 122 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 123
tex1D(T *ptr, cudaTextureObject_t obj, float x) 
# 124
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;
# 128
::exit(___);}
#if 0
# 124
{ 
# 128
} 
#endif
# 131 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 132
tex1D(cudaTextureObject_t texObject, float x) 
# 133
{int volatile ___ = 1;(void)texObject;(void)x;
# 139
::exit(___);}
#if 0
# 133
{ 
# 139
} 
#endif
# 142 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 143
tex2D(T *ptr, cudaTextureObject_t obj, float x, float y) 
# 144
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;
# 148
::exit(___);}
#if 0
# 144
{ 
# 148
} 
#endif
# 150 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 151
tex2D(cudaTextureObject_t texObject, float x, float y) 
# 152
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;
# 158
::exit(___);}
#if 0
# 152
{ 
# 158
} 
#endif
# 160 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 161
tex3D(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 162
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 166
::exit(___);}
#if 0
# 162
{ 
# 166
} 
#endif
# 168 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 169
tex3D(cudaTextureObject_t texObject, float x, float y, float z) 
# 170
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 176
::exit(___);}
#if 0
# 170
{ 
# 176
} 
#endif
# 178 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 179
tex1DLayered(T *ptr, cudaTextureObject_t obj, float x, int layer) 
# 180
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;
# 184
::exit(___);}
#if 0
# 180
{ 
# 184
} 
#endif
# 186 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 187
tex1DLayered(cudaTextureObject_t texObject, float x, int layer) 
# 188
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;
# 194
::exit(___);}
#if 0
# 188
{ 
# 194
} 
#endif
# 196 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 197
tex2DLayered(T *ptr, cudaTextureObject_t obj, float x, float y, int layer) 
# 198
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;
# 202
::exit(___);}
#if 0
# 198
{ 
# 202
} 
#endif
# 204 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 205
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer) 
# 206
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;
# 212
::exit(___);}
#if 0
# 206
{ 
# 212
} 
#endif
# 215 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 216
texCubemap(T *ptr, cudaTextureObject_t obj, float x, float y, float z) 
# 217
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;
# 221
::exit(___);}
#if 0
# 217
{ 
# 221
} 
#endif
# 224 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 225
texCubemap(cudaTextureObject_t texObject, float x, float y, float z) 
# 226
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 232
::exit(___);}
#if 0
# 226
{ 
# 232
} 
#endif
# 235 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 236
texCubemapLayered(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer) 
# 237
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;
# 241
::exit(___);}
#if 0
# 237
{ 
# 241
} 
#endif
# 243 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 244
texCubemapLayered(cudaTextureObject_t texObject, float x, float y, float z, int layer) 
# 245
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;
# 251
::exit(___);}
#if 0
# 245
{ 
# 251
} 
#endif
# 253 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 254
tex2Dgather(T *ptr, cudaTextureObject_t obj, float x, float y, int comp = 0) 
# 255
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;
# 259
::exit(___);}
#if 0
# 255
{ 
# 259
} 
#endif
# 261 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 262
tex2Dgather(cudaTextureObject_t to, float x, float y, int comp = 0) 
# 263
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;
# 269
::exit(___);}
#if 0
# 263
{ 
# 269
} 
#endif
# 273 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 274
tex1DLod(T *ptr, cudaTextureObject_t obj, float x, float level) 
# 275
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;
# 279
::exit(___);}
#if 0
# 275
{ 
# 279
} 
#endif
# 281 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 282
tex1DLod(cudaTextureObject_t texObject, float x, float level) 
# 283
{int volatile ___ = 1;(void)texObject;(void)x;(void)level;
# 289
::exit(___);}
#if 0
# 283
{ 
# 289
} 
#endif
# 292 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 293
tex2DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float level) 
# 294
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;
# 298
::exit(___);}
#if 0
# 294
{ 
# 298
} 
#endif
# 300 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 301
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level) 
# 302
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;
# 308
::exit(___);}
#if 0
# 302
{ 
# 308
} 
#endif
# 311 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 312
tex3DLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 313
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 317
::exit(___);}
#if 0
# 313
{ 
# 317
} 
#endif
# 319 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 320
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 321
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 327
::exit(___);}
#if 0
# 321
{ 
# 327
} 
#endif
# 330 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 331
tex1DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, int layer, float level) 
# 332
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;
# 336
::exit(___);}
#if 0
# 332
{ 
# 336
} 
#endif
# 338 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 339
tex1DLayeredLod(cudaTextureObject_t texObject, float x, int layer, float level) 
# 340
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;
# 346
::exit(___);}
#if 0
# 340
{ 
# 346
} 
#endif
# 349 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 350
tex2DLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float level) 
# 351
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;
# 355
::exit(___);}
#if 0
# 351
{ 
# 355
} 
#endif
# 357 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 358
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level) 
# 359
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;
# 365
::exit(___);}
#if 0
# 359
{ 
# 365
} 
#endif
# 368 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 369
texCubemapLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float level) 
# 370
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;
# 374
::exit(___);}
#if 0
# 370
{ 
# 374
} 
#endif
# 376 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 377
texCubemapLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 378
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 384
::exit(___);}
#if 0
# 378
{ 
# 384
} 
#endif
# 387 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 388
texCubemapGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 389
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 393
::exit(___);}
#if 0
# 389
{ 
# 393
} 
#endif
# 395 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 396
texCubemapGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 397
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 403
::exit(___);}
#if 0
# 397
{ 
# 403
} 
#endif
# 405 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 406
texCubemapLayeredLod(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float level) 
# 407
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 411
::exit(___);}
#if 0
# 407
{ 
# 411
} 
#endif
# 413 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 414
texCubemapLayeredLod(cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) 
# 415
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 421
::exit(___);}
#if 0
# 415
{ 
# 421
} 
#endif
# 423 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 424
tex1DGrad(T *ptr, cudaTextureObject_t obj, float x, float dPdx, float dPdy) 
# 425
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;
# 429
::exit(___);}
#if 0
# 425
{ 
# 429
} 
#endif
# 431 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 432
tex1DGrad(cudaTextureObject_t texObject, float x, float dPdx, float dPdy) 
# 433
{int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;
# 439
::exit(___);}
#if 0
# 433
{ 
# 439
} 
#endif
# 442 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 443
tex2DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float2 dPdx, float2 dPdy) 
# 444
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 449
::exit(___);}
#if 0
# 444
{ 
# 449
} 
#endif
# 451 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 452
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy) 
# 453
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 459
::exit(___);}
#if 0
# 453
{ 
# 459
} 
#endif
# 462 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 463
tex3DGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 464
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 468
::exit(___);}
#if 0
# 464
{ 
# 468
} 
#endif
# 470 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 471
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 472
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 478
::exit(___);}
#if 0
# 472
{ 
# 478
} 
#endif
# 481 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 482
tex1DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) 
# 483
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 487
::exit(___);}
#if 0
# 483
{ 
# 487
} 
#endif
# 489 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 490
tex1DLayeredGrad(cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) 
# 491
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 497
::exit(___);}
#if 0
# 491
{ 
# 497
} 
#endif
# 500 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 501
tex2DLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 502
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 506
::exit(___);}
#if 0
# 502
{ 
# 506
} 
#endif
# 508 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 509
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 510
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 516
::exit(___);}
#if 0
# 510
{ 
# 516
} 
#endif
# 519 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_itex_trait< T> ::type 
# 520
texCubemapLayeredGrad(T *ptr, cudaTextureObject_t obj, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 521
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 525
::exit(___);}
#if 0
# 521
{ 
# 525
} 
#endif
# 527 "/usr/local/cuda/bin/..//include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 528
texCubemapLayeredGrad(cudaTextureObject_t texObject, float x, float y, float z, int layer, float4 dPdx, float4 dPdy) 
# 529
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;
# 535
::exit(___);}
#if 0
# 529
{ 
# 535
} 
#endif
# 60 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> struct __nv_isurf_trait { }; 
# 61
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
# 62
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
# 63
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
# 64
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
# 65
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
# 66
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
# 67
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
# 68
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
# 69
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
# 70
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
# 71
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
# 72
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
# 73
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
# 74
template<> struct __nv_isurf_trait< long long>  { typedef void type; }; 
# 75
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
# 76
template<> struct __nv_isurf_trait< unsigned long long>  { typedef void type; }; 
# 77
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
# 78
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
# 79
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
# 81
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
# 82
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
# 83
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
# 84
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
# 85
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
# 86
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
# 87
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
# 88
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
# 89
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
# 91
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
# 92
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
# 93
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
# 94
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
# 95
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
# 96
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
# 97
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
# 100
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 101
surf1Dread(T *ptr, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 102
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;
# 106
::exit(___);}
#if 0
# 102
{ 
# 106
} 
#endif
# 108 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 109
surf1Dread(cudaSurfaceObject_t surfObject, int x, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 110
{int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;
# 116
::exit(___);}
#if 0
# 110
{ 
# 116
} 
#endif
# 118 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 119
surf2Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 120
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;
# 124
::exit(___);}
#if 0
# 120
{ 
# 124
} 
#endif
# 126 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 127
surf2Dread(cudaSurfaceObject_t surfObject, int x, int y, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 128
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;
# 134
::exit(___);}
#if 0
# 128
{ 
# 134
} 
#endif
# 137 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 138
surf3Dread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 139
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 143
::exit(___);}
#if 0
# 139
{ 
# 143
} 
#endif
# 145 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 146
surf3Dread(cudaSurfaceObject_t surfObject, int x, int y, int z, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 147
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;
# 153
::exit(___);}
#if 0
# 147
{ 
# 153
} 
#endif
# 155 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 156
surf1DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 157
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;
# 161
::exit(___);}
#if 0
# 157
{ 
# 161
} 
#endif
# 163 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 164
surf1DLayeredread(cudaSurfaceObject_t surfObject, int x, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 165
{int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;
# 171
::exit(___);}
#if 0
# 165
{ 
# 171
} 
#endif
# 173 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 174
surf2DLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 175
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 179
::exit(___);}
#if 0
# 175
{ 
# 179
} 
#endif
# 181 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 182
surf2DLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 183
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;
# 189
::exit(___);}
#if 0
# 183
{ 
# 189
} 
#endif
# 191 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 192
surfCubemapread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 193
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 197
::exit(___);}
#if 0
# 193
{ 
# 197
} 
#endif
# 199 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 200
surfCubemapread(cudaSurfaceObject_t surfObject, int x, int y, int face, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 201
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;
# 207
::exit(___);}
#if 0
# 201
{ 
# 207
} 
#endif
# 209 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 210
surfCubemapLayeredread(T *ptr, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 211
{int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 215
::exit(___);}
#if 0
# 211
{ 
# 215
} 
#endif
# 217 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 218
surfCubemapLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layerface, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 219
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;
# 225
::exit(___);}
#if 0
# 219
{ 
# 225
} 
#endif
# 227 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 228
surf1Dwrite(T val, cudaSurfaceObject_t obj, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 229
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;
# 233
::exit(___);}
#if 0
# 229
{ 
# 233
} 
#endif
# 235 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 236
surf2Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 237
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;
# 241
::exit(___);}
#if 0
# 237
{ 
# 241
} 
#endif
# 243 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 244
surf3Dwrite(T val, cudaSurfaceObject_t obj, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 245
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;
# 249
::exit(___);}
#if 0
# 245
{ 
# 249
} 
#endif
# 251 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 252
surf1DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 253
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;
# 257
::exit(___);}
#if 0
# 253
{ 
# 257
} 
#endif
# 259 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 260
surf2DLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 261
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;
# 265
::exit(___);}
#if 0
# 261
{ 
# 265
} 
#endif
# 267 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 268
surfCubemapwrite(T val, cudaSurfaceObject_t obj, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 269
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;
# 273
::exit(___);}
#if 0
# 269
{ 
# 273
} 
#endif
# 275 "/usr/local/cuda/bin/..//include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static typename __nv_isurf_trait< T> ::type 
# 276
surfCubemapLayeredwrite(T val, cudaSurfaceObject_t obj, int x, int y, int layerface, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 277
{int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;
# 281
::exit(___);}
#if 0
# 277
{ 
# 281
} 
#endif
# 68 "/usr/local/cuda/bin/..//include/device_launch_parameters.h"
extern "C" {
# 71
extern const uint3 __device_builtin_variable_threadIdx; 
# 72
extern const uint3 __device_builtin_variable_blockIdx; 
# 73
extern const dim3 __device_builtin_variable_blockDim; 
# 74
extern const dim3 __device_builtin_variable_gridDim; 
# 75
extern const int __device_builtin_variable_warpSize; 
# 80
}
# 185 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 186
cudaLaunchKernel(const T *
# 187
func, dim3 
# 188
gridDim, dim3 
# 189
blockDim, void **
# 190
args, size_t 
# 191
sharedMem = 0, cudaStream_t 
# 192
stream = 0) 
# 194
{ 
# 195
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 196
} 
# 245 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 246
cudaLaunchCooperativeKernel(const T *
# 247
func, dim3 
# 248
gridDim, dim3 
# 249
blockDim, void **
# 250
args, size_t 
# 251
sharedMem = 0, cudaStream_t 
# 252
stream = 0) 
# 254
{ 
# 255
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 256
} 
# 283 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 284
cudaSetupArgument(T 
# 285
arg, size_t 
# 286
offset) 
# 288
{ 
# 289
return ::cudaSetupArgument((const void *)(&arg), sizeof(T), offset); 
# 290
} 
# 322 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 323
event, unsigned 
# 324
flags) 
# 326
{ 
# 327
return ::cudaEventCreateWithFlags(event, flags); 
# 328
} 
# 385 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
static inline cudaError_t cudaMallocHost(void **
# 386
ptr, size_t 
# 387
size, unsigned 
# 388
flags) 
# 390
{ 
# 391
return ::cudaHostAlloc(ptr, size, flags); 
# 392
} 
# 394
template< class T> static inline cudaError_t 
# 395
cudaHostAlloc(T **
# 396
ptr, size_t 
# 397
size, unsigned 
# 398
flags) 
# 400
{ 
# 401
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
# 402
} 
# 404
template< class T> static inline cudaError_t 
# 405
cudaHostGetDevicePointer(T **
# 406
pDevice, void *
# 407
pHost, unsigned 
# 408
flags) 
# 410
{ 
# 411
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
# 412
} 
# 512 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 513
cudaMallocManaged(T **
# 514
devPtr, size_t 
# 515
size, unsigned 
# 516
flags = 1) 
# 518
{ 
# 519
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
# 520
} 
# 591 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 592
cudaStreamAttachMemAsync(cudaStream_t 
# 593
stream, T *
# 594
devPtr, size_t 
# 595
length = 0, unsigned 
# 596
flags = 4) 
# 598
{ 
# 599
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
# 600
} 
# 602
template< class T> inline cudaError_t 
# 603
cudaMalloc(T **
# 604
devPtr, size_t 
# 605
size) 
# 607
{ 
# 608
return ::cudaMalloc((void **)((void *)devPtr), size); 
# 609
} 
# 611
template< class T> static inline cudaError_t 
# 612
cudaMallocHost(T **
# 613
ptr, size_t 
# 614
size, unsigned 
# 615
flags = 0) 
# 617
{ 
# 618
return cudaMallocHost((void **)((void *)ptr), size, flags); 
# 619
} 
# 621
template< class T> static inline cudaError_t 
# 622
cudaMallocPitch(T **
# 623
devPtr, size_t *
# 624
pitch, size_t 
# 625
width, size_t 
# 626
height) 
# 628
{ 
# 629
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
# 630
} 
# 667 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 668
cudaMemcpyToSymbol(const T &
# 669
symbol, const void *
# 670
src, size_t 
# 671
count, size_t 
# 672
offset = 0, cudaMemcpyKind 
# 673
kind = cudaMemcpyHostToDevice) 
# 675
{ 
# 676
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
# 677
} 
# 719 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 720
cudaMemcpyToSymbolAsync(const T &
# 721
symbol, const void *
# 722
src, size_t 
# 723
count, size_t 
# 724
offset = 0, cudaMemcpyKind 
# 725
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 726
stream = 0) 
# 728
{ 
# 729
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
# 730
} 
# 765 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 766
cudaMemcpyFromSymbol(void *
# 767
dst, const T &
# 768
symbol, size_t 
# 769
count, size_t 
# 770
offset = 0, cudaMemcpyKind 
# 771
kind = cudaMemcpyDeviceToHost) 
# 773
{ 
# 774
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
# 775
} 
# 817 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 818
cudaMemcpyFromSymbolAsync(void *
# 819
dst, const T &
# 820
symbol, size_t 
# 821
count, size_t 
# 822
offset = 0, cudaMemcpyKind 
# 823
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 824
stream = 0) 
# 826
{ 
# 827
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
# 828
} 
# 851 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 852
cudaGetSymbolAddress(void **
# 853
devPtr, const T &
# 854
symbol) 
# 856
{ 
# 857
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
# 858
} 
# 881 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 882
cudaGetSymbolSize(size_t *
# 883
size, const T &
# 884
symbol) 
# 886
{ 
# 887
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
# 888
} 
# 923 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 924
cudaBindTexture(size_t *
# 925
offset, const texture< T, dim, readMode>  &
# 926
tex, const void *
# 927
devPtr, const cudaChannelFormatDesc &
# 928
desc, size_t 
# 929
size = ((2147483647) * 2U) + 1U) 
# 931 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
{ 
# 932
return ::cudaBindTexture(offset, &tex, devPtr, &desc, size); 
# 933
} 
# 967 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 968
cudaBindTexture(size_t *
# 969
offset, const texture< T, dim, readMode>  &
# 970
tex, const void *
# 971
devPtr, size_t 
# 972
size = ((2147483647) * 2U) + 1U) 
# 974 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
{ 
# 975
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
# 976
} 
# 1022 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1023
cudaBindTexture2D(size_t *
# 1024
offset, const texture< T, dim, readMode>  &
# 1025
tex, const void *
# 1026
devPtr, const cudaChannelFormatDesc &
# 1027
desc, size_t 
# 1028
width, size_t 
# 1029
height, size_t 
# 1030
pitch) 
# 1032
{ 
# 1033
return ::cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
# 1034
} 
# 1079 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1080
cudaBindTexture2D(size_t *
# 1081
offset, const texture< T, dim, readMode>  &
# 1082
tex, const void *
# 1083
devPtr, size_t 
# 1084
width, size_t 
# 1085
height, size_t 
# 1086
pitch) 
# 1088
{ 
# 1089
return ::cudaBindTexture2D(offset, &tex, devPtr, &(tex.channelDesc), width, height, pitch); 
# 1090
} 
# 1120 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1121
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1122
tex, cudaArray_const_t 
# 1123
array, const cudaChannelFormatDesc &
# 1124
desc) 
# 1126
{ 
# 1127
return ::cudaBindTextureToArray(&tex, array, &desc); 
# 1128
} 
# 1157 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1158
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1159
tex, cudaArray_const_t 
# 1160
array) 
# 1162
{ 
# 1163
cudaChannelFormatDesc desc; 
# 1164
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 1166
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
# 1167
} 
# 1197 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1198
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1199
tex, cudaMipmappedArray_const_t 
# 1200
mipmappedArray, const cudaChannelFormatDesc &
# 1201
desc) 
# 1203
{ 
# 1204
return ::cudaBindTextureToMipmappedArray(&tex, mipmappedArray, &desc); 
# 1205
} 
# 1234 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1235
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1236
tex, cudaMipmappedArray_const_t 
# 1237
mipmappedArray) 
# 1239
{ 
# 1240
cudaChannelFormatDesc desc; 
# 1241
cudaArray_t levelArray; 
# 1242
cudaError_t err = ::cudaGetMipmappedArrayLevel(&levelArray, mipmappedArray, 0); 
# 1244
if (err != (cudaSuccess)) { 
# 1245
return err; 
# 1246
}  
# 1247
err = ::cudaGetChannelDesc(&desc, levelArray); 
# 1249
return (err == (cudaSuccess)) ? cudaBindTextureToMipmappedArray(tex, mipmappedArray, desc) : err; 
# 1250
} 
# 1273 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1274
cudaUnbindTexture(const texture< T, dim, readMode>  &
# 1275
tex) 
# 1277
{ 
# 1278
return ::cudaUnbindTexture(&tex); 
# 1279
} 
# 1307 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1308
cudaGetTextureAlignmentOffset(size_t *
# 1309
offset, const texture< T, dim, readMode>  &
# 1310
tex) 
# 1312
{ 
# 1313
return ::cudaGetTextureAlignmentOffset(offset, &tex); 
# 1314
} 
# 1359 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1360
cudaFuncSetCacheConfig(T *
# 1361
func, cudaFuncCache 
# 1362
cacheConfig) 
# 1364
{ 
# 1365
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
# 1366
} 
# 1368
template< class T> static inline cudaError_t 
# 1369
cudaFuncSetSharedMemConfig(T *
# 1370
func, cudaSharedMemConfig 
# 1371
config) 
# 1373
{ 
# 1374
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
# 1375
} 
# 1404 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 1405
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
# 1406
numBlocks, T 
# 1407
func, int 
# 1408
blockSize, size_t 
# 1409
dynamicSMemSize) 
# 1410
{ 
# 1411
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
# 1412
} 
# 1455 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 1456
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
# 1457
numBlocks, T 
# 1458
func, int 
# 1459
blockSize, size_t 
# 1460
dynamicSMemSize, unsigned 
# 1461
flags) 
# 1462
{ 
# 1463
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
# 1464
} 
# 1469
class __cudaOccupancyB2DHelper { 
# 1470
size_t n; 
# 1472
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
# 1473
size_t operator()(int) 
# 1474
{ 
# 1475
return n; 
# 1476
} 
# 1477
}; 
# 1524 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class UnaryFunction, class T> static inline cudaError_t 
# 1525
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
# 1526
minGridSize, int *
# 1527
blockSize, T 
# 1528
func, UnaryFunction 
# 1529
blockSizeToDynamicSMemSize, int 
# 1530
blockSizeLimit = 0, unsigned 
# 1531
flags = 0) 
# 1532
{ 
# 1533
cudaError_t status; 
# 1536
int device; 
# 1537
cudaFuncAttributes attr; 
# 1540
int maxThreadsPerMultiProcessor; 
# 1541
int warpSize; 
# 1542
int devMaxThreadsPerBlock; 
# 1543
int multiProcessorCount; 
# 1544
int funcMaxThreadsPerBlock; 
# 1545
int occupancyLimit; 
# 1546
int granularity; 
# 1549
int maxBlockSize = 0; 
# 1550
int numBlocks = 0; 
# 1551
int maxOccupancy = 0; 
# 1554
int blockSizeToTryAligned; 
# 1555
int blockSizeToTry; 
# 1556
int blockSizeLimitAligned; 
# 1557
int occupancyInBlocks; 
# 1558
int occupancyInThreads; 
# 1559
size_t dynamicSMemSize; 
# 1565
if (((!minGridSize) || (!blockSize)) || (!func)) { 
# 1566
return cudaErrorInvalidValue; 
# 1567
}  
# 1573
status = ::cudaGetDevice(&device); 
# 1574
if (status != (cudaSuccess)) { 
# 1575
return status; 
# 1576
}  
# 1578
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
# 1582
if (status != (cudaSuccess)) { 
# 1583
return status; 
# 1584
}  
# 1586
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
# 1590
if (status != (cudaSuccess)) { 
# 1591
return status; 
# 1592
}  
# 1594
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
# 1598
if (status != (cudaSuccess)) { 
# 1599
return status; 
# 1600
}  
# 1602
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
# 1606
if (status != (cudaSuccess)) { 
# 1607
return status; 
# 1608
}  
# 1610
status = cudaFuncGetAttributes(&attr, func); 
# 1611
if (status != (cudaSuccess)) { 
# 1612
return status; 
# 1613
}  
# 1615
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
# 1621
occupancyLimit = maxThreadsPerMultiProcessor; 
# 1622
granularity = warpSize; 
# 1624
if (blockSizeLimit == 0) { 
# 1625
blockSizeLimit = devMaxThreadsPerBlock; 
# 1626
}  
# 1628
if (devMaxThreadsPerBlock < blockSizeLimit) { 
# 1629
blockSizeLimit = devMaxThreadsPerBlock; 
# 1630
}  
# 1632
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
# 1633
blockSizeLimit = funcMaxThreadsPerBlock; 
# 1634
}  
# 1636
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
# 1638
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
# 1642
if (blockSizeLimit < blockSizeToTryAligned) { 
# 1643
blockSizeToTry = blockSizeLimit; 
# 1644
} else { 
# 1645
blockSizeToTry = blockSizeToTryAligned; 
# 1646
}  
# 1648
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
# 1650
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
# 1657
if (status != (cudaSuccess)) { 
# 1658
return status; 
# 1659
}  
# 1661
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
# 1663
if (occupancyInThreads > maxOccupancy) { 
# 1664
maxBlockSize = blockSizeToTry; 
# 1665
numBlocks = occupancyInBlocks; 
# 1666
maxOccupancy = occupancyInThreads; 
# 1667
}  
# 1671
if (occupancyLimit == maxOccupancy) { 
# 1672
break; 
# 1673
}  
# 1674
}  
# 1682
(*minGridSize) = (numBlocks * multiProcessorCount); 
# 1683
(*blockSize) = maxBlockSize; 
# 1685
return status; 
# 1686
} 
# 1719 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class UnaryFunction, class T> static inline cudaError_t 
# 1720
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
# 1721
minGridSize, int *
# 1722
blockSize, T 
# 1723
func, UnaryFunction 
# 1724
blockSizeToDynamicSMemSize, int 
# 1725
blockSizeLimit = 0) 
# 1726
{ 
# 1727
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
# 1728
} 
# 1764 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1765
cudaOccupancyMaxPotentialBlockSize(int *
# 1766
minGridSize, int *
# 1767
blockSize, T 
# 1768
func, size_t 
# 1769
dynamicSMemSize = 0, int 
# 1770
blockSizeLimit = 0) 
# 1771
{ 
# 1772
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
# 1773
} 
# 1823 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1824
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
# 1825
minGridSize, int *
# 1826
blockSize, T 
# 1827
func, size_t 
# 1828
dynamicSMemSize = 0, int 
# 1829
blockSizeLimit = 0, unsigned 
# 1830
flags = 0) 
# 1831
{ 
# 1832
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
# 1833
} 
# 1874 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1875
cudaLaunch(T *
# 1876
func) 
# 1878
{ 
# 1879
return ::cudaLaunch((const void *)func); 
# 1880
} 
# 1911 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> inline cudaError_t 
# 1912
cudaFuncGetAttributes(cudaFuncAttributes *
# 1913
attr, T *
# 1914
entry) 
# 1916
{ 
# 1917
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
# 1918
} 
# 1953 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 1954
cudaFuncSetAttribute(T *
# 1955
entry, cudaFuncAttribute 
# 1956
attr, int 
# 1957
value) 
# 1959
{ 
# 1960
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
# 1961
} 
# 1983 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim> static inline cudaError_t 
# 1984
cudaBindSurfaceToArray(const surface< T, dim>  &
# 1985
surf, cudaArray_const_t 
# 1986
array, const cudaChannelFormatDesc &
# 1987
desc) 
# 1989
{ 
# 1990
return ::cudaBindSurfaceToArray(&surf, array, &desc); 
# 1991
} 
# 2012 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
template< class T, int dim> static inline cudaError_t 
# 2013
cudaBindSurfaceToArray(const surface< T, dim>  &
# 2014
surf, cudaArray_const_t 
# 2015
array) 
# 2017
{ 
# 2018
cudaChannelFormatDesc desc; 
# 2019
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 2021
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
# 2022
} 
# 2033 "/usr/local/cuda/bin/..//include/cuda_runtime.h"
#pragma GCC diagnostic pop
# 50 "/usr/include/c++/5/bits/memoryfwd.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 63 "/usr/include/c++/5/bits/memoryfwd.h" 3
template< class > class allocator; 
# 67
template<> class allocator< void> ; 
# 70
template< class , class > struct uses_allocator; 
# 76
}
# 42 "/usr/include/c++/5/bits/stringfwd.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 52
template< class _CharT> struct char_traits; 
# 55
template<> struct char_traits< char> ; 
# 58
template<> struct char_traits< wchar_t> ; 
# 67 "/usr/include/c++/5/bits/stringfwd.h" 3
inline namespace __cxx11 { 
# 69
template< class _CharT, class _Traits = char_traits< _CharT> , class 
# 70
_Alloc = allocator< _CharT> > class basic_string; 
# 74
typedef basic_string< char>  string; 
# 78
typedef basic_string< wchar_t>  wstring; 
# 90 "/usr/include/c++/5/bits/stringfwd.h" 3
}
# 95
}
# 44 "/usr/include/stdio.h" 3
struct _IO_FILE; 
# 48
typedef _IO_FILE FILE; 
# 64 "/usr/include/stdio.h" 3
typedef _IO_FILE __FILE; 
# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list; 
# 357 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3
typedef unsigned wint_t; 
# 94 "/usr/include/wchar.h" 3
typedef 
# 83
struct { 
# 84
int __count; 
# 86
union { 
# 88
unsigned __wch; 
# 92
char __wchb[4]; 
# 93
} __value; 
# 94
} __mbstate_t; 
# 106 "/usr/include/wchar.h" 3
typedef __mbstate_t mbstate_t; 
# 132 "/usr/include/wchar.h" 3
extern "C" {
# 137
struct tm; 
# 147
extern wchar_t *wcscpy(wchar_t *__restrict__ __dest, const wchar_t *__restrict__ __src) throw()
# 149
 __attribute((__nonnull__(1, 2))); 
# 152
extern wchar_t *wcsncpy(wchar_t *__restrict__ __dest, const wchar_t *__restrict__ __src, size_t __n) throw()
# 154
 __attribute((__nonnull__(1, 2))); 
# 157
extern wchar_t *wcscat(wchar_t *__restrict__ __dest, const wchar_t *__restrict__ __src) throw()
# 159
 __attribute((__nonnull__(1, 2))); 
# 161
extern wchar_t *wcsncat(wchar_t *__restrict__ __dest, const wchar_t *__restrict__ __src, size_t __n) throw()
# 163
 __attribute((__nonnull__(1, 2))); 
# 166
extern int wcscmp(const wchar_t * __s1, const wchar_t * __s2) throw()
# 167
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 169
extern int wcsncmp(const wchar_t * __s1, const wchar_t * __s2, size_t __n) throw()
# 170
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 175
extern int wcscasecmp(const wchar_t * __s1, const wchar_t * __s2) throw(); 
# 178
extern int wcsncasecmp(const wchar_t * __s1, const wchar_t * __s2, size_t __n) throw(); 
# 185
extern int wcscasecmp_l(const wchar_t * __s1, const wchar_t * __s2, __locale_t __loc) throw(); 
# 188
extern int wcsncasecmp_l(const wchar_t * __s1, const wchar_t * __s2, size_t __n, __locale_t __loc) throw(); 
# 195
extern int wcscoll(const wchar_t * __s1, const wchar_t * __s2) throw(); 
# 199
extern size_t wcsxfrm(wchar_t *__restrict__ __s1, const wchar_t *__restrict__ __s2, size_t __n) throw(); 
# 209
extern int wcscoll_l(const wchar_t * __s1, const wchar_t * __s2, __locale_t __loc) throw(); 
# 215
extern size_t wcsxfrm_l(wchar_t * __s1, const wchar_t * __s2, size_t __n, __locale_t __loc) throw(); 
# 219
extern wchar_t *wcsdup(const wchar_t * __s) throw() __attribute((__malloc__)); 
# 225
extern "C++" wchar_t *wcschr(wchar_t * __wcs, wchar_t __wc) throw() __asm__("wcschr")
# 226
 __attribute((__pure__)); 
# 227
extern "C++" const wchar_t *wcschr(const wchar_t * __wcs, wchar_t __wc) throw() __asm__("wcschr")
# 228
 __attribute((__pure__)); 
# 235
extern "C++" wchar_t *wcsrchr(wchar_t * __wcs, wchar_t __wc) throw() __asm__("wcsrchr")
# 236
 __attribute((__pure__)); 
# 237
extern "C++" const wchar_t *wcsrchr(const wchar_t * __wcs, wchar_t __wc) throw() __asm__("wcsrchr")
# 238
 __attribute((__pure__)); 
# 248
extern wchar_t *wcschrnul(const wchar_t * __s, wchar_t __wc) throw()
# 249
 __attribute((__pure__)); 
# 255
extern size_t wcscspn(const wchar_t * __wcs, const wchar_t * __reject) throw()
# 256
 __attribute((__pure__)); 
# 259
extern size_t wcsspn(const wchar_t * __wcs, const wchar_t * __accept) throw()
# 260
 __attribute((__pure__)); 
# 263
extern "C++" wchar_t *wcspbrk(wchar_t * __wcs, const wchar_t * __accept) throw() __asm__("wcspbrk")
# 264
 __attribute((__pure__)); 
# 265
extern "C++" const wchar_t *wcspbrk(const wchar_t * __wcs, const wchar_t * __accept) throw() __asm__("wcspbrk")
# 267
 __attribute((__pure__)); 
# 274
extern "C++" wchar_t *wcsstr(wchar_t * __haystack, const wchar_t * __needle) throw() __asm__("wcsstr")
# 275
 __attribute((__pure__)); 
# 276
extern "C++" const wchar_t *wcsstr(const wchar_t * __haystack, const wchar_t * __needle) throw() __asm__("wcsstr")
# 278
 __attribute((__pure__)); 
# 285
extern wchar_t *wcstok(wchar_t *__restrict__ __s, const wchar_t *__restrict__ __delim, wchar_t **__restrict__ __ptr) throw(); 
# 290
extern size_t wcslen(const wchar_t * __s) throw() __attribute((__pure__)); 
# 296
extern "C++" wchar_t *wcswcs(wchar_t * __haystack, const wchar_t * __needle) throw() __asm__("wcswcs")
# 297
 __attribute((__pure__)); 
# 298
extern "C++" const wchar_t *wcswcs(const wchar_t * __haystack, const wchar_t * __needle) throw() __asm__("wcswcs")
# 300
 __attribute((__pure__)); 
# 309 "/usr/include/wchar.h" 3
extern size_t wcsnlen(const wchar_t * __s, size_t __maxlen) throw()
# 310
 __attribute((__pure__)); 
# 317
extern "C++" wchar_t *wmemchr(wchar_t * __s, wchar_t __c, size_t __n) throw() __asm__("wmemchr")
# 318
 __attribute((__pure__)); 
# 319
extern "C++" const wchar_t *wmemchr(const wchar_t * __s, wchar_t __c, size_t __n) throw() __asm__("wmemchr")
# 321
 __attribute((__pure__)); 
# 328
extern int wmemcmp(const wchar_t * __s1, const wchar_t * __s2, size_t __n) throw()
# 329
 __attribute((__pure__)); 
# 332
extern wchar_t *wmemcpy(wchar_t *__restrict__ __s1, const wchar_t *__restrict__ __s2, size_t __n) throw(); 
# 337
extern wchar_t *wmemmove(wchar_t * __s1, const wchar_t * __s2, size_t __n) throw(); 
# 341
extern wchar_t *wmemset(wchar_t * __s, wchar_t __c, size_t __n) throw(); 
# 347
extern wchar_t *wmempcpy(wchar_t *__restrict__ __s1, const wchar_t *__restrict__ __s2, size_t __n) throw(); 
# 356
extern wint_t btowc(int __c) throw(); 
# 360
extern int wctob(wint_t __c) throw(); 
# 364
extern int mbsinit(const mbstate_t * __ps) throw() __attribute((__pure__)); 
# 368
extern size_t mbrtowc(wchar_t *__restrict__ __pwc, const char *__restrict__ __s, size_t __n, mbstate_t *__restrict__ __p) throw(); 
# 373
extern size_t wcrtomb(char *__restrict__ __s, wchar_t __wc, mbstate_t *__restrict__ __ps) throw(); 
# 377
extern size_t __mbrlen(const char *__restrict__ __s, size_t __n, mbstate_t *__restrict__ __ps) throw(); 
# 379
extern size_t mbrlen(const char *__restrict__ __s, size_t __n, mbstate_t *__restrict__ __ps) throw(); 
# 411 "/usr/include/wchar.h" 3
extern size_t mbsrtowcs(wchar_t *__restrict__ __dst, const char **__restrict__ __src, size_t __len, mbstate_t *__restrict__ __ps) throw(); 
# 417
extern size_t wcsrtombs(char *__restrict__ __dst, const wchar_t **__restrict__ __src, size_t __len, mbstate_t *__restrict__ __ps) throw(); 
# 426
extern size_t mbsnrtowcs(wchar_t *__restrict__ __dst, const char **__restrict__ __src, size_t __nmc, size_t __len, mbstate_t *__restrict__ __ps) throw(); 
# 432
extern size_t wcsnrtombs(char *__restrict__ __dst, const wchar_t **__restrict__ __src, size_t __nwc, size_t __len, mbstate_t *__restrict__ __ps) throw(); 
# 442
extern int wcwidth(wchar_t __c) throw(); 
# 446
extern int wcswidth(const wchar_t * __s, size_t __n) throw(); 
# 453
extern double wcstod(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr) throw(); 
# 460
extern float wcstof(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr) throw(); 
# 462
extern long double wcstold(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr) throw(); 
# 471
extern long wcstol(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, int __base) throw(); 
# 476
extern unsigned long wcstoul(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, int __base) throw(); 
# 486
__extension__ extern long long wcstoll(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, int __base) throw(); 
# 493
__extension__ extern unsigned long long wcstoull(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, int __base) throw(); 
# 503
__extension__ extern long long wcstoq(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, int __base) throw(); 
# 510
__extension__ extern unsigned long long wcstouq(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, int __base) throw(); 
# 533 "/usr/include/wchar.h" 3
extern long wcstol_l(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, int __base, __locale_t __loc) throw(); 
# 537
extern unsigned long wcstoul_l(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, int __base, __locale_t __loc) throw(); 
# 542
__extension__ extern long long wcstoll_l(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, int __base, __locale_t __loc) throw(); 
# 547
__extension__ extern unsigned long long wcstoull_l(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, int __base, __locale_t __loc) throw(); 
# 552
extern double wcstod_l(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, __locale_t __loc) throw(); 
# 556
extern float wcstof_l(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, __locale_t __loc) throw(); 
# 560
extern long double wcstold_l(const wchar_t *__restrict__ __nptr, wchar_t **__restrict__ __endptr, __locale_t __loc) throw(); 
# 569
extern wchar_t *wcpcpy(wchar_t *__restrict__ __dest, const wchar_t *__restrict__ __src) throw(); 
# 574
extern wchar_t *wcpncpy(wchar_t *__restrict__ __dest, const wchar_t *__restrict__ __src, size_t __n) throw(); 
# 583
extern __FILE *open_wmemstream(wchar_t ** __bufloc, size_t * __sizeloc) throw(); 
# 590
extern int fwide(__FILE * __fp, int __mode) throw(); 
# 597
extern int fwprintf(__FILE *__restrict__ __stream, const wchar_t *__restrict__ __format, ...); 
# 604
extern int wprintf(const wchar_t *__restrict__ __format, ...); 
# 607
extern int swprintf(wchar_t *__restrict__ __s, size_t __n, const wchar_t *__restrict__ __format, ...) throw(); 
# 615
extern int vfwprintf(__FILE *__restrict__ __s, const wchar_t *__restrict__ __format, __gnuc_va_list __arg); 
# 623
extern int vwprintf(const wchar_t *__restrict__ __format, __gnuc_va_list __arg); 
# 628
extern int vswprintf(wchar_t *__restrict__ __s, size_t __n, const wchar_t *__restrict__ __format, __gnuc_va_list __arg) throw(); 
# 638
extern int fwscanf(__FILE *__restrict__ __stream, const wchar_t *__restrict__ __format, ...); 
# 645
extern int wscanf(const wchar_t *__restrict__ __format, ...); 
# 648
extern int swscanf(const wchar_t *__restrict__ __s, const wchar_t *__restrict__ __format, ...) throw(); 
# 692 "/usr/include/wchar.h" 3
extern int vfwscanf(__FILE *__restrict__ __s, const wchar_t *__restrict__ __format, __gnuc_va_list __arg); 
# 700
extern int vwscanf(const wchar_t *__restrict__ __format, __gnuc_va_list __arg); 
# 704
extern int vswscanf(const wchar_t *__restrict__ __s, const wchar_t *__restrict__ __format, __gnuc_va_list __arg) throw(); 
# 748 "/usr/include/wchar.h" 3
extern wint_t fgetwc(__FILE * __stream); 
# 749
extern wint_t getwc(__FILE * __stream); 
# 755
extern wint_t getwchar(); 
# 762
extern wint_t fputwc(wchar_t __wc, __FILE * __stream); 
# 763
extern wint_t putwc(wchar_t __wc, __FILE * __stream); 
# 769
extern wint_t putwchar(wchar_t __wc); 
# 777
extern wchar_t *fgetws(wchar_t *__restrict__ __ws, int __n, __FILE *__restrict__ __stream); 
# 784
extern int fputws(const wchar_t *__restrict__ __ws, __FILE *__restrict__ __stream); 
# 792
extern wint_t ungetwc(wint_t __wc, __FILE * __stream); 
# 804 "/usr/include/wchar.h" 3
extern wint_t getwc_unlocked(__FILE * __stream); 
# 805
extern wint_t getwchar_unlocked(); 
# 813
extern wint_t fgetwc_unlocked(__FILE * __stream); 
# 821
extern wint_t fputwc_unlocked(wchar_t __wc, __FILE * __stream); 
# 830 "/usr/include/wchar.h" 3
extern wint_t putwc_unlocked(wchar_t __wc, __FILE * __stream); 
# 831
extern wint_t putwchar_unlocked(wchar_t __wc); 
# 840 "/usr/include/wchar.h" 3
extern wchar_t *fgetws_unlocked(wchar_t *__restrict__ __ws, int __n, __FILE *__restrict__ __stream); 
# 849
extern int fputws_unlocked(const wchar_t *__restrict__ __ws, __FILE *__restrict__ __stream); 
# 858
extern size_t wcsftime(wchar_t *__restrict__ __s, size_t __maxsize, const wchar_t *__restrict__ __format, const tm *__restrict__ __tp) throw(); 
# 868
extern size_t wcsftime_l(wchar_t *__restrict__ __s, size_t __maxsize, const wchar_t *__restrict__ __format, const tm *__restrict__ __tp, __locale_t __loc) throw(); 
# 894 "/usr/include/wchar.h" 3
}
# 62 "/usr/include/c++/5/cwchar" 3
namespace std { 
# 64
using ::mbstate_t;
# 65
}
# 135 "/usr/include/c++/5/cwchar" 3
namespace std __attribute((__visibility__("default"))) { 
# 139
using ::wint_t;
# 141
using ::btowc;
# 142
using ::fgetwc;
# 143
using ::fgetws;
# 144
using ::fputwc;
# 145
using ::fputws;
# 146
using ::fwide;
# 147
using ::fwprintf;
# 148
using ::fwscanf;
# 149
using ::getwc;
# 150
using ::getwchar;
# 151
using ::mbrlen;
# 152
using ::mbrtowc;
# 153
using ::mbsinit;
# 154
using ::mbsrtowcs;
# 155
using ::putwc;
# 156
using ::putwchar;
# 158
using ::swprintf;
# 160
using ::swscanf;
# 161
using ::ungetwc;
# 162
using ::vfwprintf;
# 164
using ::vfwscanf;
# 167
using ::vswprintf;
# 170
using ::vswscanf;
# 172
using ::vwprintf;
# 174
using ::vwscanf;
# 176
using ::wcrtomb;
# 177
using ::wcscat;
# 178
using ::wcscmp;
# 179
using ::wcscoll;
# 180
using ::wcscpy;
# 181
using ::wcscspn;
# 182
using ::wcsftime;
# 183
using ::wcslen;
# 184
using ::wcsncat;
# 185
using ::wcsncmp;
# 186
using ::wcsncpy;
# 187
using ::wcsrtombs;
# 188
using ::wcsspn;
# 189
using ::wcstod;
# 191
using ::wcstof;
# 193
using ::wcstok;
# 194
using ::wcstol;
# 195
using ::wcstoul;
# 196
using ::wcsxfrm;
# 197
using ::wctob;
# 198
using ::wmemcmp;
# 199
using ::wmemcpy;
# 200
using ::wmemmove;
# 201
using ::wmemset;
# 202
using ::wprintf;
# 203
using ::wscanf;
# 204
using ::wcschr;
# 205
using ::wcspbrk;
# 206
using ::wcsrchr;
# 207
using ::wcsstr;
# 208
using ::wmemchr;
# 233 "/usr/include/c++/5/cwchar" 3
}
# 241
namespace __gnu_cxx { 
# 248
using ::wcstold;
# 257 "/usr/include/c++/5/cwchar" 3
using ::wcstoll;
# 258
using ::wcstoull;
# 260
}
# 262
namespace std { 
# 264
using __gnu_cxx::wcstold;
# 265
using __gnu_cxx::wcstoll;
# 266
using __gnu_cxx::wcstoull;
# 267
}
# 68 "/usr/include/c++/5/bits/postypes.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 88 "/usr/include/c++/5/bits/postypes.h" 3
typedef long streamoff; 
# 98 "/usr/include/c++/5/bits/postypes.h" 3
typedef ptrdiff_t streamsize; 
# 111 "/usr/include/c++/5/bits/postypes.h" 3
template< class _StateT> 
# 112
class fpos { 
# 115
streamoff _M_off; 
# 116
_StateT _M_state; 
# 123
public: fpos() : _M_off((0)), _M_state() 
# 124
{ } 
# 133 "/usr/include/c++/5/bits/postypes.h" 3
fpos(streamoff __off) : _M_off(__off), _M_state() 
# 134
{ } 
# 137
operator streamoff() const { return _M_off; } 
# 141
void state(_StateT __st) 
# 142
{ (_M_state) = __st; } 
# 146
_StateT state() const 
# 147
{ return _M_state; } 
# 154
fpos &operator+=(streamoff __off) 
# 155
{ 
# 156
(_M_off) += __off; 
# 157
return *this; 
# 158
} 
# 165
fpos &operator-=(streamoff __off) 
# 166
{ 
# 167
(_M_off) -= __off; 
# 168
return *this; 
# 169
} 
# 178
fpos operator+(streamoff __off) const 
# 179
{ 
# 180
fpos __pos(*this); 
# 181
__pos += __off; 
# 182
return __pos; 
# 183
} 
# 192
fpos operator-(streamoff __off) const 
# 193
{ 
# 194
fpos __pos(*this); 
# 195
__pos -= __off; 
# 196
return __pos; 
# 197
} 
# 205
streamoff operator-(const fpos &__other) const 
# 206
{ return (_M_off) - (__other._M_off); } 
# 207
}; 
# 214
template< class _StateT> inline bool 
# 216
operator==(const fpos< _StateT>  &__lhs, const fpos< _StateT>  &__rhs) 
# 217
{ return ((streamoff)__lhs) == ((streamoff)__rhs); } 
# 219
template< class _StateT> inline bool 
# 221
operator!=(const fpos< _StateT>  &__lhs, const fpos< _StateT>  &__rhs) 
# 222
{ return ((streamoff)__lhs) != ((streamoff)__rhs); } 
# 228
typedef fpos< __mbstate_t>  streampos; 
# 230
typedef fpos< __mbstate_t>  wstreampos; 
# 240 "/usr/include/c++/5/bits/postypes.h" 3
}
# 42 "/usr/include/c++/5/iosfwd" 3
namespace std __attribute((__visibility__("default"))) { 
# 74 "/usr/include/c++/5/iosfwd" 3
class ios_base; 
# 76
template< class _CharT, class _Traits = char_traits< _CharT> > class basic_ios; 
# 79
template< class _CharT, class _Traits = char_traits< _CharT> > class basic_streambuf; 
# 82
template< class _CharT, class _Traits = char_traits< _CharT> > class basic_istream; 
# 85
template< class _CharT, class _Traits = char_traits< _CharT> > class basic_ostream; 
# 88
template< class _CharT, class _Traits = char_traits< _CharT> > class basic_iostream; 
# 92
inline namespace __cxx11 { 
# 94
template< class _CharT, class _Traits = char_traits< _CharT> , class 
# 95
_Alloc = allocator< _CharT> > class basic_stringbuf; 
# 98
template< class _CharT, class _Traits = char_traits< _CharT> , class 
# 99
_Alloc = allocator< _CharT> > class basic_istringstream; 
# 102
template< class _CharT, class _Traits = char_traits< _CharT> , class 
# 103
_Alloc = allocator< _CharT> > class basic_ostringstream; 
# 106
template< class _CharT, class _Traits = char_traits< _CharT> , class 
# 107
_Alloc = allocator< _CharT> > class basic_stringstream; 
# 110
}
# 112
template< class _CharT, class _Traits = char_traits< _CharT> > class basic_filebuf; 
# 115
template< class _CharT, class _Traits = char_traits< _CharT> > class basic_ifstream; 
# 118
template< class _CharT, class _Traits = char_traits< _CharT> > class basic_ofstream; 
# 121
template< class _CharT, class _Traits = char_traits< _CharT> > class basic_fstream; 
# 124
template< class _CharT, class _Traits = char_traits< _CharT> > class istreambuf_iterator; 
# 127
template< class _CharT, class _Traits = char_traits< _CharT> > class ostreambuf_iterator; 
# 132
typedef basic_ios< char>  ios; 
# 135
typedef basic_streambuf< char>  streambuf; 
# 138
typedef basic_istream< char>  istream; 
# 141
typedef basic_ostream< char>  ostream; 
# 144
typedef basic_iostream< char>  iostream; 
# 147
typedef __cxx11::basic_stringbuf< char>  stringbuf; 
# 150
typedef __cxx11::basic_istringstream< char>  istringstream; 
# 153
typedef __cxx11::basic_ostringstream< char>  ostringstream; 
# 156
typedef __cxx11::basic_stringstream< char>  stringstream; 
# 159
typedef basic_filebuf< char>  filebuf; 
# 162
typedef basic_ifstream< char>  ifstream; 
# 165
typedef basic_ofstream< char>  ofstream; 
# 168
typedef basic_fstream< char>  fstream; 
# 172
typedef basic_ios< wchar_t>  wios; 
# 175
typedef basic_streambuf< wchar_t>  wstreambuf; 
# 178
typedef basic_istream< wchar_t>  wistream; 
# 181
typedef basic_ostream< wchar_t>  wostream; 
# 184
typedef basic_iostream< wchar_t>  wiostream; 
# 187
typedef __cxx11::basic_stringbuf< wchar_t>  wstringbuf; 
# 190
typedef __cxx11::basic_istringstream< wchar_t>  wistringstream; 
# 193
typedef __cxx11::basic_ostringstream< wchar_t>  wostringstream; 
# 196
typedef __cxx11::basic_stringstream< wchar_t>  wstringstream; 
# 199
typedef basic_filebuf< wchar_t>  wfilebuf; 
# 202
typedef basic_ifstream< wchar_t>  wifstream; 
# 205
typedef basic_ofstream< wchar_t>  wofstream; 
# 208
typedef basic_fstream< wchar_t>  wfstream; 
# 213
}
# 35 "/usr/include/c++/5/exception" 3
#pragma GCC visibility push ( default )
# 40 "/usr/include/c++/5/exception" 3
extern "C++" {
# 42
namespace std { 
# 60 "/usr/include/c++/5/exception" 3
class exception { 
# 63
public: exception() throw() { } 
# 64
virtual ~exception() throw(); 
# 68
virtual const char *what() const throw(); 
# 69
}; 
# 73
class bad_exception : public exception { 
# 76
public: bad_exception() throw() { } 
# 80
virtual ~bad_exception() throw(); 
# 83
virtual const char *what() const throw(); 
# 84
}; 
# 87
typedef void (*terminate_handler)(void); 
# 90
typedef void (*unexpected_handler)(void); 
# 93
terminate_handler set_terminate(terminate_handler) throw(); 
# 102 "/usr/include/c++/5/exception" 3
void terminate() throw() __attribute((__noreturn__)); 
# 105
unexpected_handler set_unexpected(unexpected_handler) throw(); 
# 114 "/usr/include/c++/5/exception" 3
void unexpected() __attribute((__noreturn__)); 
# 127 "/usr/include/c++/5/exception" 3
bool uncaught_exception() throw() __attribute((__pure__)); 
# 130
}
# 132
namespace __gnu_cxx { 
# 152 "/usr/include/c++/5/exception" 3
void __verbose_terminate_handler(); 
# 155
}
# 157
}
# 159
#pragma GCC visibility pop
# 42 "/usr/include/c++/5/bits/functexcept.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 48
void __throw_bad_exception() __attribute((__noreturn__)); 
# 52
void __throw_bad_alloc() __attribute((__noreturn__)); 
# 56
void __throw_bad_cast() __attribute((__noreturn__)); 
# 59
void __throw_bad_typeid() __attribute((__noreturn__)); 
# 63
void __throw_logic_error(const char *) __attribute((__noreturn__)); 
# 66
void __throw_domain_error(const char *) __attribute((__noreturn__)); 
# 69
void __throw_invalid_argument(const char *) __attribute((__noreturn__)); 
# 72
void __throw_length_error(const char *) __attribute((__noreturn__)); 
# 75
void __throw_out_of_range(const char *) __attribute((__noreturn__)); 
# 78
void __throw_out_of_range_fmt(const char *, ...) __attribute((__noreturn__))
# 79
 __attribute((__format__(__gnu_printf__, 1, 2))); 
# 82
void __throw_runtime_error(const char *) __attribute((__noreturn__)); 
# 85
void __throw_range_error(const char *) __attribute((__noreturn__)); 
# 88
void __throw_overflow_error(const char *) __attribute((__noreturn__)); 
# 91
void __throw_underflow_error(const char *) __attribute((__noreturn__)); 
# 95
void __throw_ios_failure(const char *) __attribute((__noreturn__)); 
# 98
void __throw_system_error(int) __attribute((__noreturn__)); 
# 101
void __throw_future_error(int) __attribute((__noreturn__)); 
# 105
void __throw_bad_function_call() __attribute((__noreturn__)); 
# 108
}
# 37 "/usr/include/c++/5/ext/numeric_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 54 "/usr/include/c++/5/ext/numeric_traits.h" 3
template< class _Value> 
# 55
struct __numeric_traits_integer { 
# 58
static const _Value __min = ((((_Value)(-1)) < 0) ? ((_Value)1) << ((sizeof(_Value) * (8)) - (((_Value)(-1)) < 0)) : ((_Value)0)); 
# 59
static const _Value __max = ((((_Value)(-1)) < 0) ? (((((_Value)1) << (((sizeof(_Value) * (8)) - (((_Value)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((_Value)0))); 
# 63
static const bool __is_signed = (((_Value)(-1)) < 0); 
# 64
static const int __digits = ((sizeof(_Value) * (8)) - (((_Value)(-1)) < 0)); 
# 65
}; 
# 67
template< class _Value> const _Value 
# 68
__numeric_traits_integer< _Value> ::__min; 
# 70
template< class _Value> const _Value 
# 71
__numeric_traits_integer< _Value> ::__max; 
# 73
template< class _Value> const bool 
# 74
__numeric_traits_integer< _Value> ::__is_signed; 
# 76
template< class _Value> const int 
# 77
__numeric_traits_integer< _Value> ::__digits; 
# 99 "/usr/include/c++/5/ext/numeric_traits.h" 3
template< class _Value> 
# 100
struct __numeric_traits_floating { 
# 103
static const int __max_digits10 = ((2) + ((((std::__are_same< _Value, float> ::__value) ? 24 : ((std::__are_same< _Value, double> ::__value) ? 53 : 64)) * 643L) / (2136))); 
# 106
static const bool __is_signed = true; 
# 107
static const int __digits10 = ((std::__are_same< _Value, float> ::__value) ? 6 : ((std::__are_same< _Value, double> ::__value) ? 15 : 18)); 
# 108
static const int __max_exponent10 = ((std::__are_same< _Value, float> ::__value) ? 38 : ((std::__are_same< _Value, double> ::__value) ? 308 : 4932)); 
# 109
}; 
# 111
template< class _Value> const int 
# 112
__numeric_traits_floating< _Value> ::__max_digits10; 
# 114
template< class _Value> const bool 
# 115
__numeric_traits_floating< _Value> ::__is_signed; 
# 117
template< class _Value> const int 
# 118
__numeric_traits_floating< _Value> ::__digits10; 
# 120
template< class _Value> const int 
# 121
__numeric_traits_floating< _Value> ::__max_exponent10; 
# 123
template< class _Value> 
# 124
struct __numeric_traits : public __conditional_type< std::__is_integer< _Value> ::__value, __numeric_traits_integer< _Value> , __numeric_traits_floating< _Value> > ::__type { 
# 128
}; 
# 131
}
# 36 "/usr/include/c++/5/bits/move.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 45
template< class _Tp> inline _Tp *
# 47
__addressof(_Tp &__r) 
# 48
{ 
# 49
return reinterpret_cast< _Tp *>(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__r)))); 
# 51
} 
# 54
}
# 159 "/usr/include/c++/5/bits/move.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 174 "/usr/include/c++/5/bits/move.h" 3
template< class _Tp> inline void 
# 176
swap(_Tp &__a, _Tp &__b) 
# 181
{ 
# 185
_Tp __tmp = __a; 
# 186
__a = __b; 
# 187
__b = __tmp; 
# 188
} 
# 193
template< class _Tp, size_t _Nm> inline void 
# 195
swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm]) 
# 199
{ 
# 200
for (size_t __n = (0); __n < _Nm; ++__n) { 
# 201
swap((__a)[__n], (__b)[__n]); }  
# 202
} 
# 206
}
# 65 "/usr/include/c++/5/bits/stl_pair.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 95 "/usr/include/c++/5/bits/stl_pair.h" 3
template< class _T1, class _T2> 
# 96
struct pair { 
# 98
typedef _T1 first_type; 
# 99
typedef _T2 second_type; 
# 101
_T1 first; 
# 102
_T2 second; 
# 108
pair() : first(), second() 
# 109
{ } 
# 112
pair(const _T1 &__a, const _T2 &__b) : first(__a), second(__b) 
# 113
{ } 
# 117
template< class _U1, class _U2> 
# 118
pair(const std::pair< _U1, _U2>  &__p) : first((__p.first)), second((__p.second)) 
# 119
{ } 
# 209 "/usr/include/c++/5/bits/stl_pair.h" 3
}; 
# 212
template< class _T1, class _T2> inline bool 
# 214
operator==(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 215
{ return ((__x.first) == (__y.first)) && ((__x.second) == (__y.second)); } 
# 218
template< class _T1, class _T2> inline bool 
# 220
operator<(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 221
{ return ((__x.first) < (__y.first)) || ((!((__y.first) < (__x.first))) && ((__x.second) < (__y.second))); 
# 222
} 
# 225
template< class _T1, class _T2> inline bool 
# 227
operator!=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 228
{ return !(__x == __y); } 
# 231
template< class _T1, class _T2> inline bool 
# 233
operator>(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 234
{ return __y < __x; } 
# 237
template< class _T1, class _T2> inline bool 
# 239
operator<=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 240
{ return !(__y < __x); } 
# 243
template< class _T1, class _T2> inline bool 
# 245
operator>=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 246
{ return !(__x < __y); } 
# 284 "/usr/include/c++/5/bits/stl_pair.h" 3
template< class _T1, class _T2> inline pair< _T1, _T2>  
# 286
make_pair(_T1 __x, _T2 __y) 
# 287
{ return pair< _T1, _T2> (__x, __y); } 
# 293
}
# 70 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 89 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
struct input_iterator_tag { }; 
# 92
struct output_iterator_tag { }; 
# 95
struct forward_iterator_tag : public input_iterator_tag { }; 
# 99
struct bidirectional_iterator_tag : public forward_iterator_tag { }; 
# 103
struct random_access_iterator_tag : public bidirectional_iterator_tag { }; 
# 116 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
template< class _Category, class _Tp, class _Distance = ptrdiff_t, class 
# 117
_Pointer = _Tp *, class _Reference = _Tp &> 
# 118
struct iterator { 
# 121
typedef _Category iterator_category; 
# 123
typedef _Tp value_type; 
# 125
typedef _Distance difference_type; 
# 127
typedef _Pointer pointer; 
# 129
typedef _Reference reference; 
# 130
}; 
# 165 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
template< class _Iterator> 
# 166
struct iterator_traits { 
# 168
typedef typename _Iterator::iterator_category iterator_category; 
# 169
typedef typename _Iterator::value_type value_type; 
# 170
typedef typename _Iterator::difference_type difference_type; 
# 171
typedef typename _Iterator::pointer pointer; 
# 172
typedef typename _Iterator::reference reference; 
# 173
}; 
# 177
template< class _Tp> 
# 178
struct iterator_traits< _Tp *>  { 
# 180
typedef random_access_iterator_tag iterator_category; 
# 181
typedef _Tp value_type; 
# 182
typedef ptrdiff_t difference_type; 
# 183
typedef _Tp *pointer; 
# 184
typedef _Tp &reference; 
# 185
}; 
# 188
template< class _Tp> 
# 189
struct iterator_traits< const _Tp *>  { 
# 191
typedef random_access_iterator_tag iterator_category; 
# 192
typedef _Tp value_type; 
# 193
typedef ptrdiff_t difference_type; 
# 194
typedef const _Tp *pointer; 
# 195
typedef const _Tp &reference; 
# 196
}; 
# 202
template< class _Iter> inline typename iterator_traits< _Iter> ::iterator_category 
# 204
__iterator_category(const _Iter &) 
# 205
{ return typename iterator_traits< _Iter> ::iterator_category(); } 
# 211
template< class _Iterator, bool _HasBase> 
# 212
struct _Iter_base { 
# 214
typedef _Iterator iterator_type; 
# 215
static iterator_type _S_base(_Iterator __it) 
# 216
{ return __it; } 
# 217
}; 
# 219
template< class _Iterator> 
# 220
struct _Iter_base< _Iterator, true>  { 
# 222
typedef typename _Iterator::iterator_type iterator_type; 
# 223
static iterator_type _S_base(_Iterator __it) 
# 224
{ return (__it.base()); } 
# 225
}; 
# 236 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
}
# 46 "/usr/include/c++/5/debug/debug.h" 3
namespace std { 
# 48
namespace __debug { }
# 49
}
# 54
namespace __gnu_debug { 
# 56
using namespace std::__debug;
# 57
}
# 67 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 71
template< class _InputIterator> inline typename iterator_traits< _InputIterator> ::difference_type 
# 73
__distance(_InputIterator __first, _InputIterator __last, input_iterator_tag) 
# 75
{ 
# 79
typename iterator_traits< _InputIterator> ::difference_type __n = (0); 
# 80
while (__first != __last) 
# 81
{ 
# 82
++__first; 
# 83
++__n; 
# 84
}  
# 85
return __n; 
# 86
} 
# 88
template< class _RandomAccessIterator> inline typename iterator_traits< _RandomAccessIterator> ::difference_type 
# 90
__distance(_RandomAccessIterator __first, _RandomAccessIterator __last, random_access_iterator_tag) 
# 92
{ 
# 96
return __last - __first; 
# 97
} 
# 112 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3
template< class _InputIterator> inline typename iterator_traits< _InputIterator> ::difference_type 
# 114
distance(_InputIterator __first, _InputIterator __last) 
# 115
{ 
# 117
return std::__distance(__first, __last, std::__iterator_category(__first)); 
# 119
} 
# 121
template< class _InputIterator, class _Distance> inline void 
# 123
__advance(_InputIterator &__i, _Distance __n, input_iterator_tag) 
# 124
{ 
# 127
; 
# 128
while (__n--) { 
# 129
++__i; }  
# 130
} 
# 132
template< class _BidirectionalIterator, class _Distance> inline void 
# 134
__advance(_BidirectionalIterator &__i, _Distance __n, bidirectional_iterator_tag) 
# 136
{ 
# 140
if (__n > 0) { 
# 141
while (__n--) { 
# 142
++__i; }  } else { 
# 144
while (__n++) { 
# 145
--__i; }  }  
# 146
} 
# 148
template< class _RandomAccessIterator, class _Distance> inline void 
# 150
__advance(_RandomAccessIterator &__i, _Distance __n, random_access_iterator_tag) 
# 152
{ 
# 156
__i += __n; 
# 157
} 
# 171 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3
template< class _InputIterator, class _Distance> inline void 
# 173
advance(_InputIterator &__i, _Distance __n) 
# 174
{ 
# 176
typename iterator_traits< _InputIterator> ::difference_type __d = __n; 
# 177
std::__advance(__i, __d, std::__iterator_category(__i)); 
# 178
} 
# 203 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3
}
# 68 "/usr/include/c++/5/bits/stl_iterator.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 96 "/usr/include/c++/5/bits/stl_iterator.h" 3
template< class _Iterator> 
# 97
class reverse_iterator : public iterator< typename iterator_traits< _Iterator> ::iterator_category, typename iterator_traits< _Iterator> ::value_type, typename iterator_traits< _Iterator> ::difference_type, typename iterator_traits< _Iterator> ::pointer, typename iterator_traits< _Iterator> ::reference>  { 
# 105
protected: _Iterator current; 
# 107
typedef iterator_traits< _Iterator>  __traits_type; 
# 110
public: typedef _Iterator iterator_type; 
# 111
typedef typename iterator_traits< _Iterator> ::difference_type difference_type; 
# 112
typedef typename iterator_traits< _Iterator> ::pointer pointer; 
# 113
typedef typename iterator_traits< _Iterator> ::reference reference; 
# 121
reverse_iterator() : current() { } 
# 127
explicit reverse_iterator(iterator_type __x) : current(__x) { } 
# 132
reverse_iterator(const reverse_iterator &__x) : current((__x.current)) 
# 133
{ } 
# 139
template< class _Iter> 
# 140
reverse_iterator(const ::std::reverse_iterator< _Iter>  &__x) : current((__x.base())) 
# 141
{ } 
# 147
iterator_type base() const 
# 148
{ return current; } 
# 161 "/usr/include/c++/5/bits/stl_iterator.h" 3
reference operator*() const 
# 162
{ 
# 163
_Iterator __tmp = current; 
# 164
return *(--__tmp); 
# 165
} 
# 173
pointer operator->() const 
# 174
{ return &operator*(); } 
# 182
reverse_iterator &operator++() 
# 183
{ 
# 184
--(current); 
# 185
return *this; 
# 186
} 
# 194
reverse_iterator operator++(int) 
# 195
{ 
# 196
reverse_iterator __tmp = *this; 
# 197
--(current); 
# 198
return __tmp; 
# 199
} 
# 207
reverse_iterator &operator--() 
# 208
{ 
# 209
++(current); 
# 210
return *this; 
# 211
} 
# 219
reverse_iterator operator--(int) 
# 220
{ 
# 221
reverse_iterator __tmp = *this; 
# 222
++(current); 
# 223
return __tmp; 
# 224
} 
# 232
reverse_iterator operator+(difference_type __n) const 
# 233
{ return ((reverse_iterator)((current) - __n)); } 
# 242
reverse_iterator &operator+=(difference_type __n) 
# 243
{ 
# 244
(current) -= __n; 
# 245
return *this; 
# 246
} 
# 254
reverse_iterator operator-(difference_type __n) const 
# 255
{ return ((reverse_iterator)((current) + __n)); } 
# 264
reverse_iterator &operator-=(difference_type __n) 
# 265
{ 
# 266
(current) += __n; 
# 267
return *this; 
# 268
} 
# 276
reference operator[](difference_type __n) const 
# 277
{ return *((*this) + __n); } 
# 278
}; 
# 290 "/usr/include/c++/5/bits/stl_iterator.h" 3
template< class _Iterator> inline bool 
# 292
operator==(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 293
__y) 
# 294
{ return (__x.base()) == (__y.base()); } 
# 296
template< class _Iterator> inline bool 
# 298
operator<(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 299
__y) 
# 300
{ return (__y.base()) < (__x.base()); } 
# 302
template< class _Iterator> inline bool 
# 304
operator!=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 305
__y) 
# 306
{ return !(__x == __y); } 
# 308
template< class _Iterator> inline bool 
# 310
operator>(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 311
__y) 
# 312
{ return __y < __x; } 
# 314
template< class _Iterator> inline bool 
# 316
operator<=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 317
__y) 
# 318
{ return !(__y < __x); } 
# 320
template< class _Iterator> inline bool 
# 322
operator>=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 323
__y) 
# 324
{ return !(__x < __y); } 
# 326
template< class _Iterator> inline typename reverse_iterator< _Iterator> ::difference_type 
# 328
operator-(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 329
__y) 
# 330
{ return (__y.base()) - (__x.base()); } 
# 332
template< class _Iterator> inline reverse_iterator< _Iterator>  
# 334
operator+(typename reverse_iterator< _Iterator> ::difference_type __n, const reverse_iterator< _Iterator>  &
# 335
__x) 
# 336
{ return ((reverse_iterator< _Iterator> )((__x.base()) - __n)); } 
# 340
template< class _IteratorL, class _IteratorR> inline bool 
# 342
operator==(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 343
__y) 
# 344
{ return (__x.base()) == (__y.base()); } 
# 346
template< class _IteratorL, class _IteratorR> inline bool 
# 348
operator<(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 349
__y) 
# 350
{ return (__y.base()) < (__x.base()); } 
# 352
template< class _IteratorL, class _IteratorR> inline bool 
# 354
operator!=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 355
__y) 
# 356
{ return !(__x == __y); } 
# 358
template< class _IteratorL, class _IteratorR> inline bool 
# 360
operator>(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 361
__y) 
# 362
{ return __y < __x; } 
# 364
template< class _IteratorL, class _IteratorR> inline bool 
# 366
operator<=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 367
__y) 
# 368
{ return !(__y < __x); } 
# 370
template< class _IteratorL, class _IteratorR> inline bool 
# 372
operator>=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 373
__y) 
# 374
{ return !(__x < __y); } 
# 376
template< class _IteratorL, class _IteratorR> inline typename reverse_iterator< _IteratorL> ::difference_type 
# 385
operator-(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 386
__y) 
# 388
{ return (__y.base()) - (__x.base()); } 
# 414 "/usr/include/c++/5/bits/stl_iterator.h" 3
template< class _Container> 
# 415
class back_insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 419
protected: _Container *container; 
# 423
public: typedef _Container container_type; 
# 427
explicit back_insert_iterator(_Container &__x) : container((&__x)) { } 
# 442 "/usr/include/c++/5/bits/stl_iterator.h" 3
back_insert_iterator &operator=(typename _Container::const_reference __value) 
# 443
{ 
# 444
((container)->push_back(__value)); 
# 445
return *this; 
# 446
} 
# 465 "/usr/include/c++/5/bits/stl_iterator.h" 3
back_insert_iterator &operator*() 
# 466
{ return *this; } 
# 470
back_insert_iterator &operator++() 
# 471
{ return *this; } 
# 475
back_insert_iterator operator++(int) 
# 476
{ return *this; } 
# 477
}; 
# 490 "/usr/include/c++/5/bits/stl_iterator.h" 3
template< class _Container> inline back_insert_iterator< _Container>  
# 492
back_inserter(_Container &__x) 
# 493
{ return ((back_insert_iterator< _Container> )(__x)); } 
# 505 "/usr/include/c++/5/bits/stl_iterator.h" 3
template< class _Container> 
# 506
class front_insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 510
protected: _Container *container; 
# 514
public: typedef _Container container_type; 
# 517
explicit front_insert_iterator(_Container &__x) : container((&__x)) { } 
# 532 "/usr/include/c++/5/bits/stl_iterator.h" 3
front_insert_iterator &operator=(typename _Container::const_reference __value) 
# 533
{ 
# 534
((container)->push_front(__value)); 
# 535
return *this; 
# 536
} 
# 555 "/usr/include/c++/5/bits/stl_iterator.h" 3
front_insert_iterator &operator*() 
# 556
{ return *this; } 
# 560
front_insert_iterator &operator++() 
# 561
{ return *this; } 
# 565
front_insert_iterator operator++(int) 
# 566
{ return *this; } 
# 567
}; 
# 580 "/usr/include/c++/5/bits/stl_iterator.h" 3
template< class _Container> inline front_insert_iterator< _Container>  
# 582
front_inserter(_Container &__x) 
# 583
{ return ((front_insert_iterator< _Container> )(__x)); } 
# 599 "/usr/include/c++/5/bits/stl_iterator.h" 3
template< class _Container> 
# 600
class insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 604
protected: _Container *container; 
# 605
typename _Container::iterator iter; 
# 609
public: typedef _Container container_type; 
# 615
insert_iterator(_Container &__x, typename _Container::iterator __i) : container((&__x)), iter(__i) 
# 616
{ } 
# 643 "/usr/include/c++/5/bits/stl_iterator.h" 3
insert_iterator &operator=(typename _Container::const_reference __value) 
# 644
{ 
# 645
(iter) = ((container)->insert(iter, __value)); 
# 646
++(iter); 
# 647
return *this; 
# 648
} 
# 669 "/usr/include/c++/5/bits/stl_iterator.h" 3
insert_iterator &operator*() 
# 670
{ return *this; } 
# 674
insert_iterator &operator++() 
# 675
{ return *this; } 
# 679
insert_iterator &operator++(int) 
# 680
{ return *this; } 
# 681
}; 
# 694 "/usr/include/c++/5/bits/stl_iterator.h" 3
template< class _Container, class _Iterator> inline insert_iterator< _Container>  
# 696
inserter(_Container &__x, _Iterator __i) 
# 697
{ 
# 698
return insert_iterator< _Container> (__x, (typename _Container::iterator)__i); 
# 700
} 
# 705
}
# 707
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 718 "/usr/include/c++/5/bits/stl_iterator.h" 3
using std::iterator_traits;
# 719
using std::iterator;
# 720
template< class _Iterator, class _Container> 
# 721
class __normal_iterator { 
# 724
protected: _Iterator _M_current; 
# 726
typedef std::iterator_traits< _Iterator>  __traits_type; 
# 729
public: typedef _Iterator iterator_type; 
# 730
typedef typename std::iterator_traits< _Iterator> ::iterator_category iterator_category; 
# 731
typedef typename std::iterator_traits< _Iterator> ::value_type value_type; 
# 732
typedef typename std::iterator_traits< _Iterator> ::difference_type difference_type; 
# 733
typedef typename std::iterator_traits< _Iterator> ::reference reference; 
# 734
typedef typename std::iterator_traits< _Iterator> ::pointer pointer; 
# 736
__normal_iterator() : _M_current(_Iterator()) 
# 737
{ } 
# 740
explicit __normal_iterator(const _Iterator &__i) : _M_current(__i) 
# 741
{ } 
# 744
template< class _Iter> 
# 745
__normal_iterator(const __gnu_cxx::__normal_iterator< _Iter, typename __enable_if< std::__are_same< _Iter, typename _Container::pointer> ::__value, _Container> ::__type>  &
# 748
__i) : _M_current((__i.base())) 
# 749
{ } 
# 753
reference operator*() const 
# 754
{ return *(_M_current); } 
# 757
pointer operator->() const 
# 758
{ return _M_current; } 
# 761
__normal_iterator &operator++() 
# 762
{ 
# 763
++(_M_current); 
# 764
return *this; 
# 765
} 
# 768
__normal_iterator operator++(int) 
# 769
{ return ((__normal_iterator)((_M_current)++)); } 
# 773
__normal_iterator &operator--() 
# 774
{ 
# 775
--(_M_current); 
# 776
return *this; 
# 777
} 
# 780
__normal_iterator operator--(int) 
# 781
{ return ((__normal_iterator)((_M_current)--)); } 
# 785
reference operator[](difference_type __n) const 
# 786
{ return (_M_current)[__n]; } 
# 789
__normal_iterator &operator+=(difference_type __n) 
# 790
{ (_M_current) += __n; return *this; } 
# 793
__normal_iterator operator+(difference_type __n) const 
# 794
{ return ((__normal_iterator)((_M_current) + __n)); } 
# 797
__normal_iterator &operator-=(difference_type __n) 
# 798
{ (_M_current) -= __n; return *this; } 
# 801
__normal_iterator operator-(difference_type __n) const 
# 802
{ return ((__normal_iterator)((_M_current) - __n)); } 
# 805
const _Iterator &base() const 
# 806
{ return _M_current; } 
# 807
}; 
# 818 "/usr/include/c++/5/bits/stl_iterator.h" 3
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 820
operator==(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 821
__rhs) 
# 823
{ return (__lhs.base()) == (__rhs.base()); } 
# 825
template< class _Iterator, class _Container> inline bool 
# 827
operator==(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 828
__rhs) 
# 830
{ return (__lhs.base()) == (__rhs.base()); } 
# 832
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 834
operator!=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 835
__rhs) 
# 837
{ return (__lhs.base()) != (__rhs.base()); } 
# 839
template< class _Iterator, class _Container> inline bool 
# 841
operator!=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 842
__rhs) 
# 844
{ return (__lhs.base()) != (__rhs.base()); } 
# 847
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 849
operator<(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 850
__rhs) 
# 852
{ return (__lhs.base()) < (__rhs.base()); } 
# 854
template< class _Iterator, class _Container> inline bool 
# 856
operator<(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 857
__rhs) 
# 859
{ return (__lhs.base()) < (__rhs.base()); } 
# 861
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 863
operator>(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 864
__rhs) 
# 866
{ return (__lhs.base()) > (__rhs.base()); } 
# 868
template< class _Iterator, class _Container> inline bool 
# 870
operator>(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 871
__rhs) 
# 873
{ return (__lhs.base()) > (__rhs.base()); } 
# 875
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 877
operator<=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 878
__rhs) 
# 880
{ return (__lhs.base()) <= (__rhs.base()); } 
# 882
template< class _Iterator, class _Container> inline bool 
# 884
operator<=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 885
__rhs) 
# 887
{ return (__lhs.base()) <= (__rhs.base()); } 
# 889
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 891
operator>=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 892
__rhs) 
# 894
{ return (__lhs.base()) >= (__rhs.base()); } 
# 896
template< class _Iterator, class _Container> inline bool 
# 898
operator>=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 899
__rhs) 
# 901
{ return (__lhs.base()) >= (__rhs.base()); } 
# 907
template< class _IteratorL, class _IteratorR, class _Container> inline typename __normal_iterator< _IteratorL, _Container> ::difference_type 
# 916
operator-(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 917
__rhs) 
# 919
{ return (__lhs.base()) - (__rhs.base()); } 
# 921
template< class _Iterator, class _Container> inline typename __normal_iterator< _Iterator, _Container> ::difference_type 
# 923
operator-(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 924
__rhs) 
# 926
{ return (__lhs.base()) - (__rhs.base()); } 
# 928
template< class _Iterator, class _Container> inline __normal_iterator< _Iterator, _Container>  
# 930
operator+(typename __normal_iterator< _Iterator, _Container> ::difference_type 
# 931
__n, const __normal_iterator< _Iterator, _Container>  &__i) 
# 933
{ return ((__normal_iterator< _Iterator, _Container> )((__i.base()) + __n)); } 
# 936
}
# 33 "/usr/include/c++/5/bits/predefined_ops.h" 3
namespace __gnu_cxx { 
# 35
namespace __ops { 
# 37
struct _Iter_less_iter { 
# 39
template< class _Iterator1, class _Iterator2> bool 
# 42
operator()(_Iterator1 __it1, _Iterator2 __it2) const 
# 43
{ return (*__it1) < (*__it2); } 
# 44
}; 
# 47
inline _Iter_less_iter __iter_less_iter() 
# 48
{ return _Iter_less_iter(); } 
# 50
struct _Iter_less_val { 
# 52
template< class _Iterator, class _Value> bool 
# 54
operator()(_Iterator __it, _Value &__val) const 
# 55
{ return (*__it) < __val; } 
# 56
}; 
# 59
inline _Iter_less_val __iter_less_val() 
# 60
{ return _Iter_less_val(); } 
# 63
inline _Iter_less_val __iter_comp_val(_Iter_less_iter) 
# 64
{ return _Iter_less_val(); } 
# 66
struct _Val_less_iter { 
# 68
template< class _Value, class _Iterator> bool 
# 70
operator()(_Value &__val, _Iterator __it) const 
# 71
{ return __val < (*__it); } 
# 72
}; 
# 75
inline _Val_less_iter __val_less_iter() 
# 76
{ return _Val_less_iter(); } 
# 79
inline _Val_less_iter __val_comp_iter(_Iter_less_iter) 
# 80
{ return _Val_less_iter(); } 
# 82
struct _Iter_equal_to_iter { 
# 84
template< class _Iterator1, class _Iterator2> bool 
# 86
operator()(_Iterator1 __it1, _Iterator2 __it2) const 
# 87
{ return (*__it1) == (*__it2); } 
# 88
}; 
# 91
inline _Iter_equal_to_iter __iter_equal_to_iter() 
# 92
{ return _Iter_equal_to_iter(); } 
# 94
struct _Iter_equal_to_val { 
# 96
template< class _Iterator, class _Value> bool 
# 98
operator()(_Iterator __it, _Value &__val) const 
# 99
{ return (*__it) == __val; } 
# 100
}; 
# 103
inline _Iter_equal_to_val __iter_equal_to_val() 
# 104
{ return _Iter_equal_to_val(); } 
# 107
inline _Iter_equal_to_val __iter_comp_val(_Iter_equal_to_iter) 
# 108
{ return _Iter_equal_to_val(); } 
# 110
template< class _Compare> 
# 111
struct _Iter_comp_iter { 
# 113
_Compare _M_comp; 
# 115
_Iter_comp_iter(_Compare __comp) : _M_comp(__comp) 
# 117
{ } 
# 119
template< class _Iterator1, class _Iterator2> bool 
# 122
operator()(_Iterator1 __it1, _Iterator2 __it2) 
# 123
{ return (bool)(_M_comp)(*__it1, *__it2); } 
# 124
}; 
# 126
template< class _Compare> inline _Iter_comp_iter< _Compare>  
# 129
__iter_comp_iter(_Compare __comp) 
# 130
{ return ((_Iter_comp_iter< _Compare> )(__comp)); } 
# 132
template< class _Compare> 
# 133
struct _Iter_comp_val { 
# 135
_Compare _M_comp; 
# 137
_Iter_comp_val(_Compare __comp) : _M_comp(__comp) 
# 139
{ } 
# 141
template< class _Iterator, class _Value> bool 
# 143
operator()(_Iterator __it, _Value &__val) 
# 144
{ return (bool)(_M_comp)(*__it, __val); } 
# 145
}; 
# 147
template< class _Compare> inline _Iter_comp_val< _Compare>  
# 149
__iter_comp_val(_Compare __comp) 
# 150
{ return ((_Iter_comp_val< _Compare> )(__comp)); } 
# 152
template< class _Compare> inline _Iter_comp_val< _Compare>  
# 154
__iter_comp_val(_Iter_comp_iter< _Compare>  __comp) 
# 155
{ return ((_Iter_comp_val< _Compare> )((__comp._M_comp))); } 
# 157
template< class _Compare> 
# 158
struct _Val_comp_iter { 
# 160
_Compare _M_comp; 
# 162
_Val_comp_iter(_Compare __comp) : _M_comp(__comp) 
# 164
{ } 
# 166
template< class _Value, class _Iterator> bool 
# 168
operator()(_Value &__val, _Iterator __it) 
# 169
{ return (bool)(_M_comp)(__val, *__it); } 
# 170
}; 
# 172
template< class _Compare> inline _Val_comp_iter< _Compare>  
# 174
__val_comp_iter(_Compare __comp) 
# 175
{ return ((_Val_comp_iter< _Compare> )(__comp)); } 
# 177
template< class _Compare> inline _Val_comp_iter< _Compare>  
# 179
__val_comp_iter(_Iter_comp_iter< _Compare>  __comp) 
# 180
{ return ((_Val_comp_iter< _Compare> )((__comp._M_comp))); } 
# 182
template< class _Value> 
# 183
struct _Iter_equals_val { 
# 185
_Value &_M_value; 
# 187
_Iter_equals_val(_Value &__value) : _M_value(__value) 
# 189
{ } 
# 191
template< class _Iterator> bool 
# 193
operator()(_Iterator __it) 
# 194
{ return (*__it) == (_M_value); } 
# 195
}; 
# 197
template< class _Value> inline _Iter_equals_val< _Value>  
# 199
__iter_equals_val(_Value &__val) 
# 200
{ return ((_Iter_equals_val< _Value> )(__val)); } 
# 202
template< class _Iterator1> 
# 203
struct _Iter_equals_iter { 
# 205
typename std::iterator_traits< _Iterator1> ::reference _M_ref; 
# 207
_Iter_equals_iter(_Iterator1 __it1) : _M_ref(*__it1) 
# 209
{ } 
# 211
template< class _Iterator2> bool 
# 213
operator()(_Iterator2 __it2) 
# 214
{ return (*__it2) == (_M_ref); } 
# 215
}; 
# 217
template< class _Iterator> inline _Iter_equals_iter< _Iterator>  
# 219
__iter_comp_iter(_Iter_equal_to_iter, _Iterator __it) 
# 220
{ return ((_Iter_equals_iter< _Iterator> )(__it)); } 
# 222
template< class _Predicate> 
# 223
struct _Iter_pred { 
# 225
_Predicate _M_pred; 
# 227
_Iter_pred(_Predicate __pred) : _M_pred(__pred) 
# 229
{ } 
# 231
template< class _Iterator> bool 
# 233
operator()(_Iterator __it) 
# 234
{ return (bool)(_M_pred)(*__it); } 
# 235
}; 
# 237
template< class _Predicate> inline _Iter_pred< _Predicate>  
# 239
__pred_iter(_Predicate __pred) 
# 240
{ return ((_Iter_pred< _Predicate> )(__pred)); } 
# 242
template< class _Compare, class _Value> 
# 243
struct _Iter_comp_to_val { 
# 245
_Compare _M_comp; 
# 246
_Value &_M_value; 
# 248
_Iter_comp_to_val(_Compare __comp, _Value &__value) : _M_comp(__comp), _M_value(__value) 
# 250
{ } 
# 252
template< class _Iterator> bool 
# 254
operator()(_Iterator __it) 
# 255
{ return (bool)(_M_comp)(*__it, _M_value); } 
# 256
}; 
# 258
template< class _Compare, class _Value> _Iter_comp_to_val< _Compare, _Value>  
# 260
__iter_comp_val(_Compare __comp, _Value &__val) 
# 261
{ return _Iter_comp_to_val< _Compare, _Value> (__comp, __val); } 
# 263
template< class _Compare, class _Iterator1> 
# 264
struct _Iter_comp_to_iter { 
# 266
_Compare _M_comp; 
# 267
typename std::iterator_traits< _Iterator1> ::reference _M_ref; 
# 269
_Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1) : _M_comp(__comp), _M_ref(*__it1) 
# 271
{ } 
# 273
template< class _Iterator2> bool 
# 275
operator()(_Iterator2 __it2) 
# 276
{ return (bool)(_M_comp)(*__it2, _M_ref); } 
# 277
}; 
# 279
template< class _Compare, class _Iterator> inline _Iter_comp_to_iter< _Compare, _Iterator>  
# 281
__iter_comp_iter(_Iter_comp_iter< _Compare>  __comp, _Iterator __it) 
# 282
{ return _Iter_comp_to_iter< _Compare, _Iterator> ((__comp._M_comp), __it); } 
# 284
template< class _Predicate> 
# 285
struct _Iter_negate { 
# 287
_Predicate _M_pred; 
# 289
_Iter_negate(_Predicate __pred) : _M_pred(__pred) 
# 291
{ } 
# 293
template< class _Iterator> bool 
# 295
operator()(_Iterator __it) 
# 296
{ return !((bool)(_M_pred)(*__it)); } 
# 297
}; 
# 299
template< class _Predicate> inline _Iter_negate< _Predicate>  
# 301
__negate(_Iter_pred< _Predicate>  __pred) 
# 302
{ return ((_Iter_negate< _Predicate> )((__pred._M_pred))); } 
# 304
}
# 305
}
# 73 "/usr/include/c++/5/bits/stl_algobase.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 81
template< bool _BoolType> 
# 82
struct __iter_swap { 
# 84
template< class _ForwardIterator1, class _ForwardIterator2> static void 
# 86
iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b) 
# 87
{ 
# 89
typedef typename iterator_traits< _ForwardIterator1> ::value_type _ValueType1; 
# 90
_ValueType1 __tmp = *__a; 
# 91
(*__a) = (*__b); 
# 92
(*__b) = __tmp; 
# 93
} 
# 94
}; 
# 97
template<> struct __iter_swap< true>  { 
# 99
template< class _ForwardIterator1, class _ForwardIterator2> static void 
# 101
iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b) 
# 102
{ 
# 103
swap(*__a, *__b); 
# 104
} 
# 105
}; 
# 118 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _ForwardIterator1, class _ForwardIterator2> inline void 
# 120
iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b) 
# 121
{ 
# 130
typedef typename iterator_traits< _ForwardIterator1> ::value_type _ValueType1; 
# 132
typedef typename iterator_traits< _ForwardIterator2> ::value_type _ValueType2; 
# 140
typedef typename iterator_traits< _ForwardIterator1> ::reference _ReferenceType1; 
# 142
typedef typename iterator_traits< _ForwardIterator2> ::reference _ReferenceType2; 
# 143
std::__iter_swap< __are_same< typename iterator_traits< _ForwardIterator1> ::value_type, typename iterator_traits< _ForwardIterator2> ::value_type> ::__value && __are_same< typename iterator_traits< _ForwardIterator1> ::value_type &, typename iterator_traits< _ForwardIterator1> ::reference> ::__value && __are_same< typename iterator_traits< _ForwardIterator2> ::value_type &, typename iterator_traits< _ForwardIterator2> ::reference> ::__value> ::iter_swap(__a, __b); 
# 150
} 
# 164 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _ForwardIterator1, class _ForwardIterator2> _ForwardIterator2 
# 166
swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 167
__first2) 
# 168
{ 
# 174
; 
# 176
for (; __first1 != __last1; (++__first1), (++__first2)) { 
# 177
std::iter_swap(__first1, __first2); }  
# 178
return __first2; 
# 179
} 
# 192 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _Tp> inline const _Tp &
# 195
min(const _Tp &__a, const _Tp &__b) 
# 196
{ 
# 200
if (__b < __a) { 
# 201
return __b; }  
# 202
return __a; 
# 203
} 
# 216 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _Tp> inline const _Tp &
# 219
max(const _Tp &__a, const _Tp &__b) 
# 220
{ 
# 224
if (__a < __b) { 
# 225
return __b; }  
# 226
return __a; 
# 227
} 
# 240 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _Tp, class _Compare> inline const _Tp &
# 243
min(const _Tp &__a, const _Tp &__b, _Compare __comp) 
# 244
{ 
# 246
if (__comp(__b, __a)) { 
# 247
return __b; }  
# 248
return __a; 
# 249
} 
# 262 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _Tp, class _Compare> inline const _Tp &
# 265
max(const _Tp &__a, const _Tp &__b, _Compare __comp) 
# 266
{ 
# 268
if (__comp(__a, __b)) { 
# 269
return __b; }  
# 270
return __a; 
# 271
} 
# 275
template< class _Iterator> 
# 276
struct _Niter_base : public _Iter_base< _Iterator, __is_normal_iterator< _Iterator> ::__value>  { 
# 278
}; 
# 280
template< class _Iterator> inline typename _Niter_base< _Iterator> ::iterator_type 
# 282
__niter_base(_Iterator __it) 
# 283
{ return std::_Niter_base< _Iterator> ::_S_base(__it); } 
# 286
template< class _Iterator> 
# 287
struct _Miter_base : public _Iter_base< _Iterator, __is_move_iterator< _Iterator> ::__value>  { 
# 289
}; 
# 291
template< class _Iterator> inline typename _Miter_base< _Iterator> ::iterator_type 
# 293
__miter_base(_Iterator __it) 
# 294
{ return std::_Miter_base< _Iterator> ::_S_base(__it); } 
# 302
template< bool , bool , class > 
# 303
struct __copy_move { 
# 305
template< class _II, class _OI> static _OI 
# 307
__copy_m(_II __first, _II __last, _OI __result) 
# 308
{ 
# 309
for (; __first != __last; (++__result), (++__first)) { 
# 310
(*__result) = (*__first); }  
# 311
return __result; 
# 312
} 
# 313
}; 
# 331 "/usr/include/c++/5/bits/stl_algobase.h" 3
template<> struct __copy_move< false, false, random_access_iterator_tag>  { 
# 333
template< class _II, class _OI> static _OI 
# 335
__copy_m(_II __first, _II __last, _OI __result) 
# 336
{ 
# 337
typedef typename iterator_traits< _II> ::difference_type _Distance; 
# 338
for (_Distance __n = __last - __first; __n > 0; --__n) 
# 339
{ 
# 340
(*__result) = (*__first); 
# 341
++__first; 
# 342
++__result; 
# 343
}  
# 344
return __result; 
# 345
} 
# 346
}; 
# 368 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< bool _IsMove> 
# 369
struct __copy_move< _IsMove, true, random_access_iterator_tag>  { 
# 371
template< class _Tp> static _Tp *
# 373
__copy_m(const _Tp *__first, const _Tp *__last, _Tp *__result) 
# 374
{ 
# 382
const ptrdiff_t _Num = __last - __first; 
# 383
if (_Num) { 
# 384
__builtin_memmove(__result, __first, sizeof(_Tp) * _Num); }  
# 385
return __result + _Num; 
# 386
} 
# 387
}; 
# 389
template< bool _IsMove, class _II, class _OI> inline _OI 
# 391
__copy_move_a(_II __first, _II __last, _OI __result) 
# 392
{ 
# 393
typedef typename iterator_traits< _II> ::value_type _ValueTypeI; 
# 394
typedef typename iterator_traits< _OI> ::value_type _ValueTypeO; 
# 395
typedef typename iterator_traits< _II> ::iterator_category _Category; 
# 396
const bool __simple = (__is_trivial(_ValueTypeI) && __is_pointer< _II> ::__value && __is_pointer< _OI> ::__value && __are_same< typename iterator_traits< _II> ::value_type, typename iterator_traits< _OI> ::value_type> ::__value); 
# 401
return std::__copy_move< _IsMove, __simple, typename iterator_traits< _II> ::iterator_category> ::__copy_m(__first, __last, __result); 
# 403
} 
# 407
template< class _CharT> struct char_traits; 
# 410
template< class _CharT, class _Traits> class istreambuf_iterator; 
# 413
template< class _CharT, class _Traits> class ostreambuf_iterator; 
# 416
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type __copy_move_a2(_CharT *, _CharT *, ostreambuf_iterator< _CharT, char_traits< _CharT> > ); 
# 422
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type __copy_move_a2(const _CharT *, const _CharT *, ostreambuf_iterator< _CharT, char_traits< _CharT> > ); 
# 428
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _CharT *> ::__type __copy_move_a2(istreambuf_iterator< _CharT, char_traits< _CharT> > , istreambuf_iterator< _CharT, char_traits< _CharT> > , _CharT *); 
# 434
template< bool _IsMove, class _II, class _OI> inline _OI 
# 436
__copy_move_a2(_II __first, _II __last, _OI __result) 
# 437
{ 
# 438
return (_OI)std::__copy_move_a< _IsMove> (std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result)); 
# 441
} 
# 460 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _II, class _OI> inline _OI 
# 462
copy(_II __first, _II __last, _OI __result) 
# 463
{ 
# 468
; 
# 470
return std::__copy_move_a2< __is_move_iterator< _II> ::__value> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 473
} 
# 512 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< bool , bool , class > 
# 513
struct __copy_move_backward { 
# 515
template< class _BI1, class _BI2> static _BI2 
# 517
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 518
{ 
# 519
while (__first != __last) { 
# 520
(*(--__result)) = (*(--__last)); }  
# 521
return __result; 
# 522
} 
# 523
}; 
# 541 "/usr/include/c++/5/bits/stl_algobase.h" 3
template<> struct __copy_move_backward< false, false, random_access_iterator_tag>  { 
# 543
template< class _BI1, class _BI2> static _BI2 
# 545
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 546
{ 
# 547
typename iterator_traits< _BI1> ::difference_type __n; 
# 548
for (__n = (__last - __first); __n > 0; --__n) { 
# 549
(*(--__result)) = (*(--__last)); }  
# 550
return __result; 
# 551
} 
# 552
}; 
# 570 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< bool _IsMove> 
# 571
struct __copy_move_backward< _IsMove, true, random_access_iterator_tag>  { 
# 573
template< class _Tp> static _Tp *
# 575
__copy_move_b(const _Tp *__first, const _Tp *__last, _Tp *__result) 
# 576
{ 
# 584
const ptrdiff_t _Num = __last - __first; 
# 585
if (_Num) { 
# 586
__builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num); }  
# 587
return __result - _Num; 
# 588
} 
# 589
}; 
# 591
template< bool _IsMove, class _BI1, class _BI2> inline _BI2 
# 593
__copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result) 
# 594
{ 
# 595
typedef typename iterator_traits< _BI1> ::value_type _ValueType1; 
# 596
typedef typename iterator_traits< _BI2> ::value_type _ValueType2; 
# 597
typedef typename iterator_traits< _BI1> ::iterator_category _Category; 
# 598
const bool __simple = (__is_trivial(_ValueType1) && __is_pointer< _BI1> ::__value && __is_pointer< _BI2> ::__value && __are_same< typename iterator_traits< _BI1> ::value_type, typename iterator_traits< _BI2> ::value_type> ::__value); 
# 603
return std::__copy_move_backward< _IsMove, __simple, typename iterator_traits< _BI1> ::iterator_category> ::__copy_move_b(__first, __last, __result); 
# 607
} 
# 609
template< bool _IsMove, class _BI1, class _BI2> inline _BI2 
# 611
__copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result) 
# 612
{ 
# 613
return (_BI2)std::__copy_move_backward_a< _IsMove> (std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result)); 
# 616
} 
# 636 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _BI1, class _BI2> inline _BI2 
# 638
copy_backward(_BI1 __first, _BI1 __last, _BI2 __result) 
# 639
{ 
# 646
; 
# 648
return std::__copy_move_backward_a2< __is_move_iterator< _BI1> ::__value> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 651
} 
# 694 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _ForwardIterator, class _Tp> inline typename __gnu_cxx::__enable_if< !__is_scalar< _Tp> ::__value, void> ::__type 
# 697
__fill_a(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 698
__value) 
# 699
{ 
# 700
for (; __first != __last; ++__first) { 
# 701
(*__first) = __value; }  
# 702
} 
# 704
template< class _ForwardIterator, class _Tp> inline typename __gnu_cxx::__enable_if< __is_scalar< _Tp> ::__value, void> ::__type 
# 707
__fill_a(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 708
__value) 
# 709
{ 
# 710
const _Tp __tmp = __value; 
# 711
for (; __first != __last; ++__first) { 
# 712
(*__first) = __tmp; }  
# 713
} 
# 716
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_byte< _Tp> ::__value, void> ::__type 
# 719
__fill_a(_Tp *__first, _Tp *__last, const _Tp &__c) 
# 720
{ 
# 721
const _Tp __tmp = __c; 
# 722
if (const size_t __len = __last - __first) { 
# 723
__builtin_memset(__first, static_cast< unsigned char>(__tmp), __len); }  
# 724
} 
# 738 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _ForwardIterator, class _Tp> inline void 
# 740
fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__value) 
# 741
{ 
# 745
; 
# 747
std::__fill_a(std::__niter_base(__first), std::__niter_base(__last), __value); 
# 749
} 
# 751
template< class _OutputIterator, class _Size, class _Tp> inline typename __gnu_cxx::__enable_if< !__is_scalar< _Tp> ::__value, _OutputIterator> ::__type 
# 754
__fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value) 
# 755
{ 
# 756
for (__decltype((__n + 0)) __niter = __n; __niter > 0; (--__niter), (++__first)) { 
# 758
(*__first) = __value; }  
# 759
return __first; 
# 760
} 
# 762
template< class _OutputIterator, class _Size, class _Tp> inline typename __gnu_cxx::__enable_if< __is_scalar< _Tp> ::__value, _OutputIterator> ::__type 
# 765
__fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value) 
# 766
{ 
# 767
const _Tp __tmp = __value; 
# 768
for (__decltype((__n + 0)) __niter = __n; __niter > 0; (--__niter), (++__first)) { 
# 770
(*__first) = __tmp; }  
# 771
return __first; 
# 772
} 
# 774
template< class _Size, class _Tp> inline typename __gnu_cxx::__enable_if< __is_byte< _Tp> ::__value, _Tp *> ::__type 
# 777
__fill_n_a(_Tp *__first, _Size __n, const _Tp &__c) 
# 778
{ 
# 779
std::__fill_a(__first, __first + __n, __c); 
# 780
return __first + __n; 
# 781
} 
# 798 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _OI, class _Size, class _Tp> inline _OI 
# 800
fill_n(_OI __first, _Size __n, const _Tp &__value) 
# 801
{ 
# 805
return (_OI)std::__fill_n_a(std::__niter_base(__first), __n, __value); 
# 806
} 
# 808
template< bool _BoolType> 
# 809
struct __equal { 
# 811
template< class _II1, class _II2> static bool 
# 813
equal(_II1 __first1, _II1 __last1, _II2 __first2) 
# 814
{ 
# 815
for (; __first1 != __last1; (++__first1), (++__first2)) { 
# 816
if (!((*__first1) == (*__first2))) { 
# 817
return false; }  }  
# 818
return true; 
# 819
} 
# 820
}; 
# 823
template<> struct __equal< true>  { 
# 825
template< class _Tp> static bool 
# 827
equal(const _Tp *__first1, const _Tp *__last1, const _Tp *__first2) 
# 828
{ 
# 829
if (const size_t __len = __last1 - __first1) { 
# 830
return !(__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len)); }  
# 831
return true; 
# 832
} 
# 833
}; 
# 835
template< class _II1, class _II2> inline bool 
# 837
__equal_aux(_II1 __first1, _II1 __last1, _II2 __first2) 
# 838
{ 
# 839
typedef typename iterator_traits< _II1> ::value_type _ValueType1; 
# 840
typedef typename iterator_traits< _II2> ::value_type _ValueType2; 
# 841
const bool __simple = ((__is_integer< typename iterator_traits< _II1> ::value_type> ::__value || __is_pointer< typename iterator_traits< _II1> ::value_type> ::__value) && __is_pointer< _II1> ::__value && __is_pointer< _II2> ::__value && __are_same< typename iterator_traits< _II1> ::value_type, typename iterator_traits< _II2> ::value_type> ::__value); 
# 847
return std::__equal< __simple> ::equal(__first1, __last1, __first2); 
# 848
} 
# 850
template< class , class > 
# 851
struct __lc_rai { 
# 853
template< class _II1, class _II2> static _II1 
# 855
__newlast1(_II1, _II1 __last1, _II2, _II2) 
# 856
{ return __last1; } 
# 858
template< class _II> static bool 
# 860
__cnd2(_II __first, _II __last) 
# 861
{ return __first != __last; } 
# 862
}; 
# 865
template<> struct __lc_rai< random_access_iterator_tag, random_access_iterator_tag>  { 
# 867
template< class _RAI1, class _RAI2> static _RAI1 
# 869
__newlast1(_RAI1 __first1, _RAI1 __last1, _RAI2 
# 870
__first2, _RAI2 __last2) 
# 871
{ 
# 873
const typename iterator_traits< _RAI1> ::difference_type __diff1 = __last1 - __first1; 
# 875
const typename iterator_traits< _RAI2> ::difference_type __diff2 = __last2 - __first2; 
# 876
return (__diff2 < __diff1) ? __first1 + __diff2 : __last1; 
# 877
} 
# 879
template< class _RAI> static bool 
# 881
__cnd2(_RAI, _RAI) 
# 882
{ return true; } 
# 883
}; 
# 885
template< class _II1, class _II2, class _Compare> bool 
# 887
__lexicographical_compare_impl(_II1 __first1, _II1 __last1, _II2 
# 888
__first2, _II2 __last2, _Compare 
# 889
__comp) 
# 890
{ 
# 891
typedef typename iterator_traits< _II1> ::iterator_category _Category1; 
# 892
typedef typename iterator_traits< _II2> ::iterator_category _Category2; 
# 893
typedef __lc_rai< typename iterator_traits< _II1> ::iterator_category, typename iterator_traits< _II2> ::iterator_category>  __rai_type; 
# 895
__last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2); 
# 896
for (; (__first1 != __last1) && __rai_type::__cnd2(__first2, __last2); (++__first1), (++__first2)) 
# 898
{ 
# 899
if (__comp(__first1, __first2)) { 
# 900
return true; }  
# 901
if (__comp(__first2, __first1)) { 
# 902
return false; }  
# 903
}  
# 904
return (__first1 == __last1) && (__first2 != __last2); 
# 905
} 
# 907
template< bool _BoolType> 
# 908
struct __lexicographical_compare { 
# 910
template< class _II1, class _II2> static bool __lc(_II1, _II1, _II2, _II2); 
# 912
}; 
# 914
template< bool _BoolType> 
# 915
template< class _II1, class _II2> bool 
# 918
__lexicographical_compare< _BoolType> ::__lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2) 
# 919
{ 
# 920
return std::__lexicographical_compare_impl(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_less_iter()); 
# 923
} 
# 926
template<> struct __lexicographical_compare< true>  { 
# 928
template< class _Tp, class _Up> static bool 
# 930
__lc(const _Tp *__first1, const _Tp *__last1, const _Up *
# 931
__first2, const _Up *__last2) 
# 932
{ 
# 933
const size_t __len1 = __last1 - __first1; 
# 934
const size_t __len2 = __last2 - __first2; 
# 935
if (const size_t __len = std::min(__len1, __len2)) { 
# 936
if (int __result = __builtin_memcmp(__first1, __first2, __len)) { 
# 937
return __result < 0; }  }  
# 938
return __len1 < __len2; 
# 939
} 
# 940
}; 
# 942
template< class _II1, class _II2> inline bool 
# 944
__lexicographical_compare_aux(_II1 __first1, _II1 __last1, _II2 
# 945
__first2, _II2 __last2) 
# 946
{ 
# 947
typedef typename iterator_traits< _II1> ::value_type _ValueType1; 
# 948
typedef typename iterator_traits< _II2> ::value_type _ValueType2; 
# 949
const bool __simple = (__is_byte< typename iterator_traits< _II1> ::value_type> ::__value && __is_byte< typename iterator_traits< _II2> ::value_type> ::__value && (!__gnu_cxx::__numeric_traits< typename iterator_traits< _II1> ::value_type> ::__is_signed) && (!__gnu_cxx::__numeric_traits< typename iterator_traits< _II2> ::value_type> ::__is_signed) && __is_pointer< _II1> ::__value && __is_pointer< _II2> ::__value); 
# 956
return std::__lexicographical_compare< __simple> ::__lc(__first1, __last1, __first2, __last2); 
# 958
} 
# 960
template< class _ForwardIterator, class _Tp, class _Compare> _ForwardIterator 
# 962
__lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 963
__val, _Compare __comp) 
# 964
{ 
# 966
typedef typename iterator_traits< _ForwardIterator> ::difference_type _DistanceType; 
# 968
_DistanceType __len = std::distance(__first, __last); 
# 970
while (__len > 0) 
# 971
{ 
# 972
_DistanceType __half = __len >> 1; 
# 973
_ForwardIterator __middle = __first; 
# 974
std::advance(__middle, __half); 
# 975
if (__comp(__middle, __val)) 
# 976
{ 
# 977
__first = __middle; 
# 978
++__first; 
# 979
__len = ((__len - __half) - 1); 
# 980
} else { 
# 982
__len = __half; }  
# 983
}  
# 984
return __first; 
# 985
} 
# 998 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _ForwardIterator, class _Tp> inline _ForwardIterator 
# 1000
lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 1001
__val) 
# 1002
{ 
# 1007
; 
# 1009
return std::__lower_bound(__first, __last, __val, __gnu_cxx::__ops::__iter_less_val()); 
# 1011
} 
# 1016
inline int __lg(int __n) 
# 1017
{ return ((sizeof(int) * (8)) - (1)) - (__builtin_clz(__n)); } 
# 1020
inline unsigned __lg(unsigned __n) 
# 1021
{ return ((sizeof(int) * (8)) - (1)) - (__builtin_clz(__n)); } 
# 1024
inline long __lg(long __n) 
# 1025
{ return ((sizeof(long) * (8)) - (1)) - (__builtin_clzl(__n)); } 
# 1028
inline unsigned long __lg(unsigned long __n) 
# 1029
{ return ((sizeof(long) * (8)) - (1)) - (__builtin_clzl(__n)); } 
# 1032
inline long long __lg(long long __n) 
# 1033
{ return ((sizeof(long long) * (8)) - (1)) - (__builtin_clzll(__n)); } 
# 1036
inline unsigned long long __lg(unsigned long long __n) 
# 1037
{ return ((sizeof(long long) * (8)) - (1)) - (__builtin_clzll(__n)); } 
# 1055 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _II1, class _II2> inline bool 
# 1057
equal(_II1 __first1, _II1 __last1, _II2 __first2) 
# 1058
{ 
# 1065
; 
# 1067
return std::__equal_aux(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2)); 
# 1070
} 
# 1087 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _IIter1, class _IIter2, class _BinaryPredicate> inline bool 
# 1089
equal(_IIter1 __first1, _IIter1 __last1, _IIter2 
# 1090
__first2, _BinaryPredicate __binary_pred) 
# 1091
{ 
# 1095
; 
# 1097
for (; __first1 != __last1; (++__first1), (++__first2)) { 
# 1098
if (!((bool)__binary_pred(*__first1, *__first2))) { 
# 1099
return false; }  }  
# 1100
return true; 
# 1101
} 
# 1215 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _II1, class _II2> inline bool 
# 1217
lexicographical_compare(_II1 __first1, _II1 __last1, _II2 
# 1218
__first2, _II2 __last2) 
# 1219
{ 
# 1229
; 
# 1230
; 
# 1232
return std::__lexicographical_compare_aux(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2), std::__niter_base(__last2)); 
# 1236
} 
# 1251 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _II1, class _II2, class _Compare> inline bool 
# 1253
lexicographical_compare(_II1 __first1, _II1 __last1, _II2 
# 1254
__first2, _II2 __last2, _Compare __comp) 
# 1255
{ 
# 1259
; 
# 1260
; 
# 1262
return std::__lexicographical_compare_impl(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 1265
} 
# 1267
template< class _InputIterator1, class _InputIterator2, class 
# 1268
_BinaryPredicate> pair< _InputIterator1, _InputIterator2>  
# 1270
__mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1271
__first2, _BinaryPredicate __binary_pred) 
# 1272
{ 
# 1273
while ((__first1 != __last1) && __binary_pred(__first1, __first2)) 
# 1274
{ 
# 1275
++__first1; 
# 1276
++__first2; 
# 1277
}  
# 1278
return pair< _InputIterator1, _InputIterator2> (__first1, __first2); 
# 1279
} 
# 1294 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2> inline pair< _InputIterator1, _InputIterator2>  
# 1296
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1297
__first2) 
# 1298
{ 
# 1305
; 
# 1307
return std::__mismatch(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 1309
} 
# 1327 "/usr/include/c++/5/bits/stl_algobase.h" 3
template< class _InputIterator1, class _InputIterator2, class 
# 1328
_BinaryPredicate> inline pair< _InputIterator1, _InputIterator2>  
# 1330
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1331
__first2, _BinaryPredicate __binary_pred) 
# 1332
{ 
# 1336
; 
# 1338
return std::__mismatch(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_comp_iter(__binary_pred)); 
# 1340
} 
# 1428 "/usr/include/c++/5/bits/stl_algobase.h" 3
}
# 43 "/usr/include/c++/5/bits/char_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 57 "/usr/include/c++/5/bits/char_traits.h" 3
template< class _CharT> 
# 58
struct _Char_types { 
# 60
typedef unsigned long int_type; 
# 61
typedef std::streampos pos_type; 
# 62
typedef std::streamoff off_type; 
# 63
typedef mbstate_t state_type; 
# 64
}; 
# 82 "/usr/include/c++/5/bits/char_traits.h" 3
template< class _CharT> 
# 83
struct char_traits { 
# 85
typedef _CharT char_type; 
# 86
typedef typename _Char_types< _CharT> ::int_type int_type; 
# 87
typedef typename _Char_types< _CharT> ::pos_type pos_type; 
# 88
typedef typename _Char_types< _CharT> ::off_type off_type; 
# 89
typedef typename _Char_types< _CharT> ::state_type state_type; 
# 92
static void assign(char_type &__c1, const char_type &__c2) 
# 93
{ __c1 = __c2; } 
# 96
static bool eq(const char_type &__c1, const char_type &__c2) 
# 97
{ return __c1 == __c2; } 
# 100
static bool lt(const char_type &__c1, const char_type &__c2) 
# 101
{ return __c1 < __c2; } 
# 104
static int compare(const char_type * __s1, const char_type * __s2, std::size_t __n); 
# 107
static std::size_t length(const char_type * __s); 
# 110
static const char_type *find(const char_type * __s, std::size_t __n, const char_type & __a); 
# 113
static char_type *move(char_type * __s1, const char_type * __s2, std::size_t __n); 
# 116
static char_type *copy(char_type * __s1, const char_type * __s2, std::size_t __n); 
# 119
static char_type *assign(char_type * __s, std::size_t __n, char_type __a); 
# 122
static char_type to_char_type(const int_type &__c) 
# 123
{ return static_cast< char_type>(__c); } 
# 126
static int_type to_int_type(const char_type &__c) 
# 127
{ return static_cast< int_type>(__c); } 
# 130
static bool eq_int_type(const int_type &__c1, const int_type &__c2) 
# 131
{ return __c1 == __c2; } 
# 134
static int_type eof() 
# 135
{ return static_cast< int_type>(-1); } 
# 138
static int_type not_eof(const int_type &__c) 
# 139
{ return (!(eq_int_type)(__c, (eof)())) ? __c : (to_int_type)(char_type()); } 
# 140
}; 
# 142
template< class _CharT> int 
# 145
char_traits< _CharT> ::compare(const char_type *__s1, const char_type *__s2, std::size_t __n) 
# 146
{ 
# 147
for (std::size_t __i = (0); __i < __n; ++__i) { 
# 148
if ((lt)(__s1[__i], __s2[__i])) { 
# 149
return -1; } else { 
# 150
if ((lt)(__s2[__i], __s1[__i])) { 
# 151
return 1; }  }  }  
# 152
return 0; 
# 153
} 
# 155
template< class _CharT> std::size_t 
# 158
char_traits< _CharT> ::length(const char_type *__p) 
# 159
{ 
# 160
std::size_t __i = (0); 
# 161
while (!(eq)(__p[__i], char_type())) { 
# 162
++__i; }  
# 163
return __i; 
# 164
} 
# 166
template< class _CharT> const typename char_traits< _CharT> ::char_type *
# 169
char_traits< _CharT> ::find(const char_type *__s, std::size_t __n, const char_type &__a) 
# 170
{ 
# 171
for (std::size_t __i = (0); __i < __n; ++__i) { 
# 172
if ((eq)(__s[__i], __a)) { 
# 173
return __s + __i; }  }  
# 174
return 0; 
# 175
} 
# 177
template< class _CharT> typename char_traits< _CharT> ::char_type *
# 180
char_traits< _CharT> ::move(char_type *__s1, const char_type *__s2, std::size_t __n) 
# 181
{ 
# 182
return static_cast< _CharT *>(__builtin_memmove(__s1, __s2, __n * sizeof(char_type))); 
# 184
} 
# 186
template< class _CharT> typename char_traits< _CharT> ::char_type *
# 189
char_traits< _CharT> ::copy(char_type *__s1, const char_type *__s2, std::size_t __n) 
# 190
{ 
# 192
std::copy(__s2, __s2 + __n, __s1); 
# 193
return __s1; 
# 194
} 
# 196
template< class _CharT> typename char_traits< _CharT> ::char_type *
# 199
char_traits< _CharT> ::assign(char_type *__s, std::size_t __n, char_type __a) 
# 200
{ 
# 202
std::fill_n(__s, __n, __a); 
# 203
return __s; 
# 204
} 
# 207
}
# 209
namespace std __attribute((__visibility__("default"))) { 
# 226 "/usr/include/c++/5/bits/char_traits.h" 3
template< class _CharT> 
# 227
struct char_traits : public __gnu_cxx::char_traits< _CharT>  { 
# 228
}; 
# 233
template<> struct char_traits< char>  { 
# 235
typedef char char_type; 
# 236
typedef int int_type; 
# 237
typedef streampos pos_type; 
# 238
typedef streamoff off_type; 
# 239
typedef mbstate_t state_type; 
# 242
static void assign(char_type &__c1, const char_type &__c2) 
# 243
{ __c1 = __c2; } 
# 246
static bool eq(const char_type &__c1, const char_type &__c2) 
# 247
{ return __c1 == __c2; } 
# 250
static bool lt(const char_type &__c1, const char_type &__c2) 
# 251
{ 
# 253
return (static_cast< unsigned char>(__c1)) < (static_cast< unsigned char>(__c2)); 
# 255
} 
# 258
static int compare(const char_type *__s1, const char_type *__s2, size_t __n) 
# 259
{ 
# 260
if (__n == (0)) { 
# 261
return 0; }  
# 262
return __builtin_memcmp(__s1, __s2, __n); 
# 263
} 
# 266
static size_t length(const char_type *__s) 
# 267
{ return __builtin_strlen(__s); } 
# 270
static const char_type *find(const char_type *__s, size_t __n, const char_type &__a) 
# 271
{ 
# 272
if (__n == (0)) { 
# 273
return 0; }  
# 274
return static_cast< const char_type *>(__builtin_memchr(__s, __a, __n)); 
# 275
} 
# 278
static char_type *move(char_type *__s1, const char_type *__s2, size_t __n) 
# 279
{ 
# 280
if (__n == (0)) { 
# 281
return __s1; }  
# 282
return static_cast< char_type *>(__builtin_memmove(__s1, __s2, __n)); 
# 283
} 
# 286
static char_type *copy(char_type *__s1, const char_type *__s2, size_t __n) 
# 287
{ 
# 288
if (__n == (0)) { 
# 289
return __s1; }  
# 290
return static_cast< char_type *>(__builtin_memcpy(__s1, __s2, __n)); 
# 291
} 
# 294
static char_type *assign(char_type *__s, size_t __n, char_type __a) 
# 295
{ 
# 296
if (__n == (0)) { 
# 297
return __s; }  
# 298
return static_cast< char_type *>(__builtin_memset(__s, __a, __n)); 
# 299
} 
# 302
static char_type to_char_type(const int_type &__c) 
# 303
{ return static_cast< char_type>(__c); } 
# 308
static int_type to_int_type(const char_type &__c) 
# 309
{ return static_cast< int_type>(static_cast< unsigned char>(__c)); } 
# 312
static bool eq_int_type(const int_type &__c1, const int_type &__c2) 
# 313
{ return __c1 == __c2; } 
# 316
static int_type eof() 
# 317
{ return static_cast< int_type>(-1); } 
# 320
static int_type not_eof(const int_type &__c) 
# 321
{ return (__c == eof()) ? 0 : __c; } 
# 322
}; 
# 328
template<> struct char_traits< wchar_t>  { 
# 330
typedef wchar_t char_type; 
# 331
typedef wint_t int_type; 
# 332
typedef streamoff off_type; 
# 333
typedef wstreampos pos_type; 
# 334
typedef mbstate_t state_type; 
# 337
static void assign(char_type &__c1, const char_type &__c2) 
# 338
{ __c1 = __c2; } 
# 341
static bool eq(const char_type &__c1, const char_type &__c2) 
# 342
{ return __c1 == __c2; } 
# 345
static bool lt(const char_type &__c1, const char_type &__c2) 
# 346
{ return __c1 < __c2; } 
# 349
static int compare(const char_type *__s1, const char_type *__s2, size_t __n) 
# 350
{ 
# 351
if (__n == (0)) { 
# 352
return 0; }  
# 353
return wmemcmp(__s1, __s2, __n); 
# 354
} 
# 357
static size_t length(const char_type *__s) 
# 358
{ return wcslen(__s); } 
# 361
static const char_type *find(const char_type *__s, size_t __n, const char_type &__a) 
# 362
{ 
# 363
if (__n == (0)) { 
# 364
return 0; }  
# 365
return wmemchr(__s, __a, __n); 
# 366
} 
# 369
static char_type *move(char_type *__s1, const char_type *__s2, size_t __n) 
# 370
{ 
# 371
if (__n == (0)) { 
# 372
return __s1; }  
# 373
return wmemmove(__s1, __s2, __n); 
# 374
} 
# 377
static char_type *copy(char_type *__s1, const char_type *__s2, size_t __n) 
# 378
{ 
# 379
if (__n == (0)) { 
# 380
return __s1; }  
# 381
return wmemcpy(__s1, __s2, __n); 
# 382
} 
# 385
static char_type *assign(char_type *__s, size_t __n, char_type __a) 
# 386
{ 
# 387
if (__n == (0)) { 
# 388
return __s; }  
# 389
return wmemset(__s, __a, __n); 
# 390
} 
# 393
static char_type to_char_type(const int_type &__c) 
# 394
{ return (char_type)__c; } 
# 397
static int_type to_int_type(const char_type &__c) 
# 398
{ return (int_type)__c; } 
# 401
static bool eq_int_type(const int_type &__c1, const int_type &__c2) 
# 402
{ return __c1 == __c2; } 
# 405
static int_type eof() 
# 406
{ return static_cast< int_type>(4294967295U); } 
# 409
static int_type not_eof(const int_type &__c) 
# 410
{ return eq_int_type(__c, eof()) ? 0 : __c; } 
# 411
}; 
# 415
}
# 31 "/usr/include/locale.h" 3
extern "C" {
# 53 "/usr/include/locale.h" 3
struct lconv { 
# 57
char *decimal_point; 
# 58
char *thousands_sep; 
# 64
char *grouping; 
# 70
char *int_curr_symbol; 
# 71
char *currency_symbol; 
# 72
char *mon_decimal_point; 
# 73
char *mon_thousands_sep; 
# 74
char *mon_grouping; 
# 75
char *positive_sign; 
# 76
char *negative_sign; 
# 77
char int_frac_digits; 
# 78
char frac_digits; 
# 80
char p_cs_precedes; 
# 82
char p_sep_by_space; 
# 84
char n_cs_precedes; 
# 86
char n_sep_by_space; 
# 93
char p_sign_posn; 
# 94
char n_sign_posn; 
# 97
char int_p_cs_precedes; 
# 99
char int_p_sep_by_space; 
# 101
char int_n_cs_precedes; 
# 103
char int_n_sep_by_space; 
# 110
char int_p_sign_posn; 
# 111
char int_n_sign_posn; 
# 120 "/usr/include/locale.h" 3
}; 
# 124
extern char *setlocale(int __category, const char * __locale) throw(); 
# 127
extern lconv *localeconv() throw(); 
# 151 "/usr/include/locale.h" 3
extern __locale_t newlocale(int __category_mask, const char * __locale, __locale_t __base) throw(); 
# 186 "/usr/include/locale.h" 3
extern __locale_t duplocale(__locale_t __dataset) throw(); 
# 190
extern void freelocale(__locale_t __dataset) throw(); 
# 197
extern __locale_t uselocale(__locale_t __dataset) throw(); 
# 205
}
# 51 "/usr/include/c++/5/clocale" 3
namespace std { 
# 53
using ::lconv;
# 54
using ::setlocale;
# 55
using ::localeconv;
# 56
}
# 48 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 52
extern "C" __typeof__(uselocale) __uselocale; 
# 55
}
# 58
namespace std __attribute((__visibility__("default"))) { 
# 62
typedef __locale_t __c_locale; 
# 69
inline int __convert_from_v(const __c_locale &__cloc __attribute((__unused__)), char *
# 70
__out, const int 
# 71
__size __attribute((__unused__)), const char *
# 72
__fmt, ...) 
# 73
{ 
# 75
__c_locale __old = __gnu_cxx::__uselocale(__cloc); 
# 88 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 3
__builtin_va_list __args; 
# 89
__builtin_va_start((__args),__fmt); 
# 92
const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args); 
# 97
__builtin_va_end(__args); 
# 100
__gnu_cxx::__uselocale(__old); 
# 108
return __ret; 
# 109
} 
# 112
}
# 28 "/usr/include/ctype.h" 3
extern "C" {
# 47 "/usr/include/ctype.h" 3
enum { 
# 48
_ISupper = 256, 
# 49
_ISlower = 512, 
# 50
_ISalpha = 1024, 
# 51
_ISdigit = 2048, 
# 52
_ISxdigit = 4096, 
# 53
_ISspace = 8192, 
# 54
_ISprint = 16384, 
# 55
_ISgraph = 32768, 
# 56
_ISblank = 1, 
# 57
_IScntrl, 
# 58
_ISpunct = 4, 
# 59
_ISalnum = 8
# 60
}; 
# 79 "/usr/include/ctype.h" 3
extern const unsigned short **__ctype_b_loc() throw()
# 80
 __attribute((const)); 
# 81
extern const __int32_t **__ctype_tolower_loc() throw()
# 82
 __attribute((const)); 
# 83
extern const __int32_t **__ctype_toupper_loc() throw()
# 84
 __attribute((const)); 
# 110 "/usr/include/ctype.h" 3
extern int isalnum(int) throw(); 
# 111
extern int isalpha(int) throw(); 
# 112
extern int iscntrl(int) throw(); 
# 113
extern int isdigit(int) throw(); 
# 114
extern int islower(int) throw(); 
# 115
extern int isgraph(int) throw(); 
# 116
extern int isprint(int) throw(); 
# 117
extern int ispunct(int) throw(); 
# 118
extern int isspace(int) throw(); 
# 119
extern int isupper(int) throw(); 
# 120
extern int isxdigit(int) throw(); 
# 124
extern int tolower(int __c) throw(); 
# 127
extern int toupper(int __c) throw(); 
# 136
extern int isblank(int) throw(); 
# 143
extern int isctype(int __c, int __mask) throw(); 
# 150
extern int isascii(int __c) throw(); 
# 154
extern int toascii(int __c) throw(); 
# 158
extern int _toupper(int) throw(); 
# 159
extern int _tolower(int) throw(); 
# 271 "/usr/include/ctype.h" 3
extern int isalnum_l(int, __locale_t) throw(); 
# 272
extern int isalpha_l(int, __locale_t) throw(); 
# 273
extern int iscntrl_l(int, __locale_t) throw(); 
# 274
extern int isdigit_l(int, __locale_t) throw(); 
# 275
extern int islower_l(int, __locale_t) throw(); 
# 276
extern int isgraph_l(int, __locale_t) throw(); 
# 277
extern int isprint_l(int, __locale_t) throw(); 
# 278
extern int ispunct_l(int, __locale_t) throw(); 
# 279
extern int isspace_l(int, __locale_t) throw(); 
# 280
extern int isupper_l(int, __locale_t) throw(); 
# 281
extern int isxdigit_l(int, __locale_t) throw(); 
# 283
extern int isblank_l(int, __locale_t) throw(); 
# 287
extern int __tolower_l(int __c, __locale_t __l) throw(); 
# 288
extern int tolower_l(int __c, __locale_t __l) throw(); 
# 291
extern int __toupper_l(int __c, __locale_t __l) throw(); 
# 292
extern int toupper_l(int __c, __locale_t __l) throw(); 
# 347 "/usr/include/ctype.h" 3
}
# 62 "/usr/include/c++/5/cctype" 3
namespace std { 
# 64
using ::isalnum;
# 65
using ::isalpha;
# 66
using ::iscntrl;
# 67
using ::isdigit;
# 68
using ::isgraph;
# 69
using ::islower;
# 70
using ::isprint;
# 71
using ::ispunct;
# 72
using ::isspace;
# 73
using ::isupper;
# 74
using ::isxdigit;
# 75
using ::tolower;
# 76
using ::toupper;
# 77
}
# 44 "/usr/include/c++/5/bits/localefwd.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 55 "/usr/include/c++/5/bits/localefwd.h" 3
class locale; 
# 57
template< class _Facet> bool has_facet(const locale &) throw(); 
# 61
template< class _Facet> const _Facet &use_facet(const locale &); 
# 66
template< class _CharT> inline bool isspace(_CharT, const locale &); 
# 70
template< class _CharT> inline bool isprint(_CharT, const locale &); 
# 74
template< class _CharT> inline bool iscntrl(_CharT, const locale &); 
# 78
template< class _CharT> inline bool isupper(_CharT, const locale &); 
# 82
template< class _CharT> inline bool islower(_CharT, const locale &); 
# 86
template< class _CharT> inline bool isalpha(_CharT, const locale &); 
# 90
template< class _CharT> inline bool isdigit(_CharT, const locale &); 
# 94
template< class _CharT> inline bool ispunct(_CharT, const locale &); 
# 98
template< class _CharT> inline bool isxdigit(_CharT, const locale &); 
# 102
template< class _CharT> inline bool isalnum(_CharT, const locale &); 
# 106
template< class _CharT> inline bool isgraph(_CharT, const locale &); 
# 116
template< class _CharT> inline _CharT toupper(_CharT, const locale &); 
# 120
template< class _CharT> inline _CharT tolower(_CharT, const locale &); 
# 125
struct ctype_base; 
# 126
template< class _CharT> class ctype; 
# 128
template<> class ctype< char> ; 
# 130
template<> class ctype< wchar_t> ; 
# 132
template< class _CharT> class ctype_byname; 
# 136
class codecvt_base; 
# 137
template< class _InternT, class _ExternT, class _StateT> class codecvt; 
# 139
template<> class codecvt< char, char, __mbstate_t> ; 
# 141
template<> class codecvt< wchar_t, char, __mbstate_t> ; 
# 143
template< class _InternT, class _ExternT, class _StateT> class codecvt_byname; 
# 148
template< class _CharT, class _InIter = istreambuf_iterator< _CharT, char_traits< _CharT> > > class num_get; 
# 150
template< class _CharT, class _OutIter = ostreambuf_iterator< _CharT, char_traits< _CharT> > > class num_put; 
# 153
inline namespace __cxx11 { 
# 154
template< class _CharT> class numpunct; 
# 155
template< class _CharT> class numpunct_byname; 
# 156
}
# 158
inline namespace __cxx11 { 
# 160
template< class _CharT> class collate; 
# 162
template< class _CharT> class collate_byname; 
# 164
}
# 167
class time_base; 
# 168
inline namespace __cxx11 { 
# 169
template< class _CharT, class _InIter = istreambuf_iterator< _CharT, char_traits< _CharT> > > class time_get; 
# 171
template< class _CharT, class _InIter = istreambuf_iterator< _CharT, char_traits< _CharT> > > class time_get_byname; 
# 173
}
# 174
template< class _CharT, class _OutIter = ostreambuf_iterator< _CharT, char_traits< _CharT> > > class time_put; 
# 176
template< class _CharT, class _OutIter = ostreambuf_iterator< _CharT, char_traits< _CharT> > > class time_put_byname; 
# 180
class money_base; 
# 181
inline namespace __cxx11 { 
# 182
template< class _CharT, class _InIter = istreambuf_iterator< _CharT, char_traits< _CharT> > > class money_get; 
# 184
template< class _CharT, class _OutIter = ostreambuf_iterator< _CharT, char_traits< _CharT> > > class money_put; 
# 186
}
# 187
inline namespace __cxx11 { 
# 188
template< class _CharT, bool _Intl = false> class moneypunct; 
# 190
template< class _CharT, bool _Intl = false> class moneypunct_byname; 
# 192
}
# 195
class messages_base; 
# 196
inline namespace __cxx11 { 
# 197
template< class _CharT> class messages; 
# 199
template< class _CharT> class messages_byname; 
# 201
}
# 204
}
# 30 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 3
#pragma GCC visibility push ( default )
# 72 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3
struct sched_param { 
# 74
int __sched_priority; 
# 75
}; 
# 77
extern "C" {
# 81
extern int clone(int (* __fn)(void * __arg), void * __child_stack, int __flags, void * __arg, ...) throw(); 
# 85
extern int unshare(int __flags) throw(); 
# 88
extern int sched_getcpu() throw(); 
# 91
extern int setns(int __fd, int __nstype) throw(); 
# 95
}
# 103
struct __sched_param { 
# 105
int __sched_priority; 
# 106
}; 
# 118 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3
typedef unsigned long __cpu_mask; 
# 128
typedef 
# 126
struct { 
# 127
__cpu_mask __bits[(1024) / ((8) * sizeof(__cpu_mask))]; 
# 128
} cpu_set_t; 
# 201 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3
extern "C" {
# 203
extern int __sched_cpucount(size_t __setsize, const cpu_set_t * __setp) throw(); 
# 205
extern cpu_set_t *__sched_cpualloc(size_t __count) throw(); 
# 206
extern void __sched_cpufree(cpu_set_t * __set) throw(); 
# 208
}
# 48 "/usr/include/sched.h" 3
extern "C" {
# 51
extern int sched_setparam(__pid_t __pid, const sched_param * __param) throw(); 
# 55
extern int sched_getparam(__pid_t __pid, sched_param * __param) throw(); 
# 58
extern int sched_setscheduler(__pid_t __pid, int __policy, const sched_param * __param) throw(); 
# 62
extern int sched_getscheduler(__pid_t __pid) throw(); 
# 65
extern int sched_yield() throw(); 
# 68
extern int sched_get_priority_max(int __algorithm) throw(); 
# 71
extern int sched_get_priority_min(int __algorithm) throw(); 
# 74
extern int sched_rr_get_interval(__pid_t __pid, timespec * __t) throw(); 
# 118 "/usr/include/sched.h" 3
extern int sched_setaffinity(__pid_t __pid, size_t __cpusetsize, const cpu_set_t * __cpuset) throw(); 
# 122
extern int sched_getaffinity(__pid_t __pid, size_t __cpusetsize, cpu_set_t * __cpuset) throw(); 
# 126
}
# 31 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3
typedef long __jmp_buf[8]; 
# 33 "/usr/include/pthread.h" 3
enum { 
# 34
PTHREAD_CREATE_JOINABLE, 
# 36
PTHREAD_CREATE_DETACHED
# 38
}; 
# 43
enum { 
# 44
PTHREAD_MUTEX_TIMED_NP, 
# 45
PTHREAD_MUTEX_RECURSIVE_NP, 
# 46
PTHREAD_MUTEX_ERRORCHECK_NP, 
# 47
PTHREAD_MUTEX_ADAPTIVE_NP, 
# 50
PTHREAD_MUTEX_NORMAL = 0, 
# 51
PTHREAD_MUTEX_RECURSIVE, 
# 52
PTHREAD_MUTEX_ERRORCHECK, 
# 53
PTHREAD_MUTEX_DEFAULT = 0, 
# 57
PTHREAD_MUTEX_FAST_NP = 0
# 59
}; 
# 65
enum { 
# 66
PTHREAD_MUTEX_STALLED, 
# 67
PTHREAD_MUTEX_STALLED_NP = 0, 
# 68
PTHREAD_MUTEX_ROBUST, 
# 69
PTHREAD_MUTEX_ROBUST_NP = 1
# 70
}; 
# 77
enum { 
# 78
PTHREAD_PRIO_NONE, 
# 79
PTHREAD_PRIO_INHERIT, 
# 80
PTHREAD_PRIO_PROTECT
# 81
}; 
# 115 "/usr/include/pthread.h" 3
enum { 
# 116
PTHREAD_RWLOCK_PREFER_READER_NP, 
# 117
PTHREAD_RWLOCK_PREFER_WRITER_NP, 
# 118
PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP, 
# 119
PTHREAD_RWLOCK_DEFAULT_NP = 0
# 120
}; 
# 156 "/usr/include/pthread.h" 3
enum { 
# 157
PTHREAD_INHERIT_SCHED, 
# 159
PTHREAD_EXPLICIT_SCHED
# 161
}; 
# 166
enum { 
# 167
PTHREAD_SCOPE_SYSTEM, 
# 169
PTHREAD_SCOPE_PROCESS
# 171
}; 
# 176
enum { 
# 177
PTHREAD_PROCESS_PRIVATE, 
# 179
PTHREAD_PROCESS_SHARED
# 181
}; 
# 190 "/usr/include/pthread.h" 3
struct _pthread_cleanup_buffer { 
# 192
void (*__routine)(void *); 
# 193
void *__arg; 
# 194
int __canceltype; 
# 195
_pthread_cleanup_buffer *__prev; 
# 196
}; 
# 200
enum { 
# 201
PTHREAD_CANCEL_ENABLE, 
# 203
PTHREAD_CANCEL_DISABLE
# 205
}; 
# 207
enum { 
# 208
PTHREAD_CANCEL_DEFERRED, 
# 210
PTHREAD_CANCEL_ASYNCHRONOUS
# 212
}; 
# 228 "/usr/include/pthread.h" 3
extern "C" {
# 233
extern int pthread_create(pthread_t *__restrict__ __newthread, const pthread_attr_t *__restrict__ __attr, void *(* __start_routine)(void *), void *__restrict__ __arg) throw()
# 236
 __attribute((__nonnull__(1, 3))); 
# 242
extern void pthread_exit(void * __retval) __attribute((__noreturn__)); 
# 250
extern int pthread_join(pthread_t __th, void ** __thread_return); 
# 255
extern int pthread_tryjoin_np(pthread_t __th, void ** __thread_return) throw(); 
# 263
extern int pthread_timedjoin_np(pthread_t __th, void ** __thread_return, const timespec * __abstime); 
# 271
extern int pthread_detach(pthread_t __th) throw(); 
# 275
extern pthread_t pthread_self() throw() __attribute((const)); 
# 278
extern int pthread_equal(pthread_t __thread1, pthread_t __thread2) throw()
# 279
 __attribute((const)); 
# 287
extern int pthread_attr_init(pthread_attr_t * __attr) throw() __attribute((__nonnull__(1))); 
# 290
extern int pthread_attr_destroy(pthread_attr_t * __attr) throw()
# 291
 __attribute((__nonnull__(1))); 
# 294
extern int pthread_attr_getdetachstate(const pthread_attr_t * __attr, int * __detachstate) throw()
# 296
 __attribute((__nonnull__(1, 2))); 
# 299
extern int pthread_attr_setdetachstate(pthread_attr_t * __attr, int __detachstate) throw()
# 301
 __attribute((__nonnull__(1))); 
# 305
extern int pthread_attr_getguardsize(const pthread_attr_t * __attr, size_t * __guardsize) throw()
# 307
 __attribute((__nonnull__(1, 2))); 
# 310
extern int pthread_attr_setguardsize(pthread_attr_t * __attr, size_t __guardsize) throw()
# 312
 __attribute((__nonnull__(1))); 
# 316
extern int pthread_attr_getschedparam(const pthread_attr_t *__restrict__ __attr, sched_param *__restrict__ __param) throw()
# 318
 __attribute((__nonnull__(1, 2))); 
# 321
extern int pthread_attr_setschedparam(pthread_attr_t *__restrict__ __attr, const sched_param *__restrict__ __param) throw()
# 323
 __attribute((__nonnull__(1, 2))); 
# 326
extern int pthread_attr_getschedpolicy(const pthread_attr_t *__restrict__ __attr, int *__restrict__ __policy) throw()
# 328
 __attribute((__nonnull__(1, 2))); 
# 331
extern int pthread_attr_setschedpolicy(pthread_attr_t * __attr, int __policy) throw()
# 332
 __attribute((__nonnull__(1))); 
# 335
extern int pthread_attr_getinheritsched(const pthread_attr_t *__restrict__ __attr, int *__restrict__ __inherit) throw()
# 337
 __attribute((__nonnull__(1, 2))); 
# 340
extern int pthread_attr_setinheritsched(pthread_attr_t * __attr, int __inherit) throw()
# 342
 __attribute((__nonnull__(1))); 
# 346
extern int pthread_attr_getscope(const pthread_attr_t *__restrict__ __attr, int *__restrict__ __scope) throw()
# 348
 __attribute((__nonnull__(1, 2))); 
# 351
extern int pthread_attr_setscope(pthread_attr_t * __attr, int __scope) throw()
# 352
 __attribute((__nonnull__(1))); 
# 355
extern int pthread_attr_getstackaddr(const pthread_attr_t *__restrict__ __attr, void **__restrict__ __stackaddr) throw()
# 357
 __attribute((__nonnull__(1, 2))) __attribute((__deprecated__)); 
# 363
extern int pthread_attr_setstackaddr(pthread_attr_t * __attr, void * __stackaddr) throw()
# 365
 __attribute((__nonnull__(1))) __attribute((__deprecated__)); 
# 368
extern int pthread_attr_getstacksize(const pthread_attr_t *__restrict__ __attr, size_t *__restrict__ __stacksize) throw()
# 370
 __attribute((__nonnull__(1, 2))); 
# 375
extern int pthread_attr_setstacksize(pthread_attr_t * __attr, size_t __stacksize) throw()
# 377
 __attribute((__nonnull__(1))); 
# 381
extern int pthread_attr_getstack(const pthread_attr_t *__restrict__ __attr, void **__restrict__ __stackaddr, size_t *__restrict__ __stacksize) throw()
# 384
 __attribute((__nonnull__(1, 2, 3))); 
# 389
extern int pthread_attr_setstack(pthread_attr_t * __attr, void * __stackaddr, size_t __stacksize) throw()
# 390
 __attribute((__nonnull__(1))); 
# 396
extern int pthread_attr_setaffinity_np(pthread_attr_t * __attr, size_t __cpusetsize, const cpu_set_t * __cpuset) throw()
# 399
 __attribute((__nonnull__(1, 3))); 
# 403
extern int pthread_attr_getaffinity_np(const pthread_attr_t * __attr, size_t __cpusetsize, cpu_set_t * __cpuset) throw()
# 406
 __attribute((__nonnull__(1, 3))); 
# 409
extern int pthread_getattr_default_np(pthread_attr_t * __attr) throw()
# 410
 __attribute((__nonnull__(1))); 
# 414
extern int pthread_setattr_default_np(const pthread_attr_t * __attr) throw()
# 415
 __attribute((__nonnull__(1))); 
# 420
extern int pthread_getattr_np(pthread_t __th, pthread_attr_t * __attr) throw()
# 421
 __attribute((__nonnull__(2))); 
# 429
extern int pthread_setschedparam(pthread_t __target_thread, int __policy, const sched_param * __param) throw()
# 431
 __attribute((__nonnull__(3))); 
# 434
extern int pthread_getschedparam(pthread_t __target_thread, int *__restrict__ __policy, sched_param *__restrict__ __param) throw()
# 437
 __attribute((__nonnull__(2, 3))); 
# 440
extern int pthread_setschedprio(pthread_t __target_thread, int __prio) throw(); 
# 446
extern int pthread_getname_np(pthread_t __target_thread, char * __buf, size_t __buflen) throw()
# 448
 __attribute((__nonnull__(2))); 
# 451
extern int pthread_setname_np(pthread_t __target_thread, const char * __name) throw()
# 452
 __attribute((__nonnull__(2))); 
# 458
extern int pthread_getconcurrency() throw(); 
# 461
extern int pthread_setconcurrency(int __level) throw(); 
# 469
extern int pthread_yield() throw(); 
# 474
extern int pthread_setaffinity_np(pthread_t __th, size_t __cpusetsize, const cpu_set_t * __cpuset) throw()
# 476
 __attribute((__nonnull__(3))); 
# 479
extern int pthread_getaffinity_np(pthread_t __th, size_t __cpusetsize, cpu_set_t * __cpuset) throw()
# 481
 __attribute((__nonnull__(3))); 
# 494 "/usr/include/pthread.h" 3
extern int pthread_once(pthread_once_t * __once_control, void (* __init_routine)(void))
# 495
 __attribute((__nonnull__(1, 2))); 
# 506 "/usr/include/pthread.h" 3
extern int pthread_setcancelstate(int __state, int * __oldstate); 
# 510
extern int pthread_setcanceltype(int __type, int * __oldtype); 
# 513
extern int pthread_cancel(pthread_t __th); 
# 518
extern void pthread_testcancel(); 
# 531
typedef 
# 524
struct { 
# 526
struct { 
# 527
__jmp_buf __cancel_jmp_buf; 
# 528
int __mask_was_saved; 
# 529
} __cancel_jmp_buf[1]; 
# 530
void *__pad[4]; 
# 531
} __pthread_unwind_buf_t __attribute((__aligned__)); 
# 540 "/usr/include/pthread.h" 3
struct __pthread_cleanup_frame { 
# 542
void (*__cancel_routine)(void *); 
# 543
void *__cancel_arg; 
# 544
int __do_it; 
# 545
int __cancel_type; 
# 546
}; 
# 551
class __pthread_cleanup_class { 
# 553
void (*__cancel_routine)(void *); 
# 554
void *__cancel_arg; 
# 555
int __do_it; 
# 556
int __cancel_type; 
# 559
public: __pthread_cleanup_class(void (*__fct)(void *), void *__arg) : __cancel_routine(__fct), __cancel_arg(__arg), __do_it(1) 
# 560
{ } 
# 561
~__pthread_cleanup_class() { if (__do_it) { (__cancel_routine)(__cancel_arg); }  } 
# 562
void __setdoit(int __newval) { (__do_it) = __newval; } 
# 563
void __defer() { pthread_setcanceltype(PTHREAD_CANCEL_DEFERRED, &(__cancel_type)); 
# 564
} 
# 565
void __restore() const { pthread_setcanceltype(__cancel_type, 0); } 
# 566
}; 
# 742 "/usr/include/pthread.h" 3
struct __jmp_buf_tag; 
# 743
extern int __sigsetjmp(__jmp_buf_tag * __env, int __savemask) throw(); 
# 749
extern int pthread_mutex_init(pthread_mutex_t * __mutex, const pthread_mutexattr_t * __mutexattr) throw()
# 751
 __attribute((__nonnull__(1))); 
# 754
extern int pthread_mutex_destroy(pthread_mutex_t * __mutex) throw()
# 755
 __attribute((__nonnull__(1))); 
# 758
extern int pthread_mutex_trylock(pthread_mutex_t * __mutex) throw()
# 759
 __attribute((__nonnull__(1))); 
# 762
extern int pthread_mutex_lock(pthread_mutex_t * __mutex) throw()
# 763
 __attribute((__nonnull__(1))); 
# 767
extern int pthread_mutex_timedlock(pthread_mutex_t *__restrict__ __mutex, const timespec *__restrict__ __abstime) throw()
# 769
 __attribute((__nonnull__(1, 2))); 
# 773
extern int pthread_mutex_unlock(pthread_mutex_t * __mutex) throw()
# 774
 __attribute((__nonnull__(1))); 
# 778
extern int pthread_mutex_getprioceiling(const pthread_mutex_t *__restrict__ __mutex, int *__restrict__ __prioceiling) throw()
# 781
 __attribute((__nonnull__(1, 2))); 
# 785
extern int pthread_mutex_setprioceiling(pthread_mutex_t *__restrict__ __mutex, int __prioceiling, int *__restrict__ __old_ceiling) throw()
# 788
 __attribute((__nonnull__(1, 3))); 
# 793
extern int pthread_mutex_consistent(pthread_mutex_t * __mutex) throw()
# 794
 __attribute((__nonnull__(1))); 
# 796
extern int pthread_mutex_consistent_np(pthread_mutex_t * __mutex) throw()
# 797
 __attribute((__nonnull__(1))); 
# 806 "/usr/include/pthread.h" 3
extern int pthread_mutexattr_init(pthread_mutexattr_t * __attr) throw()
# 807
 __attribute((__nonnull__(1))); 
# 810
extern int pthread_mutexattr_destroy(pthread_mutexattr_t * __attr) throw()
# 811
 __attribute((__nonnull__(1))); 
# 814
extern int pthread_mutexattr_getpshared(const pthread_mutexattr_t *__restrict__ __attr, int *__restrict__ __pshared) throw()
# 817
 __attribute((__nonnull__(1, 2))); 
# 820
extern int pthread_mutexattr_setpshared(pthread_mutexattr_t * __attr, int __pshared) throw()
# 822
 __attribute((__nonnull__(1))); 
# 826
extern int pthread_mutexattr_gettype(const pthread_mutexattr_t *__restrict__ __attr, int *__restrict__ __kind) throw()
# 828
 __attribute((__nonnull__(1, 2))); 
# 833
extern int pthread_mutexattr_settype(pthread_mutexattr_t * __attr, int __kind) throw()
# 834
 __attribute((__nonnull__(1))); 
# 838
extern int pthread_mutexattr_getprotocol(const pthread_mutexattr_t *__restrict__ __attr, int *__restrict__ __protocol) throw()
# 841
 __attribute((__nonnull__(1, 2))); 
# 845
extern int pthread_mutexattr_setprotocol(pthread_mutexattr_t * __attr, int __protocol) throw()
# 847
 __attribute((__nonnull__(1))); 
# 850
extern int pthread_mutexattr_getprioceiling(const pthread_mutexattr_t *__restrict__ __attr, int *__restrict__ __prioceiling) throw()
# 853
 __attribute((__nonnull__(1, 2))); 
# 856
extern int pthread_mutexattr_setprioceiling(pthread_mutexattr_t * __attr, int __prioceiling) throw()
# 858
 __attribute((__nonnull__(1))); 
# 862
extern int pthread_mutexattr_getrobust(const pthread_mutexattr_t * __attr, int * __robustness) throw()
# 864
 __attribute((__nonnull__(1, 2))); 
# 866
extern int pthread_mutexattr_getrobust_np(const pthread_mutexattr_t * __attr, int * __robustness) throw()
# 868
 __attribute((__nonnull__(1, 2))); 
# 872
extern int pthread_mutexattr_setrobust(pthread_mutexattr_t * __attr, int __robustness) throw()
# 874
 __attribute((__nonnull__(1))); 
# 876
extern int pthread_mutexattr_setrobust_np(pthread_mutexattr_t * __attr, int __robustness) throw()
# 878
 __attribute((__nonnull__(1))); 
# 888 "/usr/include/pthread.h" 3
extern int pthread_rwlock_init(pthread_rwlock_t *__restrict__ __rwlock, const pthread_rwlockattr_t *__restrict__ __attr) throw()
# 890
 __attribute((__nonnull__(1))); 
# 893
extern int pthread_rwlock_destroy(pthread_rwlock_t * __rwlock) throw()
# 894
 __attribute((__nonnull__(1))); 
# 897
extern int pthread_rwlock_rdlock(pthread_rwlock_t * __rwlock) throw()
# 898
 __attribute((__nonnull__(1))); 
# 901
extern int pthread_rwlock_tryrdlock(pthread_rwlock_t * __rwlock) throw()
# 902
 __attribute((__nonnull__(1))); 
# 906
extern int pthread_rwlock_timedrdlock(pthread_rwlock_t *__restrict__ __rwlock, const timespec *__restrict__ __abstime) throw()
# 908
 __attribute((__nonnull__(1, 2))); 
# 912
extern int pthread_rwlock_wrlock(pthread_rwlock_t * __rwlock) throw()
# 913
 __attribute((__nonnull__(1))); 
# 916
extern int pthread_rwlock_trywrlock(pthread_rwlock_t * __rwlock) throw()
# 917
 __attribute((__nonnull__(1))); 
# 921
extern int pthread_rwlock_timedwrlock(pthread_rwlock_t *__restrict__ __rwlock, const timespec *__restrict__ __abstime) throw()
# 923
 __attribute((__nonnull__(1, 2))); 
# 927
extern int pthread_rwlock_unlock(pthread_rwlock_t * __rwlock) throw()
# 928
 __attribute((__nonnull__(1))); 
# 934
extern int pthread_rwlockattr_init(pthread_rwlockattr_t * __attr) throw()
# 935
 __attribute((__nonnull__(1))); 
# 938
extern int pthread_rwlockattr_destroy(pthread_rwlockattr_t * __attr) throw()
# 939
 __attribute((__nonnull__(1))); 
# 942
extern int pthread_rwlockattr_getpshared(const pthread_rwlockattr_t *__restrict__ __attr, int *__restrict__ __pshared) throw()
# 945
 __attribute((__nonnull__(1, 2))); 
# 948
extern int pthread_rwlockattr_setpshared(pthread_rwlockattr_t * __attr, int __pshared) throw()
# 950
 __attribute((__nonnull__(1))); 
# 953
extern int pthread_rwlockattr_getkind_np(const pthread_rwlockattr_t *__restrict__ __attr, int *__restrict__ __pref) throw()
# 956
 __attribute((__nonnull__(1, 2))); 
# 959
extern int pthread_rwlockattr_setkind_np(pthread_rwlockattr_t * __attr, int __pref) throw()
# 960
 __attribute((__nonnull__(1))); 
# 968
extern int pthread_cond_init(pthread_cond_t *__restrict__ __cond, const pthread_condattr_t *__restrict__ __cond_attr) throw()
# 970
 __attribute((__nonnull__(1))); 
# 973
extern int pthread_cond_destroy(pthread_cond_t * __cond) throw()
# 974
 __attribute((__nonnull__(1))); 
# 977
extern int pthread_cond_signal(pthread_cond_t * __cond) throw()
# 978
 __attribute((__nonnull__(1))); 
# 981
extern int pthread_cond_broadcast(pthread_cond_t * __cond) throw()
# 982
 __attribute((__nonnull__(1))); 
# 989
extern int pthread_cond_wait(pthread_cond_t *__restrict__ __cond, pthread_mutex_t *__restrict__ __mutex)
# 991
 __attribute((__nonnull__(1, 2))); 
# 1000 "/usr/include/pthread.h" 3
extern int pthread_cond_timedwait(pthread_cond_t *__restrict__ __cond, pthread_mutex_t *__restrict__ __mutex, const timespec *__restrict__ __abstime)
# 1003
 __attribute((__nonnull__(1, 2, 3))); 
# 1008
extern int pthread_condattr_init(pthread_condattr_t * __attr) throw()
# 1009
 __attribute((__nonnull__(1))); 
# 1012
extern int pthread_condattr_destroy(pthread_condattr_t * __attr) throw()
# 1013
 __attribute((__nonnull__(1))); 
# 1016
extern int pthread_condattr_getpshared(const pthread_condattr_t *__restrict__ __attr, int *__restrict__ __pshared) throw()
# 1019
 __attribute((__nonnull__(1, 2))); 
# 1022
extern int pthread_condattr_setpshared(pthread_condattr_t * __attr, int __pshared) throw()
# 1023
 __attribute((__nonnull__(1))); 
# 1027
extern int pthread_condattr_getclock(const pthread_condattr_t *__restrict__ __attr, __clockid_t *__restrict__ __clock_id) throw()
# 1030
 __attribute((__nonnull__(1, 2))); 
# 1033
extern int pthread_condattr_setclock(pthread_condattr_t * __attr, __clockid_t __clock_id) throw()
# 1035
 __attribute((__nonnull__(1))); 
# 1044 "/usr/include/pthread.h" 3
extern int pthread_spin_init(pthread_spinlock_t * __lock, int __pshared) throw()
# 1045
 __attribute((__nonnull__(1))); 
# 1048
extern int pthread_spin_destroy(pthread_spinlock_t * __lock) throw()
# 1049
 __attribute((__nonnull__(1))); 
# 1052
extern int pthread_spin_lock(pthread_spinlock_t * __lock) throw()
# 1053
 __attribute((__nonnull__(1))); 
# 1056
extern int pthread_spin_trylock(pthread_spinlock_t * __lock) throw()
# 1057
 __attribute((__nonnull__(1))); 
# 1060
extern int pthread_spin_unlock(pthread_spinlock_t * __lock) throw()
# 1061
 __attribute((__nonnull__(1))); 
# 1068
extern int pthread_barrier_init(pthread_barrier_t *__restrict__ __barrier, const pthread_barrierattr_t *__restrict__ __attr, unsigned __count) throw()
# 1071
 __attribute((__nonnull__(1))); 
# 1074
extern int pthread_barrier_destroy(pthread_barrier_t * __barrier) throw()
# 1075
 __attribute((__nonnull__(1))); 
# 1078
extern int pthread_barrier_wait(pthread_barrier_t * __barrier) throw()
# 1079
 __attribute((__nonnull__(1))); 
# 1083
extern int pthread_barrierattr_init(pthread_barrierattr_t * __attr) throw()
# 1084
 __attribute((__nonnull__(1))); 
# 1087
extern int pthread_barrierattr_destroy(pthread_barrierattr_t * __attr) throw()
# 1088
 __attribute((__nonnull__(1))); 
# 1091
extern int pthread_barrierattr_getpshared(const pthread_barrierattr_t *__restrict__ __attr, int *__restrict__ __pshared) throw()
# 1094
 __attribute((__nonnull__(1, 2))); 
# 1097
extern int pthread_barrierattr_setpshared(pthread_barrierattr_t * __attr, int __pshared) throw()
# 1099
 __attribute((__nonnull__(1))); 
# 1111 "/usr/include/pthread.h" 3
extern int pthread_key_create(pthread_key_t * __key, void (* __destr_function)(void *)) throw()
# 1113
 __attribute((__nonnull__(1))); 
# 1116
extern int pthread_key_delete(pthread_key_t __key) throw(); 
# 1119
extern void *pthread_getspecific(pthread_key_t __key) throw(); 
# 1122
extern int pthread_setspecific(pthread_key_t __key, const void * __pointer) throw(); 
# 1128
extern int pthread_getcpuclockid(pthread_t __thread_id, __clockid_t * __clock_id) throw()
# 1130
 __attribute((__nonnull__(2))); 
# 1145 "/usr/include/pthread.h" 3
extern int pthread_atfork(void (* __prepare)(void), void (* __parent)(void), void (* __child)(void)) throw(); 
# 1159 "/usr/include/pthread.h" 3
}
# 47 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
typedef pthread_t __gthread_t; 
# 48
typedef pthread_key_t __gthread_key_t; 
# 49
typedef pthread_once_t __gthread_once_t; 
# 50
typedef pthread_mutex_t __gthread_mutex_t; 
# 51
typedef pthread_mutex_t __gthread_recursive_mutex_t; 
# 52
typedef pthread_cond_t __gthread_cond_t; 
# 53
typedef timespec __gthread_time_t; 
# 101 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static __typeof__(pthread_once) __gthrw_pthread_once __attribute((__weakref__("pthread_once"))); 
# 102
static __typeof__(pthread_getspecific) __gthrw_pthread_getspecific __attribute((__weakref__("pthread_getspecific"))); 
# 103
static __typeof__(pthread_setspecific) __gthrw_pthread_setspecific __attribute((__weakref__("pthread_setspecific"))); 
# 105
static __typeof__(pthread_create) __gthrw_pthread_create __attribute((__weakref__("pthread_create"))); 
# 106
static __typeof__(pthread_join) __gthrw_pthread_join __attribute((__weakref__("pthread_join"))); 
# 107
static __typeof__(pthread_equal) __gthrw_pthread_equal __attribute((__weakref__("pthread_equal"))); 
# 108
static __typeof__(pthread_self) __gthrw_pthread_self __attribute((__weakref__("pthread_self"))); 
# 109
static __typeof__(pthread_detach) __gthrw_pthread_detach __attribute((__weakref__("pthread_detach"))); 
# 111
static __typeof__(pthread_cancel) __gthrw_pthread_cancel __attribute((__weakref__("pthread_cancel"))); 
# 113
static __typeof__(sched_yield) __gthrw_sched_yield __attribute((__weakref__("sched_yield"))); 
# 115
static __typeof__(pthread_mutex_lock) __gthrw_pthread_mutex_lock __attribute((__weakref__("pthread_mutex_lock"))); 
# 116
static __typeof__(pthread_mutex_trylock) __gthrw_pthread_mutex_trylock __attribute((__weakref__("pthread_mutex_trylock"))); 
# 118
static __typeof__(pthread_mutex_timedlock) __gthrw_pthread_mutex_timedlock __attribute((__weakref__("pthread_mutex_timedlock"))); 
# 120
static __typeof__(pthread_mutex_unlock) __gthrw_pthread_mutex_unlock __attribute((__weakref__("pthread_mutex_unlock"))); 
# 121
static __typeof__(pthread_mutex_init) __gthrw_pthread_mutex_init __attribute((__weakref__("pthread_mutex_init"))); 
# 122
static __typeof__(pthread_mutex_destroy) __gthrw_pthread_mutex_destroy __attribute((__weakref__("pthread_mutex_destroy"))); 
# 124
static __typeof__(pthread_cond_init) __gthrw_pthread_cond_init __attribute((__weakref__("pthread_cond_init"))); 
# 125
static __typeof__(pthread_cond_broadcast) __gthrw_pthread_cond_broadcast __attribute((__weakref__("pthread_cond_broadcast"))); 
# 126
static __typeof__(pthread_cond_signal) __gthrw_pthread_cond_signal __attribute((__weakref__("pthread_cond_signal"))); 
# 127
static __typeof__(pthread_cond_wait) __gthrw_pthread_cond_wait __attribute((__weakref__("pthread_cond_wait"))); 
# 128
static __typeof__(pthread_cond_timedwait) __gthrw_pthread_cond_timedwait __attribute((__weakref__("pthread_cond_timedwait"))); 
# 129
static __typeof__(pthread_cond_destroy) __gthrw_pthread_cond_destroy __attribute((__weakref__("pthread_cond_destroy"))); 
# 131
static __typeof__(pthread_key_create) __gthrw_pthread_key_create __attribute((__weakref__("pthread_key_create"))); 
# 132
static __typeof__(pthread_key_delete) __gthrw_pthread_key_delete __attribute((__weakref__("pthread_key_delete"))); 
# 133
static __typeof__(pthread_mutexattr_init) __gthrw_pthread_mutexattr_init __attribute((__weakref__("pthread_mutexattr_init"))); 
# 134
static __typeof__(pthread_mutexattr_settype) __gthrw_pthread_mutexattr_settype __attribute((__weakref__("pthread_mutexattr_settype"))); 
# 135
static __typeof__(pthread_mutexattr_destroy) __gthrw_pthread_mutexattr_destroy __attribute((__weakref__("pthread_mutexattr_destroy"))); 
# 236 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static __typeof__(pthread_key_create) __gthrw___pthread_key_create __attribute((__weakref__("__pthread_key_create"))); 
# 247 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int __gthread_active_p() 
# 248
{ 
# 249
static void *const __gthread_active_ptr = __extension__ ((void *)(&__gthrw___pthread_key_create)); 
# 251
return __gthread_active_ptr != (0); 
# 252
} 
# 659 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int __gthread_create(__gthread_t *__threadid, void *(*__func)(void *), void *
# 660
__args) 
# 661
{ 
# 662
return __gthrw_pthread_create(__threadid, __null, __func, __args); 
# 663
} 
# 666
static inline int __gthread_join(__gthread_t __threadid, void **__value_ptr) 
# 667
{ 
# 668
return __gthrw_pthread_join(__threadid, __value_ptr); 
# 669
} 
# 672
static inline int __gthread_detach(__gthread_t __threadid) 
# 673
{ 
# 674
return __gthrw_pthread_detach(__threadid); 
# 675
} 
# 678
static inline int __gthread_equal(__gthread_t __t1, __gthread_t __t2) 
# 679
{ 
# 680
return __gthrw_pthread_equal(__t1, __t2); 
# 681
} 
# 684
static inline __gthread_t __gthread_self() 
# 685
{ 
# 686
return __gthrw_pthread_self(); 
# 687
} 
# 690
static inline int __gthread_yield() 
# 691
{ 
# 692
return __gthrw_sched_yield(); 
# 693
} 
# 696
static inline int __gthread_once(__gthread_once_t *__once, void (*__func)(void)) 
# 697
{ 
# 698
if (__gthread_active_p()) { 
# 699
return __gthrw_pthread_once(__once, __func); } else { 
# 701
return -1; }  
# 702
} 
# 705
static inline int __gthread_key_create(__gthread_key_t *__key, void (*__dtor)(void *)) 
# 706
{ 
# 707
return __gthrw_pthread_key_create(__key, __dtor); 
# 708
} 
# 711
static inline int __gthread_key_delete(__gthread_key_t __key) 
# 712
{ 
# 713
return __gthrw_pthread_key_delete(__key); 
# 714
} 
# 717
static inline void *__gthread_getspecific(__gthread_key_t __key) 
# 718
{ 
# 719
return __gthrw_pthread_getspecific(__key); 
# 720
} 
# 723
static inline int __gthread_setspecific(__gthread_key_t __key, const void *__ptr) 
# 724
{ 
# 725
return __gthrw_pthread_setspecific(__key, __ptr); 
# 726
} 
# 729
static inline void __gthread_mutex_init_function(__gthread_mutex_t *__mutex) 
# 730
{ 
# 731
if (__gthread_active_p()) { 
# 732
__gthrw_pthread_mutex_init(__mutex, __null); }  
# 733
} 
# 736
static inline int __gthread_mutex_destroy(__gthread_mutex_t *__mutex) 
# 737
{ 
# 738
if (__gthread_active_p()) { 
# 739
return __gthrw_pthread_mutex_destroy(__mutex); } else { 
# 741
return 0; }  
# 742
} 
# 745
static inline int __gthread_mutex_lock(__gthread_mutex_t *__mutex) 
# 746
{ 
# 747
if (__gthread_active_p()) { 
# 748
return __gthrw_pthread_mutex_lock(__mutex); } else { 
# 750
return 0; }  
# 751
} 
# 754
static inline int __gthread_mutex_trylock(__gthread_mutex_t *__mutex) 
# 755
{ 
# 756
if (__gthread_active_p()) { 
# 757
return __gthrw_pthread_mutex_trylock(__mutex); } else { 
# 759
return 0; }  
# 760
} 
# 764
static inline int __gthread_mutex_timedlock(__gthread_mutex_t *__mutex, const __gthread_time_t *
# 765
__abs_timeout) 
# 766
{ 
# 767
if (__gthread_active_p()) { 
# 768
return __gthrw_pthread_mutex_timedlock(__mutex, __abs_timeout); } else { 
# 770
return 0; }  
# 771
} 
# 775
static inline int __gthread_mutex_unlock(__gthread_mutex_t *__mutex) 
# 776
{ 
# 777
if (__gthread_active_p()) { 
# 778
return __gthrw_pthread_mutex_unlock(__mutex); } else { 
# 780
return 0; }  
# 781
} 
# 808 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int __gthread_recursive_mutex_lock(__gthread_recursive_mutex_t *__mutex) 
# 809
{ 
# 810
return __gthread_mutex_lock(__mutex); 
# 811
} 
# 814
static inline int __gthread_recursive_mutex_trylock(__gthread_recursive_mutex_t *__mutex) 
# 815
{ 
# 816
return __gthread_mutex_trylock(__mutex); 
# 817
} 
# 821
static inline int __gthread_recursive_mutex_timedlock(__gthread_recursive_mutex_t *__mutex, const __gthread_time_t *
# 822
__abs_timeout) 
# 823
{ 
# 824
return __gthread_mutex_timedlock(__mutex, __abs_timeout); 
# 825
} 
# 829
static inline int __gthread_recursive_mutex_unlock(__gthread_recursive_mutex_t *__mutex) 
# 830
{ 
# 831
return __gthread_mutex_unlock(__mutex); 
# 832
} 
# 835
static inline int __gthread_recursive_mutex_destroy(__gthread_recursive_mutex_t *__mutex) 
# 836
{ 
# 837
return __gthread_mutex_destroy(__mutex); 
# 838
} 
# 850 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int __gthread_cond_broadcast(__gthread_cond_t *__cond) 
# 851
{ 
# 852
return __gthrw_pthread_cond_broadcast(__cond); 
# 853
} 
# 856
static inline int __gthread_cond_signal(__gthread_cond_t *__cond) 
# 857
{ 
# 858
return __gthrw_pthread_cond_signal(__cond); 
# 859
} 
# 862
static inline int __gthread_cond_wait(__gthread_cond_t *__cond, __gthread_mutex_t *__mutex) 
# 863
{ 
# 864
return __gthrw_pthread_cond_wait(__cond, __mutex); 
# 865
} 
# 868
static inline int __gthread_cond_timedwait(__gthread_cond_t *__cond, __gthread_mutex_t *__mutex, const __gthread_time_t *
# 869
__abs_timeout) 
# 870
{ 
# 871
return __gthrw_pthread_cond_timedwait(__cond, __mutex, __abs_timeout); 
# 872
} 
# 875
static inline int __gthread_cond_wait_recursive(__gthread_cond_t *__cond, __gthread_recursive_mutex_t *
# 876
__mutex) 
# 877
{ 
# 878
return __gthread_cond_wait(__cond, __mutex); 
# 879
} 
# 882
static inline int __gthread_cond_destroy(__gthread_cond_t *__cond) 
# 883
{ 
# 884
return __gthrw_pthread_cond_destroy(__cond); 
# 885
} 
# 151 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 3
#pragma GCC visibility pop
# 32 "/usr/include/x86_64-linux-gnu/c++/5/bits/atomic_word.h" 3
typedef int _Atomic_word; 
# 38 "/usr/include/c++/5/ext/atomicity.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 48
static inline _Atomic_word __exchange_and_add(volatile _Atomic_word *__mem, int __val) 
# 49
{ return __atomic_fetch_add(__mem, __val, 4); } 
# 52
static inline void __atomic_add(volatile _Atomic_word *__mem, int __val) 
# 53
{ __atomic_fetch_add(__mem, __val, 4); } 
# 65 "/usr/include/c++/5/ext/atomicity.h" 3
static inline _Atomic_word __exchange_and_add_single(_Atomic_word *__mem, int __val) 
# 66
{ 
# 67
_Atomic_word __result = *__mem; 
# 68
(*__mem) += __val; 
# 69
return __result; 
# 70
} 
# 73
static inline void __atomic_add_single(_Atomic_word *__mem, int __val) 
# 74
{ (*__mem) += __val; } 
# 77
__attribute((__unused__)) static inline _Atomic_word 
# 78
__exchange_and_add_dispatch(_Atomic_word *__mem, int __val) 
# 79
{ 
# 81
if (__gthread_active_p()) { 
# 82
return __exchange_and_add(__mem, __val); } else { 
# 84
return __exchange_and_add_single(__mem, __val); }  
# 88
} 
# 91
__attribute((__unused__)) static inline void 
# 92
__atomic_add_dispatch(_Atomic_word *__mem, int __val) 
# 93
{ 
# 95
if (__gthread_active_p()) { 
# 96
__atomic_add(__mem, __val); } else { 
# 98
__atomic_add_single(__mem, __val); }  
# 102
} 
# 105
}
# 42 "/usr/include/c++/5/new" 3
#pragma GCC visibility push ( default )
# 44
extern "C++" {
# 46
namespace std { 
# 54
class bad_alloc : public exception { 
# 57
public: bad_alloc() throw() { } 
# 61
virtual ~bad_alloc() throw(); 
# 64
virtual const char *what() const throw(); 
# 65
}; 
# 82 "/usr/include/c++/5/new" 3
struct nothrow_t { }; 
# 84
extern const nothrow_t nothrow; 
# 88
typedef void (*new_handler)(void); 
# 92
new_handler set_new_handler(new_handler) throw(); 
# 98
}
# 111 "/usr/include/c++/5/new" 3
void *operator new(std::size_t) throw(std::bad_alloc)
# 112
 __attribute((__externally_visible__)); 
# 113
void *operator new[](std::size_t) throw(std::bad_alloc)
# 114
 __attribute((__externally_visible__)); 
# 115
void operator delete(void *) throw()
# 116
 __attribute((__externally_visible__)); 
# 117
void operator delete[](void *) throw()
# 118
 __attribute((__externally_visible__)); 
# 119
void *operator new(std::size_t, const std::nothrow_t &) throw()
# 120
 __attribute((__externally_visible__)); 
# 121
void *operator new[](std::size_t, const std::nothrow_t &) throw()
# 122
 __attribute((__externally_visible__)); 
# 123
void operator delete(void *, const std::nothrow_t &) throw()
# 124
 __attribute((__externally_visible__)); 
# 125
void operator delete[](void *, const std::nothrow_t &) throw()
# 126
 __attribute((__externally_visible__)); 
# 129
inline void *operator new(std::size_t, void *__p) throw() 
# 130
{ return __p; } 
# 131
inline void *operator new[](std::size_t, void *__p) throw() 
# 132
{ return __p; } 
# 135
inline void operator delete(void *, void *) throw() { } 
# 136
inline void operator delete[](void *, void *) throw() { } 
# 138
}
# 140
#pragma GCC visibility pop
# 40 "/usr/include/c++/5/ext/new_allocator.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 44
using std::size_t;
# 45
using std::ptrdiff_t;
# 57 "/usr/include/c++/5/ext/new_allocator.h" 3
template< class _Tp> 
# 58
class new_allocator { 
# 61
public: typedef std::size_t size_type; 
# 62
typedef std::ptrdiff_t difference_type; 
# 63
typedef _Tp *pointer; 
# 64
typedef const _Tp *const_pointer; 
# 65
typedef _Tp &reference; 
# 66
typedef const _Tp &const_reference; 
# 67
typedef _Tp value_type; 
# 69
template< class _Tp1> 
# 70
struct rebind { 
# 71
typedef __gnu_cxx::new_allocator< _Tp1>  other; }; 
# 79
new_allocator() throw() { } 
# 81
new_allocator(const new_allocator &) throw() { } 
# 83
template< class _Tp1> 
# 84
new_allocator(const __gnu_cxx::new_allocator< _Tp1>  &) throw() { } 
# 86
~new_allocator() throw() { } 
# 89
pointer address(reference __x) const 
# 90
{ return std::__addressof(__x); } 
# 93
const_pointer address(const_reference __x) const 
# 94
{ return std::__addressof(__x); } 
# 99
pointer allocate(size_type __n, const void * = 0) 
# 100
{ 
# 101
if (__n > this->max_size()) { 
# 102
std::__throw_bad_alloc(); }  
# 104
return static_cast< _Tp *>(::operator new(__n * sizeof(_Tp))); 
# 105
} 
# 109
void deallocate(pointer __p, size_type) 
# 110
{ ::operator delete(__p); } 
# 113
size_type max_size() const throw() 
# 114
{ return ((std::size_t)(-1)) / sizeof(_Tp); } 
# 129 "/usr/include/c++/5/ext/new_allocator.h" 3
void construct(pointer __p, const _Tp &__val) 
# 130
{ ::new ((void *)__p) (_Tp)(__val); } 
# 133
void destroy(pointer __p) { (__p->~_Tp()); } 
# 135
}; 
# 137
template< class _Tp> inline bool 
# 139
operator==(const new_allocator< _Tp>  &, const new_allocator< _Tp>  &) 
# 140
{ return true; } 
# 142
template< class _Tp> inline bool 
# 144
operator!=(const new_allocator< _Tp>  &, const new_allocator< _Tp>  &) 
# 145
{ return false; } 
# 148
}
# 52 "/usr/include/c++/5/bits/allocator.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 63
template<> class allocator< void>  { 
# 66
public: typedef size_t size_type; 
# 67
typedef ptrdiff_t difference_type; 
# 68
typedef void *pointer; 
# 69
typedef const void *const_pointer; 
# 70
typedef void value_type; 
# 72
template< class _Tp1> 
# 73
struct rebind { 
# 74
typedef std::allocator< _Tp1>  other; }; 
# 81
}; 
# 91 "/usr/include/c++/5/bits/allocator.h" 3
template< class _Tp> 
# 92
class allocator : public __gnu_cxx::new_allocator< _Tp>  { 
# 95
public: typedef ::std::size_t size_type; 
# 96
typedef ::std::ptrdiff_t difference_type; 
# 97
typedef _Tp *pointer; 
# 98
typedef const _Tp *const_pointer; 
# 99
typedef _Tp &reference; 
# 100
typedef const _Tp &const_reference; 
# 101
typedef _Tp value_type; 
# 103
template< class _Tp1> 
# 104
struct rebind { 
# 105
typedef ::std::allocator< _Tp1>  other; }; 
# 113
allocator() throw() { } 
# 115
allocator(const allocator &__a) throw() : ::__gnu_cxx::new_allocator< _Tp> (__a) 
# 116
{ } 
# 118
template< class _Tp1> 
# 119
allocator(const ::std::allocator< _Tp1>  &) throw() { } 
# 121
~allocator() throw() { } 
# 124
}; 
# 126
template< class _T1, class _T2> inline bool 
# 128
operator==(const allocator< _T1>  &, const allocator< _T2>  &) throw() 
# 130
{ return true; } 
# 132
template< class _Tp> inline bool 
# 134
operator==(const allocator< _Tp>  &, const allocator< _Tp>  &) throw() 
# 136
{ return true; } 
# 138
template< class _T1, class _T2> inline bool 
# 140
operator!=(const allocator< _T1>  &, const allocator< _T2>  &) throw() 
# 142
{ return false; } 
# 144
template< class _Tp> inline bool 
# 146
operator!=(const allocator< _Tp>  &, const allocator< _Tp>  &) throw() 
# 148
{ return false; } 
# 155
extern template class allocator< char> ;
# 156
extern template class allocator< wchar_t> ;
# 163
template< class _Alloc, bool  = __is_empty(_Alloc)> 
# 164
struct __alloc_swap { 
# 165
static void _S_do_it(_Alloc &, _Alloc &) { } }; 
# 167
template< class _Alloc> 
# 168
struct __alloc_swap< _Alloc, false>  { 
# 171
static void _S_do_it(_Alloc &__one, _Alloc &__two) 
# 172
{ 
# 174
if (__one != __two) { 
# 175
swap(__one, __two); }  
# 176
} 
# 177
}; 
# 180
template< class _Alloc, bool  = __is_empty(_Alloc)> 
# 181
struct __alloc_neq { 
# 184
static bool _S_do_it(const _Alloc &, const _Alloc &) 
# 185
{ return false; } 
# 186
}; 
# 188
template< class _Alloc> 
# 189
struct __alloc_neq< _Alloc, false>  { 
# 192
static bool _S_do_it(const _Alloc &__one, const _Alloc &__two) 
# 193
{ return __one != __two; } 
# 194
}; 
# 227 "/usr/include/c++/5/bits/allocator.h" 3
}
# 36 "/usr/include/c++/5/bits/cxxabi_forced.h" 3
#pragma GCC visibility push ( default )
# 39
namespace __cxxabiv1 { 
# 48
class __forced_unwind { 
# 50
virtual ~__forced_unwind() throw(); 
# 53
virtual void __pure_dummy() = 0; 
# 54
}; 
# 55
}
# 58
#pragma GCC visibility pop
# 38 "/usr/include/c++/5/bits/ostream_insert.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 42
template< class _CharT, class _Traits> inline void 
# 44
__ostream_write(basic_ostream< _CharT, _Traits>  &__out, const _CharT *
# 45
__s, streamsize __n) 
# 46
{ 
# 47
typedef basic_ostream< _CharT, _Traits>  __ostream_type; 
# 48
typedef typename basic_ostream< _CharT, _Traits> ::ios_base __ios_base; 
# 50
const streamsize __put = ((__out.rdbuf())->sputn(__s, __n)); 
# 51
if (__put != __n) { 
# 52
(__out.setstate(__ios_base::badbit)); }  
# 53
} 
# 55
template< class _CharT, class _Traits> inline void 
# 57
__ostream_fill(basic_ostream< _CharT, _Traits>  &__out, streamsize __n) 
# 58
{ 
# 59
typedef basic_ostream< _CharT, _Traits>  __ostream_type; 
# 60
typedef typename basic_ostream< _CharT, _Traits> ::ios_base __ios_base; 
# 62
const _CharT __c = (__out.fill()); 
# 63
for (; __n > (0); --__n) 
# 64
{ 
# 65
const typename _Traits::int_type __put = ((__out.rdbuf())->sputc(__c)); 
# 66
if (_Traits::eq_int_type(__put, _Traits::eof())) 
# 67
{ 
# 68
(__out.setstate(__ios_base::badbit)); 
# 69
break; 
# 70
}  
# 71
}  
# 72
} 
# 74
template< class _CharT, class _Traits> basic_ostream< _CharT, _Traits>  &
# 76
__ostream_insert(basic_ostream< _CharT, _Traits>  &__out, const _CharT *
# 77
__s, streamsize __n) 
# 78
{ 
# 79
typedef basic_ostream< _CharT, _Traits>  __ostream_type; 
# 80
typedef typename basic_ostream< _CharT, _Traits> ::ios_base __ios_base; 
# 82
typename basic_ostream< _CharT, _Traits> ::sentry __cerb(__out); 
# 83
if (__cerb) 
# 84
{ 
# 85
try 
# 86
{ 
# 87
const streamsize __w = (__out.width()); 
# 88
if (__w > __n) 
# 89
{ 
# 90
const bool __left = ((__out.flags()) & __ios_base::adjustfield) == __ios_base::left; 
# 93
if (!__left) { 
# 94
__ostream_fill(__out, __w - __n); }  
# 95
if ((__out.good())) { 
# 96
__ostream_write(__out, __s, __n); }  
# 97
if (__left && (__out.good())) { 
# 98
__ostream_fill(__out, __w - __n); }  
# 99
} else { 
# 101
__ostream_write(__out, __s, __n); }  
# 102
(__out.width(0)); 
# 103
} 
# 104
catch (__cxxabiv1::__forced_unwind &) 
# 105
{ 
# 106
(__out._M_setstate(__ios_base::badbit)); 
# 107
throw; 
# 108
} 
# 109
catch (...) 
# 110
{ (__out._M_setstate(__ios_base::badbit)); }  
# 111
}  
# 112
return __out; 
# 113
} 
# 118
extern template basic_ostream< char>  &__ostream_insert(basic_ostream< char>  & __out, const char * __s, streamsize __n);
# 121
extern template basic_ostream< wchar_t>  &__ostream_insert(basic_ostream< wchar_t>  & __out, const wchar_t * __s, streamsize __n);
# 127
}
# 63 "/usr/include/c++/5/bits/stl_function.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 104 "/usr/include/c++/5/bits/stl_function.h" 3
template< class _Arg, class _Result> 
# 105
struct unary_function { 
# 108
typedef _Arg argument_type; 
# 111
typedef _Result result_type; 
# 112
}; 
# 117
template< class _Arg1, class _Arg2, class _Result> 
# 118
struct binary_function { 
# 121
typedef _Arg1 first_argument_type; 
# 124
typedef _Arg2 second_argument_type; 
# 127
typedef _Result result_type; 
# 128
}; 
# 166 "/usr/include/c++/5/bits/stl_function.h" 3
template< class _Tp> 
# 167
struct plus : public binary_function< _Tp, _Tp, _Tp>  { 
# 171
_Tp operator()(const _Tp &__x, const _Tp &__y) const 
# 172
{ return __x + __y; } 
# 173
}; 
# 176
template< class _Tp> 
# 177
struct minus : public binary_function< _Tp, _Tp, _Tp>  { 
# 181
_Tp operator()(const _Tp &__x, const _Tp &__y) const 
# 182
{ return __x - __y; } 
# 183
}; 
# 186
template< class _Tp> 
# 187
struct multiplies : public binary_function< _Tp, _Tp, _Tp>  { 
# 191
_Tp operator()(const _Tp &__x, const _Tp &__y) const 
# 192
{ return __x * __y; } 
# 193
}; 
# 196
template< class _Tp> 
# 197
struct divides : public binary_function< _Tp, _Tp, _Tp>  { 
# 201
_Tp operator()(const _Tp &__x, const _Tp &__y) const 
# 202
{ return __x / __y; } 
# 203
}; 
# 206
template< class _Tp> 
# 207
struct modulus : public binary_function< _Tp, _Tp, _Tp>  { 
# 211
_Tp operator()(const _Tp &__x, const _Tp &__y) const 
# 212
{ return __x % __y; } 
# 213
}; 
# 216
template< class _Tp> 
# 217
struct negate : public unary_function< _Tp, _Tp>  { 
# 221
_Tp operator()(const _Tp &__x) const 
# 222
{ return -__x; } 
# 223
}; 
# 351 "/usr/include/c++/5/bits/stl_function.h" 3
template< class _Tp> 
# 352
struct equal_to : public binary_function< _Tp, _Tp, bool>  { 
# 356
bool operator()(const _Tp &__x, const _Tp &__y) const 
# 357
{ return __x == __y; } 
# 358
}; 
# 361
template< class _Tp> 
# 362
struct not_equal_to : public binary_function< _Tp, _Tp, bool>  { 
# 366
bool operator()(const _Tp &__x, const _Tp &__y) const 
# 367
{ return __x != __y; } 
# 368
}; 
# 371
template< class _Tp> 
# 372
struct greater : public binary_function< _Tp, _Tp, bool>  { 
# 376
bool operator()(const _Tp &__x, const _Tp &__y) const 
# 377
{ return __x > __y; } 
# 378
}; 
# 381
template< class _Tp> 
# 382
struct less : public binary_function< _Tp, _Tp, bool>  { 
# 386
bool operator()(const _Tp &__x, const _Tp &__y) const 
# 387
{ return __x < __y; } 
# 388
}; 
# 391
template< class _Tp> 
# 392
struct greater_equal : public binary_function< _Tp, _Tp, bool>  { 
# 396
bool operator()(const _Tp &__x, const _Tp &__y) const 
# 397
{ return __x >= __y; } 
# 398
}; 
# 401
template< class _Tp> 
# 402
struct less_equal : public binary_function< _Tp, _Tp, bool>  { 
# 406
bool operator()(const _Tp &__x, const _Tp &__y) const 
# 407
{ return __x <= __y; } 
# 408
}; 
# 524 "/usr/include/c++/5/bits/stl_function.h" 3
template< class _Tp> 
# 525
struct logical_and : public binary_function< _Tp, _Tp, bool>  { 
# 529
bool operator()(const _Tp &__x, const _Tp &__y) const 
# 530
{ return __x && __y; } 
# 531
}; 
# 534
template< class _Tp> 
# 535
struct logical_or : public binary_function< _Tp, _Tp, bool>  { 
# 539
bool operator()(const _Tp &__x, const _Tp &__y) const 
# 540
{ return __x || __y; } 
# 541
}; 
# 544
template< class _Tp> 
# 545
struct logical_not : public unary_function< _Tp, bool>  { 
# 549
bool operator()(const _Tp &__x) const 
# 550
{ return !__x; } 
# 551
}; 
# 617 "/usr/include/c++/5/bits/stl_function.h" 3
template< class _Tp> 
# 618
struct bit_and : public binary_function< _Tp, _Tp, _Tp>  { 
# 622
_Tp operator()(const _Tp &__x, const _Tp &__y) const 
# 623
{ return __x & __y; } 
# 624
}; 
# 626
template< class _Tp> 
# 627
struct bit_or : public binary_function< _Tp, _Tp, _Tp>  { 
# 631
_Tp operator()(const _Tp &__x, const _Tp &__y) const 
# 632
{ return __x | __y; } 
# 633
}; 
# 635
template< class _Tp> 
# 636
struct bit_xor : public binary_function< _Tp, _Tp, _Tp>  { 
# 640
_Tp operator()(const _Tp &__x, const _Tp &__y) const 
# 641
{ return __x ^ __y; } 
# 642
}; 
# 644
template< class _Tp> 
# 645
struct bit_not : public unary_function< _Tp, _Tp>  { 
# 649
_Tp operator()(const _Tp &__x) const 
# 650
{ return ~__x; } 
# 651
}; 
# 741 "/usr/include/c++/5/bits/stl_function.h" 3
template< class _Predicate> 
# 742
class unary_negate : public unary_function< typename _Predicate::argument_type, bool>  { 
# 746
protected: _Predicate _M_pred; 
# 751
public: explicit unary_negate(const _Predicate &__x) : _M_pred(__x) { } 
# 755
bool operator()(const typename _Predicate::argument_type &__x) const 
# 756
{ return !(_M_pred)(__x); } 
# 757
}; 
# 760
template< class _Predicate> inline unary_negate< _Predicate>  
# 763
not1(const _Predicate &__pred) 
# 764
{ return ((unary_negate< _Predicate> )(__pred)); } 
# 767
template< class _Predicate> 
# 768
class binary_negate : public binary_function< typename _Predicate::first_argument_type, typename _Predicate::second_argument_type, bool>  { 
# 773
protected: _Predicate _M_pred; 
# 778
public: explicit binary_negate(const _Predicate &__x) : _M_pred(__x) { } 
# 782
bool operator()(const typename _Predicate::first_argument_type &__x, const typename _Predicate::second_argument_type &
# 783
__y) const 
# 784
{ return !(_M_pred)(__x, __y); } 
# 785
}; 
# 788
template< class _Predicate> inline binary_negate< _Predicate>  
# 791
not2(const _Predicate &__pred) 
# 792
{ return ((binary_negate< _Predicate> )(__pred)); } 
# 818 "/usr/include/c++/5/bits/stl_function.h" 3
template< class _Arg, class _Result> 
# 819
class pointer_to_unary_function : public unary_function< _Arg, _Result>  { 
# 822
protected: _Result (*_M_ptr)(_Arg); 
# 825
public: pointer_to_unary_function() { } 
# 828
explicit pointer_to_unary_function(_Result (*__x)(_Arg)) : _M_ptr(__x) 
# 829
{ } 
# 832
_Result operator()(_Arg __x) const 
# 833
{ return (_M_ptr)(__x); } 
# 834
}; 
# 837
template< class _Arg, class _Result> inline pointer_to_unary_function< _Arg, _Result>  
# 839
ptr_fun(_Result (*__x)(_Arg)) 
# 840
{ return ((pointer_to_unary_function< _Arg, _Result> )(__x)); } 
# 843
template< class _Arg1, class _Arg2, class _Result> 
# 844
class pointer_to_binary_function : public binary_function< _Arg1, _Arg2, _Result>  { 
# 848
protected: _Result (*_M_ptr)(_Arg1, _Arg2); 
# 851
public: pointer_to_binary_function() { } 
# 854
explicit pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2)) : _M_ptr(__x) 
# 855
{ } 
# 858
_Result operator()(_Arg1 __x, _Arg2 __y) const 
# 859
{ return (_M_ptr)(__x, __y); } 
# 860
}; 
# 863
template< class _Arg1, class _Arg2, class _Result> inline pointer_to_binary_function< _Arg1, _Arg2, _Result>  
# 865
ptr_fun(_Result (*__x)(_Arg1, _Arg2)) 
# 866
{ return ((pointer_to_binary_function< _Arg1, _Arg2, _Result> )(__x)); } 
# 869
template< class _Tp> 
# 870
struct _Identity : public unary_function< _Tp, _Tp>  { 
# 874
_Tp &operator()(_Tp &__x) const 
# 875
{ return __x; } 
# 878
const _Tp &operator()(const _Tp &__x) const 
# 879
{ return __x; } 
# 880
}; 
# 882
template< class _Pair> 
# 883
struct _Select1st : public unary_function< _Pair, typename _Pair::first_type>  { 
# 887
typename _Pair::first_type &operator()(_Pair &__x) const 
# 888
{ return __x.first; } 
# 891
const typename _Pair::first_type &operator()(const _Pair &__x) const 
# 892
{ return __x.first; } 
# 905 "/usr/include/c++/5/bits/stl_function.h" 3
}; 
# 907
template< class _Pair> 
# 908
struct _Select2nd : public unary_function< _Pair, typename _Pair::second_type>  { 
# 912
typename _Pair::second_type &operator()(_Pair &__x) const 
# 913
{ return __x.second; } 
# 916
const typename _Pair::second_type &operator()(const _Pair &__x) const 
# 917
{ return __x.second; } 
# 918
}; 
# 938 "/usr/include/c++/5/bits/stl_function.h" 3
template< class _Ret, class _Tp> 
# 939
class mem_fun_t : public unary_function< _Tp *, _Ret>  { 
# 943
public: explicit mem_fun_t(_Ret (_Tp::*__pf)(void)) : _M_f(__pf) 
# 944
{ } 
# 947
_Ret operator()(_Tp *__p) const 
# 948
{ return (__p->*(_M_f))(); } 
# 951
private: _Ret (_Tp::*_M_f)(void); 
# 952
}; 
# 956
template< class _Ret, class _Tp> 
# 957
class const_mem_fun_t : public unary_function< const _Tp *, _Ret>  { 
# 961
public: explicit const_mem_fun_t(_Ret (_Tp::*__pf)(void) const) : _M_f(__pf) 
# 962
{ } 
# 965
_Ret operator()(const _Tp *__p) const 
# 966
{ return (__p->*(_M_f))(); } 
# 969
private: _Ret (_Tp::*_M_f)(void) const; 
# 970
}; 
# 974
template< class _Ret, class _Tp> 
# 975
class mem_fun_ref_t : public unary_function< _Tp, _Ret>  { 
# 979
public: explicit mem_fun_ref_t(_Ret (_Tp::*__pf)(void)) : _M_f(__pf) 
# 980
{ } 
# 983
_Ret operator()(_Tp &__r) const 
# 984
{ return (__r.*(_M_f))(); } 
# 987
private: _Ret (_Tp::*_M_f)(void); 
# 988
}; 
# 992
template< class _Ret, class _Tp> 
# 993
class const_mem_fun_ref_t : public unary_function< _Tp, _Ret>  { 
# 997
public: explicit const_mem_fun_ref_t(_Ret (_Tp::*__pf)(void) const) : _M_f(__pf) 
# 998
{ } 
# 1001
_Ret operator()(const _Tp &__r) const 
# 1002
{ return (__r.*(_M_f))(); } 
# 1005
private: _Ret (_Tp::*_M_f)(void) const; 
# 1006
}; 
# 1010
template< class _Ret, class _Tp, class _Arg> 
# 1011
class mem_fun1_t : public binary_function< _Tp *, _Arg, _Ret>  { 
# 1015
public: explicit mem_fun1_t(_Ret (_Tp::*__pf)(_Arg)) : _M_f(__pf) 
# 1016
{ } 
# 1019
_Ret operator()(_Tp *__p, _Arg __x) const 
# 1020
{ return (__p->*(_M_f))(__x); } 
# 1023
private: _Ret (_Tp::*_M_f)(_Arg); 
# 1024
}; 
# 1028
template< class _Ret, class _Tp, class _Arg> 
# 1029
class const_mem_fun1_t : public binary_function< const _Tp *, _Arg, _Ret>  { 
# 1033
public: explicit const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const) : _M_f(__pf) 
# 1034
{ } 
# 1037
_Ret operator()(const _Tp *__p, _Arg __x) const 
# 1038
{ return (__p->*(_M_f))(__x); } 
# 1041
private: _Ret (_Tp::*_M_f)(_Arg) const; 
# 1042
}; 
# 1046
template< class _Ret, class _Tp, class _Arg> 
# 1047
class mem_fun1_ref_t : public binary_function< _Tp, _Arg, _Ret>  { 
# 1051
public: explicit mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg)) : _M_f(__pf) 
# 1052
{ } 
# 1055
_Ret operator()(_Tp &__r, _Arg __x) const 
# 1056
{ return (__r.*(_M_f))(__x); } 
# 1059
private: _Ret (_Tp::*_M_f)(_Arg); 
# 1060
}; 
# 1064
template< class _Ret, class _Tp, class _Arg> 
# 1065
class const_mem_fun1_ref_t : public binary_function< _Tp, _Arg, _Ret>  { 
# 1069
public: explicit const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const) : _M_f(__pf) 
# 1070
{ } 
# 1073
_Ret operator()(const _Tp &__r, _Arg __x) const 
# 1074
{ return (__r.*(_M_f))(__x); } 
# 1077
private: _Ret (_Tp::*_M_f)(_Arg) const; 
# 1078
}; 
# 1082
template< class _Ret, class _Tp> inline mem_fun_t< _Ret, _Tp>  
# 1084
mem_fun(_Ret (_Tp::*__f)(void)) 
# 1085
{ return ((mem_fun_t< _Ret, _Tp> )(__f)); } 
# 1087
template< class _Ret, class _Tp> inline const_mem_fun_t< _Ret, _Tp>  
# 1089
mem_fun(_Ret (_Tp::*__f)(void) const) 
# 1090
{ return ((const_mem_fun_t< _Ret, _Tp> )(__f)); } 
# 1092
template< class _Ret, class _Tp> inline mem_fun_ref_t< _Ret, _Tp>  
# 1094
mem_fun_ref(_Ret (_Tp::*__f)(void)) 
# 1095
{ return ((mem_fun_ref_t< _Ret, _Tp> )(__f)); } 
# 1097
template< class _Ret, class _Tp> inline const_mem_fun_ref_t< _Ret, _Tp>  
# 1099
mem_fun_ref(_Ret (_Tp::*__f)(void) const) 
# 1100
{ return ((const_mem_fun_ref_t< _Ret, _Tp> )(__f)); } 
# 1102
template< class _Ret, class _Tp, class _Arg> inline mem_fun1_t< _Ret, _Tp, _Arg>  
# 1104
mem_fun(_Ret (_Tp::*__f)(_Arg)) 
# 1105
{ return ((mem_fun1_t< _Ret, _Tp, _Arg> )(__f)); } 
# 1107
template< class _Ret, class _Tp, class _Arg> inline const_mem_fun1_t< _Ret, _Tp, _Arg>  
# 1109
mem_fun(_Ret (_Tp::*__f)(_Arg) const) 
# 1110
{ return ((const_mem_fun1_t< _Ret, _Tp, _Arg> )(__f)); } 
# 1112
template< class _Ret, class _Tp, class _Arg> inline mem_fun1_ref_t< _Ret, _Tp, _Arg>  
# 1114
mem_fun_ref(_Ret (_Tp::*__f)(_Arg)) 
# 1115
{ return ((mem_fun1_ref_t< _Ret, _Tp, _Arg> )(__f)); } 
# 1117
template< class _Ret, class _Tp, class _Arg> inline const_mem_fun1_ref_t< _Ret, _Tp, _Arg>  
# 1119
mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const) 
# 1120
{ return ((const_mem_fun1_ref_t< _Ret, _Tp, _Arg> )(__f)); } 
# 1125
}
# 60 "/usr/include/c++/5/backward/binders.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 63
namespace std __attribute((__visibility__("default"))) { 
# 107 "/usr/include/c++/5/backward/binders.h" 3
template< class _Operation> 
# 108
class binder1st : public unary_function< typename _Operation::second_argument_type, typename _Operation::result_type>  { 
# 113
protected: _Operation op; 
# 114
typename _Operation::first_argument_type value; 
# 117
public: binder1st(const _Operation &__x, const typename _Operation::first_argument_type &
# 118
__y) : op(__x), value(__y) 
# 119
{ } 
# 122
typename _Operation::result_type operator()(const typename _Operation::second_argument_type &__x) const 
# 123
{ return (op)(value, __x); } 
# 128
typename _Operation::result_type operator()(typename _Operation::second_argument_type &__x) const 
# 129
{ return (op)(value, __x); } 
# 130
}; 
# 133
template< class _Operation, class _Tp> inline binder1st< _Operation>  
# 135
bind1st(const _Operation &__fn, const _Tp &__x) 
# 136
{ 
# 137
typedef typename _Operation::first_argument_type _Arg1_type; 
# 138
return binder1st< _Operation> (__fn, (_Arg1_type)__x); 
# 139
} 
# 142
template< class _Operation> 
# 143
class binder2nd : public unary_function< typename _Operation::first_argument_type, typename _Operation::result_type>  { 
# 148
protected: _Operation op; 
# 149
typename _Operation::second_argument_type value; 
# 152
public: binder2nd(const _Operation &__x, const typename _Operation::second_argument_type &
# 153
__y) : op(__x), value(__y) 
# 154
{ } 
# 157
typename _Operation::result_type operator()(const typename _Operation::first_argument_type &__x) const 
# 158
{ return (op)(__x, value); } 
# 163
typename _Operation::result_type operator()(typename _Operation::first_argument_type &__x) const 
# 164
{ return (op)(__x, value); } 
# 165
}; 
# 168
template< class _Operation, class _Tp> inline binder2nd< _Operation>  
# 170
bind2nd(const _Operation &__fn, const _Tp &__x) 
# 171
{ 
# 172
typedef typename _Operation::second_argument_type _Arg2_type; 
# 173
return binder2nd< _Operation> (__fn, (_Arg2_type)__x); 
# 174
} 
# 178
}
# 180
#pragma GCC diagnostic pop
# 41 "/usr/include/c++/5/ext/alloc_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 94 "/usr/include/c++/5/ext/alloc_traits.h" 3
template< class _Alloc> 
# 95
struct __alloc_traits { 
# 100
typedef _Alloc allocator_type; 
# 172 "/usr/include/c++/5/ext/alloc_traits.h" 3
typedef typename _Alloc::pointer pointer; 
# 173
typedef typename _Alloc::const_pointer const_pointer; 
# 174
typedef typename _Alloc::value_type value_type; 
# 175
typedef typename _Alloc::reference reference; 
# 176
typedef typename _Alloc::const_reference const_reference; 
# 177
typedef typename _Alloc::size_type size_type; 
# 178
typedef typename _Alloc::difference_type difference_type; 
# 181
static pointer allocate(_Alloc &__a, size_type __n) 
# 182
{ return (__a.allocate(__n)); } 
# 184
static void deallocate(_Alloc &__a, pointer __p, size_type __n) 
# 185
{ (__a.deallocate(__p, __n)); } 
# 187
template< class _Tp> static void 
# 188
construct(_Alloc &__a, pointer __p, const _Tp &__arg) 
# 189
{ (__a.construct(__p, __arg)); } 
# 191
static void destroy(_Alloc &__a, pointer __p) 
# 192
{ (__a.destroy(__p)); } 
# 194
static size_type max_size(const _Alloc &__a) 
# 195
{ return (__a.max_size()); } 
# 197
static const _Alloc &_S_select_on_copy(const _Alloc &__a) { return __a; } 
# 199
static void _S_on_swap(_Alloc &__a, _Alloc &__b) 
# 200
{ 
# 203
std::__alloc_swap< _Alloc> ::_S_do_it(__a, __b); 
# 204
} 
# 206
template< class _Tp> 
# 207
struct rebind { 
# 208
typedef typename _Alloc::template rebind< _Tp> ::other other; }; 
# 210
}; 
# 213
}
# 46 "/usr/include/c++/5/bits/basic_string.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 51
inline namespace __cxx11 { 
# 70 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> 
# 71
class basic_string { 
# 74
typedef typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other _Char_alloc_type; 
# 75
typedef __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other>  _Alloc_traits; 
# 79
public: typedef _Traits traits_type; 
# 80
typedef typename _Traits::char_type value_type; 
# 81
typedef _Char_alloc_type allocator_type; 
# 82
typedef typename __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::size_type size_type; 
# 83
typedef typename __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::difference_type difference_type; 
# 84
typedef typename __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::reference reference; 
# 85
typedef typename __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::const_reference const_reference; 
# 86
typedef typename __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::pointer pointer; 
# 87
typedef typename __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::const_pointer const_pointer; 
# 88
typedef __gnu_cxx::__normal_iterator< typename __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::pointer, basic_string>  iterator; 
# 90
typedef __gnu_cxx::__normal_iterator< typename __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::const_pointer, basic_string>  const_iterator; 
# 91
typedef std::reverse_iterator< __gnu_cxx::__normal_iterator< typename __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::const_pointer, basic_string> >  const_reverse_iterator; 
# 92
typedef std::reverse_iterator< __gnu_cxx::__normal_iterator< typename __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::pointer, basic_string> >  reverse_iterator; 
# 95
static const size_type npos = (static_cast< size_type>(-1)); 
# 100
private: typedef iterator __const_iterator; 
# 106
struct _Alloc_hider : public allocator_type { 
# 108
_Alloc_hider(typename ::std::__cxx11::basic_string< _CharT, _Traits, _Alloc> ::pointer __dat, const _Alloc &__a = _Alloc()) : ::std::__cxx11::basic_string< _CharT, _Traits, _Alloc> ::allocator_type(__a), _M_p(__dat) 
# 109
{ } 
# 111
typename ::std::__cxx11::basic_string< _CharT, _Traits, _Alloc> ::pointer _M_p; 
# 112
}; 
# 114
_Alloc_hider _M_dataplus; 
# 115
size_type _M_string_length; 
# 117
enum { _S_local_capacity = (15) / sizeof(_CharT)}; 
# 120
union { 
# 121
_CharT _M_local_buf[(_S_local_capacity) + 1]; 
# 122
size_type _M_allocated_capacity; 
# 123
}; 
# 126
void _M_data(pointer __p) 
# 127
{ ((_M_dataplus)._M_p) = __p; } 
# 130
void _M_length(size_type __length) 
# 131
{ (_M_string_length) = __length; } 
# 134
pointer _M_data() const 
# 135
{ return (_M_dataplus)._M_p; } 
# 138
pointer _M_local_data() 
# 139
{ 
# 143
return (pointer)(__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_local_buf); 
# 145
} 
# 148
const_pointer _M_local_data() const 
# 149
{ 
# 153
return (const_pointer)(__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_local_buf); 
# 155
} 
# 158
void _M_capacity(size_type __capacity) 
# 159
{ (__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_allocated_capacity) = __capacity; } 
# 162
void _M_set_length(size_type __n) 
# 163
{ 
# 164
_M_length(__n); 
# 165
traits_type::assign(_M_data()[__n], _CharT()); 
# 166
} 
# 169
bool _M_is_local() const 
# 170
{ return _M_data() == this->_M_local_data(); } 
# 174
pointer _M_create(size_type &, size_type); 
# 177
void _M_dispose() 
# 178
{ 
# 179
if (!_M_is_local()) { 
# 180
_M_destroy(__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_allocated_capacity); }  
# 181
} 
# 184
void _M_destroy(size_type __size) throw() 
# 185
{ _Alloc_traits::deallocate(this->_M_get_allocator(), _M_data(), __size + 1); } 
# 189
template< class _InIterator> void 
# 191
_M_construct_aux(_InIterator __beg, _InIterator __end, __false_type) 
# 193
{ 
# 194
typedef typename iterator_traits< _InIterator> ::iterator_category _Tag; 
# 195
_M_construct(__beg, __end, _Tag()); 
# 196
} 
# 200
template< class _Integer> void 
# 202
_M_construct_aux(_Integer __beg, _Integer __end, __true_type) 
# 203
{ _M_construct_aux_2(static_cast< size_type>(__beg), __end); } 
# 206
void _M_construct_aux_2(size_type __req, _CharT __c) 
# 207
{ _M_construct(__req, __c); } 
# 209
template< class _InIterator> void 
# 211
_M_construct(_InIterator __beg, _InIterator __end) 
# 212
{ 
# 213
typedef typename __is_integer< _InIterator> ::__type _Integral; 
# 214
_M_construct_aux(__beg, __end, _Integral()); 
# 215
} 
# 218
template< class _InIterator> void _M_construct(_InIterator __beg, _InIterator __end, input_iterator_tag); 
# 225
template< class _FwdIterator> void _M_construct(_FwdIterator __beg, _FwdIterator __end, forward_iterator_tag); 
# 231
void _M_construct(size_type __req, _CharT __c); 
# 234
allocator_type &_M_get_allocator() 
# 235
{ return _M_dataplus; } 
# 238
const allocator_type &_M_get_allocator() const 
# 239
{ return _M_dataplus; } 
# 258 "/usr/include/c++/5/bits/basic_string.h" 3
size_type _M_check(size_type __pos, const char *__s) const 
# 259
{ 
# 260
if (__pos > this->size()) { 
# 261
__throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)", __s, __pos, this->size()); }  
# 264
return __pos; 
# 265
} 
# 268
void _M_check_length(size_type __n1, size_type __n2, const char *__s) const 
# 269
{ 
# 270
if ((this->max_size() - (this->size() - __n1)) < __n2) { 
# 271
__throw_length_error(__s); }  
# 272
} 
# 277
size_type _M_limit(size_type __pos, size_type __off) const 
# 278
{ 
# 279
const bool __testoff = __off < (this->size() - __pos); 
# 280
return __testoff ? __off : (this->size() - __pos); 
# 281
} 
# 285
bool _M_disjunct(const _CharT *__s) const 
# 286
{ 
# 287
return less< const _CharT *> ()(__s, _M_data()) || less< const _CharT *> ()(_M_data() + this->size(), __s); 
# 289
} 
# 294
static void _S_copy(_CharT *__d, const _CharT *__s, size_type __n) 
# 295
{ 
# 296
if (__n == 1) { 
# 297
traits_type::assign(*__d, *__s); } else { 
# 299
traits_type::copy(__d, __s, __n); }  
# 300
} 
# 303
static void _S_move(_CharT *__d, const _CharT *__s, size_type __n) 
# 304
{ 
# 305
if (__n == 1) { 
# 306
traits_type::assign(*__d, *__s); } else { 
# 308
traits_type::move(__d, __s, __n); }  
# 309
} 
# 312
static void _S_assign(_CharT *__d, size_type __n, _CharT __c) 
# 313
{ 
# 314
if (__n == 1) { 
# 315
traits_type::assign(*__d, __c); } else { 
# 317
traits_type::assign(__d, __n, __c); }  
# 318
} 
# 322
template< class _Iterator> static void 
# 324
_S_copy_chars(_CharT *__p, _Iterator __k1, _Iterator __k2) 
# 325
{ 
# 326
for (; __k1 != __k2; (++__k1), (++__p)) { 
# 327
traits_type::assign(*__p, *__k1); }  
# 328
} 
# 331
static void _S_copy_chars(_CharT *__p, iterator __k1, iterator __k2) 
# 332
{ _S_copy_chars(__p, (__k1.base()), (__k2.base())); } 
# 335
static void _S_copy_chars(_CharT *__p, const_iterator __k1, const_iterator __k2) 
# 337
{ _S_copy_chars(__p, (__k1.base()), (__k2.base())); } 
# 340
static void _S_copy_chars(_CharT *__p, _CharT *__k1, _CharT *__k2) 
# 341
{ (_S_copy)(__p, __k1, __k2 - __k1); } 
# 344
static void _S_copy_chars(_CharT *__p, const _CharT *__k1, const _CharT *__k2) 
# 346
{ (_S_copy)(__p, __k1, __k2 - __k1); } 
# 349
static int _S_compare(size_type __n1, size_type __n2) 
# 350
{ 
# 351
const difference_type __d = (difference_type)(__n1 - __n2); 
# 353
if (__d > __gnu_cxx::__numeric_traits< int> ::__max) { 
# 354
return __gnu_cxx::__numeric_traits_integer< int> ::__max; } else { 
# 355
if (__d < __gnu_cxx::__numeric_traits< int> ::__min) { 
# 356
return __gnu_cxx::__numeric_traits_integer< int> ::__min; } else { 
# 358
return (int)__d; }  }  
# 359
} 
# 362
void _M_assign(const basic_string & __rcs); 
# 365
void _M_mutate(size_type __pos, size_type __len1, const _CharT * __s, size_type __len2); 
# 369
void _M_erase(size_type __pos, size_type __n); 
# 379
public: basic_string() : _M_dataplus(this->_M_local_data()) 
# 384
{ _M_set_length(0); } 
# 390
explicit basic_string(const _Alloc &__a) : _M_dataplus(this->_M_local_data(), __a) 
# 392
{ _M_set_length(0); } 
# 398
basic_string(const basic_string &__str) : _M_dataplus(this->_M_local_data(), (__str._M_get_allocator())) 
# 400
{ _M_construct((__str._M_data()), (__str._M_data()) + (__str.length())); } 
# 410 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string(const basic_string &__str, size_type __pos, size_type 
# 411
__n = npos) : _M_dataplus(this->_M_local_data()) 
# 413
{ 
# 414
const _CharT *__start = (__str._M_data()) + (__str._M_check(__pos, "basic_string::basic_string")); 
# 416
_M_construct(__start, __start + (__str._M_limit(__pos, __n))); 
# 417
} 
# 426 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string(const basic_string &__str, size_type __pos, size_type 
# 427
__n, const _Alloc &__a) : _M_dataplus(this->_M_local_data(), __a) 
# 429
{ 
# 430
const _CharT *__start = (__str._M_data()) + (__str._M_check(__pos, "string::string")); 
# 432
_M_construct(__start, __start + (__str._M_limit(__pos, __n))); 
# 433
} 
# 444 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string(const _CharT *__s, size_type __n, const _Alloc &
# 445
__a = _Alloc()) : _M_dataplus(this->_M_local_data(), __a) 
# 447
{ _M_construct(__s, __s + __n); } 
# 454
basic_string(const _CharT *__s, const _Alloc &__a = _Alloc()) : _M_dataplus(this->_M_local_data(), __a) 
# 456
{ _M_construct(__s, (__s) ? __s + traits_type::length(__s) : (__s + npos)); } 
# 464
basic_string(size_type __n, _CharT __c, const _Alloc &__a = _Alloc()) : _M_dataplus(this->_M_local_data(), __a) 
# 466
{ _M_construct(__n, __c); } 
# 532 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _InputIterator> 
# 534
basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc &
# 535
__a = _Alloc()) : _M_dataplus(this->_M_local_data(), __a) 
# 537
{ _M_construct(__beg, __end); } 
# 542
~basic_string() 
# 543
{ _M_dispose(); } 
# 550
basic_string &operator=(const basic_string &__str) 
# 551
{ return (this->assign(__str)); } 
# 558
basic_string &operator=(const _CharT *__s) 
# 559
{ return (this->assign(__s)); } 
# 569 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &operator=(_CharT __c) 
# 570
{ 
# 571
(this->assign(1, __c)); 
# 572
return *this; 
# 573
} 
# 611 "/usr/include/c++/5/bits/basic_string.h" 3
iterator begin() 
# 612
{ return ((iterator)(_M_data())); } 
# 619
const_iterator begin() const 
# 620
{ return ((const_iterator)(_M_data())); } 
# 627
iterator end() 
# 628
{ return ((iterator)(_M_data() + this->size())); } 
# 635
const_iterator end() const 
# 636
{ return ((const_iterator)(_M_data() + this->size())); } 
# 644
reverse_iterator rbegin() 
# 645
{ return ((reverse_iterator)(this->end())); } 
# 653
const_reverse_iterator rbegin() const 
# 654
{ return ((const_reverse_iterator)(this->end())); } 
# 662
reverse_iterator rend() 
# 663
{ return ((reverse_iterator)(this->begin())); } 
# 671
const_reverse_iterator rend() const 
# 672
{ return ((const_reverse_iterator)(this->begin())); } 
# 715 "/usr/include/c++/5/bits/basic_string.h" 3
size_type size() const 
# 716
{ return _M_string_length; } 
# 721
size_type length() const 
# 722
{ return _M_string_length; } 
# 726
size_type max_size() const 
# 727
{ return (_Alloc_traits::max_size(this->_M_get_allocator()) - 1) / 2; } 
# 740 "/usr/include/c++/5/bits/basic_string.h" 3
void resize(size_type __n, _CharT __c); 
# 753 "/usr/include/c++/5/bits/basic_string.h" 3
void resize(size_type __n) 
# 754
{ (this->resize(__n, _CharT())); } 
# 778 "/usr/include/c++/5/bits/basic_string.h" 3
size_type capacity() const 
# 779
{ 
# 780
return (_M_is_local()) ? (size_type)(_S_local_capacity) : (__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_allocated_capacity); 
# 782
} 
# 802 "/usr/include/c++/5/bits/basic_string.h" 3
void reserve(size_type __res_arg = 0); 
# 808
void clear() 
# 809
{ _M_set_length(0); } 
# 816
bool empty() const 
# 817
{ return this->size() == 0; } 
# 831 "/usr/include/c++/5/bits/basic_string.h" 3
const_reference operator[](size_type __pos) const 
# 832
{ 
# 833
; 
# 834
return _M_data()[__pos]; 
# 835
} 
# 848 "/usr/include/c++/5/bits/basic_string.h" 3
reference operator[](size_type __pos) 
# 849
{ 
# 852
; 
# 854
; 
# 855
return _M_data()[__pos]; 
# 856
} 
# 869 "/usr/include/c++/5/bits/basic_string.h" 3
const_reference at(size_type __n) const 
# 870
{ 
# 871
if (__n >= this->size()) { 
# 872
__throw_out_of_range_fmt("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", __n, this->size()); }  
# 876
return _M_data()[__n]; 
# 877
} 
# 890 "/usr/include/c++/5/bits/basic_string.h" 3
reference at(size_type __n) 
# 891
{ 
# 892
if (__n >= size()) { 
# 893
__throw_out_of_range_fmt("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)", __n, this->size()); }  
# 897
return _M_data()[__n]; 
# 898
} 
# 941 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &operator+=(const basic_string &__str) 
# 942
{ return (this->append(__str)); } 
# 950
basic_string &operator+=(const _CharT *__s) 
# 951
{ return (this->append(__s)); } 
# 959
basic_string &operator+=(_CharT __c) 
# 960
{ 
# 961
this->push_back(__c); 
# 962
return *this; 
# 963
} 
# 982 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &append(const basic_string &__str) 
# 983
{ return _M_append((__str._M_data()), (__str.size())); } 
# 999 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &append(const basic_string &__str, size_type __pos, size_type __n) 
# 1000
{ return _M_append((__str._M_data()) + (__str._M_check(__pos, "basic_string::append")), (__str._M_limit(__pos, __n))); 
# 1002
} 
# 1011
basic_string &append(const _CharT *__s, size_type __n) 
# 1012
{ 
# 1013
; 
# 1014
_M_check_length((size_type)0, __n, "basic_string::append"); 
# 1015
return _M_append(__s, __n); 
# 1016
} 
# 1024
basic_string &append(const _CharT *__s) 
# 1025
{ 
# 1026
; 
# 1027
const size_type __n = traits_type::length(__s); 
# 1028
_M_check_length((size_type)0, __n, "basic_string::append"); 
# 1029
return _M_append(__s, __n); 
# 1030
} 
# 1041 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &append(size_type __n, _CharT __c) 
# 1042
{ return _M_replace_aux(this->size(), (size_type)0, __n, __c); } 
# 1067 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _InputIterator> basic_string &
# 1070
append(_InputIterator __first, _InputIterator __last) 
# 1071
{ return (this->replace(this->end(), this->end(), __first, __last)); } 
# 1078
void push_back(_CharT __c) 
# 1079
{ 
# 1080
const size_type __size = this->size(); 
# 1081
if ((__size + 1) > this->capacity()) { 
# 1082
this->_M_mutate(__size, (size_type)0, 0, (size_type)1); }  
# 1083
traits_type::assign((this->_M_data())[__size], __c); 
# 1084
this->_M_set_length(__size + 1); 
# 1085
} 
# 1093
basic_string &assign(const basic_string &__str) 
# 1094
{ 
# 1095
this->_M_assign(__str); 
# 1096
return *this; 
# 1097
} 
# 1131 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &assign(const basic_string &__str, size_type __pos, size_type __n) 
# 1132
{ return _M_replace((size_type)0, this->size(), (__str._M_data()) + (__str._M_check(__pos, "basic_string::assign")), (__str._M_limit(__pos, __n))); 
# 1134
} 
# 1147 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &assign(const _CharT *__s, size_type __n) 
# 1148
{ 
# 1149
; 
# 1150
return _M_replace((size_type)0, this->size(), __s, __n); 
# 1151
} 
# 1163 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &assign(const _CharT *__s) 
# 1164
{ 
# 1165
; 
# 1166
return _M_replace((size_type)0, this->size(), __s, traits_type::length(__s)); 
# 1168
} 
# 1180 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &assign(size_type __n, _CharT __c) 
# 1181
{ return _M_replace_aux((size_type)0, this->size(), __n, __c); } 
# 1195 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _InputIterator> basic_string &
# 1198
assign(_InputIterator __first, _InputIterator __last) 
# 1199
{ return (this->replace(this->begin(), this->end(), __first, __last)); } 
# 1251 "/usr/include/c++/5/bits/basic_string.h" 3
void insert(iterator __p, size_type __n, _CharT __c) 
# 1252
{ (this->replace(__p, __p, __n, __c)); } 
# 1293 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _InputIterator> void 
# 1295
insert(iterator __p, _InputIterator __beg, _InputIterator __end) 
# 1296
{ (this->replace(__p, __p, __beg, __end)); } 
# 1327 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &insert(size_type __pos1, const basic_string &__str) 
# 1328
{ return (this->replace(__pos1, (size_type)0, (__str._M_data()), (__str.size()))); 
# 1329
} 
# 1350 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &insert(size_type __pos1, const basic_string &__str, size_type 
# 1351
__pos2, size_type __n) 
# 1352
{ return (this->replace(__pos1, (size_type)0, (__str._M_data()) + (__str._M_check(__pos2, "basic_string::insert")), (__str._M_limit(__pos2, __n)))); 
# 1354
} 
# 1373 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &insert(size_type __pos, const _CharT *__s, size_type __n) 
# 1374
{ return (this->replace(__pos, (size_type)0, __s, __n)); } 
# 1392 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &insert(size_type __pos, const _CharT *__s) 
# 1393
{ 
# 1394
; 
# 1395
return (this->replace(__pos, (size_type)0, __s, traits_type::length(__s))); 
# 1397
} 
# 1416 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &insert(size_type __pos, size_type __n, _CharT __c) 
# 1417
{ return _M_replace_aux(_M_check(__pos, "basic_string::insert"), (size_type)0, __n, __c); 
# 1418
} 
# 1434 "/usr/include/c++/5/bits/basic_string.h" 3
iterator insert(__const_iterator __p, _CharT __c) 
# 1435
{ 
# 1436
; 
# 1437
const size_type __pos = __p - this->begin(); 
# 1438
_M_replace_aux(__pos, (size_type)0, (size_type)1, __c); 
# 1439
return ((iterator)(_M_data() + __pos)); 
# 1440
} 
# 1458 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &erase(size_type __pos = 0, size_type __n = npos) 
# 1459
{ 
# 1460
this->_M_erase(_M_check(__pos, "basic_string::erase"), _M_limit(__pos, __n)); 
# 1462
return *this; 
# 1463
} 
# 1474 "/usr/include/c++/5/bits/basic_string.h" 3
iterator erase(__const_iterator __position) 
# 1475
{ 
# 1477
; 
# 1478
const size_type __pos = __position - this->begin(); 
# 1479
this->_M_erase(__pos, (size_type)1); 
# 1480
return ((iterator)(_M_data() + __pos)); 
# 1481
} 
# 1493 "/usr/include/c++/5/bits/basic_string.h" 3
iterator erase(__const_iterator __first, __const_iterator __last) 
# 1494
{ 
# 1496
; 
# 1497
const size_type __pos = __first - this->begin(); 
# 1498
this->_M_erase(__pos, __last - __first); 
# 1499
return ((iterator)((this->_M_data()) + __pos)); 
# 1500
} 
# 1531 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &replace(size_type __pos, size_type __n, const basic_string &__str) 
# 1532
{ return (this->replace(__pos, __n, (__str._M_data()), (__str.size()))); } 
# 1553 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &replace(size_type __pos1, size_type __n1, const basic_string &__str, size_type 
# 1554
__pos2, size_type __n2) 
# 1555
{ return (this->replace(__pos1, __n1, (__str._M_data()) + (__str._M_check(__pos2, "basic_string::replace")), (__str._M_limit(__pos2, __n2)))); 
# 1557
} 
# 1578 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &replace(size_type __pos, size_type __n1, const _CharT *__s, size_type 
# 1579
__n2) 
# 1580
{ 
# 1581
; 
# 1582
return _M_replace(_M_check(__pos, "basic_string::replace"), _M_limit(__pos, __n1), __s, __n2); 
# 1584
} 
# 1603 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &replace(size_type __pos, size_type __n1, const _CharT *__s) 
# 1604
{ 
# 1605
; 
# 1606
return (this->replace(__pos, __n1, __s, traits_type::length(__s))); 
# 1607
} 
# 1627 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c) 
# 1628
{ return _M_replace_aux(_M_check(__pos, "basic_string::replace"), _M_limit(__pos, __n1), __n2, __c); 
# 1629
} 
# 1645 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &replace(__const_iterator __i1, __const_iterator __i2, const basic_string &
# 1646
__str) 
# 1647
{ return (this->replace(__i1, __i2, (__str._M_data()), (__str.size()))); } 
# 1665 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &replace(__const_iterator __i1, __const_iterator __i2, const _CharT *
# 1666
__s, size_type __n) 
# 1667
{ 
# 1669
; 
# 1670
return (this->replace(__i1 - this->begin(), __i2 - __i1, __s, __n)); 
# 1671
} 
# 1687 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &replace(__const_iterator __i1, __const_iterator __i2, const _CharT *__s) 
# 1688
{ 
# 1689
; 
# 1690
return (this->replace(__i1, __i2, __s, traits_type::length(__s))); 
# 1691
} 
# 1708 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string &replace(__const_iterator __i1, __const_iterator __i2, size_type __n, _CharT 
# 1709
__c) 
# 1710
{ 
# 1712
; 
# 1713
return _M_replace_aux(__i1 - this->begin(), __i2 - __i1, __n, __c); 
# 1714
} 
# 1745 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _InputIterator> basic_string &
# 1751
replace(iterator __i1, iterator __i2, _InputIterator 
# 1752
__k1, _InputIterator __k2) 
# 1753
{ 
# 1755
; 
# 1756
; 
# 1757
typedef typename __is_integer< _InputIterator> ::__type _Integral; 
# 1758
return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral()); 
# 1759
} 
# 1765
basic_string &replace(__const_iterator __i1, __const_iterator __i2, _CharT *
# 1766
__k1, _CharT *__k2) 
# 1767
{ 
# 1769
; 
# 1770
; 
# 1771
return (this->replace(__i1 - this->begin(), __i2 - __i1, __k1, __k2 - __k1)); 
# 1773
} 
# 1776
basic_string &replace(__const_iterator __i1, __const_iterator __i2, const _CharT *
# 1777
__k1, const _CharT *__k2) 
# 1778
{ 
# 1780
; 
# 1781
; 
# 1782
return (this->replace(__i1 - this->begin(), __i2 - __i1, __k1, __k2 - __k1)); 
# 1784
} 
# 1787
basic_string &replace(__const_iterator __i1, __const_iterator __i2, iterator 
# 1788
__k1, iterator __k2) 
# 1789
{ 
# 1791
; 
# 1792
; 
# 1793
return (this->replace(__i1 - this->begin(), __i2 - __i1, (__k1.base()), __k2 - __k1)); 
# 1795
} 
# 1798
basic_string &replace(__const_iterator __i1, __const_iterator __i2, const_iterator 
# 1799
__k1, const_iterator __k2) 
# 1800
{ 
# 1802
; 
# 1803
; 
# 1804
return (this->replace(__i1 - this->begin(), __i2 - __i1, (__k1.base()), __k2 - __k1)); 
# 1806
} 
# 1831 "/usr/include/c++/5/bits/basic_string.h" 3
private: 
# 1829
template< class _Integer> basic_string &
# 1831
_M_replace_dispatch(const_iterator __i1, const_iterator __i2, _Integer 
# 1832
__n, _Integer __val, __true_type) 
# 1833
{ return _M_replace_aux(__i1 - this->begin(), __i2 - __i1, __n, __val); } 
# 1835
template< class _InputIterator> basic_string &_M_replace_dispatch(const_iterator __i1, const_iterator __i2, _InputIterator __k1, _InputIterator __k2, __false_type); 
# 1842
basic_string &_M_replace_aux(size_type __pos1, size_type __n1, size_type __n2, _CharT __c); 
# 1846
basic_string &_M_replace(size_type __pos, size_type __len1, const _CharT * __s, const size_type __len2); 
# 1850
basic_string &_M_append(const _CharT * __s, size_type __n); 
# 1867 "/usr/include/c++/5/bits/basic_string.h" 3
public: size_type copy(_CharT * __s, size_type __n, size_type __pos = 0) const; 
# 1877 "/usr/include/c++/5/bits/basic_string.h" 3
void swap(basic_string & __s); 
# 1887 "/usr/include/c++/5/bits/basic_string.h" 3
const _CharT *c_str() const 
# 1888
{ return _M_data(); } 
# 1897
const _CharT *data() const 
# 1898
{ return _M_data(); } 
# 1904
allocator_type get_allocator() const 
# 1905
{ return this->_M_get_allocator(); } 
# 1920 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find(const _CharT * __s, size_type __pos, size_type __n) const; 
# 1933 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find(const basic_string &__str, size_type __pos = 0) const 
# 1935
{ return (this->find((__str.data()), __pos, (__str.size()))); } 
# 1948 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find(const _CharT *__s, size_type __pos = 0) const 
# 1949
{ 
# 1950
; 
# 1951
return (this->find(__s, __pos, traits_type::length(__s))); 
# 1952
} 
# 1965 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find(_CharT __c, size_type __pos = 0) const; 
# 1978 "/usr/include/c++/5/bits/basic_string.h" 3
size_type rfind(const basic_string &__str, size_type __pos = npos) const 
# 1980
{ return (this->rfind((__str.data()), __pos, (__str.size()))); } 
# 1995 "/usr/include/c++/5/bits/basic_string.h" 3
size_type rfind(const _CharT * __s, size_type __pos, size_type __n) const; 
# 2008 "/usr/include/c++/5/bits/basic_string.h" 3
size_type rfind(const _CharT *__s, size_type __pos = npos) const 
# 2009
{ 
# 2010
; 
# 2011
return (this->rfind(__s, __pos, traits_type::length(__s))); 
# 2012
} 
# 2025 "/usr/include/c++/5/bits/basic_string.h" 3
size_type rfind(_CharT __c, size_type __pos = npos) const; 
# 2039 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_first_of(const basic_string &__str, size_type __pos = 0) const 
# 2041
{ return (this->find_first_of((__str.data()), __pos, (__str.size()))); } 
# 2056 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_first_of(const _CharT * __s, size_type __pos, size_type __n) const; 
# 2069 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_first_of(const _CharT *__s, size_type __pos = 0) const 
# 2070
{ 
# 2071
; 
# 2072
return (this->find_first_of(__s, __pos, traits_type::length(__s))); 
# 2073
} 
# 2088 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_first_of(_CharT __c, size_type __pos = 0) const 
# 2089
{ return (this->find(__c, __pos)); } 
# 2103 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_last_of(const basic_string &__str, size_type __pos = npos) const 
# 2105
{ return (this->find_last_of((__str.data()), __pos, (__str.size()))); } 
# 2120 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_last_of(const _CharT * __s, size_type __pos, size_type __n) const; 
# 2133 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_last_of(const _CharT *__s, size_type __pos = npos) const 
# 2134
{ 
# 2135
; 
# 2136
return (this->find_last_of(__s, __pos, traits_type::length(__s))); 
# 2137
} 
# 2152 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_last_of(_CharT __c, size_type __pos = npos) const 
# 2153
{ return (this->rfind(__c, __pos)); } 
# 2166 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_first_not_of(const basic_string &__str, size_type __pos = 0) const 
# 2168
{ return (this->find_first_not_of((__str.data()), __pos, (__str.size()))); } 
# 2183 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_first_not_of(const _CharT * __s, size_type __pos, size_type __n) const; 
# 2197 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_first_not_of(const _CharT *__s, size_type __pos = 0) const 
# 2198
{ 
# 2199
; 
# 2200
return (this->find_first_not_of(__s, __pos, traits_type::length(__s))); 
# 2201
} 
# 2214 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_first_not_of(_CharT __c, size_type __pos = 0) const; 
# 2229 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_last_not_of(const basic_string &__str, size_type __pos = npos) const 
# 2231
{ return (this->find_last_not_of((__str.data()), __pos, (__str.size()))); } 
# 2246 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_last_not_of(const _CharT * __s, size_type __pos, size_type __n) const; 
# 2260 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_last_not_of(const _CharT *__s, size_type __pos = npos) const 
# 2261
{ 
# 2262
; 
# 2263
return (this->find_last_not_of(__s, __pos, traits_type::length(__s))); 
# 2264
} 
# 2277 "/usr/include/c++/5/bits/basic_string.h" 3
size_type find_last_not_of(_CharT __c, size_type __pos = npos) const; 
# 2293 "/usr/include/c++/5/bits/basic_string.h" 3
basic_string substr(size_type __pos = 0, size_type __n = npos) const 
# 2294
{ return basic_string(*this, _M_check(__pos, "basic_string::substr"), __n); 
# 2295
} 
# 2312 "/usr/include/c++/5/bits/basic_string.h" 3
int compare(const basic_string &__str) const 
# 2313
{ 
# 2314
const size_type __size = this->size(); 
# 2315
const size_type __osize = (__str.size()); 
# 2316
const size_type __len = std::min(__size, __osize); 
# 2318
int __r = traits_type::compare(_M_data(), (__str.data()), __len); 
# 2319
if (!__r) { 
# 2320
__r = (_S_compare)(__size, __osize); }  
# 2321
return __r; 
# 2322
} 
# 2344 "/usr/include/c++/5/bits/basic_string.h" 3
int compare(size_type __pos, size_type __n, const basic_string & __str) const; 
# 2370 "/usr/include/c++/5/bits/basic_string.h" 3
int compare(size_type __pos1, size_type __n1, const basic_string & __str, size_type __pos2, size_type __n2) const; 
# 2388 "/usr/include/c++/5/bits/basic_string.h" 3
int compare(const _CharT * __s) const; 
# 2412 "/usr/include/c++/5/bits/basic_string.h" 3
int compare(size_type __pos, size_type __n1, const _CharT * __s) const; 
# 2439 "/usr/include/c++/5/bits/basic_string.h" 3
int compare(size_type __pos, size_type __n1, const _CharT * __s, size_type __n2) const; 
# 2441
}; 
# 2442
}
# 4781 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> __cxx11::basic_string< _CharT, _Traits, _Alloc>  
# 4783
operator+(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 4784
__rhs) 
# 4785
{ 
# 4786
__cxx11::basic_string< _CharT, _Traits, _Alloc>  __str(__lhs); 
# 4787
(__str.append(__rhs)); 
# 4788
return __str; 
# 4789
} 
# 4797
template< class _CharT, class _Traits, class _Alloc> __cxx11::basic_string< _CharT, _Traits, _Alloc>  operator+(const _CharT * __lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  & __rhs); 
# 4808
template< class _CharT, class _Traits, class _Alloc> __cxx11::basic_string< _CharT, _Traits, _Alloc>  operator+(_CharT __lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  & __rhs); 
# 4818
template< class _CharT, class _Traits, class _Alloc> inline __cxx11::basic_string< _CharT, _Traits, _Alloc>  
# 4820
operator+(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const _CharT *
# 4821
__rhs) 
# 4822
{ 
# 4823
__cxx11::basic_string< _CharT, _Traits, _Alloc>  __str(__lhs); 
# 4824
(__str.append(__rhs)); 
# 4825
return __str; 
# 4826
} 
# 4834
template< class _CharT, class _Traits, class _Alloc> inline __cxx11::basic_string< _CharT, _Traits, _Alloc>  
# 4836
operator+(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, _CharT __rhs) 
# 4837
{ 
# 4838
typedef __cxx11::basic_string< _CharT, _Traits, _Alloc>  __string_type; 
# 4839
typedef typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type __size_type; 
# 4840
__string_type __str(__lhs); 
# 4841
(__str.append((__size_type)1, __rhs)); 
# 4842
return __str; 
# 4843
} 
# 4902 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 4904
operator==(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 4905
__rhs) 
# 4906
{ return (__lhs.compare(__rhs)) == 0; } 
# 4908
template< class _CharT> inline typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, bool> ::__type 
# 4911
operator==(const __cxx11::basic_string< _CharT, char_traits< _CharT> , allocator< _CharT> >  &__lhs, const __cxx11::basic_string< _CharT, char_traits< _CharT> , allocator< _CharT> >  &
# 4912
__rhs) 
# 4913
{ return ((__lhs.size()) == (__rhs.size())) && (!std::char_traits< _CharT> ::compare((__lhs.data()), (__rhs.data()), (__lhs.size()))); 
# 4915
} 
# 4923
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 4925
operator==(const _CharT *__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 4926
__rhs) 
# 4927
{ return (__rhs.compare(__lhs)) == 0; } 
# 4935
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 4937
operator==(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const _CharT *
# 4938
__rhs) 
# 4939
{ return (__lhs.compare(__rhs)) == 0; } 
# 4948 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 4950
operator!=(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 4951
__rhs) 
# 4952
{ return !(__lhs == __rhs); } 
# 4960
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 4962
operator!=(const _CharT *__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 4963
__rhs) 
# 4964
{ return !(__lhs == __rhs); } 
# 4972
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 4974
operator!=(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const _CharT *
# 4975
__rhs) 
# 4976
{ return !(__lhs == __rhs); } 
# 4985 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 4987
operator<(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 4988
__rhs) 
# 4989
{ return (__lhs.compare(__rhs)) < 0; } 
# 4997
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 4999
operator<(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const _CharT *
# 5000
__rhs) 
# 5001
{ return (__lhs.compare(__rhs)) < 0; } 
# 5009
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 5011
operator<(const _CharT *__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 5012
__rhs) 
# 5013
{ return (__rhs.compare(__lhs)) > 0; } 
# 5022 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 5024
operator>(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 5025
__rhs) 
# 5026
{ return (__lhs.compare(__rhs)) > 0; } 
# 5034
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 5036
operator>(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const _CharT *
# 5037
__rhs) 
# 5038
{ return (__lhs.compare(__rhs)) > 0; } 
# 5046
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 5048
operator>(const _CharT *__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 5049
__rhs) 
# 5050
{ return (__rhs.compare(__lhs)) < 0; } 
# 5059 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 5061
operator<=(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 5062
__rhs) 
# 5063
{ return (__lhs.compare(__rhs)) <= 0; } 
# 5071
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 5073
operator<=(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const _CharT *
# 5074
__rhs) 
# 5075
{ return (__lhs.compare(__rhs)) <= 0; } 
# 5083
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 5085
operator<=(const _CharT *__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 5086
__rhs) 
# 5087
{ return (__rhs.compare(__lhs)) >= 0; } 
# 5096 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 5098
operator>=(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 5099
__rhs) 
# 5100
{ return (__lhs.compare(__rhs)) >= 0; } 
# 5108
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 5110
operator>=(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, const _CharT *
# 5111
__rhs) 
# 5112
{ return (__lhs.compare(__rhs)) >= 0; } 
# 5120
template< class _CharT, class _Traits, class _Alloc> inline bool 
# 5122
operator>=(const _CharT *__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 5123
__rhs) 
# 5124
{ return (__rhs.compare(__lhs)) <= 0; } 
# 5133 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> inline void 
# 5135
swap(__cxx11::basic_string< _CharT, _Traits, _Alloc>  &__lhs, __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 5136
__rhs) 
# 5137
{ (__lhs.swap(__rhs)); } 
# 5152 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> basic_istream< _CharT, _Traits>  &operator>>(basic_istream< _CharT, _Traits>  & __is, __cxx11::basic_string< _CharT, _Traits, _Alloc>  & __str); 
# 5159
template<> basic_istream< char>  &operator>>(basic_istream< char>  & __is, __cxx11::basic_string< char, char_traits< char> , allocator< char> >  & __str); 
# 5170 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> inline basic_ostream< _CharT, _Traits>  &
# 5172
operator<<(basic_ostream< _CharT, _Traits>  &__os, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 5173
__str) 
# 5174
{ 
# 5177
return __ostream_insert(__os, (__str.data()), (__str.size())); 
# 5178
} 
# 5193 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> basic_istream< _CharT, _Traits>  &getline(basic_istream< _CharT, _Traits>  & __is, __cxx11::basic_string< _CharT, _Traits, _Alloc>  & __str, _CharT __delim); 
# 5210 "/usr/include/c++/5/bits/basic_string.h" 3
template< class _CharT, class _Traits, class _Alloc> inline basic_istream< _CharT, _Traits>  &
# 5212
getline(basic_istream< _CharT, _Traits>  &__is, __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 5213
__str) 
# 5214
{ return std::getline(__is, __str, (__is.widen('\n'))); } 
# 5234 "/usr/include/c++/5/bits/basic_string.h" 3
template<> basic_istream< char>  &getline(basic_istream< char>  & __in, __cxx11::basic_string< char, char_traits< char> , allocator< char> >  & __str, char __delim); 
# 5240
template<> basic_istream< wchar_t>  &getline(basic_istream< wchar_t>  & __in, __cxx11::basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> >  & __str, wchar_t __delim); 
# 5245
}
# 46 "/usr/include/c++/5/bits/basic_string.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 52
template< class _CharT, class _Traits, class _Alloc> const typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 54
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::npos; 
# 56
template< class _CharT, class _Traits, class _Alloc> void 
# 59
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::swap(basic_string &__s) 
# 60
{ 
# 61
if (this == (&__s)) { 
# 62
return; }  
# 67
std::__alloc_swap< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::_S_do_it(this->_M_get_allocator(), (__s._M_get_allocator())); 
# 70
if (_M_is_local()) { 
# 71
if ((__s._M_is_local())) 
# 72
{ 
# 73
if (length() && (__s.length())) 
# 74
{ 
# 75
_CharT __tmp_data[(_S_local_capacity) + 1]; 
# 76
traits_type::copy(__tmp_data, (__s._M_local_buf), (_S_local_capacity) + 1); 
# 78
traits_type::copy((__s._M_local_buf), __cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_local_buf, (_S_local_capacity) + 1); 
# 80
traits_type::copy(__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_local_buf, __tmp_data, (_S_local_capacity) + 1); 
# 82
} else { 
# 83
if ((__s.length())) 
# 84
{ 
# 85
traits_type::copy(__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_local_buf, (__s._M_local_buf), (_S_local_capacity) + 1); 
# 87
_M_length((__s.length())); 
# 88
(__s._M_set_length(0)); 
# 89
return; 
# 90
} else { 
# 91
if (length()) 
# 92
{ 
# 93
traits_type::copy((__s._M_local_buf), __cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_local_buf, (_S_local_capacity) + 1); 
# 95
(__s._M_length(length())); 
# 96
_M_set_length(0); 
# 97
return; 
# 98
}  }  }  
# 99
} else 
# 101
{ 
# 102
const size_type __tmp_capacity = ((__s._M_allocated_capacity)); 
# 103
traits_type::copy((__s._M_local_buf), __cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_local_buf, (_S_local_capacity) + 1); 
# 105
_M_data((__s._M_data())); 
# 106
(__s._M_data((__s._M_local_buf))); 
# 107
_M_capacity(__tmp_capacity); 
# 108
}  } else 
# 110
{ 
# 111
const size_type __tmp_capacity = __cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_allocated_capacity; 
# 112
if ((__s._M_is_local())) 
# 113
{ 
# 114
traits_type::copy(__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_local_buf, (__s._M_local_buf), (_S_local_capacity) + 1); 
# 116
(__s._M_data(_M_data())); 
# 117
_M_data(__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_local_buf); 
# 118
} else 
# 120
{ 
# 121
pointer __tmp_ptr = _M_data(); 
# 122
_M_data((__s._M_data())); 
# 123
(__s._M_data(__tmp_ptr)); 
# 124
_M_capacity((__s._M_allocated_capacity)); 
# 125
}  
# 126
(__s._M_capacity(__tmp_capacity)); 
# 127
}  
# 129
const size_type __tmp_length = length(); 
# 130
_M_length((__s.length())); 
# 131
(__s._M_length(__tmp_length)); 
# 132
} 
# 134
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::pointer 
# 137
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_create(size_type &__capacity, size_type __old_capacity) 
# 138
{ 
# 141
if (__capacity > max_size()) { 
# 142
std::__throw_length_error("basic_string::_M_create"); }  
# 147
if ((__capacity > __old_capacity) && (__capacity < (2 * __old_capacity))) 
# 148
{ 
# 149
__capacity = (2 * __old_capacity); 
# 151
if (__capacity > max_size()) { 
# 152
__capacity = max_size(); }  
# 153
}  
# 157
return _Alloc_traits::allocate(this->_M_get_allocator(), __capacity + 1); 
# 158
} 
# 164
template< class _CharT, class _Traits, class _Alloc> 
# 165
template< class _InIterator> void 
# 168
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_construct(_InIterator __beg, _InIterator __end, input_iterator_tag) 
# 170
{ 
# 171
size_type __len = (0); 
# 172
size_type __capacity = ((size_type)(_S_local_capacity)); 
# 174
while ((__beg != __end) && (__len < __capacity)) 
# 175
{ 
# 176
(_M_data()[__len++]) = (*__beg); 
# 177
++__beg; 
# 178
}  
# 180
try 
# 181
{ 
# 182
while (__beg != __end) 
# 183
{ 
# 184
if (__len == __capacity) 
# 185
{ 
# 187
__capacity = (__len + 1); 
# 188
pointer __another = _M_create(__capacity, __len); 
# 189
(this->_S_copy(__another, _M_data(), __len)); 
# 190
_M_dispose(); 
# 191
_M_data(__another); 
# 192
_M_capacity(__capacity); 
# 193
}  
# 194
(_M_data()[__len++]) = (*__beg); 
# 195
++__beg; 
# 196
}  
# 197
} 
# 198
catch (...) 
# 199
{ 
# 200
_M_dispose(); 
# 201
throw; 
# 202
}  
# 204
_M_set_length(__len); 
# 205
} 
# 207
template< class _CharT, class _Traits, class _Alloc> 
# 208
template< class _InIterator> void 
# 211
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_construct(_InIterator __beg, _InIterator __end, forward_iterator_tag) 
# 213
{ 
# 215
if (__gnu_cxx::__is_null_pointer(__beg) && (__beg != __end)) { 
# 216
std::__throw_logic_error("basic_string::_M_construct null not valid"); }  
# 219
size_type __dnew = static_cast< size_type>(std::distance(__beg, __end)); 
# 221
if (__dnew > ((size_type)(_S_local_capacity))) 
# 222
{ 
# 223
_M_data(_M_create(__dnew, (size_type)0)); 
# 224
_M_capacity(__dnew); 
# 225
}  
# 228
try 
# 229
{ (this->_S_copy_chars(_M_data(), __beg, __end)); } 
# 230
catch (...) 
# 231
{ 
# 232
_M_dispose(); 
# 233
throw; 
# 234
}  
# 236
_M_set_length(__dnew); 
# 237
} 
# 239
template< class _CharT, class _Traits, class _Alloc> void 
# 242
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_construct(size_type __n, _CharT __c) 
# 243
{ 
# 244
if (__n > ((size_type)(_S_local_capacity))) 
# 245
{ 
# 246
_M_data(_M_create(__n, (size_type)0)); 
# 247
_M_capacity(__n); 
# 248
}  
# 250
if (__n) { 
# 251
(this->_S_assign(_M_data(), __n, __c)); }  
# 253
_M_set_length(__n); 
# 254
} 
# 256
template< class _CharT, class _Traits, class _Alloc> void 
# 259
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_assign(const basic_string &__str) 
# 260
{ 
# 261
if (this != (&__str)) 
# 262
{ 
# 263
const size_type __rsize = (__str.length()); 
# 264
const size_type __capacity = capacity(); 
# 266
if (__rsize > __capacity) 
# 267
{ 
# 268
size_type __new_capacity = __rsize; 
# 269
pointer __tmp = _M_create(__new_capacity, __capacity); 
# 270
_M_dispose(); 
# 271
_M_data(__tmp); 
# 272
_M_capacity(__new_capacity); 
# 273
}  
# 275
if (__rsize) { 
# 276
(this->_S_copy(_M_data(), (__str._M_data()), __rsize)); }  
# 278
_M_set_length(__rsize); 
# 279
}  
# 280
} 
# 282
template< class _CharT, class _Traits, class _Alloc> void 
# 285
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::reserve(size_type __res) 
# 286
{ 
# 288
if (__res < length()) { 
# 289
__res = length(); }  
# 291
const size_type __capacity = capacity(); 
# 292
if (__res != __capacity) 
# 293
{ 
# 294
if ((__res > __capacity) || (__res > ((size_type)(_S_local_capacity)))) 
# 296
{ 
# 297
pointer __tmp = _M_create(__res, __capacity); 
# 298
(this->_S_copy(__tmp, _M_data(), length() + 1)); 
# 299
_M_dispose(); 
# 300
_M_data(__tmp); 
# 301
_M_capacity(__res); 
# 302
} else { 
# 303
if (!_M_is_local()) 
# 304
{ 
# 305
(this->_S_copy(this->_M_local_data(), _M_data(), length() + 1)); 
# 306
_M_destroy(__capacity); 
# 307
_M_data(this->_M_local_data()); 
# 308
}  }  
# 309
}  
# 310
} 
# 312
template< class _CharT, class _Traits, class _Alloc> void 
# 315
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_mutate(size_type __pos, size_type __len1, const _CharT *__s, size_type 
# 316
__len2) 
# 317
{ 
# 318
const size_type __how_much = (length() - __pos) - __len1; 
# 320
size_type __new_capacity = (length() + __len2) - __len1; 
# 321
pointer __r = _M_create(__new_capacity, capacity()); 
# 323
if (__pos) { 
# 324
(this->_S_copy(__r, _M_data(), __pos)); }  
# 325
if (__s && __len2) { 
# 326
(this->_S_copy(__r + __pos, __s, __len2)); }  
# 327
if (__how_much) { 
# 328
(this->_S_copy((__r + __pos) + __len2, (_M_data() + __pos) + __len1, __how_much)); }  
# 331
_M_dispose(); 
# 332
_M_data(__r); 
# 333
_M_capacity(__new_capacity); 
# 334
} 
# 336
template< class _CharT, class _Traits, class _Alloc> void 
# 339
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_erase(size_type __pos, size_type __n) 
# 340
{ 
# 341
const size_type __how_much = (length() - __pos) - __n; 
# 343
if (__how_much && __n) { 
# 344
(this->_S_move(_M_data() + __pos, (_M_data() + __pos) + __n, __how_much)); }  
# 346
_M_set_length(length() - __n); 
# 347
} 
# 349
template< class _CharT, class _Traits, class _Alloc> void 
# 352
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::resize(size_type __n, _CharT __c) 
# 353
{ 
# 354
const size_type __size = this->size(); 
# 355
if (__size < __n) { 
# 356
(this->append(__n - __size, __c)); } else { 
# 357
if (__n < __size) { 
# 358
this->_M_erase(__n, __size - __n); }  }  
# 359
} 
# 361
template< class _CharT, class _Traits, class _Alloc> __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 364
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_append(const _CharT *__s, size_type __n) 
# 365
{ 
# 366
const size_type __len = __n + this->size(); 
# 368
if (__len <= this->capacity()) 
# 369
{ 
# 370
if (__n) { 
# 371
(this->_S_copy((this->_M_data()) + this->size(), __s, __n)); }  
# 372
} else { 
# 374
this->_M_mutate(this->size(), (size_type)0, __s, __n); }  
# 376
this->_M_set_length(__len); 
# 377
return *this; 
# 378
} 
# 380
template< class _CharT, class _Traits, class _Alloc> 
# 381
template< class _InputIterator> __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 384
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_replace_dispatch(const_iterator __i1, const_iterator __i2, _InputIterator 
# 385
__k1, _InputIterator __k2, __false_type) 
# 387
{ 
# 388
const basic_string __s(__k1, __k2); 
# 389
const size_type __n1 = __i2 - __i1; 
# 390
return _M_replace(__i1 - this->begin(), __n1, (__s._M_data()), (__s.size())); 
# 392
} 
# 394
template< class _CharT, class _Traits, class _Alloc> __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 397
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_replace_aux(size_type __pos1, size_type __n1, size_type __n2, _CharT 
# 398
__c) 
# 399
{ 
# 400
_M_check_length(__n1, __n2, "basic_string::_M_replace_aux"); 
# 402
const size_type __old_size = this->size(); 
# 403
const size_type __new_size = (__old_size + __n2) - __n1; 
# 405
if (__new_size <= this->capacity()) 
# 406
{ 
# 407
_CharT *__p = (this->_M_data()) + __pos1; 
# 409
const size_type __how_much = (__old_size - __pos1) - __n1; 
# 410
if (__how_much && (__n1 != __n2)) { 
# 411
(this->_S_move(__p + __n2, __p + __n1, __how_much)); }  
# 412
} else { 
# 414
this->_M_mutate(__pos1, __n1, 0, __n2); }  
# 416
if (__n2) { 
# 417
(this->_S_assign((this->_M_data()) + __pos1, __n2, __c)); }  
# 419
this->_M_set_length(__new_size); 
# 420
return *this; 
# 421
} 
# 423
template< class _CharT, class _Traits, class _Alloc> __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 426
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::_M_replace(size_type __pos, size_type __len1, const _CharT *__s, const typename __gnu_cxx::__alloc_traits< typename __gnu_cxx::__alloc_traits< _Alloc> ::template rebind< _CharT> ::other> ::size_type 
# 427
__len2) 
# 428
{ 
# 429
_M_check_length(__len1, __len2, "basic_string::_M_replace"); 
# 431
const size_type __old_size = this->size(); 
# 432
const size_type __new_size = (__old_size + __len2) - __len1; 
# 434
if (__new_size <= this->capacity()) 
# 435
{ 
# 436
_CharT *__p = (this->_M_data()) + __pos; 
# 438
const size_type __how_much = (__old_size - __pos) - __len1; 
# 439
if (_M_disjunct(__s)) 
# 440
{ 
# 441
if (__how_much && (__len1 != __len2)) { 
# 442
(this->_S_move(__p + __len2, __p + __len1, __how_much)); }  
# 443
if (__len2) { 
# 444
(this->_S_copy(__p, __s, __len2)); }  
# 445
} else 
# 447
{ 
# 449
if (__len2 && (__len2 <= __len1)) { 
# 450
(this->_S_move(__p, __s, __len2)); }  
# 451
if (__how_much && (__len1 != __len2)) { 
# 452
(this->_S_move(__p + __len2, __p + __len1, __how_much)); }  
# 453
if (__len2 > __len1) 
# 454
{ 
# 455
if ((__s + __len2) <= (__p + __len1)) { 
# 456
(this->_S_move(__p, __s, __len2)); } else { 
# 457
if (__s >= (__p + __len1)) { 
# 458
(this->_S_copy(__p, (__s + __len2) - __len1, __len2)); } else 
# 460
{ 
# 461
const size_type __nleft = (__p + __len1) - __s; 
# 462
(this->_S_move(__p, __s, __nleft)); 
# 463
(this->_S_copy(__p + __nleft, __p + __len2, __len2 - __nleft)); 
# 465
}  }  
# 466
}  
# 467
}  
# 468
} else { 
# 470
this->_M_mutate(__pos, __len1, __s, __len2); }  
# 472
this->_M_set_length(__new_size); 
# 473
return *this; 
# 474
} 
# 476
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 479
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::copy(_CharT *__s, size_type __n, size_type __pos) const 
# 480
{ 
# 481
_M_check(__pos, "basic_string::copy"); 
# 482
__n = _M_limit(__pos, __n); 
# 483
; 
# 484
if (__n) { 
# 485
(_S_copy)(__s, _M_data() + __pos, __n); }  
# 487
return __n; 
# 488
} 
# 1149 "/usr/include/c++/5/bits/basic_string.tcc" 3
template< class _CharT, class _Traits, class _Alloc> __cxx11::basic_string< _CharT, _Traits, _Alloc>  
# 1151
operator+(const _CharT *__lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 1152
__rhs) 
# 1153
{ 
# 1154
; 
# 1155
typedef __cxx11::basic_string< _CharT, _Traits, _Alloc>  __string_type; 
# 1156
typedef typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type __size_type; 
# 1157
const __size_type __len = _Traits::length(__lhs); 
# 1158
__string_type __str; 
# 1159
(__str.reserve(__len + (__rhs.size()))); 
# 1160
(__str.append(__lhs, __len)); 
# 1161
(__str.append(__rhs)); 
# 1162
return __str; 
# 1163
} 
# 1165
template< class _CharT, class _Traits, class _Alloc> __cxx11::basic_string< _CharT, _Traits, _Alloc>  
# 1167
operator+(_CharT __lhs, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__rhs) 
# 1168
{ 
# 1169
typedef __cxx11::basic_string< _CharT, _Traits, _Alloc>  __string_type; 
# 1170
typedef typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type __size_type; 
# 1171
__string_type __str; 
# 1172
const __size_type __len = (__rhs.size()); 
# 1173
(__str.reserve(__len + 1)); 
# 1174
(__str.append((__size_type)1, __lhs)); 
# 1175
(__str.append(__rhs)); 
# 1176
return __str; 
# 1177
} 
# 1179
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 1182
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::find(const _CharT *__s, size_type __pos, size_type __n) const 
# 1183
{ 
# 1184
; 
# 1185
const size_type __size = this->size(); 
# 1186
const _CharT *__data = _M_data(); 
# 1188
if (__n == 0) { 
# 1189
return (__pos <= __size) ? __pos : npos; }  
# 1191
if (__n <= __size) 
# 1192
{ 
# 1193
for (; __pos <= (__size - __n); ++__pos) { 
# 1194
if (traits_type::eq(__data[__pos], __s[0]) && (traits_type::compare((__data + __pos) + 1, __s + 1, __n - 1) == 0)) { 
# 1197
return __pos; }  }  
# 1198
}  
# 1199
return npos; 
# 1200
} 
# 1202
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 1205
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::find(_CharT __c, size_type __pos) const 
# 1206
{ 
# 1207
size_type __ret = npos; 
# 1208
const size_type __size = this->size(); 
# 1209
if (__pos < __size) 
# 1210
{ 
# 1211
const _CharT *__data = _M_data(); 
# 1212
const size_type __n = __size - __pos; 
# 1213
const _CharT *__p = traits_type::find(__data + __pos, __n, __c); 
# 1214
if (__p) { 
# 1215
__ret = (__p - __data); }  
# 1216
}  
# 1217
return __ret; 
# 1218
} 
# 1220
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 1223
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::rfind(const _CharT *__s, size_type __pos, size_type __n) const 
# 1224
{ 
# 1225
; 
# 1226
const size_type __size = this->size(); 
# 1227
if (__n <= __size) 
# 1228
{ 
# 1229
__pos = std::min((size_type)(__size - __n), __pos); 
# 1230
const _CharT *__data = _M_data(); 
# 1231
do 
# 1232
{ 
# 1233
if (traits_type::compare(__data + __pos, __s, __n) == 0) { 
# 1234
return __pos; }  
# 1235
} 
# 1236
while ((__pos--) > 0); 
# 1237
}  
# 1238
return npos; 
# 1239
} 
# 1241
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 1244
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::rfind(_CharT __c, size_type __pos) const 
# 1245
{ 
# 1246
size_type __size = this->size(); 
# 1247
if (__size) 
# 1248
{ 
# 1249
if ((--__size) > __pos) { 
# 1250
__size = __pos; }  
# 1251
for (++__size; (__size--) > 0;) { 
# 1252
if (traits_type::eq(_M_data()[__size], __c)) { 
# 1253
return __size; }  }  
# 1254
}  
# 1255
return npos; 
# 1256
} 
# 1258
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 1261
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::find_first_of(const _CharT *__s, size_type __pos, size_type __n) const 
# 1262
{ 
# 1263
; 
# 1264
for (; __n && (__pos < this->size()); ++__pos) 
# 1265
{ 
# 1266
const _CharT *__p = traits_type::find(__s, __n, _M_data()[__pos]); 
# 1267
if (__p) { 
# 1268
return __pos; }  
# 1269
}  
# 1270
return npos; 
# 1271
} 
# 1273
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 1276
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::find_last_of(const _CharT *__s, size_type __pos, size_type __n) const 
# 1277
{ 
# 1278
; 
# 1279
size_type __size = this->size(); 
# 1280
if (__size && __n) 
# 1281
{ 
# 1282
if ((--__size) > __pos) { 
# 1283
__size = __pos; }  
# 1284
do 
# 1285
{ 
# 1286
if (traits_type::find(__s, __n, _M_data()[__size])) { 
# 1287
return __size; }  
# 1288
} 
# 1289
while ((__size--) != 0); 
# 1290
}  
# 1291
return npos; 
# 1292
} 
# 1294
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 1297
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::find_first_not_of(const _CharT *__s, size_type __pos, size_type __n) const 
# 1298
{ 
# 1299
; 
# 1300
for (; __pos < this->size(); ++__pos) { 
# 1301
if (!traits_type::find(__s, __n, _M_data()[__pos])) { 
# 1302
return __pos; }  }  
# 1303
return npos; 
# 1304
} 
# 1306
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 1309
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::find_first_not_of(_CharT __c, size_type __pos) const 
# 1310
{ 
# 1311
for (; __pos < this->size(); ++__pos) { 
# 1312
if (!traits_type::eq(_M_data()[__pos], __c)) { 
# 1313
return __pos; }  }  
# 1314
return npos; 
# 1315
} 
# 1317
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 1320
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::find_last_not_of(const _CharT *__s, size_type __pos, size_type __n) const 
# 1321
{ 
# 1322
; 
# 1323
size_type __size = this->size(); 
# 1324
if (__size) 
# 1325
{ 
# 1326
if ((--__size) > __pos) { 
# 1327
__size = __pos; }  
# 1328
do 
# 1329
{ 
# 1330
if (!traits_type::find(__s, __n, _M_data()[__size])) { 
# 1331
return __size; }  
# 1332
} 
# 1333
while (__size--); 
# 1334
}  
# 1335
return npos; 
# 1336
} 
# 1338
template< class _CharT, class _Traits, class _Alloc> typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type 
# 1341
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::find_last_not_of(_CharT __c, size_type __pos) const 
# 1342
{ 
# 1343
size_type __size = this->size(); 
# 1344
if (__size) 
# 1345
{ 
# 1346
if ((--__size) > __pos) { 
# 1347
__size = __pos; }  
# 1348
do 
# 1349
{ 
# 1350
if (!traits_type::eq(_M_data()[__size], __c)) { 
# 1351
return __size; }  
# 1352
} 
# 1353
while (__size--); 
# 1354
}  
# 1355
return npos; 
# 1356
} 
# 1358
template< class _CharT, class _Traits, class _Alloc> int 
# 1361
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::compare(size_type __pos, size_type __n, const basic_string &__str) const 
# 1362
{ 
# 1363
_M_check(__pos, "basic_string::compare"); 
# 1364
__n = _M_limit(__pos, __n); 
# 1365
const size_type __osize = (__str.size()); 
# 1366
const size_type __len = std::min(__n, __osize); 
# 1367
int __r = traits_type::compare(_M_data() + __pos, (__str.data()), __len); 
# 1368
if (!__r) { 
# 1369
__r = (_S_compare)(__n, __osize); }  
# 1370
return __r; 
# 1371
} 
# 1373
template< class _CharT, class _Traits, class _Alloc> int 
# 1376
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::compare(size_type __pos1, size_type __n1, const basic_string &__str, size_type 
# 1377
__pos2, size_type __n2) const 
# 1378
{ 
# 1379
_M_check(__pos1, "basic_string::compare"); 
# 1380
(__str._M_check(__pos2, "basic_string::compare")); 
# 1381
__n1 = _M_limit(__pos1, __n1); 
# 1382
__n2 = (__str._M_limit(__pos2, __n2)); 
# 1383
const size_type __len = std::min(__n1, __n2); 
# 1384
int __r = traits_type::compare(_M_data() + __pos1, (__str.data()) + __pos2, __len); 
# 1386
if (!__r) { 
# 1387
__r = (_S_compare)(__n1, __n2); }  
# 1388
return __r; 
# 1389
} 
# 1391
template< class _CharT, class _Traits, class _Alloc> int 
# 1394
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::compare(const _CharT *__s) const 
# 1395
{ 
# 1396
; 
# 1397
const size_type __size = this->size(); 
# 1398
const size_type __osize = traits_type::length(__s); 
# 1399
const size_type __len = std::min(__size, __osize); 
# 1400
int __r = traits_type::compare(_M_data(), __s, __len); 
# 1401
if (!__r) { 
# 1402
__r = (_S_compare)(__size, __osize); }  
# 1403
return __r; 
# 1404
} 
# 1406
template< class _CharT, class _Traits, class _Alloc> int 
# 1409
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::compare(size_type __pos, size_type __n1, const _CharT *__s) const 
# 1410
{ 
# 1411
; 
# 1412
_M_check(__pos, "basic_string::compare"); 
# 1413
__n1 = _M_limit(__pos, __n1); 
# 1414
const size_type __osize = traits_type::length(__s); 
# 1415
const size_type __len = std::min(__n1, __osize); 
# 1416
int __r = traits_type::compare(_M_data() + __pos, __s, __len); 
# 1417
if (!__r) { 
# 1418
__r = (_S_compare)(__n1, __osize); }  
# 1419
return __r; 
# 1420
} 
# 1422
template< class _CharT, class _Traits, class _Alloc> int 
# 1425
__cxx11::basic_string< _CharT, _Traits, _Alloc> ::compare(size_type __pos, size_type __n1, const _CharT *__s, size_type 
# 1426
__n2) const 
# 1427
{ 
# 1428
; 
# 1429
_M_check(__pos, "basic_string::compare"); 
# 1430
__n1 = _M_limit(__pos, __n1); 
# 1431
const size_type __len = std::min(__n1, __n2); 
# 1432
int __r = traits_type::compare(_M_data() + __pos, __s, __len); 
# 1433
if (!__r) { 
# 1434
__r = (_S_compare)(__n1, __n2); }  
# 1435
return __r; 
# 1436
} 
# 1439
template< class _CharT, class _Traits, class _Alloc> basic_istream< _CharT, _Traits>  &
# 1441
operator>>(basic_istream< _CharT, _Traits>  &__in, __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 1442
__str) 
# 1443
{ 
# 1444
typedef basic_istream< _CharT, _Traits>  __istream_type; 
# 1445
typedef __cxx11::basic_string< _CharT, _Traits, _Alloc>  __string_type; 
# 1446
typedef typename basic_istream< _CharT, _Traits> ::ios_base __ios_base; 
# 1447
typedef typename basic_istream< _CharT, _Traits> ::int_type __int_type; 
# 1448
typedef typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type __size_type; 
# 1449
typedef ctype< _CharT>  __ctype_type; 
# 1450
typedef typename ctype< _CharT> ::ctype_base __ctype_base; 
# 1452
__size_type __extracted = (0); 
# 1453
typename basic_istream< _CharT, _Traits> ::ios_base::iostate __err = (__ios_base::goodbit); 
# 1454
typename basic_istream< _CharT, _Traits> ::sentry __cerb(__in, false); 
# 1455
if (__cerb) 
# 1456
{ 
# 1457
try 
# 1458
{ 
# 1460
(__str.erase()); 
# 1461
_CharT __buf[128]; 
# 1462
__size_type __len = (0); 
# 1463
const streamsize __w = (__in.width()); 
# 1464
const __size_type __n = (__w > (0)) ? static_cast< __size_type>(__w) : (__str.max_size()); 
# 1466
const __ctype_type &__ct = use_facet< ctype< _CharT> > ((__in.getloc())); 
# 1467
const __int_type __eof = _Traits::eof(); 
# 1468
__int_type __c = ((__in.rdbuf())->sgetc()); 
# 1470
while ((__extracted < __n) && (!_Traits::eq_int_type(__c, __eof)) && (!(__ct.is(__ctype_base::space, _Traits::to_char_type(__c))))) 
# 1474
{ 
# 1475
if (__len == (sizeof(__buf) / sizeof(_CharT))) 
# 1476
{ 
# 1477
(__str.append(__buf, sizeof(__buf) / sizeof(_CharT))); 
# 1478
__len = 0; 
# 1479
}  
# 1480
(__buf[__len++]) = _Traits::to_char_type(__c); 
# 1481
++__extracted; 
# 1482
__c = ((__in.rdbuf())->snextc()); 
# 1483
}  
# 1484
(__str.append(__buf, __len)); 
# 1486
if (_Traits::eq_int_type(__c, __eof)) { 
# 1487
__err |= __ios_base::eofbit; }  
# 1488
(__in.width(0)); 
# 1489
} 
# 1490
catch (__cxxabiv1::__forced_unwind &) 
# 1491
{ 
# 1492
(__in._M_setstate(__ios_base::badbit)); 
# 1493
throw; 
# 1494
} 
# 1495
catch (...) 
# 1496
{ 
# 1500
(__in._M_setstate(__ios_base::badbit)); 
# 1501
}  
# 1502
}  
# 1504
if (!__extracted) { 
# 1505
__err |= __ios_base::failbit; }  
# 1506
if (__err) { 
# 1507
(__in.setstate(__err)); }  
# 1508
return __in; 
# 1509
} 
# 1511
template< class _CharT, class _Traits, class _Alloc> basic_istream< _CharT, _Traits>  &
# 1513
getline(basic_istream< _CharT, _Traits>  &__in, __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 1514
__str, _CharT __delim) 
# 1515
{ 
# 1516
typedef basic_istream< _CharT, _Traits>  __istream_type; 
# 1517
typedef __cxx11::basic_string< _CharT, _Traits, _Alloc>  __string_type; 
# 1518
typedef typename basic_istream< _CharT, _Traits> ::ios_base __ios_base; 
# 1519
typedef typename basic_istream< _CharT, _Traits> ::int_type __int_type; 
# 1520
typedef typename __cxx11::basic_string< _CharT, _Traits, _Alloc> ::size_type __size_type; 
# 1522
__size_type __extracted = (0); 
# 1523
const __size_type __n = (__str.max_size()); 
# 1524
typename basic_istream< _CharT, _Traits> ::ios_base::iostate __err = (__ios_base::goodbit); 
# 1525
typename basic_istream< _CharT, _Traits> ::sentry __cerb(__in, true); 
# 1526
if (__cerb) 
# 1527
{ 
# 1528
try 
# 1529
{ 
# 1530
(__str.erase()); 
# 1531
const __int_type __idelim = _Traits::to_int_type(__delim); 
# 1532
const __int_type __eof = _Traits::eof(); 
# 1533
__int_type __c = ((__in.rdbuf())->sgetc()); 
# 1535
while ((__extracted < __n) && (!_Traits::eq_int_type(__c, __eof)) && (!_Traits::eq_int_type(__c, __idelim))) 
# 1538
{ 
# 1539
__str += _Traits::to_char_type(__c); 
# 1540
++__extracted; 
# 1541
__c = ((__in.rdbuf())->snextc()); 
# 1542
}  
# 1544
if (_Traits::eq_int_type(__c, __eof)) { 
# 1545
__err |= __ios_base::eofbit; } else { 
# 1546
if (_Traits::eq_int_type(__c, __idelim)) 
# 1547
{ 
# 1548
++__extracted; 
# 1549
((__in.rdbuf())->sbumpc()); 
# 1550
} else { 
# 1552
__err |= __ios_base::failbit; }  }  
# 1553
} 
# 1554
catch (__cxxabiv1::__forced_unwind &) 
# 1555
{ 
# 1556
(__in._M_setstate(__ios_base::badbit)); 
# 1557
throw; 
# 1558
} 
# 1559
catch (...) 
# 1560
{ 
# 1564
(__in._M_setstate(__ios_base::badbit)); 
# 1565
}  
# 1566
}  
# 1567
if (!__extracted) { 
# 1568
__err |= __ios_base::failbit; }  
# 1569
if (__err) { 
# 1570
(__in.setstate(__err)); }  
# 1571
return __in; 
# 1572
} 
# 1577
extern template class __cxx11::basic_string< char, char_traits< char> , allocator< char> > ;
# 1578
extern template basic_istream< char>  &operator>>(basic_istream< char>  & __is, __cxx11::basic_string< char, char_traits< char> , allocator< char> >  & __str);
# 1581
extern template basic_ostream< char>  &operator<<(basic_ostream< char>  & __os, const __cxx11::basic_string< char, char_traits< char> , allocator< char> >  & __str);
# 1584
extern template basic_istream< char>  &getline(basic_istream< char>  & __is, __cxx11::basic_string< char, char_traits< char> , allocator< char> >  & __str, char __delim);
# 1587
extern template basic_istream< char>  &getline(basic_istream< char>  & __is, __cxx11::basic_string< char, char_traits< char> , allocator< char> >  & __str);
# 1592
extern template class __cxx11::basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> > ;
# 1593
extern template basic_istream< wchar_t>  &operator>>(basic_istream< wchar_t>  & __is, __cxx11::basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> >  & __str);
# 1596
extern template basic_ostream< wchar_t>  &operator<<(basic_ostream< wchar_t>  & __os, const __cxx11::basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> >  & __str);
# 1599
extern template basic_istream< wchar_t>  &getline(basic_istream< wchar_t>  & __is, __cxx11::basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> >  & __str, wchar_t __delim);
# 1602
extern template basic_istream< wchar_t>  &getline(basic_istream< wchar_t>  & __is, __cxx11::basic_string< wchar_t, char_traits< wchar_t> , allocator< wchar_t> >  & __str);
# 1609
}
# 43 "/usr/include/c++/5/bits/locale_classes.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 62 "/usr/include/c++/5/bits/locale_classes.h" 3
class locale { 
# 67
public: typedef int category; 
# 70
class facet; 
# 71
class id; 
# 72
class _Impl; 
# 74
friend class facet; 
# 75
friend class _Impl; 
# 77
template< class _Facet> friend bool has_facet(const locale &) throw(); 
# 81
template< class _Facet> friend const _Facet &use_facet(const locale &); 
# 85
template< class _Cache> friend struct __use_cache; 
# 98 "/usr/include/c++/5/bits/locale_classes.h" 3
static const category none = 0; 
# 99
static const category ctype = (1L << 0); 
# 100
static const category numeric = (1L << 1); 
# 101
static const category collate = (1L << 2); 
# 102
static const category time = (1L << 3); 
# 103
static const category monetary = (1L << 4); 
# 104
static const category messages = (1L << 5); 
# 105
static const category all = (((((ctype | numeric) | collate) | time) | monetary) | messages); 
# 117 "/usr/include/c++/5/bits/locale_classes.h" 3
locale() throw(); 
# 126 "/usr/include/c++/5/bits/locale_classes.h" 3
locale(const locale & __other) throw(); 
# 137 "/usr/include/c++/5/bits/locale_classes.h" 3
explicit locale(const char * __s); 
# 151 "/usr/include/c++/5/bits/locale_classes.h" 3
locale(const locale & __base, const char * __s, category __cat); 
# 192 "/usr/include/c++/5/bits/locale_classes.h" 3
locale(const locale & __base, const locale & __add, category __cat); 
# 205 "/usr/include/c++/5/bits/locale_classes.h" 3
template< class _Facet> locale(const locale & __other, _Facet * __f); 
# 209
~locale() throw(); 
# 220 "/usr/include/c++/5/bits/locale_classes.h" 3
const locale &operator=(const locale & __other) throw(); 
# 234 "/usr/include/c++/5/bits/locale_classes.h" 3
template< class _Facet> locale combine(const locale & __other) const; 
# 243
__attribute((__abi_tag__("cxx11"))) __cxx11::string 
# 245
name() const; 
# 255 "/usr/include/c++/5/bits/locale_classes.h" 3
bool operator==(const locale & __other) const throw(); 
# 264
bool operator!=(const locale &__other) const throw() 
# 265
{ return !this->operator==(__other); } 
# 282 "/usr/include/c++/5/bits/locale_classes.h" 3
template< class _Char, class _Traits, class _Alloc> bool operator()(const __cxx11::basic_string< _Char, _Traits, _Alloc>  & __s1, const __cxx11::basic_string< _Char, _Traits, _Alloc>  & __s2) const; 
# 299 "/usr/include/c++/5/bits/locale_classes.h" 3
static locale global(const locale & __loc); 
# 305
static const locale &classic(); 
# 309
private: _Impl *_M_impl; 
# 312
static _Impl *_S_classic; 
# 315
static _Impl *_S_global; 
# 321
static const char *const *const _S_categories; 
# 333 "/usr/include/c++/5/bits/locale_classes.h" 3
enum { _S_categories_size = 12}; 
# 336
static __gthread_once_t _S_once; 
# 340
explicit locale(_Impl *) throw(); 
# 343
static void _S_initialize(); 
# 346
static void _S_initialize_once() throw(); 
# 349
static category _S_normalize_category(category); 
# 352
void _M_coalesce(const locale & __base, const locale & __add, category __cat); 
# 355
static const id *const _S_twinned_facets[]; 
# 357
}; 
# 371 "/usr/include/c++/5/bits/locale_classes.h" 3
class locale::facet { 
# 374
friend class locale; 
# 375
friend class _Impl; 
# 377
mutable _Atomic_word _M_refcount; 
# 380
static __c_locale _S_c_locale; 
# 383
static const char _S_c_name[2]; 
# 386
static __gthread_once_t _S_once; 
# 390
static void _S_initialize_once(); 
# 403 "/usr/include/c++/5/bits/locale_classes.h" 3
protected: explicit facet(size_t __refs = 0) throw() : _M_refcount((__refs) ? 1 : 0) 
# 404
{ } 
# 408
virtual ~facet(); 
# 411
static void _S_create_c_locale(__c_locale & __cloc, const char * __s, __c_locale __old = 0); 
# 415
static __c_locale _S_clone_c_locale(__c_locale & __cloc) throw(); 
# 418
static void _S_destroy_c_locale(__c_locale & __cloc); 
# 421
static __c_locale _S_lc_ctype_c_locale(__c_locale __cloc, const char * __s); 
# 426
static __c_locale _S_get_c_locale(); 
# 428
__attribute((const)) static const char *
# 429
_S_get_c_name() throw(); 
# 433
private: void _M_add_reference() const throw() 
# 434
{ __gnu_cxx::__atomic_add_dispatch(&(_M_refcount), 1); } 
# 437
void _M_remove_reference() const throw() 
# 438
{ 
# 440
; 
# 441
if (__gnu_cxx::__exchange_and_add_dispatch(&(_M_refcount), -1) == 1) 
# 442
{ 
# 443
; 
# 444
try 
# 445
{ delete this; } 
# 446
catch (...) 
# 447
{ }  
# 448
}  
# 449
} 
# 451
facet(const facet &); 
# 454
facet &operator=(const facet &); 
# 456
class __shim; 
# 458
const facet *_M_sso_shim(const id *) const; 
# 459
const facet *_M_cow_shim(const id *) const; 
# 460
}; 
# 474 "/usr/include/c++/5/bits/locale_classes.h" 3
class locale::id { 
# 477
friend class locale; 
# 478
friend class _Impl; 
# 480
template< class _Facet> friend const _Facet &use_facet(const locale &); 
# 484
template< class _Facet> friend bool has_facet(const locale &) throw(); 
# 491
mutable size_t _M_index; 
# 494
static _Atomic_word _S_refcount; 
# 497
void operator=(const id &); 
# 499
id(const id &); 
# 505
public: id() { } 
# 508
size_t _M_id() const throw(); 
# 509
}; 
# 513
class locale::_Impl { 
# 517
friend class locale; 
# 518
friend class facet; 
# 520
template< class _Facet> friend bool has_facet(const locale &) throw(); 
# 524
template< class _Facet> friend const _Facet &use_facet(const locale &); 
# 528
template< class _Cache> friend struct __use_cache; 
# 533
_Atomic_word _M_refcount; 
# 534
const facet **_M_facets; 
# 535
size_t _M_facets_size; 
# 536
const facet **_M_caches; 
# 537
char **_M_names; 
# 538
static const id *const _S_id_ctype[]; 
# 539
static const id *const _S_id_numeric[]; 
# 540
static const id *const _S_id_collate[]; 
# 541
static const id *const _S_id_time[]; 
# 542
static const id *const _S_id_monetary[]; 
# 543
static const id *const _S_id_messages[]; 
# 544
static const id *const *const _S_facet_categories[]; 
# 547
void _M_add_reference() throw() 
# 548
{ __gnu_cxx::__atomic_add_dispatch(&(_M_refcount), 1); } 
# 551
void _M_remove_reference() throw() 
# 552
{ 
# 554
; 
# 555
if (__gnu_cxx::__exchange_and_add_dispatch(&(_M_refcount), -1) == 1) 
# 556
{ 
# 557
; 
# 558
try 
# 559
{ delete this; } 
# 560
catch (...) 
# 561
{ }  
# 562
}  
# 563
} 
# 565
_Impl(const _Impl &, size_t); 
# 566
_Impl(const char *, size_t); 
# 567
_Impl(size_t) throw(); 
# 569
~_Impl() throw(); 
# 571
_Impl(const _Impl &); 
# 574
void operator=(const _Impl &); 
# 577
bool _M_check_same_name() 
# 578
{ 
# 579
bool __ret = true; 
# 580
if ((_M_names)[1]) { 
# 582
for (size_t __i = (0); __ret && (__i < ((_S_categories_size) - 1)); ++__i) { 
# 583
__ret = (__builtin_strcmp((_M_names)[__i], (_M_names)[__i + (1)]) == 0); }  }  
# 584
return __ret; 
# 585
} 
# 588
void _M_replace_categories(const _Impl *, category); 
# 591
void _M_replace_category(const _Impl *, const id *const *); 
# 594
void _M_replace_facet(const _Impl *, const id *); 
# 597
void _M_install_facet(const id *, const facet *); 
# 599
template< class _Facet> void 
# 601
_M_init_facet(_Facet *__facet) 
# 602
{ this->_M_install_facet(&_Facet::id, __facet); } 
# 604
template< class _Facet> void 
# 606
_M_init_facet_unchecked(_Facet *__facet) 
# 607
{ 
# 608
(__facet->_M_add_reference()); 
# 609
((_M_facets)[(_Facet::id._M_id)()]) = __facet; 
# 610
} 
# 613
void _M_install_cache(const facet *, size_t); 
# 615
void _M_init_extra(facet **); 
# 616
void _M_init_extra(void *, void *, const char *, const char *); 
# 617
}; 
# 632 "/usr/include/c++/5/bits/locale_classes.h" 3
template< class _CharT> 
# 633
class __cxx11::collate : public locale::facet { 
# 639
public: typedef _CharT char_type; 
# 640
typedef basic_string< _CharT, char_traits< _CharT> , allocator< _CharT> >  string_type; 
# 646
protected: __c_locale _M_c_locale_collate; 
# 650
public: static locale::id id; 
# 660 "/usr/include/c++/5/bits/locale_classes.h" 3
explicit collate(size_t __refs = 0) : locale::facet(__refs), _M_c_locale_collate(_S_get_c_locale()) 
# 662
{ } 
# 674 "/usr/include/c++/5/bits/locale_classes.h" 3
explicit collate(__c_locale __cloc, size_t __refs = 0) : locale::facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc)) 
# 676
{ } 
# 691 "/usr/include/c++/5/bits/locale_classes.h" 3
int compare(const _CharT *__lo1, const _CharT *__hi1, const _CharT *
# 692
__lo2, const _CharT *__hi2) const 
# 693
{ return this->do_compare(__lo1, __hi1, __lo2, __hi2); } 
# 710 "/usr/include/c++/5/bits/locale_classes.h" 3
string_type transform(const _CharT *__lo, const _CharT *__hi) const 
# 711
{ return this->do_transform(__lo, __hi); } 
# 724 "/usr/include/c++/5/bits/locale_classes.h" 3
long hash(const _CharT *__lo, const _CharT *__hi) const 
# 725
{ return this->do_hash(__lo, __hi); } 
# 729
int _M_compare(const _CharT *, const _CharT *) const throw(); 
# 732
size_t _M_transform(_CharT *, const _CharT *, size_t) const throw(); 
# 737
protected: virtual ~collate() 
# 738
{ _S_destroy_c_locale(_M_c_locale_collate); } 
# 753 "/usr/include/c++/5/bits/locale_classes.h" 3
virtual int do_compare(const _CharT * __lo1, const _CharT * __hi1, const _CharT * __lo2, const _CharT * __hi2) const; 
# 767 "/usr/include/c++/5/bits/locale_classes.h" 3
virtual string_type do_transform(const _CharT * __lo, const _CharT * __hi) const; 
# 780 "/usr/include/c++/5/bits/locale_classes.h" 3
virtual long do_hash(const _CharT * __lo, const _CharT * __hi) const; 
# 781
}; 
# 783
template< class _CharT> locale::id 
# 784
__cxx11::collate< _CharT> ::id; 
# 789
template<> int collate< char> ::_M_compare(const char *, const char *) const throw(); 
# 793
template<> size_t collate< char> ::_M_transform(char *, const char *, size_t) const throw(); 
# 798
template<> int collate< wchar_t> ::_M_compare(const wchar_t *, const wchar_t *) const throw(); 
# 802
template<> size_t collate< wchar_t> ::_M_transform(wchar_t *, const wchar_t *, size_t) const throw(); 
# 806
template< class _CharT> 
# 807
class __cxx11::collate_byname : public collate< _CharT>  { 
# 812
public: typedef _CharT char_type; 
# 813
typedef basic_string< _CharT, char_traits< _CharT> , allocator< _CharT> >  string_type; 
# 817
explicit collate_byname(const char *__s, ::std::size_t __refs = 0) : ::std::__cxx11::collate< _CharT> (__refs) 
# 819
{ 
# 820
if ((__builtin_strcmp(__s, "C") != 0) && (__builtin_strcmp(__s, "POSIX") != 0)) 
# 822
{ 
# 823
(this->_S_destroy_c_locale((this->_M_c_locale_collate))); 
# 824
(this->_S_create_c_locale((this->_M_c_locale_collate), __s)); 
# 825
}  
# 826
} 
# 836
protected: virtual ~collate_byname() { } 
# 837
}; 
# 840
}
# 39 "/usr/include/c++/5/bits/locale_classes.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 43
template< class _Facet> 
# 45
locale::locale(const locale &__other, _Facet *__f) 
# 46
{ 
# 47
(_M_impl) = (new _Impl(*(__other._M_impl), 1)); 
# 49
try 
# 50
{ (_M_impl)->_M_install_facet(&_Facet::id, __f); } 
# 51
catch (...) 
# 52
{ 
# 53
(_M_impl)->_M_remove_reference(); 
# 54
throw; 
# 55
}  
# 56
delete [] (((_M_impl)->_M_names)[0]); 
# 57
(((_M_impl)->_M_names)[0]) = (0); 
# 58
} 
# 60
template< class _Facet> locale 
# 63
locale::combine(const locale &__other) const 
# 64
{ 
# 65
_Impl *__tmp = new _Impl(*(_M_impl), 1); 
# 66
try 
# 67
{ 
# 68
__tmp->_M_replace_facet(__other._M_impl, &_Facet::id); 
# 69
} 
# 70
catch (...) 
# 71
{ 
# 72
__tmp->_M_remove_reference(); 
# 73
throw; 
# 74
}  
# 75
return ((locale)(__tmp)); 
# 76
} 
# 78
template< class _CharT, class _Traits, class _Alloc> bool 
# 81
locale::operator()(const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &__s1, const __cxx11::basic_string< _CharT, _Traits, _Alloc>  &
# 82
__s2) const 
# 83
{ 
# 84
typedef __cxx11::collate< _CharT>  __collate_type; 
# 85
const __collate_type &__collate = use_facet< __cxx11::collate< _CharT> > (*this); 
# 86
return (__collate.compare((__s1.data()), (__s1.data()) + (__s1.length()), (__s2.data()), (__s2.data()) + (__s2.length()))) < 0; 
# 88
} 
# 102 "/usr/include/c++/5/bits/locale_classes.tcc" 3
template< class _Facet> bool 
# 104
has_facet(const locale &__loc) throw() 
# 105
{ 
# 106
const size_t __i = (_Facet::id._M_id)(); 
# 107
const locale::facet **__facets = (__loc._M_impl)->_M_facets; 
# 108
return (__i < ((__loc._M_impl)->_M_facets_size)) && (dynamic_cast< const _Facet *>(__facets[__i])); 
# 114
} 
# 130 "/usr/include/c++/5/bits/locale_classes.tcc" 3
template< class _Facet> const _Facet &
# 132
use_facet(const locale &__loc) 
# 133
{ 
# 134
const size_t __i = (_Facet::id._M_id)(); 
# 135
const locale::facet **__facets = (__loc._M_impl)->_M_facets; 
# 136
if ((__i >= ((__loc._M_impl)->_M_facets_size)) || (!(__facets[__i]))) { 
# 137
__throw_bad_cast(); }  
# 139
return dynamic_cast< const _Facet &>(*(__facets[__i])); 
# 143
} 
# 147
template< class _CharT> int 
# 149
__cxx11::collate< _CharT> ::_M_compare(const _CharT *, const _CharT *) const throw() 
# 150
{ return 0; } 
# 153
template< class _CharT> size_t 
# 155
__cxx11::collate< _CharT> ::_M_transform(_CharT *, const _CharT *, size_t) const throw() 
# 156
{ return 0; } 
# 158
template< class _CharT> int 
# 161
__cxx11::collate< _CharT> ::do_compare(const _CharT *__lo1, const _CharT *__hi1, const _CharT *
# 162
__lo2, const _CharT *__hi2) const 
# 163
{ 
# 166
const string_type __one(__lo1, __hi1); 
# 167
const string_type __two(__lo2, __hi2); 
# 169
const _CharT *__p = (__one.c_str()); 
# 170
const _CharT *__pend = (__one.data()) + (__one.length()); 
# 171
const _CharT *__q = (__two.c_str()); 
# 172
const _CharT *__qend = (__two.data()) + (__two.length()); 
# 177
for (; ;) 
# 178
{ 
# 179
const int __res = _M_compare(__p, __q); 
# 180
if (__res) { 
# 181
return __res; }  
# 183
__p += char_traits< _CharT> ::length(__p); 
# 184
__q += char_traits< _CharT> ::length(__q); 
# 185
if ((__p == __pend) && (__q == __qend)) { 
# 186
return 0; } else { 
# 187
if (__p == __pend) { 
# 188
return -1; } else { 
# 189
if (__q == __qend) { 
# 190
return 1; }  }  }  
# 192
__p++; 
# 193
__q++; 
# 194
}  
# 195
} 
# 197
template< class _CharT> typename __cxx11::collate< _CharT> ::string_type 
# 200
__cxx11::collate< _CharT> ::do_transform(const _CharT *__lo, const _CharT *__hi) const 
# 201
{ 
# 202
string_type __ret; 
# 205
const string_type __str(__lo, __hi); 
# 207
const _CharT *__p = (__str.c_str()); 
# 208
const _CharT *__pend = (__str.data()) + (__str.length()); 
# 210
size_t __len = (__hi - __lo) * 2; 
# 212
_CharT *__c = new _CharT [__len]; 
# 214
try 
# 215
{ 
# 219
for (; ;) 
# 220
{ 
# 222
size_t __res = _M_transform(__c, __p, __len); 
# 225
if (__res >= __len) 
# 226
{ 
# 227
__len = (__res + (1)); 
# 228
(delete [] __c), (__c = 0); 
# 229
__c = (new _CharT [__len]); 
# 230
__res = _M_transform(__c, __p, __len); 
# 231
}  
# 233
(__ret.append(__c, __res)); 
# 234
__p += char_traits< _CharT> ::length(__p); 
# 235
if (__p == __pend) { 
# 236
break; }  
# 238
__p++; 
# 239
(__ret.push_back(_CharT())); 
# 240
}  
# 241
} 
# 242
catch (...) 
# 243
{ 
# 244
delete [] __c; 
# 245
throw; 
# 246
}  
# 248
delete [] __c; 
# 250
return __ret; 
# 251
} 
# 253
template< class _CharT> long 
# 256
__cxx11::collate< _CharT> ::do_hash(const _CharT *__lo, const _CharT *__hi) const 
# 257
{ 
# 258
unsigned long __val = (0); 
# 259
for (; __lo < __hi; ++__lo) { 
# 260
__val = ((*__lo) + ((__val << 7) | (__val >> (__gnu_cxx::__numeric_traits_integer< unsigned long> ::__digits - 7)))); }  
# 264
return static_cast< long>(__val); 
# 265
} 
# 270
extern template class __cxx11::collate< char> ;
# 271
extern template class __cxx11::collate_byname< char> ;
# 273
extern template const __cxx11::collate< char>  &use_facet< __cxx11::collate< char> > (const locale &);
# 277
extern template bool has_facet< __cxx11::collate< char> > (const locale &) throw();
# 282
extern template class __cxx11::collate< wchar_t> ;
# 283
extern template class __cxx11::collate_byname< wchar_t> ;
# 285
extern template const __cxx11::collate< wchar_t>  &use_facet< __cxx11::collate< wchar_t> > (const locale &);
# 289
extern template bool has_facet< __cxx11::collate< wchar_t> > (const locale &) throw();
# 296
}
# 41 "/usr/include/c++/5/stdexcept" 3
namespace std __attribute((__visibility__("default"))) { 
# 48
struct __cow_string { 
# 50
union { 
# 51
const char *_M_p; 
# 52
char _M_bytes[sizeof(const char *)]; 
# 53
}; 
# 55
__cow_string(); 
# 56
__cow_string(const __cxx11::string &); 
# 57
__cow_string(const char *, size_t); 
# 58
__cow_string(const __cow_string &) throw(); 
# 59
__cow_string &operator=(const __cow_string &) throw(); 
# 60
~__cow_string(); 
# 65
}; 
# 67
typedef __cxx11::basic_string< char, char_traits< char> , allocator< char> >  __sso_string; 
# 113 "/usr/include/c++/5/stdexcept" 3
class logic_error : public exception { 
# 115
__cow_string _M_msg; 
# 120
public: explicit logic_error(const __cxx11::string & __arg); 
# 128
logic_error(const logic_error &) throw(); 
# 129
logic_error &operator=(const logic_error &) throw(); 
# 132
virtual ~logic_error() throw(); 
# 137
virtual const char *what() const throw(); 
# 138
}; 
# 142
class domain_error : public logic_error { 
# 145
public: explicit domain_error(const __cxx11::string & __arg); 
# 149
virtual ~domain_error() throw(); 
# 150
}; 
# 153
class invalid_argument : public logic_error { 
# 156
public: explicit invalid_argument(const __cxx11::string & __arg); 
# 160
virtual ~invalid_argument() throw(); 
# 161
}; 
# 165
class length_error : public logic_error { 
# 168
public: explicit length_error(const __cxx11::string & __arg); 
# 172
virtual ~length_error() throw(); 
# 173
}; 
# 177
class out_of_range : public logic_error { 
# 180
public: explicit out_of_range(const __cxx11::string & __arg); 
# 184
virtual ~out_of_range() throw(); 
# 185
}; 
# 192
class runtime_error : public exception { 
# 194
__cow_string _M_msg; 
# 199
public: explicit runtime_error(const __cxx11::string & __arg); 
# 207
runtime_error(const runtime_error &) throw(); 
# 208
runtime_error &operator=(const runtime_error &) throw(); 
# 211
virtual ~runtime_error() throw(); 
# 216
virtual const char *what() const throw(); 
# 217
}; 
# 220
class range_error : public runtime_error { 
# 223
public: explicit range_error(const __cxx11::string & __arg); 
# 227
virtual ~range_error() throw(); 
# 228
}; 
# 231
class overflow_error : public runtime_error { 
# 234
public: explicit overflow_error(const __cxx11::string & __arg); 
# 238
virtual ~overflow_error() throw(); 
# 239
}; 
# 242
class underflow_error : public runtime_error { 
# 245
public: explicit underflow_error(const __cxx11::string & __arg); 
# 249
virtual ~underflow_error() throw(); 
# 250
}; 
# 255
}
# 49 "/usr/include/c++/5/bits/ios_base.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 57
enum _Ios_Fmtflags { 
# 59
_S_boolalpha = 1, 
# 60
_S_dec, 
# 61
_S_fixed = 4, 
# 62
_S_hex = 8, 
# 63
_S_internal = 16, 
# 64
_S_left = 32, 
# 65
_S_oct = 64, 
# 66
_S_right = 128, 
# 67
_S_scientific = 256, 
# 68
_S_showbase = 512, 
# 69
_S_showpoint = 1024, 
# 70
_S_showpos = 2048, 
# 71
_S_skipws = 4096, 
# 72
_S_unitbuf = 8192, 
# 73
_S_uppercase = 16384, 
# 74
_S_adjustfield = 176, 
# 75
_S_basefield = 74, 
# 76
_S_floatfield = 260, 
# 77
_S_ios_fmtflags_end = 65536, 
# 78
_S_ios_fmtflags_max = 2147483647, 
# 79
_S_ios_fmtflags_min = (-2147483647-1)
# 80
}; 
# 83
inline _Ios_Fmtflags operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b) 
# 84
{ return (_Ios_Fmtflags)((static_cast< int>(__a)) & (static_cast< int>(__b))); } 
# 87
inline _Ios_Fmtflags operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b) 
# 88
{ return (_Ios_Fmtflags)((static_cast< int>(__a)) | (static_cast< int>(__b))); } 
# 91
inline _Ios_Fmtflags operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b) 
# 92
{ return (_Ios_Fmtflags)((static_cast< int>(__a)) ^ (static_cast< int>(__b))); } 
# 95
inline _Ios_Fmtflags operator~(_Ios_Fmtflags __a) 
# 96
{ return (_Ios_Fmtflags)(~(static_cast< int>(__a))); } 
# 99
inline const _Ios_Fmtflags &operator|=(_Ios_Fmtflags &__a, _Ios_Fmtflags __b) 
# 100
{ return __a = ((__a | __b)); } 
# 103
inline const _Ios_Fmtflags &operator&=(_Ios_Fmtflags &__a, _Ios_Fmtflags __b) 
# 104
{ return __a = ((__a & __b)); } 
# 107
inline const _Ios_Fmtflags &operator^=(_Ios_Fmtflags &__a, _Ios_Fmtflags __b) 
# 108
{ return __a = ((__a ^ __b)); } 
# 111
enum _Ios_Openmode { 
# 113
_S_app = 1, 
# 114
_S_ate, 
# 115
_S_bin = 4, 
# 116
_S_in = 8, 
# 117
_S_out = 16, 
# 118
_S_trunc = 32, 
# 119
_S_ios_openmode_end = 65536, 
# 120
_S_ios_openmode_max = 2147483647, 
# 121
_S_ios_openmode_min = (-2147483647-1)
# 122
}; 
# 125
inline _Ios_Openmode operator&(_Ios_Openmode __a, _Ios_Openmode __b) 
# 126
{ return (_Ios_Openmode)((static_cast< int>(__a)) & (static_cast< int>(__b))); } 
# 129
inline _Ios_Openmode operator|(_Ios_Openmode __a, _Ios_Openmode __b) 
# 130
{ return (_Ios_Openmode)((static_cast< int>(__a)) | (static_cast< int>(__b))); } 
# 133
inline _Ios_Openmode operator^(_Ios_Openmode __a, _Ios_Openmode __b) 
# 134
{ return (_Ios_Openmode)((static_cast< int>(__a)) ^ (static_cast< int>(__b))); } 
# 137
inline _Ios_Openmode operator~(_Ios_Openmode __a) 
# 138
{ return (_Ios_Openmode)(~(static_cast< int>(__a))); } 
# 141
inline const _Ios_Openmode &operator|=(_Ios_Openmode &__a, _Ios_Openmode __b) 
# 142
{ return __a = ((__a | __b)); } 
# 145
inline const _Ios_Openmode &operator&=(_Ios_Openmode &__a, _Ios_Openmode __b) 
# 146
{ return __a = ((__a & __b)); } 
# 149
inline const _Ios_Openmode &operator^=(_Ios_Openmode &__a, _Ios_Openmode __b) 
# 150
{ return __a = ((__a ^ __b)); } 
# 153
enum _Ios_Iostate { 
# 155
_S_goodbit, 
# 156
_S_badbit, 
# 157
_S_eofbit, 
# 158
_S_failbit = 4, 
# 159
_S_ios_iostate_end = 65536, 
# 160
_S_ios_iostate_max = 2147483647, 
# 161
_S_ios_iostate_min = (-2147483647-1)
# 162
}; 
# 165
inline _Ios_Iostate operator&(_Ios_Iostate __a, _Ios_Iostate __b) 
# 166
{ return (_Ios_Iostate)((static_cast< int>(__a)) & (static_cast< int>(__b))); } 
# 169
inline _Ios_Iostate operator|(_Ios_Iostate __a, _Ios_Iostate __b) 
# 170
{ return (_Ios_Iostate)((static_cast< int>(__a)) | (static_cast< int>(__b))); } 
# 173
inline _Ios_Iostate operator^(_Ios_Iostate __a, _Ios_Iostate __b) 
# 174
{ return (_Ios_Iostate)((static_cast< int>(__a)) ^ (static_cast< int>(__b))); } 
# 177
inline _Ios_Iostate operator~(_Ios_Iostate __a) 
# 178
{ return (_Ios_Iostate)(~(static_cast< int>(__a))); } 
# 181
inline const _Ios_Iostate &operator|=(_Ios_Iostate &__a, _Ios_Iostate __b) 
# 182
{ return __a = ((__a | __b)); } 
# 185
inline const _Ios_Iostate &operator&=(_Ios_Iostate &__a, _Ios_Iostate __b) 
# 186
{ return __a = ((__a & __b)); } 
# 189
inline const _Ios_Iostate &operator^=(_Ios_Iostate &__a, _Ios_Iostate __b) 
# 190
{ return __a = ((__a ^ __b)); } 
# 193
enum _Ios_Seekdir { 
# 195
_S_beg, 
# 196
_S_cur, 
# 197
_S_end, 
# 198
_S_ios_seekdir_end = 65536
# 199
}; 
# 228 "/usr/include/c++/5/bits/ios_base.h" 3
class ios_base { 
# 233
struct system_error : public runtime_error { 
# 236
struct error_code { 
# 238
error_code() { } 
# 240
private: int _M_value; 
# 241
const void *_M_cat; 
# 242
} _M_code; 
# 243
}; 
# 255 "/usr/include/c++/5/bits/ios_base.h" 3
public: class __attribute((__abi_tag__("cxx11"))) failure : public system_error { 
# 259
public: explicit failure(const __cxx11::string & __str); 
# 270 "/usr/include/c++/5/bits/ios_base.h" 3
virtual ~failure() throw(); 
# 273
virtual const char *what() const throw(); 
# 274
}; 
# 323 "/usr/include/c++/5/bits/ios_base.h" 3
typedef _Ios_Fmtflags fmtflags; 
# 326
static const fmtflags boolalpha = _S_boolalpha; 
# 329
static const fmtflags dec = _S_dec; 
# 332
static const fmtflags fixed = _S_fixed; 
# 335
static const fmtflags hex = _S_hex; 
# 340
static const fmtflags internal = _S_internal; 
# 344
static const fmtflags left = _S_left; 
# 347
static const fmtflags oct = _S_oct; 
# 351
static const fmtflags right = _S_right; 
# 354
static const fmtflags scientific = _S_scientific; 
# 358
static const fmtflags showbase = _S_showbase; 
# 362
static const fmtflags showpoint = _S_showpoint; 
# 365
static const fmtflags showpos = _S_showpos; 
# 368
static const fmtflags skipws = _S_skipws; 
# 371
static const fmtflags unitbuf = _S_unitbuf; 
# 375
static const fmtflags uppercase = _S_uppercase; 
# 378
static const fmtflags adjustfield = _S_adjustfield; 
# 381
static const fmtflags basefield = _S_basefield; 
# 384
static const fmtflags floatfield = _S_floatfield; 
# 398 "/usr/include/c++/5/bits/ios_base.h" 3
typedef _Ios_Iostate iostate; 
# 402
static const iostate badbit = _S_badbit; 
# 405
static const iostate eofbit = _S_eofbit; 
# 410
static const iostate failbit = _S_failbit; 
# 413
static const iostate goodbit = _S_goodbit; 
# 429 "/usr/include/c++/5/bits/ios_base.h" 3
typedef _Ios_Openmode openmode; 
# 432
static const openmode app = _S_app; 
# 435
static const openmode ate = _S_ate; 
# 440
static const openmode binary = _S_bin; 
# 443
static const openmode in = _S_in; 
# 446
static const openmode out = _S_out; 
# 449
static const openmode trunc = _S_trunc; 
# 461 "/usr/include/c++/5/bits/ios_base.h" 3
typedef _Ios_Seekdir seekdir; 
# 464
static const seekdir beg = _S_beg; 
# 467
static const seekdir cur = _S_cur; 
# 470
static const seekdir end = _S_end; 
# 473
typedef int io_state; 
# 474
typedef int open_mode; 
# 475
typedef int seek_dir; 
# 477
typedef std::streampos streampos; 
# 478
typedef std::streamoff streamoff; 
# 487 "/usr/include/c++/5/bits/ios_base.h" 3
enum event { 
# 489
erase_event, 
# 490
imbue_event, 
# 491
copyfmt_event
# 492
}; 
# 504 "/usr/include/c++/5/bits/ios_base.h" 3
typedef void (*event_callback)(event __e, ios_base & __b, int __i); 
# 517 "/usr/include/c++/5/bits/ios_base.h" 3
void register_callback(event_callback __fn, int __index); 
# 520
protected: streamsize _M_precision; 
# 521
streamsize _M_width; 
# 522
fmtflags _M_flags; 
# 523
iostate _M_exception; 
# 524
iostate _M_streambuf_state; 
# 528
struct _Callback_list { 
# 531
_Callback_list *_M_next; 
# 532
event_callback _M_fn; 
# 533
int _M_index; 
# 534
_Atomic_word _M_refcount; 
# 536
_Callback_list(event_callback __fn, int __index, _Callback_list *
# 537
__cb) : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) 
# 538
{ } 
# 541
void _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&(_M_refcount), 1); } 
# 545
int _M_remove_reference() 
# 546
{ 
# 548
; 
# 549
int __res = __gnu_cxx::__exchange_and_add_dispatch(&(_M_refcount), -1); 
# 550
if (__res == 0) 
# 551
{ 
# 552
; 
# 553
}  
# 554
return __res; 
# 555
} 
# 556
}; 
# 558
_Callback_list *_M_callbacks; 
# 561
void _M_call_callbacks(event __ev) throw(); 
# 564
void _M_dispose_callbacks() throw(); 
# 567
struct _Words { 
# 569
void *_M_pword; 
# 570
long _M_iword; 
# 571
_Words() : _M_pword((0)), _M_iword((0)) { } 
# 572
}; 
# 575
_Words _M_word_zero; 
# 579
enum { _S_local_word_size = 8}; 
# 580
_Words _M_local_word[_S_local_word_size]; 
# 583
int _M_word_size; 
# 584
_Words *_M_word; 
# 587
_Words &_M_grow_words(int __index, bool __iword); 
# 590
locale _M_ios_locale; 
# 593
void _M_init() throw(); 
# 601
public: class Init { 
# 603
friend class ios_base; 
# 605
public: Init(); 
# 606
~Init(); 
# 609
private: static _Atomic_word _S_refcount; 
# 610
static bool _S_synced_with_stdio; 
# 611
}; 
# 619
fmtflags flags() const 
# 620
{ return _M_flags; } 
# 630 "/usr/include/c++/5/bits/ios_base.h" 3
fmtflags flags(fmtflags __fmtfl) 
# 631
{ 
# 632
fmtflags __old = _M_flags; 
# 633
(_M_flags) = __fmtfl; 
# 634
return __old; 
# 635
} 
# 646 "/usr/include/c++/5/bits/ios_base.h" 3
fmtflags setf(fmtflags __fmtfl) 
# 647
{ 
# 648
fmtflags __old = _M_flags; 
# 649
((_M_flags) |= __fmtfl); 
# 650
return __old; 
# 651
} 
# 663 "/usr/include/c++/5/bits/ios_base.h" 3
fmtflags setf(fmtflags __fmtfl, fmtflags __mask) 
# 664
{ 
# 665
fmtflags __old = _M_flags; 
# 666
((_M_flags) &= ((~__mask))); 
# 667
((_M_flags) |= ((__fmtfl & __mask))); 
# 668
return __old; 
# 669
} 
# 678
void unsetf(fmtflags __mask) 
# 679
{ ((_M_flags) &= ((~__mask))); } 
# 689 "/usr/include/c++/5/bits/ios_base.h" 3
streamsize precision() const 
# 690
{ return _M_precision; } 
# 698
streamsize precision(streamsize __prec) 
# 699
{ 
# 700
streamsize __old = _M_precision; 
# 701
(_M_precision) = __prec; 
# 702
return __old; 
# 703
} 
# 712
streamsize width() const 
# 713
{ return _M_width; } 
# 721
streamsize width(streamsize __wide) 
# 722
{ 
# 723
streamsize __old = _M_width; 
# 724
(_M_width) = __wide; 
# 725
return __old; 
# 726
} 
# 740 "/usr/include/c++/5/bits/ios_base.h" 3
static bool sync_with_stdio(bool __sync = true); 
# 752 "/usr/include/c++/5/bits/ios_base.h" 3
locale imbue(const locale & __loc) throw(); 
# 763 "/usr/include/c++/5/bits/ios_base.h" 3
locale getloc() const 
# 764
{ return _M_ios_locale; } 
# 774 "/usr/include/c++/5/bits/ios_base.h" 3
const locale &_M_getloc() const 
# 775
{ return _M_ios_locale; } 
# 793 "/usr/include/c++/5/bits/ios_base.h" 3
static int xalloc() throw(); 
# 809 "/usr/include/c++/5/bits/ios_base.h" 3
long &iword(int __ix) 
# 810
{ 
# 811
_Words &__word = (__ix < (_M_word_size)) ? (_M_word)[__ix] : this->_M_grow_words(__ix, true); 
# 813
return __word._M_iword; 
# 814
} 
# 830 "/usr/include/c++/5/bits/ios_base.h" 3
void *&pword(int __ix) 
# 831
{ 
# 832
_Words &__word = (__ix < (_M_word_size)) ? (_M_word)[__ix] : this->_M_grow_words(__ix, false); 
# 834
return __word._M_pword; 
# 835
} 
# 846 "/usr/include/c++/5/bits/ios_base.h" 3
virtual ~ios_base(); 
# 849
protected: ios_base() throw(); 
# 855
private: ios_base(const ios_base &); 
# 858
ios_base &operator=(const ios_base &); 
# 873 "/usr/include/c++/5/bits/ios_base.h" 3
}; 
# 878
inline ios_base &boolalpha(ios_base &__base) 
# 879
{ 
# 880
__base.setf(ios_base::boolalpha); 
# 881
return __base; 
# 882
} 
# 886
inline ios_base &noboolalpha(ios_base &__base) 
# 887
{ 
# 888
__base.unsetf(ios_base::boolalpha); 
# 889
return __base; 
# 890
} 
# 894
inline ios_base &showbase(ios_base &__base) 
# 895
{ 
# 896
__base.setf(ios_base::showbase); 
# 897
return __base; 
# 898
} 
# 902
inline ios_base &noshowbase(ios_base &__base) 
# 903
{ 
# 904
__base.unsetf(ios_base::showbase); 
# 905
return __base; 
# 906
} 
# 910
inline ios_base &showpoint(ios_base &__base) 
# 911
{ 
# 912
__base.setf(ios_base::showpoint); 
# 913
return __base; 
# 914
} 
# 918
inline ios_base &noshowpoint(ios_base &__base) 
# 919
{ 
# 920
__base.unsetf(ios_base::showpoint); 
# 921
return __base; 
# 922
} 
# 926
inline ios_base &showpos(ios_base &__base) 
# 927
{ 
# 928
__base.setf(ios_base::showpos); 
# 929
return __base; 
# 930
} 
# 934
inline ios_base &noshowpos(ios_base &__base) 
# 935
{ 
# 936
__base.unsetf(ios_base::showpos); 
# 937
return __base; 
# 938
} 
# 942
inline ios_base &skipws(ios_base &__base) 
# 943
{ 
# 944
__base.setf(ios_base::skipws); 
# 945
return __base; 
# 946
} 
# 950
inline ios_base &noskipws(ios_base &__base) 
# 951
{ 
# 952
__base.unsetf(ios_base::skipws); 
# 953
return __base; 
# 954
} 
# 958
inline ios_base &uppercase(ios_base &__base) 
# 959
{ 
# 960
__base.setf(ios_base::uppercase); 
# 961
return __base; 
# 962
} 
# 966
inline ios_base &nouppercase(ios_base &__base) 
# 967
{ 
# 968
__base.unsetf(ios_base::uppercase); 
# 969
return __base; 
# 970
} 
# 974
inline ios_base &unitbuf(ios_base &__base) 
# 975
{ 
# 976
__base.setf(ios_base::unitbuf); 
# 977
return __base; 
# 978
} 
# 982
inline ios_base &nounitbuf(ios_base &__base) 
# 983
{ 
# 984
__base.unsetf(ios_base::unitbuf); 
# 985
return __base; 
# 986
} 
# 991
inline ios_base &internal(ios_base &__base) 
# 992
{ 
# 993
__base.setf(ios_base::internal, ios_base::adjustfield); 
# 994
return __base; 
# 995
} 
# 999
inline ios_base &left(ios_base &__base) 
# 1000
{ 
# 1001
__base.setf(ios_base::left, ios_base::adjustfield); 
# 1002
return __base; 
# 1003
} 
# 1007
inline ios_base &right(ios_base &__base) 
# 1008
{ 
# 1009
__base.setf(ios_base::right, ios_base::adjustfield); 
# 1010
return __base; 
# 1011
} 
# 1016
inline ios_base &dec(ios_base &__base) 
# 1017
{ 
# 1018
__base.setf(ios_base::dec, ios_base::basefield); 
# 1019
return __base; 
# 1020
} 
# 1024
inline ios_base &hex(ios_base &__base) 
# 1025
{ 
# 1026
__base.setf(ios_base::hex, ios_base::basefield); 
# 1027
return __base; 
# 1028
} 
# 1032
inline ios_base &oct(ios_base &__base) 
# 1033
{ 
# 1034
__base.setf(ios_base::oct, ios_base::basefield); 
# 1035
return __base; 
# 1036
} 
# 1041
inline ios_base &fixed(ios_base &__base) 
# 1042
{ 
# 1043
__base.setf(ios_base::fixed, ios_base::floatfield); 
# 1044
return __base; 
# 1045
} 
# 1049
inline ios_base &scientific(ios_base &__base) 
# 1050
{ 
# 1051
__base.setf(ios_base::scientific, ios_base::floatfield); 
# 1052
return __base; 
# 1053
} 
# 1077 "/usr/include/c++/5/bits/ios_base.h" 3
}
# 45 "/usr/include/c++/5/streambuf" 3
namespace std __attribute((__visibility__("default"))) { 
# 49
template< class _CharT, class _Traits> streamsize __copy_streambufs_eof(basic_streambuf< _CharT, _Traits>  *, basic_streambuf< _CharT, _Traits>  *, bool &); 
# 119 "/usr/include/c++/5/streambuf" 3
template< class _CharT, class _Traits> 
# 120
class basic_streambuf { 
# 129
public: typedef _CharT char_type; 
# 130
typedef _Traits traits_type; 
# 131
typedef typename _Traits::int_type int_type; 
# 132
typedef typename _Traits::pos_type pos_type; 
# 133
typedef typename _Traits::off_type off_type; 
# 138
typedef basic_streambuf __streambuf_type; 
# 141
friend class basic_ios< _CharT, _Traits> ; 
# 142
friend class basic_istream< _CharT, _Traits> ; 
# 143
friend class basic_ostream< _CharT, _Traits> ; 
# 144
friend class istreambuf_iterator< _CharT, _Traits> ; 
# 145
friend class ostreambuf_iterator< _CharT, _Traits> ; 
# 148
friend streamsize __copy_streambufs_eof<> (basic_streambuf *, basic_streambuf *, bool &); 
# 150
template< bool _IsMove, class _CharT2> friend typename __gnu_cxx::__enable_if< __is_char< _CharT2> ::__value, _CharT2 *> ::__type __copy_move_a2(istreambuf_iterator< _CharT2, char_traits< _CharT2> > , istreambuf_iterator< _CharT2, char_traits< _CharT2> > , _CharT2 *); 
# 156
template< class _CharT2> friend typename __gnu_cxx::__enable_if< __is_char< _CharT2> ::__value, istreambuf_iterator< _CharT2, char_traits< _CharT2> > > ::__type find(istreambuf_iterator< _CharT2, char_traits< _CharT2> > , istreambuf_iterator< _CharT2, char_traits< _CharT2> > , const _CharT2 &); 
# 162
template< class _CharT2, class _Traits2> friend basic_istream< _CharT2, _Traits2>  &operator>>(basic_istream< _CharT2, _Traits2>  &, _CharT2 *); 
# 166
template< class _CharT2, class _Traits2, class _Alloc> friend basic_istream< _CharT2, _Traits2>  &operator>>(basic_istream< _CharT2, _Traits2>  &, __cxx11::basic_string< _CharT2, _Traits2, _Alloc>  &); 
# 171
template< class _CharT2, class _Traits2, class _Alloc> friend basic_istream< _CharT2, _Traits2>  &getline(basic_istream< _CharT2, _Traits2>  &, __cxx11::basic_string< _CharT2, _Traits2, _Alloc>  &, _CharT2); 
# 184
protected: char_type *_M_in_beg; 
# 185
char_type *_M_in_cur; 
# 186
char_type *_M_in_end; 
# 187
char_type *_M_out_beg; 
# 188
char_type *_M_out_cur; 
# 189
char_type *_M_out_end; 
# 192
locale _M_buf_locale; 
# 197
public: virtual ~basic_streambuf() 
# 198
{ } 
# 209 "/usr/include/c++/5/streambuf" 3
locale pubimbue(const locale &__loc) 
# 210
{ 
# 211
locale __tmp(this->getloc()); 
# 212
this->imbue(__loc); 
# 213
((_M_buf_locale) = __loc); 
# 214
return __tmp; 
# 215
} 
# 226 "/usr/include/c++/5/streambuf" 3
locale getloc() const 
# 227
{ return _M_buf_locale; } 
# 239 "/usr/include/c++/5/streambuf" 3
basic_streambuf *pubsetbuf(char_type *__s, streamsize __n) 
# 240
{ return this->setbuf(__s, __n); } 
# 251 "/usr/include/c++/5/streambuf" 3
pos_type pubseekoff(off_type __off, ios_base::seekdir __way, ios_base::openmode 
# 252
__mode = (ios_base::in | ios_base::out)) 
# 253
{ return this->seekoff(__off, __way, __mode); } 
# 263 "/usr/include/c++/5/streambuf" 3
pos_type pubseekpos(pos_type __sp, ios_base::openmode 
# 264
__mode = (ios_base::in | ios_base::out)) 
# 265
{ return this->seekpos(__sp, __mode); } 
# 271
int pubsync() { return this->sync(); } 
# 284 "/usr/include/c++/5/streambuf" 3
streamsize in_avail() 
# 285
{ 
# 286
const streamsize __ret = this->egptr() - this->gptr(); 
# 287
return (__ret) ? __ret : this->showmanyc(); 
# 288
} 
# 298 "/usr/include/c++/5/streambuf" 3
int_type snextc() 
# 299
{ 
# 300
int_type __ret = traits_type::eof(); 
# 301
if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(), __ret), true)) { 
# 303
__ret = this->sgetc(); }  
# 304
return __ret; 
# 305
} 
# 316 "/usr/include/c++/5/streambuf" 3
int_type sbumpc() 
# 317
{ 
# 318
int_type __ret; 
# 319
if (__builtin_expect(this->gptr() < this->egptr(), true)) 
# 320
{ 
# 321
__ret = traits_type::to_int_type(*this->gptr()); 
# 322
this->gbump(1); 
# 323
} else { 
# 325
__ret = this->uflow(); }  
# 326
return __ret; 
# 327
} 
# 338 "/usr/include/c++/5/streambuf" 3
int_type sgetc() 
# 339
{ 
# 340
int_type __ret; 
# 341
if (__builtin_expect(this->gptr() < this->egptr(), true)) { 
# 342
__ret = traits_type::to_int_type(*this->gptr()); } else { 
# 344
__ret = this->underflow(); }  
# 345
return __ret; 
# 346
} 
# 357 "/usr/include/c++/5/streambuf" 3
streamsize sgetn(char_type *__s, streamsize __n) 
# 358
{ return this->xsgetn(__s, __n); } 
# 372 "/usr/include/c++/5/streambuf" 3
int_type sputbackc(char_type __c) 
# 373
{ 
# 374
int_type __ret; 
# 375
const bool __testpos = this->eback() < this->gptr(); 
# 376
if (__builtin_expect((!__testpos) || (!traits_type::eq(__c, this->gptr()[-1])), false)) { 
# 378
__ret = this->pbackfail(traits_type::to_int_type(__c)); } else 
# 380
{ 
# 381
this->gbump(-1); 
# 382
__ret = traits_type::to_int_type(*this->gptr()); 
# 383
}  
# 384
return __ret; 
# 385
} 
# 397 "/usr/include/c++/5/streambuf" 3
int_type sungetc() 
# 398
{ 
# 399
int_type __ret; 
# 400
if (__builtin_expect(this->eback() < this->gptr(), true)) 
# 401
{ 
# 402
this->gbump(-1); 
# 403
__ret = traits_type::to_int_type(*this->gptr()); 
# 404
} else { 
# 406
__ret = this->pbackfail(); }  
# 407
return __ret; 
# 408
} 
# 424 "/usr/include/c++/5/streambuf" 3
int_type sputc(char_type __c) 
# 425
{ 
# 426
int_type __ret; 
# 427
if (__builtin_expect(this->pptr() < this->epptr(), true)) 
# 428
{ 
# 429
(*this->pptr()) = __c; 
# 430
this->pbump(1); 
# 431
__ret = traits_type::to_int_type(__c); 
# 432
} else { 
# 434
__ret = this->overflow(traits_type::to_int_type(__c)); }  
# 435
return __ret; 
# 436
} 
# 450 "/usr/include/c++/5/streambuf" 3
streamsize sputn(const char_type *__s, streamsize __n) 
# 451
{ return this->xsputn(__s, __n); } 
# 463 "/usr/include/c++/5/streambuf" 3
protected: basic_streambuf() : _M_in_beg((0)), _M_in_cur((0)), _M_in_end((0)), _M_out_beg((0)), _M_out_cur((0)), _M_out_end((0)), _M_buf_locale(locale()) 
# 467
{ } 
# 482 "/usr/include/c++/5/streambuf" 3
char_type *eback() const { return _M_in_beg; } 
# 485
char_type *gptr() const { return _M_in_cur; } 
# 488
char_type *egptr() const { return _M_in_end; } 
# 498 "/usr/include/c++/5/streambuf" 3
void gbump(int __n) { (_M_in_cur) += __n; } 
# 509 "/usr/include/c++/5/streambuf" 3
void setg(char_type *__gbeg, char_type *__gnext, char_type *__gend) 
# 510
{ 
# 511
(_M_in_beg) = __gbeg; 
# 512
(_M_in_cur) = __gnext; 
# 513
(_M_in_end) = __gend; 
# 514
} 
# 529 "/usr/include/c++/5/streambuf" 3
char_type *pbase() const { return _M_out_beg; } 
# 532
char_type *pptr() const { return _M_out_cur; } 
# 535
char_type *epptr() const { return _M_out_end; } 
# 545 "/usr/include/c++/5/streambuf" 3
void pbump(int __n) { (_M_out_cur) += __n; } 
# 555 "/usr/include/c++/5/streambuf" 3
void setp(char_type *__pbeg, char_type *__pend) 
# 556
{ 
# 557
(_M_out_beg) = ((_M_out_cur) = __pbeg); 
# 558
(_M_out_end) = __pend; 
# 559
} 
# 576 "/usr/include/c++/5/streambuf" 3
virtual void imbue(const locale &__loc) 
# 577
{ } 
# 591 "/usr/include/c++/5/streambuf" 3
virtual basic_streambuf *setbuf(char_type *, streamsize) 
# 592
{ return this; } 
# 602 "/usr/include/c++/5/streambuf" 3
virtual pos_type seekoff(off_type, ios_base::seekdir, ios_base::openmode = (ios_base::in | ios_base::out)) 
# 604
{ return (pos_type)((off_type)(-1)); } 
# 614 "/usr/include/c++/5/streambuf" 3
virtual pos_type seekpos(pos_type, ios_base::openmode = (ios_base::in | ios_base::out)) 
# 616
{ return (pos_type)((off_type)(-1)); } 
# 627 "/usr/include/c++/5/streambuf" 3
virtual int sync() { return 0; } 
# 649 "/usr/include/c++/5/streambuf" 3
virtual streamsize showmanyc() { return 0; } 
# 665 "/usr/include/c++/5/streambuf" 3
virtual streamsize xsgetn(char_type * __s, streamsize __n); 
# 687 "/usr/include/c++/5/streambuf" 3
virtual int_type underflow() 
# 688
{ return traits_type::eof(); } 
# 700 "/usr/include/c++/5/streambuf" 3
virtual int_type uflow() 
# 701
{ 
# 702
int_type __ret = traits_type::eof(); 
# 703
const bool __testeof = traits_type::eq_int_type(this->underflow(), __ret); 
# 705
if (!__testeof) 
# 706
{ 
# 707
__ret = traits_type::to_int_type(*this->gptr()); 
# 708
this->gbump(1); 
# 709
}  
# 710
return __ret; 
# 711
} 
# 724 "/usr/include/c++/5/streambuf" 3
virtual int_type pbackfail(int_type __c = traits_type::eof()) 
# 725
{ return traits_type::eof(); } 
# 742 "/usr/include/c++/5/streambuf" 3
virtual streamsize xsputn(const char_type * __s, streamsize __n); 
# 768 "/usr/include/c++/5/streambuf" 3
virtual int_type overflow(int_type __c = traits_type::eof()) 
# 769
{ return traits_type::eof(); } 
# 783 "/usr/include/c++/5/streambuf" 3
public: void stossc() 
# 784
{ 
# 785
if (this->gptr() < this->egptr()) { 
# 786
this->gbump(1); } else { 
# 788
this->uflow(); }  
# 789
} 
# 794
void __safe_gbump(streamsize __n) { (_M_in_cur) += __n; } 
# 797
void __safe_pbump(streamsize __n) { (_M_out_cur) += __n; } 
# 804
private: basic_streambuf(const basic_streambuf &); 
# 807
basic_streambuf &operator=(const basic_streambuf &); 
# 822 "/usr/include/c++/5/streambuf" 3
}; 
# 838 "/usr/include/c++/5/streambuf" 3
template<> streamsize __copy_streambufs_eof(basic_streambuf< char, char_traits< char> >  * __sbin, basic_streambuf< char, char_traits< char> >  * __sbout, bool & __ineof); 
# 843
template<> streamsize __copy_streambufs_eof(basic_streambuf< wchar_t, char_traits< wchar_t> >  * __sbin, basic_streambuf< wchar_t, char_traits< wchar_t> >  * __sbout, bool & __ineof); 
# 848
}
# 39 "/usr/include/c++/5/bits/streambuf.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 43
template< class _CharT, class _Traits> streamsize 
# 46
basic_streambuf< _CharT, _Traits> ::xsgetn(char_type *__s, streamsize __n) 
# 47
{ 
# 48
streamsize __ret = (0); 
# 49
while (__ret < __n) 
# 50
{ 
# 51
const streamsize __buf_len = this->egptr() - this->gptr(); 
# 52
if (__buf_len) 
# 53
{ 
# 54
const streamsize __remaining = __n - __ret; 
# 55
const streamsize __len = std::min(__buf_len, __remaining); 
# 56
traits_type::copy(__s, this->gptr(), __len); 
# 57
__ret += __len; 
# 58
__s += __len; 
# 59
this->__safe_gbump(__len); 
# 60
}  
# 62
if (__ret < __n) 
# 63
{ 
# 64
const int_type __c = this->uflow(); 
# 65
if (!traits_type::eq_int_type(__c, traits_type::eof())) 
# 66
{ 
# 67
traits_type::assign(*(__s++), traits_type::to_char_type(__c)); 
# 68
++__ret; 
# 69
} else { 
# 71
break; }  
# 72
}  
# 73
}  
# 74
return __ret; 
# 75
} 
# 77
template< class _CharT, class _Traits> streamsize 
# 80
basic_streambuf< _CharT, _Traits> ::xsputn(const char_type *__s, streamsize __n) 
# 81
{ 
# 82
streamsize __ret = (0); 
# 83
while (__ret < __n) 
# 84
{ 
# 85
const streamsize __buf_len = this->epptr() - this->pptr(); 
# 86
if (__buf_len) 
# 87
{ 
# 88
const streamsize __remaining = __n - __ret; 
# 89
const streamsize __len = std::min(__buf_len, __remaining); 
# 90
traits_type::copy(this->pptr(), __s, __len); 
# 91
__ret += __len; 
# 92
__s += __len; 
# 93
this->__safe_pbump(__len); 
# 94
}  
# 96
if (__ret < __n) 
# 97
{ 
# 98
int_type __c = this->overflow(traits_type::to_int_type(*__s)); 
# 99
if (!traits_type::eq_int_type(__c, traits_type::eof())) 
# 100
{ 
# 101
++__ret; 
# 102
++__s; 
# 103
} else { 
# 105
break; }  
# 106
}  
# 107
}  
# 108
return __ret; 
# 109
} 
# 114
template< class _CharT, class _Traits> streamsize 
# 116
__copy_streambufs_eof(basic_streambuf< _CharT, _Traits>  *__sbin, basic_streambuf< _CharT, _Traits>  *
# 117
__sbout, bool &
# 118
__ineof) 
# 119
{ 
# 120
streamsize __ret = (0); 
# 121
__ineof = true; 
# 122
typename _Traits::int_type __c = (__sbin->sgetc()); 
# 123
while (!_Traits::eq_int_type(__c, _Traits::eof())) 
# 124
{ 
# 125
__c = (__sbout->sputc(_Traits::to_char_type(__c))); 
# 126
if (_Traits::eq_int_type(__c, _Traits::eof())) 
# 127
{ 
# 128
__ineof = false; 
# 129
break; 
# 130
}  
# 131
++__ret; 
# 132
__c = (__sbin->snextc()); 
# 133
}  
# 134
return __ret; 
# 135
} 
# 137
template< class _CharT, class _Traits> inline streamsize 
# 139
__copy_streambufs(basic_streambuf< _CharT, _Traits>  *__sbin, basic_streambuf< _CharT, _Traits>  *
# 140
__sbout) 
# 141
{ 
# 142
bool __ineof; 
# 143
return __copy_streambufs_eof(__sbin, __sbout, __ineof); 
# 144
} 
# 149
extern template class basic_streambuf< char, char_traits< char> > ;
# 150
extern template streamsize __copy_streambufs(basic_streambuf< char, char_traits< char> >  * __sbin, basic_streambuf< char, char_traits< char> >  * __sbout);
# 154
extern template streamsize __copy_streambufs_eof< char, char_traits< char> > (basic_streambuf< char, char_traits< char> >  *, basic_streambuf< char, char_traits< char> >  *, bool &);
# 160
extern template class basic_streambuf< wchar_t, char_traits< wchar_t> > ;
# 161
extern template streamsize __copy_streambufs(basic_streambuf< wchar_t, char_traits< wchar_t> >  * __sbin, basic_streambuf< wchar_t, char_traits< wchar_t> >  * __sbout);
# 165
extern template streamsize __copy_streambufs_eof< wchar_t, char_traits< wchar_t> > (basic_streambuf< wchar_t, char_traits< wchar_t> >  *, basic_streambuf< wchar_t, char_traits< wchar_t> >  *, bool &);
# 173
}
# 52 "/usr/include/wctype.h" 3
typedef unsigned long wctype_t; 
# 72 "/usr/include/wctype.h" 3
enum { 
# 73
__ISwupper, 
# 74
__ISwlower, 
# 75
__ISwalpha, 
# 76
__ISwdigit, 
# 77
__ISwxdigit, 
# 78
__ISwspace, 
# 79
__ISwprint, 
# 80
__ISwgraph, 
# 81
__ISwblank, 
# 82
__ISwcntrl, 
# 83
__ISwpunct, 
# 84
__ISwalnum, 
# 86
_ISwupper = 16777216, 
# 87
_ISwlower = 33554432, 
# 88
_ISwalpha = 67108864, 
# 89
_ISwdigit = 134217728, 
# 90
_ISwxdigit = 268435456, 
# 91
_ISwspace = 536870912, 
# 92
_ISwprint = 1073741824, 
# 93
_ISwgraph = (-2147483647-1), 
# 94
_ISwblank = 65536, 
# 95
_ISwcntrl = 131072, 
# 96
_ISwpunct = 262144, 
# 97
_ISwalnum = 524288
# 98
}; 
# 102
extern "C" {
# 111
extern int iswalnum(wint_t __wc) throw(); 
# 117
extern int iswalpha(wint_t __wc) throw(); 
# 120
extern int iswcntrl(wint_t __wc) throw(); 
# 124
extern int iswdigit(wint_t __wc) throw(); 
# 128
extern int iswgraph(wint_t __wc) throw(); 
# 133
extern int iswlower(wint_t __wc) throw(); 
# 136
extern int iswprint(wint_t __wc) throw(); 
# 141
extern int iswpunct(wint_t __wc) throw(); 
# 146
extern int iswspace(wint_t __wc) throw(); 
# 151
extern int iswupper(wint_t __wc) throw(); 
# 156
extern int iswxdigit(wint_t __wc) throw(); 
# 162
extern int iswblank(wint_t __wc) throw(); 
# 171 "/usr/include/wctype.h" 3
extern wctype_t wctype(const char * __property) throw(); 
# 175
extern int iswctype(wint_t __wc, wctype_t __desc) throw(); 
# 186
typedef const __int32_t *wctrans_t; 
# 194
extern wint_t towlower(wint_t __wc) throw(); 
# 197
extern wint_t towupper(wint_t __wc) throw(); 
# 200
}
# 213 "/usr/include/wctype.h" 3
extern "C" {
# 218
extern wctrans_t wctrans(const char * __property) throw(); 
# 221
extern wint_t towctrans(wint_t __wc, wctrans_t __desc) throw(); 
# 230
extern int iswalnum_l(wint_t __wc, __locale_t __locale) throw(); 
# 236
extern int iswalpha_l(wint_t __wc, __locale_t __locale) throw(); 
# 239
extern int iswcntrl_l(wint_t __wc, __locale_t __locale) throw(); 
# 243
extern int iswdigit_l(wint_t __wc, __locale_t __locale) throw(); 
# 247
extern int iswgraph_l(wint_t __wc, __locale_t __locale) throw(); 
# 252
extern int iswlower_l(wint_t __wc, __locale_t __locale) throw(); 
# 255
extern int iswprint_l(wint_t __wc, __locale_t __locale) throw(); 
# 260
extern int iswpunct_l(wint_t __wc, __locale_t __locale) throw(); 
# 265
extern int iswspace_l(wint_t __wc, __locale_t __locale) throw(); 
# 270
extern int iswupper_l(wint_t __wc, __locale_t __locale) throw(); 
# 275
extern int iswxdigit_l(wint_t __wc, __locale_t __locale) throw(); 
# 280
extern int iswblank_l(wint_t __wc, __locale_t __locale) throw(); 
# 284
extern wctype_t wctype_l(const char * __property, __locale_t __locale) throw(); 
# 289
extern int iswctype_l(wint_t __wc, wctype_t __desc, __locale_t __locale) throw(); 
# 298
extern wint_t towlower_l(wint_t __wc, __locale_t __locale) throw(); 
# 301
extern wint_t towupper_l(wint_t __wc, __locale_t __locale) throw(); 
# 305
extern wctrans_t wctrans_l(const char * __property, __locale_t __locale) throw(); 
# 309
extern wint_t towctrans_l(wint_t __wc, wctrans_t __desc, __locale_t __locale) throw(); 
# 314
}
# 80 "/usr/include/c++/5/cwctype" 3
namespace std { 
# 82
using ::wctrans_t;
# 83
using ::wctype_t;
# 86
using ::iswalnum;
# 87
using ::iswalpha;
# 89
using ::iswblank;
# 91
using ::iswcntrl;
# 92
using ::iswctype;
# 93
using ::iswdigit;
# 94
using ::iswgraph;
# 95
using ::iswlower;
# 96
using ::iswprint;
# 97
using ::iswpunct;
# 98
using ::iswspace;
# 99
using ::iswupper;
# 100
using ::iswxdigit;
# 101
using ::towctrans;
# 102
using ::towlower;
# 103
using ::towupper;
# 104
using ::wctrans;
# 105
using ::wctype;
# 106
}
# 36 "/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_base.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 41
struct ctype_base { 
# 44
typedef const int *__to_type; 
# 48
typedef unsigned short mask; 
# 49
static const mask upper = (_ISupper); 
# 50
static const mask lower = (_ISlower); 
# 51
static const mask alpha = (_ISalpha); 
# 52
static const mask digit = (_ISdigit); 
# 53
static const mask xdigit = (_ISxdigit); 
# 54
static const mask space = (_ISspace); 
# 55
static const mask print = (_ISprint); 
# 56
static const mask graph = (((_ISalpha) | (_ISdigit)) | (_ISpunct)); 
# 57
static const mask cntrl = (_IScntrl); 
# 58
static const mask punct = (_ISpunct); 
# 59
static const mask alnum = ((_ISalpha) | (_ISdigit)); 
# 63
}; 
# 66
}
# 38 "/usr/include/c++/5/bits/streambuf_iterator.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 49 "/usr/include/c++/5/bits/streambuf_iterator.h" 3
template< class _CharT, class _Traits> 
# 50
class istreambuf_iterator : public iterator< input_iterator_tag, _CharT, typename _Traits::off_type, _CharT *, _CharT &>  { 
# 64
public: typedef _CharT char_type; 
# 65
typedef _Traits traits_type; 
# 66
typedef typename _Traits::int_type int_type; 
# 67
typedef basic_streambuf< _CharT, _Traits>  streambuf_type; 
# 68
typedef basic_istream< _CharT, _Traits>  istream_type; 
# 71
template< class _CharT2> friend typename ::__gnu_cxx::__enable_if< __is_char< _CharT2> ::__value, ostreambuf_iterator< _CharT2, char_traits< _CharT2> > > ::__type copy(::std::istreambuf_iterator< _CharT2, char_traits< _CharT2> > , ::std::istreambuf_iterator< _CharT2, char_traits< _CharT2> > , ostreambuf_iterator< _CharT2, char_traits< _CharT2> > ); 
# 77
template< bool _IsMove, class _CharT2> friend typename ::__gnu_cxx::__enable_if< __is_char< _CharT2> ::__value, _CharT2 *> ::__type __copy_move_a2(::std::istreambuf_iterator< _CharT2, char_traits< _CharT2> > , ::std::istreambuf_iterator< _CharT2, char_traits< _CharT2> > , _CharT2 *); 
# 83
template< class _CharT2> friend typename ::__gnu_cxx::__enable_if< __is_char< _CharT2> ::__value, ::std::istreambuf_iterator< _CharT2, char_traits< _CharT2> > > ::__type find(::std::istreambuf_iterator< _CharT2, char_traits< _CharT2> > , ::std::istreambuf_iterator< _CharT2, char_traits< _CharT2> > , const _CharT2 &); 
# 97
private: mutable streambuf_type *_M_sbuf; 
# 98
mutable int_type _M_c; 
# 102
public: istreambuf_iterator() throw() : _M_sbuf((0)), _M_c(traits_type::eof()) 
# 103
{ } 
# 112 "/usr/include/c++/5/bits/streambuf_iterator.h" 3
istreambuf_iterator(istream_type &__s) throw() : _M_sbuf((__s.rdbuf())), _M_c(traits_type::eof()) 
# 113
{ } 
# 116
istreambuf_iterator(streambuf_type *__s) throw() : _M_sbuf(__s), _M_c(traits_type::eof()) 
# 117
{ } 
# 123
char_type operator*() const 
# 124
{ 
# 132
return traits_type::to_char_type(_M_get()); 
# 133
} 
# 137
istreambuf_iterator &operator++() 
# 138
{ 
# 141
; 
# 142
if (_M_sbuf) 
# 143
{ 
# 144
((_M_sbuf)->sbumpc()); 
# 145
(_M_c) = traits_type::eof(); 
# 146
}  
# 147
return *this; 
# 148
} 
# 152
istreambuf_iterator operator++(int) 
# 153
{ 
# 156
; 
# 158
istreambuf_iterator __old = *this; 
# 159
if (_M_sbuf) 
# 160
{ 
# 161
(__old._M_c) = ((_M_sbuf)->sbumpc()); 
# 162
(_M_c) = traits_type::eof(); 
# 163
}  
# 164
return __old; 
# 165
} 
# 172
bool equal(const istreambuf_iterator &__b) const 
# 173
{ return _M_at_eof() == (__b._M_at_eof()); } 
# 177
private: int_type _M_get() const 
# 178
{ 
# 179
const int_type __eof = traits_type::eof(); 
# 180
int_type __ret = __eof; 
# 181
if (_M_sbuf) 
# 182
{ 
# 183
if (!traits_type::eq_int_type(_M_c, __eof)) { 
# 184
__ret = (_M_c); } else { 
# 185
if (!traits_type::eq_int_type(__ret = ((_M_sbuf)->sgetc()), __eof)) { 
# 187
(_M_c) = __ret; } else { 
# 189
(_M_sbuf) = 0; }  }  
# 190
}  
# 191
return __ret; 
# 192
} 
# 195
bool _M_at_eof() const 
# 196
{ 
# 197
const int_type __eof = traits_type::eof(); 
# 198
return traits_type::eq_int_type(_M_get(), __eof); 
# 199
} 
# 200
}; 
# 202
template< class _CharT, class _Traits> inline bool 
# 204
operator==(const istreambuf_iterator< _CharT, _Traits>  &__a, const istreambuf_iterator< _CharT, _Traits>  &
# 205
__b) 
# 206
{ return (__a.equal(__b)); } 
# 208
template< class _CharT, class _Traits> inline bool 
# 210
operator!=(const istreambuf_iterator< _CharT, _Traits>  &__a, const istreambuf_iterator< _CharT, _Traits>  &
# 211
__b) 
# 212
{ return !(__a.equal(__b)); } 
# 215
template< class _CharT, class _Traits> 
# 216
class ostreambuf_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 223
public: typedef _CharT char_type; 
# 224
typedef _Traits traits_type; 
# 225
typedef basic_streambuf< _CharT, _Traits>  streambuf_type; 
# 226
typedef basic_ostream< _CharT, _Traits>  ostream_type; 
# 229
template< class _CharT2> friend typename __gnu_cxx::__enable_if< __is_char< _CharT2> ::__value, std::ostreambuf_iterator< _CharT2, char_traits< _CharT2> > > ::__type copy(istreambuf_iterator< _CharT2, char_traits< _CharT2> > , istreambuf_iterator< _CharT2, char_traits< _CharT2> > , std::ostreambuf_iterator< _CharT2, char_traits< _CharT2> > ); 
# 236
private: streambuf_type *_M_sbuf; 
# 237
bool _M_failed; 
# 241
public: ostreambuf_iterator(ostream_type &__s) throw() : _M_sbuf((__s.rdbuf())), _M_failed(!(_M_sbuf)) 
# 242
{ } 
# 245
ostreambuf_iterator(streambuf_type *__s) throw() : _M_sbuf(__s), _M_failed(!(_M_sbuf)) 
# 246
{ } 
# 250
ostreambuf_iterator &operator=(_CharT __c) 
# 251
{ 
# 252
if ((!(_M_failed)) && _Traits::eq_int_type(((_M_sbuf)->sputc(__c)), _Traits::eof())) { 
# 254
(_M_failed) = true; }  
# 255
return *this; 
# 256
} 
# 260
ostreambuf_iterator &operator*() 
# 261
{ return *this; } 
# 265
ostreambuf_iterator &operator++(int) 
# 266
{ return *this; } 
# 270
ostreambuf_iterator &operator++() 
# 271
{ return *this; } 
# 275
bool failed() const throw() 
# 276
{ return _M_failed; } 
# 279
ostreambuf_iterator &_M_put(const _CharT *__ws, streamsize __len) 
# 280
{ 
# 281
if ((__builtin_expect(!(_M_failed), true)) && (__builtin_expect(((this->_M_sbuf)->sputn(__ws, __len)) != __len, false))) { 
# 284
(_M_failed) = true; }  
# 285
return *this; 
# 286
} 
# 287
}; 
# 290
template< class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type 
# 293
copy(istreambuf_iterator< _CharT, char_traits< _CharT> >  __first, istreambuf_iterator< _CharT, char_traits< _CharT> >  
# 294
__last, ostreambuf_iterator< _CharT, char_traits< _CharT> >  
# 295
__result) 
# 296
{ 
# 297
if ((__first._M_sbuf) && (!(__last._M_sbuf)) && (!(__result._M_failed))) 
# 298
{ 
# 299
bool __ineof; 
# 300
__copy_streambufs_eof((__first._M_sbuf), (__result._M_sbuf), __ineof); 
# 301
if (!__ineof) { 
# 302
(__result._M_failed) = true; }  
# 303
}  
# 304
return __result; 
# 305
} 
# 307
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type 
# 310
__copy_move_a2(_CharT *__first, _CharT *__last, ostreambuf_iterator< _CharT, char_traits< _CharT> >  
# 311
__result) 
# 312
{ 
# 313
const streamsize __num = __last - __first; 
# 314
if (__num > (0)) { 
# 315
(__result._M_put(__first, __num)); }  
# 316
return __result; 
# 317
} 
# 319
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type 
# 322
__copy_move_a2(const _CharT *__first, const _CharT *__last, ostreambuf_iterator< _CharT, char_traits< _CharT> >  
# 323
__result) 
# 324
{ 
# 325
const streamsize __num = __last - __first; 
# 326
if (__num > (0)) { 
# 327
(__result._M_put(__first, __num)); }  
# 328
return __result; 
# 329
} 
# 331
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _CharT *> ::__type 
# 334
__copy_move_a2(istreambuf_iterator< _CharT, char_traits< _CharT> >  __first, istreambuf_iterator< _CharT, char_traits< _CharT> >  
# 335
__last, _CharT *__result) 
# 336
{ 
# 337
typedef istreambuf_iterator< _CharT, char_traits< _CharT> >  __is_iterator_type; 
# 338
typedef typename istreambuf_iterator< _CharT, char_traits< _CharT> > ::traits_type traits_type; 
# 339
typedef typename istreambuf_iterator< _CharT, char_traits< _CharT> > ::streambuf_type streambuf_type; 
# 340
typedef typename istreambuf_iterator< _CharT, char_traits< _CharT> > ::traits_type::int_type int_type; 
# 342
if ((__first._M_sbuf) && (!(__last._M_sbuf))) 
# 343
{ 
# 344
streambuf_type *__sb = ((__first._M_sbuf)); 
# 345
int_type __c = (__sb->sgetc()); 
# 346
while (!traits_type::eq_int_type(__c, traits_type::eof())) 
# 347
{ 
# 348
const streamsize __n = (__sb->egptr()) - (__sb->gptr()); 
# 349
if (__n > (1)) 
# 350
{ 
# 351
traits_type::copy(__result, (__sb->gptr()), __n); 
# 352
(__sb->__safe_gbump(__n)); 
# 353
__result += __n; 
# 354
__c = (__sb->underflow()); 
# 355
} else 
# 357
{ 
# 358
(*(__result++)) = traits_type::to_char_type(__c); 
# 359
__c = (__sb->snextc()); 
# 360
}  
# 361
}  
# 362
}  
# 363
return __result; 
# 364
} 
# 366
template< class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, istreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type 
# 369
find(istreambuf_iterator< _CharT, char_traits< _CharT> >  __first, istreambuf_iterator< _CharT, char_traits< _CharT> >  
# 370
__last, const _CharT &__val) 
# 371
{ 
# 372
typedef istreambuf_iterator< _CharT, char_traits< _CharT> >  __is_iterator_type; 
# 373
typedef typename istreambuf_iterator< _CharT, char_traits< _CharT> > ::traits_type traits_type; 
# 374
typedef typename istreambuf_iterator< _CharT, char_traits< _CharT> > ::streambuf_type streambuf_type; 
# 375
typedef typename istreambuf_iterator< _CharT, char_traits< _CharT> > ::traits_type::int_type int_type; 
# 377
if ((__first._M_sbuf) && (!(__last._M_sbuf))) 
# 378
{ 
# 379
const int_type __ival = traits_type::to_int_type(__val); 
# 380
streambuf_type *__sb = ((__first._M_sbuf)); 
# 381
int_type __c = (__sb->sgetc()); 
# 382
while ((!traits_type::eq_int_type(__c, traits_type::eof())) && (!traits_type::eq_int_type(__c, __ival))) 
# 384
{ 
# 385
streamsize __n = (__sb->egptr()) - (__sb->gptr()); 
# 386
if (__n > (1)) 
# 387
{ 
# 388
const _CharT *__p = traits_type::find((__sb->gptr()), __n, __val); 
# 390
if (__p) { 
# 391
__n = (__p - (__sb->gptr())); }  
# 392
(__sb->__safe_gbump(__n)); 
# 393
__c = (__sb->sgetc()); 
# 394
} else { 
# 396
__c = (__sb->snextc()); }  
# 397
}  
# 399
if (!traits_type::eq_int_type(__c, traits_type::eof())) { 
# 400
(__first._M_c) = __c; } else { 
# 402
(__first._M_sbuf) = 0; }  
# 403
}  
# 404
return __first; 
# 405
} 
# 410
}
# 50 "/usr/include/c++/5/bits/locale_facets.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 71 "/usr/include/c++/5/bits/locale_facets.h" 3
template< class _Tp> void __convert_to_v(const char *, _Tp &, ios_base::iostate &, const __c_locale &) throw(); 
# 79
template<> void __convert_to_v(const char *, float &, ios_base::iostate &, const __c_locale &) throw(); 
# 84
template<> void __convert_to_v(const char *, double &, ios_base::iostate &, const __c_locale &) throw(); 
# 89
template<> void __convert_to_v(const char *, long double &, ios_base::iostate &, const __c_locale &) throw(); 
# 94
template< class _CharT, class _Traits> 
# 95
struct __pad { 
# 98
static void _S_pad(ios_base & __io, _CharT __fill, _CharT * __news, const _CharT * __olds, streamsize __newlen, streamsize __oldlen); 
# 100
}; 
# 107
template< class _CharT> _CharT *__add_grouping(_CharT * __s, _CharT __sep, const char * __gbeg, size_t __gsize, const _CharT * __first, const _CharT * __last); 
# 116
template< class _CharT> inline ostreambuf_iterator< _CharT, char_traits< _CharT> >  
# 119
__write(ostreambuf_iterator< _CharT, char_traits< _CharT> >  __s, const _CharT *__ws, int __len) 
# 120
{ 
# 121
(__s._M_put(__ws, __len)); 
# 122
return __s; 
# 123
} 
# 126
template< class _CharT, class _OutIter> inline _OutIter 
# 129
__write(_OutIter __s, const _CharT *__ws, int __len) 
# 130
{ 
# 131
for (int __j = 0; __j < __len; (__j++), (++__s)) { 
# 132
(*__s) = (__ws[__j]); }  
# 133
return __s; 
# 134
} 
# 149 "/usr/include/c++/5/bits/locale_facets.h" 3
template< class _CharT> 
# 150
class __ctype_abstract_base : public locale::facet, public ctype_base { 
# 155
public: typedef _CharT char_type; 
# 169 "/usr/include/c++/5/bits/locale_facets.h" 3
bool is(mask __m, char_type __c) const 
# 170
{ return (this->do_is(__m, __c)); } 
# 186 "/usr/include/c++/5/bits/locale_facets.h" 3
const char_type *is(const char_type *__lo, const char_type *__hi, mask *__vec) const 
# 187
{ return (this->do_is(__lo, __hi, __vec)); } 
# 202 "/usr/include/c++/5/bits/locale_facets.h" 3
const char_type *scan_is(mask __m, const char_type *__lo, const char_type *__hi) const 
# 203
{ return this->do_scan_is(__m, __lo, __hi); } 
# 218 "/usr/include/c++/5/bits/locale_facets.h" 3
const char_type *scan_not(mask __m, const char_type *__lo, const char_type *__hi) const 
# 219
{ return this->do_scan_not(__m, __lo, __hi); } 
# 232 "/usr/include/c++/5/bits/locale_facets.h" 3
char_type toupper(char_type __c) const 
# 233
{ return (this->do_toupper(__c)); } 
# 247 "/usr/include/c++/5/bits/locale_facets.h" 3
const char_type *toupper(char_type *__lo, const char_type *__hi) const 
# 248
{ return (this->do_toupper(__lo, __hi)); } 
# 261 "/usr/include/c++/5/bits/locale_facets.h" 3
char_type tolower(char_type __c) const 
# 262
{ return (this->do_tolower(__c)); } 
# 276 "/usr/include/c++/5/bits/locale_facets.h" 3
const char_type *tolower(char_type *__lo, const char_type *__hi) const 
# 277
{ return (this->do_tolower(__lo, __hi)); } 
# 293 "/usr/include/c++/5/bits/locale_facets.h" 3
char_type widen(char __c) const 
# 294
{ return (this->do_widen(__c)); } 
# 312 "/usr/include/c++/5/bits/locale_facets.h" 3
const char *widen(const char *__lo, const char *__hi, char_type *__to) const 
# 313
{ return (this->do_widen(__lo, __hi, __to)); } 
# 331 "/usr/include/c++/5/bits/locale_facets.h" 3
char narrow(char_type __c, char __dfault) const 
# 332
{ return (this->do_narrow(__c, __dfault)); } 
# 353 "/usr/include/c++/5/bits/locale_facets.h" 3
const char_type *narrow(const char_type *__lo, const char_type *__hi, char 
# 354
__dfault, char *__to) const 
# 355
{ return (this->do_narrow(__lo, __hi, __dfault, __to)); } 
# 359
protected: explicit __ctype_abstract_base(size_t __refs = 0) : locale::facet(__refs) { } 
# 362
virtual ~__ctype_abstract_base() { } 
# 378 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual bool do_is(mask __m, char_type __c) const = 0; 
# 397 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_is(const char_type * __lo, const char_type * __hi, mask * __vec) const = 0; 
# 416 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_scan_is(mask __m, const char_type * __lo, const char_type * __hi) const = 0; 
# 435 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_scan_not(mask __m, const char_type * __lo, const char_type * __hi) const = 0; 
# 453 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char_type do_toupper(char_type __c) const = 0; 
# 470 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_toupper(char_type * __lo, const char_type * __hi) const = 0; 
# 486 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char_type do_tolower(char_type __c) const = 0; 
# 503 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_tolower(char_type * __lo, const char_type * __hi) const = 0; 
# 522 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char_type do_widen(char __c) const = 0; 
# 543 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char *do_widen(const char * __lo, const char * __hi, char_type * __to) const = 0; 
# 564 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char do_narrow(char_type __c, char __dfault) const = 0; 
# 589 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_narrow(const char_type * __lo, const char_type * __hi, char __dfault, char * __to) const = 0; 
# 591
}; 
# 611 "/usr/include/c++/5/bits/locale_facets.h" 3
template< class _CharT> 
# 612
class ctype : public __ctype_abstract_base< _CharT>  { 
# 616
public: typedef _CharT char_type; 
# 617
typedef typename ::std::__ctype_abstract_base< _CharT> ::mask mask; 
# 620
static ::std::locale::id id; 
# 623
explicit ctype(::std::size_t __refs = 0) : ::std::__ctype_abstract_base< _CharT> (__refs) { } 
# 627
protected: virtual ~ctype(); 
# 630
virtual bool do_is(mask __m, char_type __c) const; 
# 633
virtual const char_type *do_is(const char_type * __lo, const char_type * __hi, mask * __vec) const; 
# 636
virtual const char_type *do_scan_is(mask __m, const char_type * __lo, const char_type * __hi) const; 
# 639
virtual const char_type *do_scan_not(mask __m, const char_type * __lo, const char_type * __hi) const; 
# 643
virtual char_type do_toupper(char_type __c) const; 
# 646
virtual const char_type *do_toupper(char_type * __lo, const char_type * __hi) const; 
# 649
virtual char_type do_tolower(char_type __c) const; 
# 652
virtual const char_type *do_tolower(char_type * __lo, const char_type * __hi) const; 
# 655
virtual char_type do_widen(char __c) const; 
# 658
virtual const char *do_widen(const char * __lo, const char * __hi, char_type * __dest) const; 
# 661
virtual char do_narrow(char_type, char __dfault) const; 
# 664
virtual const char_type *do_narrow(const char_type * __lo, const char_type * __hi, char __dfault, char * __to) const; 
# 666
}; 
# 668
template< class _CharT> locale::id 
# 669
ctype< _CharT> ::id; 
# 681 "/usr/include/c++/5/bits/locale_facets.h" 3
template<> class ctype< char>  : public locale::facet, public ctype_base { 
# 686
public: typedef char char_type; 
# 690
protected: __c_locale _M_c_locale_ctype; 
# 691
bool _M_del; 
# 692
__to_type _M_toupper; 
# 693
__to_type _M_tolower; 
# 694
const mask *_M_table; 
# 695
mutable char _M_widen_ok; 
# 696
mutable char _M_widen[1 + (static_cast< unsigned char>(-1))]; 
# 697
mutable char _M_narrow[1 + (static_cast< unsigned char>(-1))]; 
# 698
mutable char _M_narrow_ok; 
# 703
public: static locale::id id; 
# 705
static const size_t table_size = (1 + (static_cast< unsigned char>(-1))); 
# 718 "/usr/include/c++/5/bits/locale_facets.h" 3
explicit ctype(const mask * __table = 0, bool __del = false, size_t __refs = 0); 
# 731 "/usr/include/c++/5/bits/locale_facets.h" 3
explicit ctype(__c_locale __cloc, const mask * __table = 0, bool __del = false, size_t __refs = 0); 
# 744 "/usr/include/c++/5/bits/locale_facets.h" 3
inline bool is(mask __m, char __c) const; 
# 759 "/usr/include/c++/5/bits/locale_facets.h" 3
inline const char *is(const char * __lo, const char * __hi, mask * __vec) const; 
# 773 "/usr/include/c++/5/bits/locale_facets.h" 3
inline const char *scan_is(mask __m, const char * __lo, const char * __hi) const; 
# 787 "/usr/include/c++/5/bits/locale_facets.h" 3
inline const char *scan_not(mask __m, const char * __lo, const char * __hi) const; 
# 802 "/usr/include/c++/5/bits/locale_facets.h" 3
char_type toupper(char_type __c) const 
# 803
{ return this->do_toupper(__c); } 
# 819 "/usr/include/c++/5/bits/locale_facets.h" 3
const char_type *toupper(char_type *__lo, const char_type *__hi) const 
# 820
{ return this->do_toupper(__lo, __hi); } 
# 835 "/usr/include/c++/5/bits/locale_facets.h" 3
char_type tolower(char_type __c) const 
# 836
{ return this->do_tolower(__c); } 
# 852 "/usr/include/c++/5/bits/locale_facets.h" 3
const char_type *tolower(char_type *__lo, const char_type *__hi) const 
# 853
{ return this->do_tolower(__lo, __hi); } 
# 872 "/usr/include/c++/5/bits/locale_facets.h" 3
char_type widen(char __c) const 
# 873
{ 
# 874
if (_M_widen_ok) { 
# 875
return (_M_widen)[static_cast< unsigned char>(__c)]; }  
# 876
this->_M_widen_init(); 
# 877
return this->do_widen(__c); 
# 878
} 
# 899 "/usr/include/c++/5/bits/locale_facets.h" 3
const char *widen(const char *__lo, const char *__hi, char_type *__to) const 
# 900
{ 
# 901
if ((_M_widen_ok) == 1) 
# 902
{ 
# 903
__builtin_memcpy(__to, __lo, __hi - __lo); 
# 904
return __hi; 
# 905
}  
# 906
if (!(_M_widen_ok)) { 
# 907
this->_M_widen_init(); }  
# 908
return this->do_widen(__lo, __hi, __to); 
# 909
} 
# 930 "/usr/include/c++/5/bits/locale_facets.h" 3
char narrow(char_type __c, char __dfault) const 
# 931
{ 
# 932
if ((_M_narrow)[static_cast< unsigned char>(__c)]) { 
# 933
return (_M_narrow)[static_cast< unsigned char>(__c)]; }  
# 934
const char __t = this->do_narrow(__c, __dfault); 
# 935
if (__t != __dfault) { 
# 936
((_M_narrow)[static_cast< unsigned char>(__c)]) = __t; }  
# 937
return __t; 
# 938
} 
# 963 "/usr/include/c++/5/bits/locale_facets.h" 3
const char_type *narrow(const char_type *__lo, const char_type *__hi, char 
# 964
__dfault, char *__to) const 
# 965
{ 
# 966
if (__builtin_expect((_M_narrow_ok) == 1, true)) 
# 967
{ 
# 968
__builtin_memcpy(__to, __lo, __hi - __lo); 
# 969
return __hi; 
# 970
}  
# 971
if (!(_M_narrow_ok)) { 
# 972
this->_M_narrow_init(); }  
# 973
return this->do_narrow(__lo, __hi, __dfault, __to); 
# 974
} 
# 981
const mask *table() const throw() 
# 982
{ return _M_table; } 
# 986
static const mask *classic_table() throw(); 
# 996
protected: virtual ~ctype(); 
# 1012 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char_type do_toupper(char_type __c) const; 
# 1029 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_toupper(char_type * __lo, const char_type * __hi) const; 
# 1045 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char_type do_tolower(char_type __c) const; 
# 1062 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_tolower(char_type * __lo, const char_type * __hi) const; 
# 1082 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char_type do_widen(char __c) const 
# 1083
{ return __c; } 
# 1105 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char *do_widen(const char *__lo, const char *__hi, char_type *__to) const 
# 1106
{ 
# 1107
__builtin_memcpy(__to, __lo, __hi - __lo); 
# 1108
return __hi; 
# 1109
} 
# 1131 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char do_narrow(char_type __c, char __dfault) const 
# 1132
{ return __c; } 
# 1157 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_narrow(const char_type *__lo, const char_type *__hi, char 
# 1158
__dfault, char *__to) const 
# 1159
{ 
# 1160
__builtin_memcpy(__to, __lo, __hi - __lo); 
# 1161
return __hi; 
# 1162
} 
# 1165
private: void _M_narrow_init() const; 
# 1166
void _M_widen_init() const; 
# 1167
}; 
# 1182 "/usr/include/c++/5/bits/locale_facets.h" 3
template<> class ctype< wchar_t>  : public __ctype_abstract_base< wchar_t>  { 
# 1187
public: typedef wchar_t char_type; 
# 1188
typedef wctype_t __wmask_type; 
# 1191
protected: __c_locale _M_c_locale_ctype; 
# 1194
bool _M_narrow_ok; 
# 1195
char _M_narrow[128]; 
# 1196
wint_t _M_widen[1 + (static_cast< unsigned char>(-1))]; 
# 1199
mask _M_bit[16]; 
# 1200
__wmask_type _M_wmask[16]; 
# 1205
public: static locale::id id; 
# 1215 "/usr/include/c++/5/bits/locale_facets.h" 3
explicit ctype(size_t __refs = 0); 
# 1226 "/usr/include/c++/5/bits/locale_facets.h" 3
explicit ctype(__c_locale __cloc, size_t __refs = 0); 
# 1230
protected: __wmask_type _M_convert_to_wmask(const mask __m) const throw(); 
# 1234
virtual ~ctype(); 
# 1250 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual bool do_is(mask __m, char_type __c) const; 
# 1269 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_is(const char_type * __lo, const char_type * __hi, mask * __vec) const; 
# 1287 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_scan_is(mask __m, const char_type * __lo, const char_type * __hi) const; 
# 1305 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_scan_not(mask __m, const char_type * __lo, const char_type * __hi) const; 
# 1322 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char_type do_toupper(char_type __c) const; 
# 1339 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_toupper(char_type * __lo, const char_type * __hi) const; 
# 1355 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char_type do_tolower(char_type __c) const; 
# 1372 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_tolower(char_type * __lo, const char_type * __hi) const; 
# 1392 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char_type do_widen(char __c) const; 
# 1414 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char *do_widen(const char * __lo, const char * __hi, char_type * __to) const; 
# 1437 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char do_narrow(char_type __c, char __dfault) const; 
# 1463 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual const char_type *do_narrow(const char_type * __lo, const char_type * __hi, char __dfault, char * __to) const; 
# 1468
void _M_initialize_ctype() throw(); 
# 1469
}; 
# 1473
template< class _CharT> 
# 1474
class ctype_byname : public ctype< _CharT>  { 
# 1477
public: typedef typename ::std::ctype< _CharT> ::mask mask; 
# 1480
explicit ctype_byname(const char * __s, ::std::size_t __refs = 0); 
# 1490
protected: virtual ~ctype_byname() { } 
# 1491
}; 
# 1495
template<> class ctype_byname< char>  : public ctype< char>  { 
# 1499
public: explicit ctype_byname(const char * __s, size_t __refs = 0); 
# 1508
protected: virtual ~ctype_byname(); 
# 1509
}; 
# 1513
template<> class ctype_byname< wchar_t>  : public ctype< wchar_t>  { 
# 1517
public: explicit ctype_byname(const char * __s, size_t __refs = 0); 
# 1526
protected: virtual ~ctype_byname(); 
# 1527
}; 
# 1531
}
# 37 "/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_inline.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 43
inline bool ctype< char> ::is(mask __m, char __c) const 
# 44
{ return ((_M_table)[static_cast< unsigned char>(__c)]) & __m; } 
# 48
inline const char *ctype< char> ::is(const char *__low, const char *__high, mask *__vec) const 
# 49
{ 
# 50
while (__low < __high) { 
# 51
(*(__vec++)) = ((_M_table)[static_cast< unsigned char>(*(__low++))]); }  
# 52
return __high; 
# 53
} 
# 57
inline const char *ctype< char> ::scan_is(mask __m, const char *__low, const char *__high) const 
# 58
{ 
# 59
while ((__low < __high) && (!(((_M_table)[static_cast< unsigned char>(*__low)]) & __m))) { 
# 61
++__low; }  
# 62
return __low; 
# 63
} 
# 67
inline const char *ctype< char> ::scan_not(mask __m, const char *__low, const char *__high) const 
# 68
{ 
# 69
while ((__low < __high) && ((((_M_table)[static_cast< unsigned char>(*__low)]) & __m) != 0)) { 
# 71
++__low; }  
# 72
return __low; 
# 73
} 
# 76
}
# 1536 "/usr/include/c++/5/bits/locale_facets.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 1541
class __num_base { 
# 1547
public: enum { 
# 1548
_S_ominus, 
# 1549
_S_oplus, 
# 1550
_S_ox, 
# 1551
_S_oX, 
# 1552
_S_odigits, 
# 1553
_S_odigits_end = 20, 
# 1554
_S_oudigits = 20, 
# 1555
_S_oudigits_end = 36, 
# 1556
_S_oe = 18, 
# 1557
_S_oE = 34, 
# 1558
_S_oend = 36
# 1559
}; 
# 1566
static const char *_S_atoms_out; 
# 1570
static const char *_S_atoms_in; 
# 1573
enum { 
# 1574
_S_iminus, 
# 1575
_S_iplus, 
# 1576
_S_ix, 
# 1577
_S_iX, 
# 1578
_S_izero, 
# 1579
_S_ie = 18, 
# 1580
_S_iE = 24, 
# 1581
_S_iend = 26
# 1582
}; 
# 1587
static void _S_format_float(const ios_base & __io, char * __fptr, char __mod) throw(); 
# 1588
}; 
# 1590
template< class _CharT> 
# 1591
struct __numpunct_cache : public locale::facet { 
# 1593
const char *_M_grouping; 
# 1594
size_t _M_grouping_size; 
# 1595
bool _M_use_grouping; 
# 1596
const _CharT *_M_truename; 
# 1597
size_t _M_truename_size; 
# 1598
const _CharT *_M_falsename; 
# 1599
size_t _M_falsename_size; 
# 1600
_CharT _M_decimal_point; 
# 1601
_CharT _M_thousands_sep; 
# 1607
_CharT _M_atoms_out[__num_base::_S_oend]; 
# 1613
_CharT _M_atoms_in[__num_base::_S_iend]; 
# 1615
bool _M_allocated; 
# 1617
__numpunct_cache(size_t __refs = 0) : locale::facet(__refs), _M_grouping((0)), _M_grouping_size((0)), _M_use_grouping(false), _M_truename((0)), _M_truename_size((0)), _M_falsename((0)), _M_falsename_size((0)), _M_decimal_point(_CharT()), _M_thousands_sep(_CharT()), _M_allocated(false) 
# 1623
{ } 
# 1625
virtual ~__numpunct_cache(); 
# 1628
void _M_cache(const locale & __loc); 
# 1632
private: __numpunct_cache &operator=(const __numpunct_cache &); 
# 1635
explicit __numpunct_cache(const __numpunct_cache &); 
# 1636
}; 
# 1638
template< class _CharT> 
# 1639
__numpunct_cache< _CharT> ::~__numpunct_cache() 
# 1640
{ 
# 1641
if (_M_allocated) 
# 1642
{ 
# 1643
delete [] (_M_grouping); 
# 1644
delete [] (_M_truename); 
# 1645
delete [] (_M_falsename); 
# 1646
}  
# 1647
} 
# 1649
inline namespace __cxx11 { 
# 1665 "/usr/include/c++/5/bits/locale_facets.h" 3
template< class _CharT> 
# 1666
class numpunct : public locale::facet { 
# 1672
public: typedef _CharT char_type; 
# 1673
typedef basic_string< _CharT, char_traits< _CharT> , allocator< _CharT> >  string_type; 
# 1675
typedef __numpunct_cache< _CharT>  __cache_type; 
# 1678
protected: __cache_type *_M_data; 
# 1682
public: static locale::id id; 
# 1690
explicit numpunct(size_t __refs = 0) : locale::facet(__refs), _M_data((0)) 
# 1692
{ _M_initialize_numpunct(); } 
# 1704 "/usr/include/c++/5/bits/locale_facets.h" 3
explicit numpunct(__cache_type *__cache, size_t __refs = 0) : locale::facet(__refs), _M_data(__cache) 
# 1706
{ _M_initialize_numpunct(); } 
# 1718 "/usr/include/c++/5/bits/locale_facets.h" 3
explicit numpunct(__c_locale __cloc, size_t __refs = 0) : locale::facet(__refs), _M_data((0)) 
# 1720
{ _M_initialize_numpunct(__cloc); } 
# 1732 "/usr/include/c++/5/bits/locale_facets.h" 3
char_type decimal_point() const 
# 1733
{ return this->do_decimal_point(); } 
# 1745 "/usr/include/c++/5/bits/locale_facets.h" 3
char_type thousands_sep() const 
# 1746
{ return this->do_thousands_sep(); } 
# 1776 "/usr/include/c++/5/bits/locale_facets.h" 3
string grouping() const 
# 1777
{ return this->do_grouping(); } 
# 1789 "/usr/include/c++/5/bits/locale_facets.h" 3
string_type truename() const 
# 1790
{ return this->do_truename(); } 
# 1802 "/usr/include/c++/5/bits/locale_facets.h" 3
string_type falsename() const 
# 1803
{ return this->do_falsename(); } 
# 1808
protected: virtual ~numpunct(); 
# 1819 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char_type do_decimal_point() const 
# 1820
{ return (_M_data)->_M_decimal_point; } 
# 1831 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual char_type do_thousands_sep() const 
# 1832
{ return (_M_data)->_M_thousands_sep; } 
# 1844 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual string do_grouping() const 
# 1845
{ return ((_M_data)->_M_grouping); } 
# 1857 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual string_type do_truename() const 
# 1858
{ return ((_M_data)->_M_truename); } 
# 1870 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual string_type do_falsename() const 
# 1871
{ return ((_M_data)->_M_falsename); } 
# 1875
void _M_initialize_numpunct(__c_locale __cloc = 0); 
# 1876
}; 
# 1878
template< class _CharT> locale::id 
# 1879
numpunct< _CharT> ::id; 
# 1882
template<> numpunct< char> ::~numpunct(); 
# 1886
template<> void numpunct< char> ::_M_initialize_numpunct(__c_locale __cloc); 
# 1890
template<> numpunct< wchar_t> ::~numpunct(); 
# 1894
template<> void numpunct< wchar_t> ::_M_initialize_numpunct(__c_locale __cloc); 
# 1898
template< class _CharT> 
# 1899
class numpunct_byname : public numpunct< _CharT>  { 
# 1902
public: typedef _CharT char_type; 
# 1903
typedef basic_string< _CharT, char_traits< _CharT> , allocator< _CharT> >  string_type; 
# 1906
explicit numpunct_byname(const char *__s, ::std::size_t __refs = 0) : ::std::__cxx11::numpunct< _CharT> (__refs) 
# 1908
{ 
# 1909
if ((__builtin_strcmp(__s, "C") != 0) && (__builtin_strcmp(__s, "POSIX") != 0)) 
# 1911
{ 
# 1912
::std::__c_locale __tmp; 
# 1913
(this->_S_create_c_locale(__tmp, __s)); 
# 1914
(this->_M_initialize_numpunct(__tmp)); 
# 1915
(this->_S_destroy_c_locale(__tmp)); 
# 1916
}  
# 1917
} 
# 1927
protected: virtual ~numpunct_byname() { } 
# 1928
}; 
# 1930
}
# 1947 "/usr/include/c++/5/bits/locale_facets.h" 3
template< class _CharT, class _InIter> 
# 1948
class num_get : public locale::facet { 
# 1954
public: typedef _CharT char_type; 
# 1955
typedef _InIter iter_type; 
# 1959
static locale::id id; 
# 1969 "/usr/include/c++/5/bits/locale_facets.h" 3
explicit num_get(size_t __refs = 0) : locale::facet(__refs) { } 
# 1995 "/usr/include/c++/5/bits/locale_facets.h" 3
iter_type get(iter_type __in, iter_type __end, ios_base &__io, ios_base::iostate &
# 1996
__err, bool &__v) const 
# 1997
{ return (this->do_get(__in, __end, __io, __err, __v)); } 
# 2032 "/usr/include/c++/5/bits/locale_facets.h" 3
iter_type get(iter_type __in, iter_type __end, ios_base &__io, ios_base::iostate &
# 2033
__err, long &__v) const 
# 2034
{ return (this->do_get(__in, __end, __io, __err, __v)); } 
# 2037
iter_type get(iter_type __in, iter_type __end, ios_base &__io, ios_base::iostate &
# 2038
__err, unsigned short &__v) const 
# 2039
{ return (this->do_get(__in, __end, __io, __err, __v)); } 
# 2042
iter_type get(iter_type __in, iter_type __end, ios_base &__io, ios_base::iostate &
# 2043
__err, unsigned &__v) const 
# 2044
{ return (this->do_get(__in, __end, __io, __err, __v)); } 
# 2047
iter_type get(iter_type __in, iter_type __end, ios_base &__io, ios_base::iostate &
# 2048
__err, unsigned long &__v) const 
# 2049
{ return (this->do_get(__in, __end, __io, __err, __v)); } 
# 2053
iter_type get(iter_type __in, iter_type __end, ios_base &__io, ios_base::iostate &
# 2054
__err, long long &__v) const 
# 2055
{ return (this->do_get(__in, __end, __io, __err, __v)); } 
# 2058
iter_type get(iter_type __in, iter_type __end, ios_base &__io, ios_base::iostate &
# 2059
__err, unsigned long long &__v) const 
# 2060
{ return (this->do_get(__in, __end, __io, __err, __v)); } 
# 2092 "/usr/include/c++/5/bits/locale_facets.h" 3
iter_type get(iter_type __in, iter_type __end, ios_base &__io, ios_base::iostate &
# 2093
__err, float &__v) const 
# 2094
{ return (this->do_get(__in, __end, __io, __err, __v)); } 
# 2097
iter_type get(iter_type __in, iter_type __end, ios_base &__io, ios_base::iostate &
# 2098
__err, double &__v) const 
# 2099
{ return (this->do_get(__in, __end, __io, __err, __v)); } 
# 2102
iter_type get(iter_type __in, iter_type __end, ios_base &__io, ios_base::iostate &
# 2103
__err, long double &__v) const 
# 2104
{ return (this->do_get(__in, __end, __io, __err, __v)); } 
# 2135 "/usr/include/c++/5/bits/locale_facets.h" 3
iter_type get(iter_type __in, iter_type __end, ios_base &__io, ios_base::iostate &
# 2136
__err, void *&__v) const 
# 2137
{ return (this->do_get(__in, __end, __io, __err, __v)); } 
# 2141
protected: virtual ~num_get() { } 
# 2143
__attribute((__abi_tag__("cxx11"))) iter_type 
# 2145
_M_extract_float(iter_type, iter_type, ios_base &, ios_base::iostate &, __cxx11::string &) const; 
# 2148
template< class _ValueT> 
# 2149
__attribute((__abi_tag__("cxx11"))) iter_type 
# 2148
_M_extract_int(iter_type, iter_type, ios_base &, ios_base::iostate &, _ValueT &) const; 
# 2154
template< class _CharT2> typename __gnu_cxx::__enable_if< __is_char< _CharT2> ::__value, int> ::__type 
# 2156
_M_find(const _CharT2 *, size_t __len, _CharT2 __c) const 
# 2157
{ 
# 2158
int __ret = (-1); 
# 2159
if (__len <= (10)) 
# 2160
{ 
# 2161
if ((__c >= ((_CharT2)'0')) && (__c < ((_CharT2)(((_CharT2)'0') + __len)))) { 
# 2162
__ret = (__c - ((_CharT2)'0')); }  
# 2163
} else 
# 2165
{ 
# 2166
if ((__c >= ((_CharT2)'0')) && (__c <= ((_CharT2)'9'))) { 
# 2167
__ret = (__c - ((_CharT2)'0')); } else { 
# 2168
if ((__c >= ((_CharT2)'a')) && (__c <= ((_CharT2)'f'))) { 
# 2169
__ret = (10 + (__c - ((_CharT2)'a'))); } else { 
# 2170
if ((__c >= ((_CharT2)'A')) && (__c <= ((_CharT2)'F'))) { 
# 2171
__ret = (10 + (__c - ((_CharT2)'A'))); }  }  }  
# 2172
}  
# 2173
return __ret; 
# 2174
} 
# 2176
template< class _CharT2> typename __gnu_cxx::__enable_if< !__is_char< _CharT2> ::__value, int> ::__type 
# 2179
_M_find(const _CharT2 *__zero, size_t __len, _CharT2 __c) const 
# 2180
{ 
# 2181
int __ret = (-1); 
# 2182
const char_type *__q = char_traits< _CharT2> ::find(__zero, __len, __c); 
# 2183
if (__q) 
# 2184
{ 
# 2185
__ret = (__q - __zero); 
# 2186
if (__ret > 15) { 
# 2187
__ret -= 6; }  
# 2188
}  
# 2189
return __ret; 
# 2190
} 
# 2208 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual iter_type do_get(iter_type, iter_type, ios_base &, ios_base::iostate &, bool &) const; 
# 2211
virtual iter_type do_get(iter_type __beg, iter_type __end, ios_base &__io, ios_base::iostate &
# 2212
__err, long &__v) const 
# 2213
{ return _M_extract_int(__beg, __end, __io, __err, __v); } 
# 2216
virtual iter_type do_get(iter_type __beg, iter_type __end, ios_base &__io, ios_base::iostate &
# 2217
__err, unsigned short &__v) const 
# 2218
{ return _M_extract_int(__beg, __end, __io, __err, __v); } 
# 2221
virtual iter_type do_get(iter_type __beg, iter_type __end, ios_base &__io, ios_base::iostate &
# 2222
__err, unsigned &__v) const 
# 2223
{ return _M_extract_int(__beg, __end, __io, __err, __v); } 
# 2226
virtual iter_type do_get(iter_type __beg, iter_type __end, ios_base &__io, ios_base::iostate &
# 2227
__err, unsigned long &__v) const 
# 2228
{ return _M_extract_int(__beg, __end, __io, __err, __v); } 
# 2232
virtual iter_type do_get(iter_type __beg, iter_type __end, ios_base &__io, ios_base::iostate &
# 2233
__err, long long &__v) const 
# 2234
{ return _M_extract_int(__beg, __end, __io, __err, __v); } 
# 2237
virtual iter_type do_get(iter_type __beg, iter_type __end, ios_base &__io, ios_base::iostate &
# 2238
__err, unsigned long long &__v) const 
# 2239
{ return _M_extract_int(__beg, __end, __io, __err, __v); } 
# 2243
virtual iter_type do_get(iter_type, iter_type, ios_base &, ios_base::iostate &, float &) const; 
# 2246
virtual iter_type do_get(iter_type, iter_type, ios_base &, ios_base::iostate &, double &) const; 
# 2256
virtual iter_type do_get(iter_type, iter_type, ios_base &, ios_base::iostate &, long double &) const; 
# 2261
virtual iter_type do_get(iter_type, iter_type, ios_base &, ios_base::iostate &, void *&) const; 
# 2270 "/usr/include/c++/5/bits/locale_facets.h" 3
}; 
# 2272
template< class _CharT, class _InIter> locale::id 
# 2273
num_get< _CharT, _InIter> ::id; 
# 2288 "/usr/include/c++/5/bits/locale_facets.h" 3
template< class _CharT, class _OutIter> 
# 2289
class num_put : public locale::facet { 
# 2295
public: typedef _CharT char_type; 
# 2296
typedef _OutIter iter_type; 
# 2300
static locale::id id; 
# 2310 "/usr/include/c++/5/bits/locale_facets.h" 3
explicit num_put(size_t __refs = 0) : locale::facet(__refs) { } 
# 2328 "/usr/include/c++/5/bits/locale_facets.h" 3
iter_type put(iter_type __s, ios_base &__io, char_type __fill, bool __v) const 
# 2329
{ return (this->do_put(__s, __io, __fill, __v)); } 
# 2370 "/usr/include/c++/5/bits/locale_facets.h" 3
iter_type put(iter_type __s, ios_base &__io, char_type __fill, long __v) const 
# 2371
{ return (this->do_put(__s, __io, __fill, __v)); } 
# 2374
iter_type put(iter_type __s, ios_base &__io, char_type __fill, unsigned long 
# 2375
__v) const 
# 2376
{ return (this->do_put(__s, __io, __fill, __v)); } 
# 2380
iter_type put(iter_type __s, ios_base &__io, char_type __fill, long long __v) const 
# 2381
{ return (this->do_put(__s, __io, __fill, __v)); } 
# 2384
iter_type put(iter_type __s, ios_base &__io, char_type __fill, unsigned long long 
# 2385
__v) const 
# 2386
{ return (this->do_put(__s, __io, __fill, __v)); } 
# 2433 "/usr/include/c++/5/bits/locale_facets.h" 3
iter_type put(iter_type __s, ios_base &__io, char_type __fill, double __v) const 
# 2434
{ return (this->do_put(__s, __io, __fill, __v)); } 
# 2437
iter_type put(iter_type __s, ios_base &__io, char_type __fill, long double 
# 2438
__v) const 
# 2439
{ return (this->do_put(__s, __io, __fill, __v)); } 
# 2458 "/usr/include/c++/5/bits/locale_facets.h" 3
iter_type put(iter_type __s, ios_base &__io, char_type __fill, const void *
# 2459
__v) const 
# 2460
{ return (this->do_put(__s, __io, __fill, __v)); } 
# 2463
protected: template< class _ValueT> iter_type _M_insert_float(iter_type, ios_base & __io, char_type __fill, char __mod, _ValueT __v) const; 
# 2469
void _M_group_float(const char * __grouping, size_t __grouping_size, char_type __sep, const char_type * __p, char_type * __new, char_type * __cs, int & __len) const; 
# 2473
template< class _ValueT> iter_type _M_insert_int(iter_type, ios_base & __io, char_type __fill, _ValueT __v) const; 
# 2479
void _M_group_int(const char * __grouping, size_t __grouping_size, char_type __sep, ios_base & __io, char_type * __new, char_type * __cs, int & __len) const; 
# 2484
void _M_pad(char_type __fill, streamsize __w, ios_base & __io, char_type * __new, const char_type * __cs, int & __len) const; 
# 2489
virtual ~num_put() { } 
# 2506 "/usr/include/c++/5/bits/locale_facets.h" 3
virtual iter_type do_put(iter_type __s, ios_base & __io, char_type __fill, bool __v) const; 
# 2509
virtual iter_type do_put(iter_type __s, ios_base &__io, char_type __fill, long __v) const 
# 2510
{ return _M_insert_int(__s, __io, __fill, __v); } 
# 2513
virtual iter_type do_put(iter_type __s, ios_base &__io, char_type __fill, unsigned long 
# 2514
__v) const 
# 2515
{ return _M_insert_int(__s, __io, __fill, __v); } 
# 2519
virtual iter_type do_put(iter_type __s, ios_base &__io, char_type __fill, long long 
# 2520
__v) const 
# 2521
{ return _M_insert_int(__s, __io, __fill, __v); } 
# 2524
virtual iter_type do_put(iter_type __s, ios_base &__io, char_type __fill, unsigned long long 
# 2525
__v) const 
# 2526
{ return _M_insert_int(__s, __io, __fill, __v); } 
# 2530
virtual iter_type do_put(iter_type, ios_base &, char_type, double) const; 
# 2538
virtual iter_type do_put(iter_type, ios_base &, char_type, long double) const; 
# 2542
virtual iter_type do_put(iter_type, ios_base &, char_type, const void *) const; 
# 2550
}; 
# 2552
template< class _CharT, class _OutIter> locale::id 
# 2553
num_put< _CharT, _OutIter> ::id; 
# 2563
template< class _CharT> inline bool 
# 2565
isspace(_CharT __c, const locale &__loc) 
# 2566
{ return (use_facet< ctype< _CharT> > (__loc).is(ctype_base::space, __c)); } 
# 2569
template< class _CharT> inline bool 
# 2571
isprint(_CharT __c, const locale &__loc) 
# 2572
{ return (use_facet< ctype< _CharT> > (__loc).is(ctype_base::print, __c)); } 
# 2575
template< class _CharT> inline bool 
# 2577
iscntrl(_CharT __c, const locale &__loc) 
# 2578
{ return (use_facet< ctype< _CharT> > (__loc).is(ctype_base::cntrl, __c)); } 
# 2581
template< class _CharT> inline bool 
# 2583
isupper(_CharT __c, const locale &__loc) 
# 2584
{ return (use_facet< ctype< _CharT> > (__loc).is(ctype_base::upper, __c)); } 
# 2587
template< class _CharT> inline bool 
# 2589
islower(_CharT __c, const locale &__loc) 
# 2590
{ return (use_facet< ctype< _CharT> > (__loc).is(ctype_base::lower, __c)); } 
# 2593
template< class _CharT> inline bool 
# 2595
isalpha(_CharT __c, const locale &__loc) 
# 2596
{ return (use_facet< ctype< _CharT> > (__loc).is(ctype_base::alpha, __c)); } 
# 2599
template< class _CharT> inline bool 
# 2601
isdigit(_CharT __c, const locale &__loc) 
# 2602
{ return (use_facet< ctype< _CharT> > (__loc).is(ctype_base::digit, __c)); } 
# 2605
template< class _CharT> inline bool 
# 2607
ispunct(_CharT __c, const locale &__loc) 
# 2608
{ return (use_facet< ctype< _CharT> > (__loc).is(ctype_base::punct, __c)); } 
# 2611
template< class _CharT> inline bool 
# 2613
isxdigit(_CharT __c, const locale &__loc) 
# 2614
{ return (use_facet< ctype< _CharT> > (__loc).is(ctype_base::xdigit, __c)); } 
# 2617
template< class _CharT> inline bool 
# 2619
isalnum(_CharT __c, const locale &__loc) 
# 2620
{ return (use_facet< ctype< _CharT> > (__loc).is(ctype_base::alnum, __c)); } 
# 2623
template< class _CharT> inline bool 
# 2625
isgraph(_CharT __c, const locale &__loc) 
# 2626
{ return (use_facet< ctype< _CharT> > (__loc).is(ctype_base::graph, __c)); } 
# 2637 "/usr/include/c++/5/bits/locale_facets.h" 3
template< class _CharT> inline _CharT 
# 2639
toupper(_CharT __c, const locale &__loc) 
# 2640
{ return (use_facet< ctype< _CharT> > (__loc).toupper(__c)); } 
# 2643
template< class _CharT> inline _CharT 
# 2645
tolower(_CharT __c, const locale &__loc) 
# 2646
{ return (use_facet< ctype< _CharT> > (__loc).tolower(__c)); } 
# 2649
}
# 35 "/usr/include/c++/5/bits/locale_facets.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 41
template< class _Facet> 
# 42
struct __use_cache { 
# 45
const _Facet *operator()(const locale & __loc) const; 
# 46
}; 
# 49
template< class _CharT> 
# 50
struct __use_cache< __numpunct_cache< _CharT> >  { 
# 53
const __numpunct_cache< _CharT>  *operator()(const locale &__loc) const 
# 54
{ 
# 55
const size_t __i = (numpunct< _CharT> ::id._M_id)(); 
# 56
const locale::facet **__caches = (__loc._M_impl)->_M_caches; 
# 57
if (!(__caches[__i])) 
# 58
{ 
# 59
__numpunct_cache< _CharT>  *__tmp = (0); 
# 60
try 
# 61
{ 
# 62
__tmp = (new __numpunct_cache< _CharT> ); 
# 63
(__tmp->_M_cache(__loc)); 
# 64
} 
# 65
catch (...) 
# 66
{ 
# 67
delete __tmp; 
# 68
throw; 
# 69
}  
# 70
(__loc._M_impl)->_M_install_cache(__tmp, __i); 
# 71
}  
# 72
return static_cast< const __numpunct_cache< _CharT>  *>(__caches[__i]); 
# 73
} 
# 74
}; 
# 76
template< class _CharT> void 
# 78
__numpunct_cache< _CharT> ::_M_cache(const locale &__loc) 
# 79
{ 
# 80
const __cxx11::numpunct< _CharT>  &__np = use_facet< __cxx11::numpunct< _CharT> > (__loc); 
# 82
char *__grouping = (0); 
# 83
_CharT *__truename = (0); 
# 84
_CharT *__falsename = (0); 
# 85
try 
# 86
{ 
# 87
const __cxx11::string &__g = (__np.grouping()); 
# 88
(_M_grouping_size) = __g.size(); 
# 89
__grouping = (new char [_M_grouping_size]); 
# 90
__g.copy(__grouping, _M_grouping_size); 
# 91
(_M_use_grouping) = ((_M_grouping_size) && ((static_cast< signed char>(__grouping[0])) > 0) && ((__grouping[0]) != __gnu_cxx::__numeric_traits_integer< char> ::__max)); 
# 96
const __cxx11::basic_string< _CharT, char_traits< _CharT> , allocator< _CharT> >  &__tn = (__np.truename()); 
# 97
(_M_truename_size) = (__tn.size()); 
# 98
__truename = (new _CharT [_M_truename_size]); 
# 99
(__tn.copy(__truename, _M_truename_size)); 
# 101
const __cxx11::basic_string< _CharT, char_traits< _CharT> , allocator< _CharT> >  &__fn = (__np.falsename()); 
# 102
(_M_falsename_size) = (__fn.size()); 
# 103
__falsename = (new _CharT [_M_falsename_size]); 
# 104
(__fn.copy(__falsename, _M_falsename_size)); 
# 106
(_M_decimal_point) = (__np.decimal_point()); 
# 107
(_M_thousands_sep) = (__np.thousands_sep()); 
# 109
const ctype< _CharT>  &__ct = use_facet< ctype< _CharT> > (__loc); 
# 110
(__ct.widen(__num_base::_S_atoms_out, __num_base::_S_atoms_out + __num_base::_S_oend, _M_atoms_out)); 
# 113
(__ct.widen(__num_base::_S_atoms_in, __num_base::_S_atoms_in + __num_base::_S_iend, _M_atoms_in)); 
# 117
(_M_grouping) = __grouping; 
# 118
(_M_truename) = __truename; 
# 119
(_M_falsename) = __falsename; 
# 120
(_M_allocated) = true; 
# 121
} 
# 122
catch (...) 
# 123
{ 
# 124
delete [] __grouping; 
# 125
delete [] __truename; 
# 126
delete [] __falsename; 
# 127
throw; 
# 128
}  
# 129
} 
# 139 "/usr/include/c++/5/bits/locale_facets.tcc" 3
__attribute((__pure__)) bool 
# 140
__verify_grouping(const char * __grouping, size_t __grouping_size, const __cxx11::string & __grouping_tmp) throw(); 
# 145
template< class _CharT, class _InIter> 
# 146
__attribute((__abi_tag__("cxx11"))) _InIter 
# 149
num_get< _CharT, _InIter> ::_M_extract_float(_InIter __beg, _InIter __end, ios_base &__io, ios_base::iostate &
# 150
__err, __cxx11::string &__xtrc) const 
# 151
{ 
# 152
typedef char_traits< _CharT>  __traits_type; 
# 153
typedef __numpunct_cache< _CharT>  __cache_type; 
# 154
__use_cache< __numpunct_cache< _CharT> >  __uc; 
# 155
const locale &__loc = __io._M_getloc(); 
# 156
const __cache_type *__lc = __uc(__loc); 
# 157
const _CharT *__lit = ((__lc->_M_atoms_in)); 
# 158
char_type __c = (char_type()); 
# 161
bool __testeof = __beg == __end; 
# 164
if (!__testeof) 
# 165
{ 
# 166
__c = (*__beg); 
# 167
const bool __plus = __c == (__lit[__num_base::_S_iplus]); 
# 168
if ((__plus || (__c == (__lit[__num_base::_S_iminus]))) && (!((__lc->_M_use_grouping) && (__c == (__lc->_M_thousands_sep)))) && (!(__c == (__lc->_M_decimal_point)))) 
# 171
{ 
# 172
(__xtrc += (__plus ? '+' : '-')); 
# 173
if ((++__beg) != __end) { 
# 174
__c = (*__beg); } else { 
# 176
__testeof = true; }  
# 177
}  
# 178
}  
# 181
bool __found_mantissa = false; 
# 182
int __sep_pos = 0; 
# 183
while (!__testeof) 
# 184
{ 
# 185
if (((__lc->_M_use_grouping) && (__c == (__lc->_M_thousands_sep))) || (__c == (__lc->_M_decimal_point))) { 
# 187
break; } else { 
# 188
if (__c == (__lit[__num_base::_S_izero])) 
# 189
{ 
# 190
if (!__found_mantissa) 
# 191
{ 
# 192
(__xtrc += ('0')); 
# 193
__found_mantissa = true; 
# 194
}  
# 195
++__sep_pos; 
# 197
if ((++__beg) != __end) { 
# 198
__c = (*__beg); } else { 
# 200
__testeof = true; }  
# 201
} else { 
# 203
break; }  }  
# 204
}  
# 207
bool __found_dec = false; 
# 208
bool __found_sci = false; 
# 209
__cxx11::string __found_grouping; 
# 210
if (__lc->_M_use_grouping) { 
# 211
__found_grouping.reserve(32); }  
# 212
const char_type *__lit_zero = __lit + __num_base::_S_izero; 
# 214
if (!(__lc->_M_allocated)) { 
# 216
while (!__testeof) { 
# 217
{ 
# 218
const int __digit = _M_find(__lit_zero, 10, __c); 
# 219
if (__digit != (-1)) 
# 220
{ 
# 221
(__xtrc += (('0') + __digit)); 
# 222
__found_mantissa = true; 
# 223
} else { 
# 224
if ((__c == (__lc->_M_decimal_point)) && (!__found_dec) && (!__found_sci)) 
# 226
{ 
# 227
(__xtrc += ('.')); 
# 228
__found_dec = true; 
# 229
} else { 
# 230
if (((__c == (__lit[__num_base::_S_ie])) || (__c == (__lit[__num_base::_S_iE]))) && (!__found_sci) && __found_mantissa) 
# 233
{ 
# 235
(__xtrc += ('e')); 
# 236
__found_sci = true; 
# 239
if ((++__beg) != __end) 
# 240
{ 
# 241
__c = (*__beg); 
# 242
const bool __plus = __c == (__lit[__num_base::_S_iplus]); 
# 243
if (__plus || (__c == (__lit[__num_base::_S_iminus]))) { 
# 244
(__xtrc += (__plus ? '+' : '-')); } else { 
# 246
continue; }  
# 247
} else 
# 249
{ 
# 250
__testeof = true; 
# 251
break; 
# 252
}  
# 253
} else { 
# 255
break; }  }  }  
# 257
if ((++__beg) != __end) { 
# 258
__c = (*__beg); } else { 
# 260
__testeof = true; }  
# 261
} }  } else { 
# 263
while (!__testeof) { 
# 264
{ 
# 267
if ((__lc->_M_use_grouping) && (__c == (__lc->_M_thousands_sep))) 
# 268
{ 
# 269
if ((!__found_dec) && (!__found_sci)) 
# 270
{ 
# 273
if (__sep_pos) 
# 274
{ 
# 275
(__found_grouping += (static_cast< char>(__sep_pos))); 
# 276
__sep_pos = 0; 
# 277
} else 
# 279
{ 
# 282
__xtrc.clear(); 
# 283
break; 
# 284
}  
# 285
} else { 
# 287
break; }  
# 288
} else { 
# 289
if (__c == (__lc->_M_decimal_point)) 
# 290
{ 
# 291
if ((!__found_dec) && (!__found_sci)) 
# 292
{ 
# 296
if (__found_grouping.size()) { 
# 297
(__found_grouping += (static_cast< char>(__sep_pos))); }  
# 298
(__xtrc += ('.')); 
# 299
__found_dec = true; 
# 300
} else { 
# 302
break; }  
# 303
} else 
# 305
{ 
# 306
const char_type *__q = __traits_type::find(__lit_zero, 10, __c); 
# 308
if (__q) 
# 309
{ 
# 310
__xtrc += ('0' + (__q - __lit_zero)); 
# 311
__found_mantissa = true; 
# 312
++__sep_pos; 
# 313
} else { 
# 314
if (((__c == (__lit[__num_base::_S_ie])) || (__c == (__lit[__num_base::_S_iE]))) && (!__found_sci) && __found_mantissa) 
# 317
{ 
# 319
if ((__found_grouping.size()) && (!__found_dec)) { 
# 320
(__found_grouping += (static_cast< char>(__sep_pos))); }  
# 321
(__xtrc += ('e')); 
# 322
__found_sci = true; 
# 325
if ((++__beg) != __end) 
# 326
{ 
# 327
__c = (*__beg); 
# 328
const bool __plus = __c == (__lit[__num_base::_S_iplus]); 
# 329
if ((__plus || (__c == (__lit[__num_base::_S_iminus]))) && (!((__lc->_M_use_grouping) && (__c == (__lc->_M_thousands_sep)))) && (!(__c == (__lc->_M_decimal_point)))) { 
# 333
(__xtrc += (__plus ? '+' : '-')); } else { 
# 335
continue; }  
# 336
} else 
# 338
{ 
# 339
__testeof = true; 
# 340
break; 
# 341
}  
# 342
} else { 
# 344
break; }  }  
# 345
}  }  
# 347
if ((++__beg) != __end) { 
# 348
__c = (*__beg); } else { 
# 350
__testeof = true; }  
# 351
} }  }  
# 355
if (__found_grouping.size()) 
# 356
{ 
# 358
if ((!__found_dec) && (!__found_sci)) { 
# 359
(__found_grouping += (static_cast< char>(__sep_pos))); }  
# 361
if (!std::__verify_grouping((__lc->_M_grouping), (__lc->_M_grouping_size), __found_grouping)) { 
# 364
__err = ios_base::failbit; }  
# 365
}  
# 367
return __beg; 
# 368
} 
# 370
template< class _CharT, class _InIter> 
# 371
template< class _ValueT> 
# 372
__attribute((__abi_tag__("cxx11"))) _InIter 
# 375
num_get< _CharT, _InIter> ::_M_extract_int(_InIter __beg, _InIter __end, ios_base &__io, ios_base::iostate &
# 376
__err, _ValueT &__v) const 
# 377
{ 
# 378
typedef char_traits< _CharT>  __traits_type; 
# 379
using __gnu_cxx::__add_unsigned;
# 380
typedef typename __gnu_cxx::__add_unsigned< _ValueT> ::__type __unsigned_type; 
# 381
typedef __numpunct_cache< _CharT>  __cache_type; 
# 382
__use_cache< __numpunct_cache< _CharT> >  __uc; 
# 383
const locale &__loc = __io._M_getloc(); 
# 384
const __cache_type *__lc = __uc(__loc); 
# 385
const _CharT *__lit = ((__lc->_M_atoms_in)); 
# 386
char_type __c = (char_type()); 
# 389
const ios_base::fmtflags __basefield = ((__io.flags()) & ios_base::basefield); 
# 391
const bool __oct = __basefield == ios_base::oct; 
# 392
int __base = __oct ? 8 : ((__basefield == ios_base::hex) ? 16 : 10); 
# 395
bool __testeof = __beg == __end; 
# 398
bool __negative = false; 
# 399
if (!__testeof) 
# 400
{ 
# 401
__c = (*__beg); 
# 402
__negative = (__c == (__lit[__num_base::_S_iminus])); 
# 403
if ((__negative || (__c == (__lit[__num_base::_S_iplus]))) && (!((__lc->_M_use_grouping) && (__c == (__lc->_M_thousands_sep)))) && (!(__c == (__lc->_M_decimal_point)))) 
# 406
{ 
# 407
if ((++__beg) != __end) { 
# 408
__c = (*__beg); } else { 
# 410
__testeof = true; }  
# 411
}  
# 412
}  
# 416
bool __found_zero = false; 
# 417
int __sep_pos = 0; 
# 418
while (!__testeof) 
# 419
{ 
# 420
if (((__lc->_M_use_grouping) && (__c == (__lc->_M_thousands_sep))) || (__c == (__lc->_M_decimal_point))) { 
# 422
break; } else { 
# 423
if ((__c == (__lit[__num_base::_S_izero])) && ((!__found_zero) || (__base == 10))) 
# 425
{ 
# 426
__found_zero = true; 
# 427
++__sep_pos; 
# 428
if (__basefield == 0) { 
# 429
__base = 8; }  
# 430
if (__base == 8) { 
# 431
__sep_pos = 0; }  
# 432
} else { 
# 433
if (__found_zero && ((__c == (__lit[__num_base::_S_ix])) || (__c == (__lit[__num_base::_S_iX])))) 
# 436
{ 
# 437
if (__basefield == 0) { 
# 438
__base = 16; }  
# 439
if (__base == 16) 
# 440
{ 
# 441
__found_zero = false; 
# 442
__sep_pos = 0; 
# 443
} else { 
# 445
break; }  
# 446
} else { 
# 448
break; }  }  }  
# 450
if ((++__beg) != __end) 
# 451
{ 
# 452
__c = (*__beg); 
# 453
if (!__found_zero) { 
# 454
break; }  
# 455
} else { 
# 457
__testeof = true; }  
# 458
}  
# 462
const size_t __len = (__base == 16) ? (__num_base::_S_iend) - (__num_base::_S_izero) : __base; 
# 466
__cxx11::string __found_grouping; 
# 467
if (__lc->_M_use_grouping) { 
# 468
__found_grouping.reserve(32); }  
# 469
bool __testfail = false; 
# 470
bool __testoverflow = false; 
# 471
const __unsigned_type __max = (__negative && __gnu_cxx::__numeric_traits< _ValueT> ::__is_signed) ? -__gnu_cxx::__numeric_traits< _ValueT> ::__min : __gnu_cxx::__numeric_traits< _ValueT> ::__max; 
# 475
const __unsigned_type __smax = __max / __base; 
# 476
__unsigned_type __result = (0); 
# 477
int __digit = 0; 
# 478
const char_type *__lit_zero = __lit + __num_base::_S_izero; 
# 480
if (!(__lc->_M_allocated)) { 
# 482
while (!__testeof) 
# 483
{ 
# 484
__digit = _M_find(__lit_zero, __len, __c); 
# 485
if (__digit == (-1)) { 
# 486
break; }  
# 488
if (__result > __smax) { 
# 489
__testoverflow = true; } else 
# 491
{ 
# 492
__result *= __base; 
# 493
__testoverflow |= (__result > (__max - __digit)); 
# 494
__result += __digit; 
# 495
++__sep_pos; 
# 496
}  
# 498
if ((++__beg) != __end) { 
# 499
__c = (*__beg); } else { 
# 501
__testeof = true; }  
# 502
}  } else { 
# 504
while (!__testeof) 
# 505
{ 
# 508
if ((__lc->_M_use_grouping) && (__c == (__lc->_M_thousands_sep))) 
# 509
{ 
# 512
if (__sep_pos) 
# 513
{ 
# 514
(__found_grouping += (static_cast< char>(__sep_pos))); 
# 515
__sep_pos = 0; 
# 516
} else 
# 518
{ 
# 519
__testfail = true; 
# 520
break; 
# 521
}  
# 522
} else { 
# 523
if (__c == (__lc->_M_decimal_point)) { 
# 524
break; } else 
# 526
{ 
# 527
const char_type *__q = __traits_type::find(__lit_zero, __len, __c); 
# 529
if (!__q) { 
# 530
break; }  
# 532
__digit = (__q - __lit_zero); 
# 533
if (__digit > 15) { 
# 534
__digit -= 6; }  
# 535
if (__result > __smax) { 
# 536
__testoverflow = true; } else 
# 538
{ 
# 539
__result *= __base; 
# 540
__testoverflow |= (__result > (__max - __digit)); 
# 541
__result += __digit; 
# 542
++__sep_pos; 
# 543
}  
# 544
}  }  
# 546
if ((++__beg) != __end) { 
# 547
__c = (*__beg); } else { 
# 549
__testeof = true; }  
# 550
}  }  
# 554
if (__found_grouping.size()) 
# 555
{ 
# 557
(__found_grouping += (static_cast< char>(__sep_pos))); 
# 559
if (!std::__verify_grouping((__lc->_M_grouping), (__lc->_M_grouping_size), __found_grouping)) { 
# 562
__err = ios_base::failbit; }  
# 563
}  
# 567
if (((!__sep_pos) && (!__found_zero) && (!(__found_grouping.size()))) || __testfail) 
# 569
{ 
# 570
__v = 0; 
# 571
__err = ios_base::failbit; 
# 572
} else { 
# 573
if (__testoverflow) 
# 574
{ 
# 575
if (__negative && __gnu_cxx::__numeric_traits< _ValueT> ::__is_signed) { 
# 577
__v = __gnu_cxx::__numeric_traits< _ValueT> ::__min; } else { 
# 579
__v = __gnu_cxx::__numeric_traits< _ValueT> ::__max; }  
# 580
__err = ios_base::failbit; 
# 581
} else { 
# 583
__v = (__negative ? -__result : __result); }  }  
# 585
if (__testeof) { 
# 586
(__err |= ios_base::eofbit); }  
# 587
return __beg; 
# 588
} 
# 592
template< class _CharT, class _InIter> _InIter 
# 595
num_get< _CharT, _InIter> ::do_get(iter_type __beg, iter_type __end, ios_base &__io, ios_base::iostate &
# 596
__err, bool &__v) const 
# 597
{ 
# 598
if (!(((__io.flags()) & ios_base::boolalpha))) 
# 599
{ 
# 603
long __l = (-1); 
# 604
__beg = _M_extract_int(__beg, __end, __io, __err, __l); 
# 605
if ((__l == (0)) || (__l == (1))) { 
# 606
__v = ((bool)__l); } else 
# 608
{ 
# 611
__v = true; 
# 612
__err = ios_base::failbit; 
# 613
if (__beg == __end) { 
# 614
(__err |= ios_base::eofbit); }  
# 615
}  
# 616
} else 
# 618
{ 
# 620
typedef __numpunct_cache< _CharT>  __cache_type; 
# 621
__use_cache< __numpunct_cache< _CharT> >  __uc; 
# 622
const locale &__loc = __io._M_getloc(); 
# 623
const __cache_type *__lc = __uc(__loc); 
# 625
bool __testf = true; 
# 626
bool __testt = true; 
# 627
bool __donef = (__lc->_M_falsename_size) == 0; 
# 628
bool __donet = (__lc->_M_truename_size) == 0; 
# 629
bool __testeof = false; 
# 630
size_t __n = (0); 
# 631
while ((!__donef) || (!__donet)) 
# 632
{ 
# 633
if (__beg == __end) 
# 634
{ 
# 635
__testeof = true; 
# 636
break; 
# 637
}  
# 639
const char_type __c = *__beg; 
# 641
if (!__donef) { 
# 642
__testf = (__c == ((__lc->_M_falsename)[__n])); }  
# 644
if ((!__testf) && __donet) { 
# 645
break; }  
# 647
if (!__donet) { 
# 648
__testt = (__c == ((__lc->_M_truename)[__n])); }  
# 650
if ((!__testt) && __donef) { 
# 651
break; }  
# 653
if ((!__testt) && (!__testf)) { 
# 654
break; }  
# 656
++__n; 
# 657
++__beg; 
# 659
__donef = ((!__testf) || (__n >= (__lc->_M_falsename_size))); 
# 660
__donet = ((!__testt) || (__n >= (__lc->_M_truename_size))); 
# 661
}  
# 662
if (__testf && (__n == (__lc->_M_falsename_size)) && __n) 
# 663
{ 
# 664
__v = false; 
# 665
if (__testt && (__n == (__lc->_M_truename_size))) { 
# 666
__err = ios_base::failbit; } else { 
# 668
__err = (__testeof ? ios_base::eofbit : ios_base::goodbit); }  
# 669
} else { 
# 670
if (__testt && (__n == (__lc->_M_truename_size)) && __n) 
# 671
{ 
# 672
__v = true; 
# 673
__err = (__testeof ? ios_base::eofbit : ios_base::goodbit); 
# 674
} else 
# 676
{ 
# 679
__v = false; 
# 680
__err = ios_base::failbit; 
# 681
if (__testeof) { 
# 682
(__err |= ios_base::eofbit); }  
# 683
}  }  
# 684
}  
# 685
return __beg; 
# 686
} 
# 688
template< class _CharT, class _InIter> _InIter 
# 691
num_get< _CharT, _InIter> ::do_get(iter_type __beg, iter_type __end, ios_base &__io, ios_base::iostate &
# 692
__err, float &__v) const 
# 693
{ 
# 694
__cxx11::string __xtrc; 
# 695
__xtrc.reserve(32); 
# 696
__beg = _M_extract_float(__beg, __end, __io, __err, __xtrc); 
# 697
std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale()); 
# 698
if (__beg == __end) { 
# 699
(__err |= ios_base::eofbit); }  
# 700
return __beg; 
# 701
} 
# 703
template< class _CharT, class _InIter> _InIter 
# 706
num_get< _CharT, _InIter> ::do_get(iter_type __beg, iter_type __end, ios_base &__io, ios_base::iostate &
# 707
__err, double &__v) const 
# 708
{ 
# 709
__cxx11::string __xtrc; 
# 710
__xtrc.reserve(32); 
# 711
__beg = _M_extract_float(__beg, __end, __io, __err, __xtrc); 
# 712
std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale()); 
# 713
if (__beg == __end) { 
# 714
(__err |= ios_base::eofbit); }  
# 715
return __beg; 
# 716
} 
# 735 "/usr/include/c++/5/bits/locale_facets.tcc" 3
template< class _CharT, class _InIter> _InIter 
# 738
num_get< _CharT, _InIter> ::do_get(iter_type __beg, iter_type __end, ios_base &__io, ios_base::iostate &
# 739
__err, long double &__v) const 
# 740
{ 
# 741
__cxx11::string __xtrc; 
# 742
__xtrc.reserve(32); 
# 743
__beg = _M_extract_float(__beg, __end, __io, __err, __xtrc); 
# 744
std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale()); 
# 745
if (__beg == __end) { 
# 746
(__err |= ios_base::eofbit); }  
# 747
return __beg; 
# 748
} 
# 750
template< class _CharT, class _InIter> _InIter 
# 753
num_get< _CharT, _InIter> ::do_get(iter_type __beg, iter_type __end, ios_base &__io, ios_base::iostate &
# 754
__err, void *&__v) const 
# 755
{ 
# 757
typedef ios_base::fmtflags fmtflags; 
# 758
const fmtflags __fmt = __io.flags(); 
# 759
__io.flags((((__fmt & ((~ios_base::basefield)))) | ios_base::hex)); 
# 763
typedef __gnu_cxx::__conditional_type< true, unsigned long, unsigned long long> ::__type _UIntPtrType; 
# 765
_UIntPtrType __ul; 
# 766
__beg = _M_extract_int(__beg, __end, __io, __err, __ul); 
# 769
__io.flags(__fmt); 
# 771
__v = (reinterpret_cast< void *>(__ul)); 
# 772
return __beg; 
# 773
} 
# 777
template< class _CharT, class _OutIter> void 
# 780
num_put< _CharT, _OutIter> ::_M_pad(_CharT __fill, streamsize __w, ios_base &__io, _CharT *
# 781
__new, const _CharT *__cs, int &__len) const 
# 782
{ 
# 785
__pad< _CharT, char_traits< _CharT> > ::_S_pad(__io, __fill, __new, __cs, __w, __len); 
# 787
__len = (static_cast< int>(__w)); 
# 788
} 
# 792
template< class _CharT, class _ValueT> int 
# 794
__int_to_char(_CharT *__bufend, _ValueT __v, const _CharT *__lit, ios_base::fmtflags 
# 795
__flags, bool __dec) 
# 796
{ 
# 797
_CharT *__buf = __bufend; 
# 798
if (__builtin_expect(__dec, true)) 
# 799
{ 
# 801
do 
# 802
{ 
# 803
(*(--__buf)) = (__lit[(__v % 10) + __num_base::_S_odigits]); 
# 804
__v /= 10; 
# 805
} 
# 806
while (__v != 0); 
# 807
} else { 
# 808
if (((__flags & ios_base::basefield)) == ios_base::oct) 
# 809
{ 
# 811
do 
# 812
{ 
# 813
(*(--__buf)) = (__lit[(__v & 7) + __num_base::_S_odigits]); 
# 814
__v >>= 3; 
# 815
} 
# 816
while (__v != 0); 
# 817
} else 
# 819
{ 
# 821
const bool __uppercase = (__flags & ios_base::uppercase); 
# 822
const int __case_offset = __uppercase ? __num_base::_S_oudigits : __num_base::_S_odigits; 
# 824
do 
# 825
{ 
# 826
(*(--__buf)) = (__lit[(__v & 15) + __case_offset]); 
# 827
__v >>= 4; 
# 828
} 
# 829
while (__v != 0); 
# 830
}  }  
# 831
return __bufend - __buf; 
# 832
} 
# 836
template< class _CharT, class _OutIter> void 
# 839
num_put< _CharT, _OutIter> ::_M_group_int(const char *__grouping, size_t __grouping_size, _CharT __sep, ios_base &, _CharT *
# 840
__new, _CharT *__cs, int &__len) const 
# 841
{ 
# 842
_CharT *__p = std::__add_grouping(__new, __sep, __grouping, __grouping_size, __cs, __cs + __len); 
# 844
__len = (__p - __new); 
# 845
} 
# 847
template< class _CharT, class _OutIter> 
# 848
template< class _ValueT> _OutIter 
# 851
num_put< _CharT, _OutIter> ::_M_insert_int(_OutIter __s, ios_base &__io, _CharT __fill, _ValueT 
# 852
__v) const 
# 853
{ 
# 854
using __gnu_cxx::__add_unsigned;
# 855
typedef typename __gnu_cxx::__add_unsigned< _ValueT> ::__type __unsigned_type; 
# 856
typedef __numpunct_cache< _CharT>  __cache_type; 
# 857
__use_cache< __numpunct_cache< _CharT> >  __uc; 
# 858
const locale &__loc = __io._M_getloc(); 
# 859
const __cache_type *__lc = __uc(__loc); 
# 860
const _CharT *__lit = ((__lc->_M_atoms_out)); 
# 861
const ios_base::fmtflags __flags = __io.flags(); 
# 864
const int __ilen = ((5) * sizeof(_ValueT)); 
# 865
_CharT *__cs = static_cast< _CharT *>(__builtin_alloca(sizeof(_CharT) * __ilen)); 
# 870
const ios_base::fmtflags __basefield = (__flags & ios_base::basefield); 
# 871
const bool __dec = (__basefield != ios_base::oct) && (__basefield != ios_base::hex); 
# 873
const __unsigned_type __u = ((__v > 0) || (!__dec)) ? (__unsigned_type)__v : (-((__unsigned_type)__v)); 
# 876
int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec); 
# 877
__cs += (__ilen - __len); 
# 880
if (__lc->_M_use_grouping) 
# 881
{ 
# 884
_CharT *__cs2 = static_cast< _CharT *>(__builtin_alloca((sizeof(_CharT) * (__len + 1)) * (2))); 
# 887
_M_group_int((__lc->_M_grouping), (__lc->_M_grouping_size), (__lc->_M_thousands_sep), __io, __cs2 + 2, __cs, __len); 
# 889
__cs = (__cs2 + 2); 
# 890
}  
# 893
if (__builtin_expect(__dec, true)) 
# 894
{ 
# 896
if (__v >= 0) 
# 897
{ 
# 898
if (((bool)((__flags & ios_base::showpos))) && __gnu_cxx::__numeric_traits< _ValueT> ::__is_signed) { 
# 900
((*(--__cs)) = (__lit[__num_base::_S_oplus])), (++__len); }  
# 901
} else { 
# 903
((*(--__cs)) = (__lit[__num_base::_S_ominus])), (++__len); }  
# 904
} else { 
# 905
if (((bool)((__flags & ios_base::showbase))) && __v) 
# 906
{ 
# 907
if (__basefield == ios_base::oct) { 
# 908
((*(--__cs)) = (__lit[__num_base::_S_odigits])), (++__len); } else 
# 910
{ 
# 912
const bool __uppercase = (__flags & ios_base::uppercase); 
# 913
(*(--__cs)) = (__lit[(__num_base::_S_ox) + __uppercase]); 
# 915
(*(--__cs)) = (__lit[__num_base::_S_odigits]); 
# 916
__len += 2; 
# 917
}  
# 918
}  }  
# 921
const streamsize __w = __io.width(); 
# 922
if (__w > (static_cast< streamsize>(__len))) 
# 923
{ 
# 924
_CharT *__cs3 = static_cast< _CharT *>(__builtin_alloca(sizeof(_CharT) * __w)); 
# 926
_M_pad(__fill, __w, __io, __cs3, __cs, __len); 
# 927
__cs = __cs3; 
# 928
}  
# 929
__io.width(0); 
# 933
return std::__write(__s, __cs, __len); 
# 934
} 
# 936
template< class _CharT, class _OutIter> void 
# 939
num_put< _CharT, _OutIter> ::_M_group_float(const char *__grouping, size_t __grouping_size, _CharT 
# 940
__sep, const _CharT *__p, _CharT *__new, _CharT *
# 941
__cs, int &__len) const 
# 942
{ 
# 946
const int __declen = (__p) ? __p - __cs : __len; 
# 947
_CharT *__p2 = std::__add_grouping(__new, __sep, __grouping, __grouping_size, __cs, __cs + __declen); 
# 952
int __newlen = __p2 - __new; 
# 953
if (__p) 
# 954
{ 
# 955
char_traits< _CharT> ::copy(__p2, __p, __len - __declen); 
# 956
__newlen += (__len - __declen); 
# 957
}  
# 958
__len = __newlen; 
# 959
} 
# 971 "/usr/include/c++/5/bits/locale_facets.tcc" 3
template< class _CharT, class _OutIter> 
# 972
template< class _ValueT> _OutIter 
# 975
num_put< _CharT, _OutIter> ::_M_insert_float(_OutIter __s, ios_base &__io, _CharT __fill, char __mod, _ValueT 
# 976
__v) const 
# 977
{ 
# 978
typedef __numpunct_cache< _CharT>  __cache_type; 
# 979
__use_cache< __numpunct_cache< _CharT> >  __uc; 
# 980
const locale &__loc = __io._M_getloc(); 
# 981
const __cache_type *__lc = __uc(__loc); 
# 984
const streamsize __prec = (__io.precision() < (0)) ? 6 : __io.precision(); 
# 986
const int __max_digits = (__gnu_cxx::__numeric_traits< _ValueT> ::__digits10); 
# 990
int __len; 
# 992
char __fbuf[16]; 
# 993
__num_base::_S_format_float(__io, __fbuf, __mod); 
# 997
const bool __use_prec = (((__io.flags()) & ios_base::floatfield)) != ios_base::floatfield; 
# 1002
int __cs_size = (__max_digits * 3); 
# 1003
char *__cs = static_cast< char *>(__builtin_alloca(__cs_size)); 
# 1004
if (__use_prec) { 
# 1005
__len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size, __fbuf, __prec, __v); } else { 
# 1008
__len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size, __fbuf, __v); }  
# 1012
if (__len >= __cs_size) 
# 1013
{ 
# 1014
__cs_size = (__len + 1); 
# 1015
__cs = (static_cast< char *>(__builtin_alloca(__cs_size))); 
# 1016
if (__use_prec) { 
# 1017
__len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size, __fbuf, __prec, __v); } else { 
# 1020
__len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size, __fbuf, __v); }  
# 1022
}  
# 1044 "/usr/include/c++/5/bits/locale_facets.tcc" 3
const ctype< _CharT>  &__ctype = use_facet< ctype< _CharT> > (__loc); 
# 1046
_CharT *__ws = static_cast< _CharT *>(__builtin_alloca(sizeof(_CharT) * __len)); 
# 1048
(__ctype.widen(__cs, __cs + __len, __ws)); 
# 1051
_CharT *__wp = (0); 
# 1052
const char *__p = char_traits< char> ::find(__cs, __len, '.'); 
# 1053
if (__p) 
# 1054
{ 
# 1055
__wp = (__ws + (__p - __cs)); 
# 1056
(*__wp) = (__lc->_M_decimal_point); 
# 1057
}  
# 1062
if ((__lc->_M_use_grouping) && ((__wp || (__len < 3)) || (((__cs[1]) <= ('9')) && ((__cs[2]) <= ('9')) && ((__cs[1]) >= ('0')) && ((__cs[2]) >= ('0'))))) 
# 1065
{ 
# 1068
_CharT *__ws2 = static_cast< _CharT *>(__builtin_alloca((sizeof(_CharT) * __len) * (2))); 
# 1071
streamsize __off = (0); 
# 1072
if (((__cs[0]) == ('-')) || ((__cs[0]) == ('+'))) 
# 1073
{ 
# 1074
__off = (1); 
# 1075
(__ws2[0]) = (__ws[0]); 
# 1076
__len -= 1; 
# 1077
}  
# 1079
_M_group_float((__lc->_M_grouping), (__lc->_M_grouping_size), (__lc->_M_thousands_sep), __wp, __ws2 + __off, __ws + __off, __len); 
# 1082
__len += __off; 
# 1084
__ws = __ws2; 
# 1085
}  
# 1088
const streamsize __w = __io.width(); 
# 1089
if (__w > (static_cast< streamsize>(__len))) 
# 1090
{ 
# 1091
_CharT *__ws3 = static_cast< _CharT *>(__builtin_alloca(sizeof(_CharT) * __w)); 
# 1093
_M_pad(__fill, __w, __io, __ws3, __ws, __len); 
# 1094
__ws = __ws3; 
# 1095
}  
# 1096
__io.width(0); 
# 1100
return std::__write(__s, __ws, __len); 
# 1101
} 
# 1103
template< class _CharT, class _OutIter> _OutIter 
# 1106
num_put< _CharT, _OutIter> ::do_put(iter_type __s, ios_base &__io, char_type __fill, bool __v) const 
# 1107
{ 
# 1108
const ios_base::fmtflags __flags = __io.flags(); 
# 1109
if (((__flags & ios_base::boolalpha)) == 0) 
# 1110
{ 
# 1111
const long __l = __v; 
# 1112
__s = _M_insert_int(__s, __io, __fill, __l); 
# 1113
} else 
# 1115
{ 
# 1116
typedef __numpunct_cache< _CharT>  __cache_type; 
# 1117
__use_cache< __numpunct_cache< _CharT> >  __uc; 
# 1118
const locale &__loc = __io._M_getloc(); 
# 1119
const __cache_type *__lc = __uc(__loc); 
# 1121
const _CharT *__name = __v ? __lc->_M_truename : (__lc->_M_falsename); 
# 1123
int __len = __v ? __lc->_M_truename_size : (__lc->_M_falsename_size); 
# 1126
const streamsize __w = __io.width(); 
# 1127
if (__w > (static_cast< streamsize>(__len))) 
# 1128
{ 
# 1129
const streamsize __plen = __w - __len; 
# 1130
_CharT *__ps = static_cast< _CharT *>(__builtin_alloca(sizeof(_CharT) * __plen)); 
# 1134
char_traits< _CharT> ::assign(__ps, __plen, __fill); 
# 1135
__io.width(0); 
# 1137
if (((__flags & ios_base::adjustfield)) == ios_base::left) 
# 1138
{ 
# 1139
__s = std::__write(__s, __name, __len); 
# 1140
__s = std::__write(__s, __ps, __plen); 
# 1141
} else 
# 1143
{ 
# 1144
__s = std::__write(__s, __ps, __plen); 
# 1145
__s = std::__write(__s, __name, __len); 
# 1146
}  
# 1147
return __s; 
# 1148
}  
# 1149
__io.width(0); 
# 1150
__s = std::__write(__s, __name, __len); 
# 1151
}  
# 1152
return __s; 
# 1153
} 
# 1155
template< class _CharT, class _OutIter> _OutIter 
# 1158
num_put< _CharT, _OutIter> ::do_put(iter_type __s, ios_base &__io, char_type __fill, double __v) const 
# 1159
{ return _M_insert_float(__s, __io, __fill, ((char)0), __v); } 
# 1169 "/usr/include/c++/5/bits/locale_facets.tcc" 3
template< class _CharT, class _OutIter> _OutIter 
# 1172
num_put< _CharT, _OutIter> ::do_put(iter_type __s, ios_base &__io, char_type __fill, long double 
# 1173
__v) const 
# 1174
{ return _M_insert_float(__s, __io, __fill, 'L', __v); } 
# 1176
template< class _CharT, class _OutIter> _OutIter 
# 1179
num_put< _CharT, _OutIter> ::do_put(iter_type __s, ios_base &__io, char_type __fill, const void *
# 1180
__v) const 
# 1181
{ 
# 1182
const ios_base::fmtflags __flags = __io.flags(); 
# 1183
const ios_base::fmtflags __fmt = (~((ios_base::basefield | ios_base::uppercase))); 
# 1185
__io.flags((((__flags & __fmt)) | ((ios_base::hex | ios_base::showbase)))); 
# 1189
typedef __gnu_cxx::__conditional_type< true, unsigned long, unsigned long long> ::__type _UIntPtrType; 
# 1191
__s = _M_insert_int(__s, __io, __fill, reinterpret_cast< _UIntPtrType>(__v)); 
# 1193
__io.flags(__flags); 
# 1194
return __s; 
# 1195
} 
# 1206 "/usr/include/c++/5/bits/locale_facets.tcc" 3
template< class _CharT, class _Traits> void 
# 1208
__pad< _CharT, _Traits> ::_S_pad(ios_base &__io, _CharT __fill, _CharT *
# 1209
__news, const _CharT *__olds, streamsize 
# 1210
__newlen, streamsize __oldlen) 
# 1211
{ 
# 1212
const size_t __plen = static_cast< size_t>(__newlen - __oldlen); 
# 1213
const ios_base::fmtflags __adjust = ((__io.flags()) & ios_base::adjustfield); 
# 1216
if (__adjust == ios_base::left) 
# 1217
{ 
# 1218
_Traits::copy(__news, __olds, __oldlen); 
# 1219
_Traits::assign(__news + __oldlen, __plen, __fill); 
# 1220
return; 
# 1221
}  
# 1223
size_t __mod = (0); 
# 1224
if (__adjust == ios_base::internal) 
# 1225
{ 
# 1229
const locale &__loc = __io._M_getloc(); 
# 1230
const ctype< _CharT>  &__ctype = use_facet< ctype< _CharT> > (__loc); 
# 1232
if (((__ctype.widen('-')) == (__olds[0])) || ((__ctype.widen('+')) == (__olds[0]))) 
# 1234
{ 
# 1235
(__news[0]) = (__olds[0]); 
# 1236
__mod = (1); 
# 1237
++__news; 
# 1238
} else { 
# 1239
if (((__ctype.widen('0')) == (__olds[0])) && (__oldlen > (1)) && (((__ctype.widen('x')) == (__olds[1])) || ((__ctype.widen('X')) == (__olds[1])))) 
# 1243
{ 
# 1244
(__news[0]) = (__olds[0]); 
# 1245
(__news[1]) = (__olds[1]); 
# 1246
__mod = (2); 
# 1247
__news += 2; 
# 1248
}  }  
# 1250
}  
# 1251
_Traits::assign(__news, __plen, __fill); 
# 1252
_Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod); 
# 1253
} 
# 1255
template< class _CharT> _CharT *
# 1257
__add_grouping(_CharT *__s, _CharT __sep, const char *
# 1258
__gbeg, size_t __gsize, const _CharT *
# 1259
__first, const _CharT *__last) 
# 1260
{ 
# 1261
size_t __idx = (0); 
# 1262
size_t __ctr = (0); 
# 1264
while (((__last - __first) > (__gbeg[__idx])) && ((static_cast< signed char>(__gbeg[__idx])) > 0) && ((__gbeg[__idx]) != __gnu_cxx::__numeric_traits_integer< char> ::__max)) 
# 1267
{ 
# 1268
__last -= (__gbeg[__idx]); 
# 1269
(__idx < (__gsize - (1))) ? ++__idx : (++__ctr); 
# 1270
}  
# 1272
while (__first != __last) { 
# 1273
(*(__s++)) = (*(__first++)); }  
# 1275
while (__ctr--) 
# 1276
{ 
# 1277
(*(__s++)) = __sep; 
# 1278
for (char __i = __gbeg[__idx]; __i > 0; --__i) { 
# 1279
(*(__s++)) = (*(__first++)); }  
# 1280
}  
# 1282
while (__idx--) 
# 1283
{ 
# 1284
(*(__s++)) = __sep; 
# 1285
for (char __i = __gbeg[__idx]; __i > 0; --__i) { 
# 1286
(*(__s++)) = (*(__first++)); }  
# 1287
}  
# 1289
return __s; 
# 1290
} 
# 1295
extern template class __cxx11::numpunct< char> ;
# 1296
extern template class __cxx11::numpunct_byname< char> ;
# 1297
extern template class num_get< char, istreambuf_iterator< char, char_traits< char> > > ;
# 1298
extern template class num_put< char, ostreambuf_iterator< char, char_traits< char> > > ;
# 1301
extern template const ctype< char>  &use_facet< ctype< char> > (const locale &);
# 1305
extern template const __cxx11::numpunct< char>  &use_facet< __cxx11::numpunct< char> > (const locale &);
# 1309
extern template const num_put< char, ostreambuf_iterator< char, char_traits< char> > >  &use_facet< num_put< char, ostreambuf_iterator< char, char_traits< char> > > > (const locale &);
# 1313
extern template const num_get< char, istreambuf_iterator< char, char_traits< char> > >  &use_facet< num_get< char, istreambuf_iterator< char, char_traits< char> > > > (const locale &);
# 1317
extern template bool has_facet< ctype< char> > (const locale &) throw();
# 1321
extern template bool has_facet< __cxx11::numpunct< char> > (const locale &) throw();
# 1325
extern template bool has_facet< num_put< char, ostreambuf_iterator< char, char_traits< char> > > > (const locale &) throw();
# 1329
extern template bool has_facet< num_get< char, istreambuf_iterator< char, char_traits< char> > > > (const locale &) throw();
# 1334
extern template class __cxx11::numpunct< wchar_t> ;
# 1335
extern template class __cxx11::numpunct_byname< wchar_t> ;
# 1336
extern template class num_get< wchar_t, istreambuf_iterator< wchar_t, char_traits< wchar_t> > > ;
# 1337
extern template class num_put< wchar_t, ostreambuf_iterator< wchar_t, char_traits< wchar_t> > > ;
# 1340
extern template const ctype< wchar_t>  &use_facet< ctype< wchar_t> > (const locale &);
# 1344
extern template const __cxx11::numpunct< wchar_t>  &use_facet< __cxx11::numpunct< wchar_t> > (const locale &);
# 1348
extern template const num_put< wchar_t, ostreambuf_iterator< wchar_t, char_traits< wchar_t> > >  &use_facet< num_put< wchar_t, ostreambuf_iterator< wchar_t, char_traits< wchar_t> > > > (const locale &);
# 1352
extern template const num_get< wchar_t, istreambuf_iterator< wchar_t, char_traits< wchar_t> > >  &use_facet< num_get< wchar_t, istreambuf_iterator< wchar_t, char_traits< wchar_t> > > > (const locale &);
# 1356
extern template bool has_facet< ctype< wchar_t> > (const locale &) throw();
# 1360
extern template bool has_facet< __cxx11::numpunct< wchar_t> > (const locale &) throw();
# 1364
extern template bool has_facet< num_put< wchar_t, ostreambuf_iterator< wchar_t, char_traits< wchar_t> > > > (const locale &) throw();
# 1368
extern template bool has_facet< num_get< wchar_t, istreambuf_iterator< wchar_t, char_traits< wchar_t> > > > (const locale &) throw();
# 1375
}
# 41 "/usr/include/c++/5/bits/basic_ios.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 45
template< class _Facet> inline const _Facet &
# 47
__check_facet(const _Facet *__f) 
# 48
{ 
# 49
if (!__f) { 
# 50
__throw_bad_cast(); }  
# 51
return *__f; 
# 52
} 
# 66 "/usr/include/c++/5/bits/basic_ios.h" 3
template< class _CharT, class _Traits> 
# 67
class basic_ios : public ios_base { 
# 76
public: typedef _CharT char_type; 
# 77
typedef typename _Traits::int_type int_type; 
# 78
typedef typename _Traits::pos_type pos_type; 
# 79
typedef typename _Traits::off_type off_type; 
# 80
typedef _Traits traits_type; 
# 87
typedef ctype< _CharT>  __ctype_type; 
# 89
typedef num_put< _CharT, ostreambuf_iterator< _CharT, _Traits> >  __num_put_type; 
# 91
typedef num_get< _CharT, istreambuf_iterator< _CharT, _Traits> >  __num_get_type; 
# 96
protected: basic_ostream< _CharT, _Traits>  *_M_tie; 
# 97
mutable char_type _M_fill; 
# 98
mutable bool _M_fill_init; 
# 99
basic_streambuf< _CharT, _Traits>  *_M_streambuf; 
# 102
const __ctype_type *_M_ctype; 
# 104
const __num_put_type *_M_num_put; 
# 106
const __num_get_type *_M_num_get; 
# 120 "/usr/include/c++/5/bits/basic_ios.h" 3
public: operator void *() const 
# 121
{ return this->fail() ? 0 : (const_cast< basic_ios *>(this)); } 
# 125
bool operator!() const 
# 126
{ return this->fail(); } 
# 137 "/usr/include/c++/5/bits/basic_ios.h" 3
iostate rdstate() const 
# 138
{ return _M_streambuf_state; } 
# 148 "/usr/include/c++/5/bits/basic_ios.h" 3
void clear(iostate __state = goodbit); 
# 157
void setstate(iostate __state) 
# 158
{ this->clear(((this->rdstate()) | __state)); } 
# 164
void _M_setstate(iostate __state) 
# 165
{ 
# 168
((_M_streambuf_state) |= __state); 
# 169
if (((this->exceptions()) & __state)) { 
# 170
throw; }  
# 171
} 
# 180
bool good() const 
# 181
{ return (this->rdstate()) == 0; } 
# 190
bool eof() const 
# 191
{ return (((this->rdstate()) & eofbit)) != 0; } 
# 201 "/usr/include/c++/5/bits/basic_ios.h" 3
bool fail() const 
# 202
{ return (((this->rdstate()) & ((badbit | failbit)))) != 0; } 
# 211
bool bad() const 
# 212
{ return (((this->rdstate()) & badbit)) != 0; } 
# 222 "/usr/include/c++/5/bits/basic_ios.h" 3
iostate exceptions() const 
# 223
{ return _M_exception; } 
# 257 "/usr/include/c++/5/bits/basic_ios.h" 3
void exceptions(iostate __except) 
# 258
{ 
# 259
(_M_exception) = __except; 
# 260
this->clear(_M_streambuf_state); 
# 261
} 
# 270
explicit basic_ios(basic_streambuf< _CharT, _Traits>  *__sb) : ios_base(), _M_tie((0)), _M_fill(), _M_fill_init(false), _M_streambuf((0)), _M_ctype((0)), _M_num_put((0)), _M_num_get((0)) 
# 273
{ this->init(__sb); } 
# 282
virtual ~basic_ios() { } 
# 295 "/usr/include/c++/5/bits/basic_ios.h" 3
basic_ostream< _CharT, _Traits>  *tie() const 
# 296
{ return _M_tie; } 
# 307 "/usr/include/c++/5/bits/basic_ios.h" 3
basic_ostream< _CharT, _Traits>  *tie(basic_ostream< _CharT, _Traits>  *__tiestr) 
# 308
{ 
# 309
basic_ostream< _CharT, _Traits>  *__old = _M_tie; 
# 310
(_M_tie) = __tiestr; 
# 311
return __old; 
# 312
} 
# 321
basic_streambuf< _CharT, _Traits>  *rdbuf() const 
# 322
{ return _M_streambuf; } 
# 347 "/usr/include/c++/5/bits/basic_ios.h" 3
basic_streambuf< _CharT, _Traits>  *rdbuf(basic_streambuf< _CharT, _Traits>  * __sb); 
# 361 "/usr/include/c++/5/bits/basic_ios.h" 3
basic_ios &copyfmt(const basic_ios & __rhs); 
# 370
char_type fill() const 
# 371
{ 
# 372
if (!(_M_fill_init)) 
# 373
{ 
# 374
(_M_fill) = this->widen(' '); 
# 375
(_M_fill_init) = true; 
# 376
}  
# 377
return _M_fill; 
# 378
} 
# 390 "/usr/include/c++/5/bits/basic_ios.h" 3
char_type fill(char_type __ch) 
# 391
{ 
# 392
char_type __old = (this->fill()); 
# 393
(_M_fill) = __ch; 
# 394
return __old; 
# 395
} 
# 410 "/usr/include/c++/5/bits/basic_ios.h" 3
locale imbue(const locale & __loc); 
# 430 "/usr/include/c++/5/bits/basic_ios.h" 3
char narrow(char_type __c, char __dfault) const 
# 431
{ return (__check_facet(_M_ctype).narrow(__c, __dfault)); } 
# 449 "/usr/include/c++/5/bits/basic_ios.h" 3
char_type widen(char __c) const 
# 450
{ return (__check_facet(_M_ctype).widen(__c)); } 
# 460
protected: basic_ios() : ios_base(), _M_tie((0)), _M_fill(char_type()), _M_fill_init(false), _M_streambuf((0)), _M_ctype((0)), _M_num_put((0)), _M_num_get((0)) 
# 463
{ } 
# 472
void init(basic_streambuf< _CharT, _Traits>  * __sb); 
# 510 "/usr/include/c++/5/bits/basic_ios.h" 3
void _M_cache_locale(const locale & __loc); 
# 511
}; 
# 514
}
# 35 "/usr/include/c++/5/bits/basic_ios.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 39
template< class _CharT, class _Traits> void 
# 41
basic_ios< _CharT, _Traits> ::clear(iostate __state) 
# 42
{ 
# 43
if ((this->rdbuf())) { 
# 44
(_M_streambuf_state) = __state; } else { 
# 46
(_M_streambuf_state) = ((__state | badbit)); }  
# 47
if (((this->exceptions()) & (this->rdstate()))) { 
# 48
__throw_ios_failure("basic_ios::clear"); }  
# 49
} 
# 51
template< class _CharT, class _Traits> basic_streambuf< _CharT, _Traits>  *
# 53
basic_ios< _CharT, _Traits> ::rdbuf(basic_streambuf< _CharT, _Traits>  *__sb) 
# 54
{ 
# 55
basic_streambuf< _CharT, _Traits>  *__old = _M_streambuf; 
# 56
(_M_streambuf) = __sb; 
# 57
this->clear(); 
# 58
return __old; 
# 59
} 
# 61
template< class _CharT, class _Traits> basic_ios< _CharT, _Traits>  &
# 63
basic_ios< _CharT, _Traits> ::copyfmt(const basic_ios &__rhs) 
# 64
{ 
# 67
if (this != (&__rhs)) 
# 68
{ 
# 73
_Words *__words = ((__rhs._M_word_size) <= _S_local_word_size) ? _M_local_word : (new _Words [__rhs._M_word_size]); 
# 77
_Callback_list *__cb = ((__rhs._M_callbacks)); 
# 78
if (__cb) { 
# 79
__cb->_M_add_reference(); }  
# 80
this->ios_base::_M_call_callbacks(erase_event); 
# 81
if ((_M_word) != (_M_local_word)) 
# 82
{ 
# 83
delete [] (_M_word); 
# 84
(_M_word) = (0); 
# 85
}  
# 86
this->ios_base::_M_dispose_callbacks(); 
# 89
(_M_callbacks) = __cb; 
# 90
for (int __i = 0; __i < (__rhs._M_word_size); ++__i) { 
# 91
(__words[__i]) = ((__rhs._M_word)[__i]); }  
# 92
(_M_word) = __words; 
# 93
(_M_word_size) = (__rhs._M_word_size); 
# 95
(this->flags((__rhs.flags()))); 
# 96
(this->width((__rhs.width()))); 
# 97
(this->precision((__rhs.precision()))); 
# 98
(this->tie((__rhs.tie()))); 
# 99
(this->fill((__rhs.fill()))); 
# 100
(_M_ios_locale) = (__rhs.getloc()); 
# 101
_M_cache_locale(_M_ios_locale); 
# 103
this->ios_base::_M_call_callbacks(copyfmt_event); 
# 106
(this->exceptions((__rhs.exceptions()))); 
# 107
}  
# 108
return *this; 
# 109
} 
# 112
template< class _CharT, class _Traits> locale 
# 114
basic_ios< _CharT, _Traits> ::imbue(const locale &__loc) 
# 115
{ 
# 116
locale __old(this->getloc()); 
# 117
this->ios_base::imbue(__loc); 
# 118
_M_cache_locale(__loc); 
# 119
if ((this->rdbuf()) != 0) { 
# 120
((this->rdbuf())->pubimbue(__loc)); }  
# 121
return __old; 
# 122
} 
# 124
template< class _CharT, class _Traits> void 
# 126
basic_ios< _CharT, _Traits> ::init(basic_streambuf< _CharT, _Traits>  *__sb) 
# 127
{ 
# 129
this->ios_base::_M_init(); 
# 132
_M_cache_locale(_M_ios_locale); 
# 146 "/usr/include/c++/5/bits/basic_ios.tcc" 3
(_M_fill) = _CharT(); 
# 147
(_M_fill_init) = false; 
# 149
(_M_tie) = 0; 
# 150
(_M_exception) = goodbit; 
# 151
(_M_streambuf) = __sb; 
# 152
(_M_streambuf_state) = ((__sb) ? goodbit : badbit); 
# 153
} 
# 155
template< class _CharT, class _Traits> void 
# 157
basic_ios< _CharT, _Traits> ::_M_cache_locale(const locale &__loc) 
# 158
{ 
# 159
if (__builtin_expect(has_facet< __ctype_type> (__loc), true)) { 
# 160
(_M_ctype) = (&use_facet< __ctype_type> (__loc)); } else { 
# 162
(_M_ctype) = 0; }  
# 164
if (__builtin_expect(has_facet< __num_put_type> (__loc), true)) { 
# 165
(_M_num_put) = (&use_facet< __num_put_type> (__loc)); } else { 
# 167
(_M_num_put) = 0; }  
# 169
if (__builtin_expect(has_facet< __num_get_type> (__loc), true)) { 
# 170
(_M_num_get) = (&use_facet< __num_get_type> (__loc)); } else { 
# 172
(_M_num_get) = 0; }  
# 173
} 
# 178
extern template class basic_ios< char, char_traits< char> > ;
# 181
extern template class basic_ios< wchar_t, char_traits< wchar_t> > ;
# 186
}
# 41 "/usr/include/c++/5/ostream" 3
namespace std __attribute((__visibility__("default"))) { 
# 57 "/usr/include/c++/5/ostream" 3
template< class _CharT, class _Traits> 
# 58
class basic_ostream : virtual public basic_ios< _CharT, _Traits>  { 
# 62
public: typedef _CharT char_type; 
# 63
typedef typename _Traits::int_type int_type; 
# 64
typedef typename _Traits::pos_type pos_type; 
# 65
typedef typename _Traits::off_type off_type; 
# 66
typedef _Traits traits_type; 
# 69
typedef basic_streambuf< _CharT, _Traits>  __streambuf_type; 
# 70
typedef ::std::basic_ios< _CharT, _Traits>  __ios_type; 
# 71
typedef basic_ostream __ostream_type; 
# 73
typedef num_put< _CharT, ostreambuf_iterator< _CharT, _Traits> >  __num_put_type; 
# 74
typedef ctype< _CharT>  __ctype_type; 
# 84 "/usr/include/c++/5/ostream" 3
explicit basic_ostream(__streambuf_type *__sb) 
# 85
{ (this->init(__sb)); } 
# 93
virtual ~basic_ostream() { } 
# 96
class sentry; 
# 97
friend class sentry; 
# 108 "/usr/include/c++/5/ostream" 3
__ostream_type &operator<<(__ostream_type &(*__pf)(__ostream_type &)) 
# 109
{ 
# 113
return __pf(*this); 
# 114
} 
# 117
__ostream_type &operator<<(__ios_type &(*__pf)(__ios_type &)) 
# 118
{ 
# 122
__pf(*this); 
# 123
return *this; 
# 124
} 
# 127
__ostream_type &operator<<(::std::ios_base &(*__pf)(::std::ios_base &)) 
# 128
{ 
# 132
__pf(*this); 
# 133
return *this; 
# 134
} 
# 166 "/usr/include/c++/5/ostream" 3
__ostream_type &operator<<(long __n) 
# 167
{ return _M_insert(__n); } 
# 170
__ostream_type &operator<<(unsigned long __n) 
# 171
{ return _M_insert(__n); } 
# 174
__ostream_type &operator<<(bool __n) 
# 175
{ return _M_insert(__n); } 
# 178
__ostream_type &operator<<(short __n); 
# 181
__ostream_type &operator<<(unsigned short __n) 
# 182
{ 
# 185
return _M_insert(static_cast< unsigned long>(__n)); 
# 186
} 
# 189
__ostream_type &operator<<(int __n); 
# 192
__ostream_type &operator<<(unsigned __n) 
# 193
{ 
# 196
return _M_insert(static_cast< unsigned long>(__n)); 
# 197
} 
# 201
__ostream_type &operator<<(long long __n) 
# 202
{ return _M_insert(__n); } 
# 205
__ostream_type &operator<<(unsigned long long __n) 
# 206
{ return _M_insert(__n); } 
# 220 "/usr/include/c++/5/ostream" 3
__ostream_type &operator<<(double __f) 
# 221
{ return _M_insert(__f); } 
# 224
__ostream_type &operator<<(float __f) 
# 225
{ 
# 228
return _M_insert(static_cast< double>(__f)); 
# 229
} 
# 232
__ostream_type &operator<<(long double __f) 
# 233
{ return _M_insert(__f); } 
# 245 "/usr/include/c++/5/ostream" 3
__ostream_type &operator<<(const void *__p) 
# 246
{ return _M_insert(__p); } 
# 270 "/usr/include/c++/5/ostream" 3
__ostream_type &operator<<(__streambuf_type * __sb); 
# 303 "/usr/include/c++/5/ostream" 3
__ostream_type &put(char_type __c); 
# 311
void _M_write(const char_type *__s, ::std::streamsize __n) 
# 312
{ 
# 313
const ::std::streamsize __put = ((this->rdbuf())->sputn(__s, __n)); 
# 314
if (__put != __n) { 
# 315
(this->setstate(ios_base::badbit)); }  
# 316
} 
# 335 "/usr/include/c++/5/ostream" 3
__ostream_type &write(const char_type * __s, ::std::streamsize __n); 
# 348 "/usr/include/c++/5/ostream" 3
__ostream_type &flush(); 
# 358 "/usr/include/c++/5/ostream" 3
pos_type tellp(); 
# 369 "/usr/include/c++/5/ostream" 3
__ostream_type &seekp(pos_type); 
# 381 "/usr/include/c++/5/ostream" 3
__ostream_type &seekp(off_type, ::std::ios_base::seekdir); 
# 384
protected: basic_ostream() 
# 385
{ (this->init(0)); } 
# 413 "/usr/include/c++/5/ostream" 3
template< class _ValueT> __ostream_type &_M_insert(_ValueT __v); 
# 416
}; 
# 425 "/usr/include/c++/5/ostream" 3
template< class _CharT, class _Traits> 
# 426
class basic_ostream< _CharT, _Traits> ::sentry { 
# 429
bool _M_ok; 
# 430
basic_ostream &_M_os; 
# 445 "/usr/include/c++/5/ostream" 3
public: explicit sentry(basic_ostream & __os); 
# 454 "/usr/include/c++/5/ostream" 3
~sentry() 
# 455
{ 
# 457
if (((bool)(((_M_os).flags()) & ios_base::unitbuf)) && (!uncaught_exception())) 
# 458
{ 
# 460
if (((_M_os).rdbuf()) && ((((_M_os).rdbuf())->pubsync()) == (-1))) { 
# 461
((_M_os).setstate(ios_base::badbit)); }  
# 462
}  
# 463
} 
# 475 "/usr/include/c++/5/ostream" 3
operator bool() const 
# 476
{ return _M_ok; } 
# 477
}; 
# 495 "/usr/include/c++/5/ostream" 3
template< class _CharT, class _Traits> inline basic_ostream< _CharT, _Traits>  &
# 497
operator<<(basic_ostream< _CharT, _Traits>  &__out, _CharT __c) 
# 498
{ return __ostream_insert(__out, &__c, 1); } 
# 500
template< class _CharT, class _Traits> inline basic_ostream< _CharT, _Traits>  &
# 502
operator<<(basic_ostream< _CharT, _Traits>  &__out, char __c) 
# 503
{ return __out << (__out.widen(__c)); } 
# 506
template< class _Traits> inline basic_ostream< char, _Traits>  &
# 508
operator<<(basic_ostream< char, _Traits>  &__out, char __c) 
# 509
{ return __ostream_insert(__out, &__c, 1); } 
# 512
template< class _Traits> inline basic_ostream< char, _Traits>  &
# 514
operator<<(basic_ostream< char, _Traits>  &__out, signed char __c) 
# 515
{ return __out << (static_cast< char>(__c)); } 
# 517
template< class _Traits> inline basic_ostream< char, _Traits>  &
# 519
operator<<(basic_ostream< char, _Traits>  &__out, unsigned char __c) 
# 520
{ return __out << (static_cast< char>(__c)); } 
# 537 "/usr/include/c++/5/ostream" 3
template< class _CharT, class _Traits> inline basic_ostream< _CharT, _Traits>  &
# 539
operator<<(basic_ostream< _CharT, _Traits>  &__out, const _CharT *__s) 
# 540
{ 
# 541
if (!__s) { 
# 542
(__out.setstate(ios_base::badbit)); } else { 
# 544
__ostream_insert(__out, __s, static_cast< streamsize>(_Traits::length(__s))); }  
# 546
return __out; 
# 547
} 
# 549
template< class _CharT, class _Traits> basic_ostream< _CharT, _Traits>  &operator<<(basic_ostream< _CharT, _Traits>  & __out, const char * __s); 
# 554
template< class _Traits> inline basic_ostream< char, _Traits>  &
# 556
operator<<(basic_ostream< char, _Traits>  &__out, const char *__s) 
# 557
{ 
# 558
if (!__s) { 
# 559
(__out.setstate(ios_base::badbit)); } else { 
# 561
__ostream_insert(__out, __s, static_cast< streamsize>(_Traits::length(__s))); }  
# 563
return __out; 
# 564
} 
# 567
template< class _Traits> inline basic_ostream< char, _Traits>  &
# 569
operator<<(basic_ostream< char, _Traits>  &__out, const signed char *__s) 
# 570
{ return __out << (reinterpret_cast< const char *>(__s)); } 
# 572
template< class _Traits> inline basic_ostream< char, _Traits>  &
# 574
operator<<(basic_ostream< char, _Traits>  &__out, const unsigned char *__s) 
# 575
{ return __out << (reinterpret_cast< const char *>(__s)); } 
# 588 "/usr/include/c++/5/ostream" 3
template< class _CharT, class _Traits> inline basic_ostream< _CharT, _Traits>  &
# 590
endl(basic_ostream< _CharT, _Traits>  &__os) 
# 591
{ return flush((__os.put((__os.widen('\n'))))); } 
# 600 "/usr/include/c++/5/ostream" 3
template< class _CharT, class _Traits> inline basic_ostream< _CharT, _Traits>  &
# 602
ends(basic_ostream< _CharT, _Traits>  &__os) 
# 603
{ return (__os.put(_CharT())); } 
# 610
template< class _CharT, class _Traits> inline basic_ostream< _CharT, _Traits>  &
# 612
flush(basic_ostream< _CharT, _Traits>  &__os) 
# 613
{ return (__os.flush()); } 
# 636 "/usr/include/c++/5/ostream" 3
}
# 41 "/usr/include/c++/5/bits/ostream.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 45
template< class _CharT, class _Traits> 
# 47
basic_ostream< _CharT, _Traits> ::sentry::sentry(basic_ostream &__os) : _M_ok(false), _M_os(__os) 
# 49
{ 
# 51
if ((__os.tie()) && (__os.good())) { 
# 52
((__os.tie())->flush()); }  
# 54
if ((__os.good())) { 
# 55
(_M_ok) = true; } else { 
# 57
(__os.setstate(ios_base::failbit)); }  
# 58
} 
# 60
template< class _CharT, class _Traits> 
# 61
template< class _ValueT> basic_ostream< _CharT, _Traits>  &
# 64
basic_ostream< _CharT, _Traits> ::_M_insert(_ValueT __v) 
# 65
{ 
# 66
sentry __cerb(*this); 
# 67
if (__cerb) 
# 68
{ 
# 69
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 70
try 
# 71
{ 
# 72
const __num_put_type &__np = __check_facet((this->_M_num_put)); 
# 73
if (((__np.put(*this, *this, (this->fill()), __v)).failed())) { 
# 74
(__err |= ::std::ios_base::badbit); }  
# 75
} 
# 76
catch (::__cxxabiv1::__forced_unwind &) 
# 77
{ 
# 78
(this->_M_setstate(ios_base::badbit)); 
# 79
throw; 
# 80
} 
# 81
catch (...) 
# 82
{ (this->_M_setstate(ios_base::badbit)); }  
# 83
if (__err) { 
# 84
(this->setstate(__err)); }  
# 85
}  
# 86
return *this; 
# 87
} 
# 89
template< class _CharT, class _Traits> basic_ostream< _CharT, _Traits>  &
# 92
basic_ostream< _CharT, _Traits> ::operator<<(short __n) 
# 93
{ 
# 96
const ::std::ios_base::fmtflags __fmt = (this->flags()) & ios_base::basefield; 
# 97
if ((__fmt == ::std::ios_base::oct) || (__fmt == ::std::ios_base::hex)) { 
# 98
return _M_insert(static_cast< long>(static_cast< unsigned short>(__n))); } else { 
# 100
return _M_insert(static_cast< long>(__n)); }  
# 101
} 
# 103
template< class _CharT, class _Traits> basic_ostream< _CharT, _Traits>  &
# 106
basic_ostream< _CharT, _Traits> ::operator<<(int __n) 
# 107
{ 
# 110
const ::std::ios_base::fmtflags __fmt = (this->flags()) & ios_base::basefield; 
# 111
if ((__fmt == ::std::ios_base::oct) || (__fmt == ::std::ios_base::hex)) { 
# 112
return _M_insert(static_cast< long>(static_cast< unsigned>(__n))); } else { 
# 114
return _M_insert(static_cast< long>(__n)); }  
# 115
} 
# 117
template< class _CharT, class _Traits> basic_ostream< _CharT, _Traits>  &
# 120
basic_ostream< _CharT, _Traits> ::operator<<(__streambuf_type *__sbin) 
# 121
{ 
# 122
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 123
sentry __cerb(*this); 
# 124
if (__cerb && __sbin) 
# 125
{ 
# 126
try 
# 127
{ 
# 128
if (!__copy_streambufs(__sbin, (this->rdbuf()))) { 
# 129
(__err |= ::std::ios_base::failbit); }  
# 130
} 
# 131
catch (::__cxxabiv1::__forced_unwind &) 
# 132
{ 
# 133
(this->_M_setstate(ios_base::badbit)); 
# 134
throw; 
# 135
} 
# 136
catch (...) 
# 137
{ (this->_M_setstate(ios_base::failbit)); }  
# 138
} else { 
# 139
if (!__sbin) { 
# 140
(__err |= ::std::ios_base::badbit); }  }  
# 141
if (__err) { 
# 142
(this->setstate(__err)); }  
# 143
return *this; 
# 144
} 
# 146
template< class _CharT, class _Traits> basic_ostream< _CharT, _Traits>  &
# 149
basic_ostream< _CharT, _Traits> ::put(char_type __c) 
# 150
{ 
# 157
sentry __cerb(*this); 
# 158
if (__cerb) 
# 159
{ 
# 160
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 161
try 
# 162
{ 
# 163
const int_type __put = ((this->rdbuf())->sputc(__c)); 
# 164
if (traits_type::eq_int_type(__put, traits_type::eof())) { 
# 165
(__err |= ::std::ios_base::badbit); }  
# 166
} 
# 167
catch (::__cxxabiv1::__forced_unwind &) 
# 168
{ 
# 169
(this->_M_setstate(ios_base::badbit)); 
# 170
throw; 
# 171
} 
# 172
catch (...) 
# 173
{ (this->_M_setstate(ios_base::badbit)); }  
# 174
if (__err) { 
# 175
(this->setstate(__err)); }  
# 176
}  
# 177
return *this; 
# 178
} 
# 180
template< class _CharT, class _Traits> basic_ostream< _CharT, _Traits>  &
# 183
basic_ostream< _CharT, _Traits> ::write(const _CharT *__s, ::std::streamsize __n) 
# 184
{ 
# 192
sentry __cerb(*this); 
# 193
if (__cerb) 
# 194
{ 
# 195
try 
# 196
{ _M_write(__s, __n); } 
# 197
catch (::__cxxabiv1::__forced_unwind &) 
# 198
{ 
# 199
(this->_M_setstate(ios_base::badbit)); 
# 200
throw; 
# 201
} 
# 202
catch (...) 
# 203
{ (this->_M_setstate(ios_base::badbit)); }  
# 204
}  
# 205
return *this; 
# 206
} 
# 208
template< class _CharT, class _Traits> typename basic_ostream< _CharT, _Traits> ::__ostream_type &
# 211
basic_ostream< _CharT, _Traits> ::flush() 
# 212
{ 
# 216
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 217
try 
# 218
{ 
# 219
if ((this->rdbuf()) && (((this->rdbuf())->pubsync()) == (-1))) { 
# 220
(__err |= ::std::ios_base::badbit); }  
# 221
} 
# 222
catch (::__cxxabiv1::__forced_unwind &) 
# 223
{ 
# 224
(this->_M_setstate(ios_base::badbit)); 
# 225
throw; 
# 226
} 
# 227
catch (...) 
# 228
{ (this->_M_setstate(ios_base::badbit)); }  
# 229
if (__err) { 
# 230
(this->setstate(__err)); }  
# 231
return *this; 
# 232
} 
# 234
template< class _CharT, class _Traits> typename basic_ostream< _CharT, _Traits> ::pos_type 
# 237
basic_ostream< _CharT, _Traits> ::tellp() 
# 238
{ 
# 239
pos_type __ret = ((pos_type)(-1)); 
# 240
try 
# 241
{ 
# 242
if (!(this->fail())) { 
# 243
__ret = ((this->rdbuf())->pubseekoff(0, ios_base::cur, ios_base::out)); }  
# 244
} 
# 245
catch (::__cxxabiv1::__forced_unwind &) 
# 246
{ 
# 247
(this->_M_setstate(ios_base::badbit)); 
# 248
throw; 
# 249
} 
# 250
catch (...) 
# 251
{ (this->_M_setstate(ios_base::badbit)); }  
# 252
return __ret; 
# 253
} 
# 255
template< class _CharT, class _Traits> basic_ostream< _CharT, _Traits>  &
# 258
basic_ostream< _CharT, _Traits> ::seekp(pos_type __pos) 
# 259
{ 
# 260
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 261
try 
# 262
{ 
# 263
if (!(this->fail())) 
# 264
{ 
# 267
const pos_type __p = ((this->rdbuf())->pubseekpos(__pos, ios_base::out)); 
# 271
if (__p == ((pos_type)((off_type)(-1)))) { 
# 272
(__err |= ::std::ios_base::failbit); }  
# 273
}  
# 274
} 
# 275
catch (::__cxxabiv1::__forced_unwind &) 
# 276
{ 
# 277
(this->_M_setstate(ios_base::badbit)); 
# 278
throw; 
# 279
} 
# 280
catch (...) 
# 281
{ (this->_M_setstate(ios_base::badbit)); }  
# 282
if (__err) { 
# 283
(this->setstate(__err)); }  
# 284
return *this; 
# 285
} 
# 287
template< class _CharT, class _Traits> basic_ostream< _CharT, _Traits>  &
# 290
basic_ostream< _CharT, _Traits> ::seekp(off_type __off, ::std::ios_base::seekdir __dir) 
# 291
{ 
# 292
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 293
try 
# 294
{ 
# 295
if (!(this->fail())) 
# 296
{ 
# 299
const pos_type __p = ((this->rdbuf())->pubseekoff(__off, __dir, ios_base::out)); 
# 303
if (__p == ((pos_type)((off_type)(-1)))) { 
# 304
(__err |= ::std::ios_base::failbit); }  
# 305
}  
# 306
} 
# 307
catch (::__cxxabiv1::__forced_unwind &) 
# 308
{ 
# 309
(this->_M_setstate(ios_base::badbit)); 
# 310
throw; 
# 311
} 
# 312
catch (...) 
# 313
{ (this->_M_setstate(ios_base::badbit)); }  
# 314
if (__err) { 
# 315
(this->setstate(__err)); }  
# 316
return *this; 
# 317
} 
# 319
template< class _CharT, class _Traits> basic_ostream< _CharT, _Traits>  &
# 321
operator<<(basic_ostream< _CharT, _Traits>  &__out, const char *__s) 
# 322
{ 
# 323
if (!__s) { 
# 324
(__out.setstate(ios_base::badbit)); } else 
# 326
{ 
# 329
const size_t __clen = char_traits< char> ::length(__s); 
# 330
try 
# 331
{ 
# 332
struct __ptr_guard { 
# 334
_CharT *__p; 
# 335
__ptr_guard(_CharT *__ip) : __p(__ip) { } 
# 336
~__ptr_guard() { delete [] (__p); } 
# 337
_CharT *__get() { return __p; } 
# 338
} __pg(new _CharT [__clen]); 
# 340
_CharT *__ws = __pg.__get(); 
# 341
for (size_t __i = (0); __i < __clen; ++__i) { 
# 342
(__ws[__i]) = (__out.widen(__s[__i])); }  
# 343
__ostream_insert(__out, __ws, __clen); 
# 344
} 
# 345
catch (__cxxabiv1::__forced_unwind &) 
# 346
{ 
# 347
(__out._M_setstate(ios_base::badbit)); 
# 348
throw; 
# 349
} 
# 350
catch (...) 
# 351
{ (__out._M_setstate(ios_base::badbit)); }  
# 352
}  
# 353
return __out; 
# 354
} 
# 359
extern template class basic_ostream< char, char_traits< char> > ;
# 360
extern template basic_ostream< char, char_traits< char> >  &endl(basic_ostream< char, char_traits< char> >  & __os);
# 361
extern template basic_ostream< char, char_traits< char> >  &ends(basic_ostream< char, char_traits< char> >  & __os);
# 362
extern template basic_ostream< char, char_traits< char> >  &flush(basic_ostream< char, char_traits< char> >  & __os);
# 363
extern template basic_ostream< char, char_traits< char> >  &operator<<(basic_ostream< char, char_traits< char> >  & __out, char __c);
# 364
extern template basic_ostream< char, char_traits< char> >  &operator<<(basic_ostream< char, char_traits< char> >  & __out, unsigned char __c);
# 365
extern template basic_ostream< char, char_traits< char> >  &operator<<(basic_ostream< char, char_traits< char> >  & __out, signed char __c);
# 366
extern template basic_ostream< char, char_traits< char> >  &operator<<(basic_ostream< char, char_traits< char> >  & __out, const char * __s);
# 367
extern template basic_ostream< char, char_traits< char> >  &operator<<(basic_ostream< char, char_traits< char> >  & __out, const unsigned char * __s);
# 368
extern template basic_ostream< char, char_traits< char> >  &operator<<(basic_ostream< char, char_traits< char> >  & __out, const signed char * __s);
# 370
extern template basic_ostream< char, char_traits< char> > ::__ostream_type &basic_ostream< char, char_traits< char> > ::_M_insert(long __v);
# 371
extern template basic_ostream< char, char_traits< char> > ::__ostream_type &basic_ostream< char, char_traits< char> > ::_M_insert(unsigned long __v);
# 372
extern template basic_ostream< char, char_traits< char> > ::__ostream_type &basic_ostream< char, char_traits< char> > ::_M_insert(bool __v);
# 374
extern template basic_ostream< char, char_traits< char> > ::__ostream_type &basic_ostream< char, char_traits< char> > ::_M_insert(long long __v);
# 375
extern template basic_ostream< char, char_traits< char> > ::__ostream_type &basic_ostream< char, char_traits< char> > ::_M_insert(unsigned long long __v);
# 377
extern template basic_ostream< char, char_traits< char> > ::__ostream_type &basic_ostream< char, char_traits< char> > ::_M_insert(double __v);
# 378
extern template basic_ostream< char, char_traits< char> > ::__ostream_type &basic_ostream< char, char_traits< char> > ::_M_insert(long double __v);
# 379
extern template basic_ostream< char, char_traits< char> > ::__ostream_type &basic_ostream< char, char_traits< char> > ::_M_insert(const void * __v);
# 382
extern template class basic_ostream< wchar_t, char_traits< wchar_t> > ;
# 383
extern template basic_ostream< wchar_t, char_traits< wchar_t> >  &endl(basic_ostream< wchar_t, char_traits< wchar_t> >  & __os);
# 384
extern template basic_ostream< wchar_t, char_traits< wchar_t> >  &ends(basic_ostream< wchar_t, char_traits< wchar_t> >  & __os);
# 385
extern template basic_ostream< wchar_t, char_traits< wchar_t> >  &flush(basic_ostream< wchar_t, char_traits< wchar_t> >  & __os);
# 386
extern template basic_ostream< wchar_t, char_traits< wchar_t> >  &operator<<(basic_ostream< wchar_t, char_traits< wchar_t> >  & __out, wchar_t __c);
# 387
extern template basic_ostream< wchar_t, char_traits< wchar_t> >  &operator<<(basic_ostream< wchar_t, char_traits< wchar_t> >  & __out, char __c);
# 388
extern template basic_ostream< wchar_t, char_traits< wchar_t> >  &operator<<(basic_ostream< wchar_t, char_traits< wchar_t> >  & __out, const wchar_t * __s);
# 389
extern template basic_ostream< wchar_t, char_traits< wchar_t> >  &operator<<(basic_ostream< wchar_t, char_traits< wchar_t> >  & __out, const char * __s);
# 391
extern template basic_ostream< wchar_t, char_traits< wchar_t> > ::__ostream_type &basic_ostream< wchar_t, char_traits< wchar_t> > ::_M_insert(long __v);
# 392
extern template basic_ostream< wchar_t, char_traits< wchar_t> > ::__ostream_type &basic_ostream< wchar_t, char_traits< wchar_t> > ::_M_insert(unsigned long __v);
# 393
extern template basic_ostream< wchar_t, char_traits< wchar_t> > ::__ostream_type &basic_ostream< wchar_t, char_traits< wchar_t> > ::_M_insert(bool __v);
# 395
extern template basic_ostream< wchar_t, char_traits< wchar_t> > ::__ostream_type &basic_ostream< wchar_t, char_traits< wchar_t> > ::_M_insert(long long __v);
# 396
extern template basic_ostream< wchar_t, char_traits< wchar_t> > ::__ostream_type &basic_ostream< wchar_t, char_traits< wchar_t> > ::_M_insert(unsigned long long __v);
# 398
extern template basic_ostream< wchar_t, char_traits< wchar_t> > ::__ostream_type &basic_ostream< wchar_t, char_traits< wchar_t> > ::_M_insert(double __v);
# 399
extern template basic_ostream< wchar_t, char_traits< wchar_t> > ::__ostream_type &basic_ostream< wchar_t, char_traits< wchar_t> > ::_M_insert(long double __v);
# 400
extern template basic_ostream< wchar_t, char_traits< wchar_t> > ::__ostream_type &basic_ostream< wchar_t, char_traits< wchar_t> > ::_M_insert(const void * __v);
# 405
}
# 41 "/usr/include/c++/5/istream" 3
namespace std __attribute((__visibility__("default"))) { 
# 57 "/usr/include/c++/5/istream" 3
template< class _CharT, class _Traits> 
# 58
class basic_istream : virtual public basic_ios< _CharT, _Traits>  { 
# 62
public: typedef _CharT char_type; 
# 63
typedef typename _Traits::int_type int_type; 
# 64
typedef typename _Traits::pos_type pos_type; 
# 65
typedef typename _Traits::off_type off_type; 
# 66
typedef _Traits traits_type; 
# 69
typedef basic_streambuf< _CharT, _Traits>  __streambuf_type; 
# 70
typedef ::std::basic_ios< _CharT, _Traits>  __ios_type; 
# 71
typedef basic_istream __istream_type; 
# 73
typedef num_get< _CharT, istreambuf_iterator< _CharT, _Traits> >  __num_get_type; 
# 74
typedef ctype< _CharT>  __ctype_type; 
# 82
protected: ::std::streamsize _M_gcount; 
# 93
public: explicit basic_istream(__streambuf_type *__sb) : _M_gcount(((::std::streamsize)0)) 
# 95
{ (this->init(__sb)); } 
# 103
virtual ~basic_istream() 
# 104
{ (_M_gcount) = ((::std::streamsize)0); } 
# 107
class sentry; 
# 108
friend class sentry; 
# 120 "/usr/include/c++/5/istream" 3
__istream_type &operator>>(__istream_type &(*__pf)(__istream_type &)) 
# 121
{ return __pf(*this); } 
# 124
__istream_type &operator>>(__ios_type &(*__pf)(__ios_type &)) 
# 125
{ 
# 126
__pf(*this); 
# 127
return *this; 
# 128
} 
# 131
__istream_type &operator>>(::std::ios_base &(*__pf)(::std::ios_base &)) 
# 132
{ 
# 133
__pf(*this); 
# 134
return *this; 
# 135
} 
# 168 "/usr/include/c++/5/istream" 3
__istream_type &operator>>(bool &__n) 
# 169
{ return _M_extract(__n); } 
# 172
__istream_type &operator>>(short & __n); 
# 175
__istream_type &operator>>(unsigned short &__n) 
# 176
{ return _M_extract(__n); } 
# 179
__istream_type &operator>>(int & __n); 
# 182
__istream_type &operator>>(unsigned &__n) 
# 183
{ return _M_extract(__n); } 
# 186
__istream_type &operator>>(long &__n) 
# 187
{ return _M_extract(__n); } 
# 190
__istream_type &operator>>(unsigned long &__n) 
# 191
{ return _M_extract(__n); } 
# 195
__istream_type &operator>>(long long &__n) 
# 196
{ return _M_extract(__n); } 
# 199
__istream_type &operator>>(unsigned long long &__n) 
# 200
{ return _M_extract(__n); } 
# 214 "/usr/include/c++/5/istream" 3
__istream_type &operator>>(float &__f) 
# 215
{ return _M_extract(__f); } 
# 218
__istream_type &operator>>(double &__f) 
# 219
{ return _M_extract(__f); } 
# 222
__istream_type &operator>>(long double &__f) 
# 223
{ return _M_extract(__f); } 
# 235 "/usr/include/c++/5/istream" 3
__istream_type &operator>>(void *&__p) 
# 236
{ return _M_extract(__p); } 
# 259 "/usr/include/c++/5/istream" 3
__istream_type &operator>>(__streambuf_type * __sb); 
# 269 "/usr/include/c++/5/istream" 3
::std::streamsize gcount() const 
# 270
{ return _M_gcount; } 
# 302 "/usr/include/c++/5/istream" 3
int_type get(); 
# 316 "/usr/include/c++/5/istream" 3
__istream_type &get(char_type & __c); 
# 343 "/usr/include/c++/5/istream" 3
__istream_type &get(char_type * __s, ::std::streamsize __n, char_type __delim); 
# 354 "/usr/include/c++/5/istream" 3
__istream_type &get(char_type *__s, ::std::streamsize __n) 
# 355
{ return (this->get(__s, __n, (this->widen('\n')))); } 
# 377 "/usr/include/c++/5/istream" 3
__istream_type &get(__streambuf_type & __sb, char_type __delim); 
# 387 "/usr/include/c++/5/istream" 3
__istream_type &get(__streambuf_type &__sb) 
# 388
{ return (this->get(__sb, (this->widen('\n')))); } 
# 416 "/usr/include/c++/5/istream" 3
__istream_type &getline(char_type * __s, ::std::streamsize __n, char_type __delim); 
# 427 "/usr/include/c++/5/istream" 3
__istream_type &getline(char_type *__s, ::std::streamsize __n) 
# 428
{ return (this->getline(__s, __n, (this->widen('\n')))); } 
# 451 "/usr/include/c++/5/istream" 3
__istream_type &ignore(::std::streamsize __n, int_type __delim); 
# 454
__istream_type &ignore(::std::streamsize __n); 
# 457
__istream_type &ignore(); 
# 468 "/usr/include/c++/5/istream" 3
int_type peek(); 
# 486 "/usr/include/c++/5/istream" 3
__istream_type &read(char_type * __s, ::std::streamsize __n); 
# 505 "/usr/include/c++/5/istream" 3
::std::streamsize readsome(char_type * __s, ::std::streamsize __n); 
# 522 "/usr/include/c++/5/istream" 3
__istream_type &putback(char_type __c); 
# 538 "/usr/include/c++/5/istream" 3
__istream_type &unget(); 
# 556 "/usr/include/c++/5/istream" 3
int sync(); 
# 571 "/usr/include/c++/5/istream" 3
pos_type tellg(); 
# 586 "/usr/include/c++/5/istream" 3
__istream_type &seekg(pos_type); 
# 602 "/usr/include/c++/5/istream" 3
__istream_type &seekg(off_type, ::std::ios_base::seekdir); 
# 606
protected: basic_istream() : _M_gcount(((::std::streamsize)0)) 
# 608
{ (this->init(0)); } 
# 639 "/usr/include/c++/5/istream" 3
template< class _ValueT> __istream_type &_M_extract(_ValueT & __v); 
# 642
}; 
# 648
template<> basic_istream< char, char_traits< char> >  &basic_istream< char, char_traits< char> > ::getline(char_type * __s, streamsize __n, char_type __delim); 
# 653
template<> basic_istream< char, char_traits< char> >  &basic_istream< char, char_traits< char> > ::ignore(streamsize __n); 
# 658
template<> basic_istream< char, char_traits< char> >  &basic_istream< char, char_traits< char> > ::ignore(streamsize __n, int_type __delim); 
# 664
template<> basic_istream< wchar_t, char_traits< wchar_t> >  &basic_istream< wchar_t, char_traits< wchar_t> > ::getline(char_type * __s, streamsize __n, char_type __delim); 
# 669
template<> basic_istream< wchar_t, char_traits< wchar_t> >  &basic_istream< wchar_t, char_traits< wchar_t> > ::ignore(streamsize __n); 
# 674
template<> basic_istream< wchar_t, char_traits< wchar_t> >  &basic_istream< wchar_t, char_traits< wchar_t> > ::ignore(streamsize __n, int_type __delim); 
# 685 "/usr/include/c++/5/istream" 3
template< class _CharT, class _Traits> 
# 686
class basic_istream< _CharT, _Traits> ::sentry { 
# 689
bool _M_ok; 
# 693
public: typedef _Traits traits_type; 
# 694
typedef basic_streambuf< _CharT, _Traits>  __streambuf_type; 
# 695
typedef basic_istream __istream_type; 
# 696
typedef typename ::std::basic_istream< _CharT, _Traits> ::__ctype_type __ctype_type; 
# 697
typedef typename _Traits::int_type __int_type; 
# 722 "/usr/include/c++/5/istream" 3
explicit sentry(basic_istream & __is, bool __noskipws = false); 
# 734 "/usr/include/c++/5/istream" 3
operator bool() const 
# 735
{ return _M_ok; } 
# 736
}; 
# 750 "/usr/include/c++/5/istream" 3
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &operator>>(basic_istream< _CharT, _Traits>  & __in, _CharT & __c); 
# 754
template< class _Traits> inline basic_istream< char, _Traits>  &
# 756
operator>>(basic_istream< char, _Traits>  &__in, unsigned char &__c) 
# 757
{ return __in >> (reinterpret_cast< char &>(__c)); } 
# 759
template< class _Traits> inline basic_istream< char, _Traits>  &
# 761
operator>>(basic_istream< char, _Traits>  &__in, signed char &__c) 
# 762
{ return __in >> (reinterpret_cast< char &>(__c)); } 
# 792 "/usr/include/c++/5/istream" 3
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &operator>>(basic_istream< _CharT, _Traits>  & __in, _CharT * __s); 
# 799
template<> basic_istream< char, char_traits< char> >  &operator>>(basic_istream< char, char_traits< char> >  & __in, char * __s); 
# 801
template< class _Traits> inline basic_istream< char, _Traits>  &
# 803
operator>>(basic_istream< char, _Traits>  &__in, unsigned char *__s) 
# 804
{ return __in >> (reinterpret_cast< char *>(__s)); } 
# 806
template< class _Traits> inline basic_istream< char, _Traits>  &
# 808
operator>>(basic_istream< char, _Traits>  &__in, signed char *__s) 
# 809
{ return __in >> (reinterpret_cast< char *>(__s)); } 
# 823 "/usr/include/c++/5/istream" 3
template< class _CharT, class _Traits> 
# 824
class basic_iostream : public basic_istream< _CharT, _Traits> , public basic_ostream< _CharT, _Traits>  { 
# 832
public: typedef _CharT char_type; 
# 833
typedef typename _Traits::int_type int_type; 
# 834
typedef typename _Traits::pos_type pos_type; 
# 835
typedef typename _Traits::off_type off_type; 
# 836
typedef _Traits traits_type; 
# 839
typedef ::std::basic_istream< _CharT, _Traits>  __istream_type; 
# 840
typedef ::std::basic_ostream< _CharT, _Traits>  __ostream_type; 
# 849
explicit basic_iostream(basic_streambuf< _CharT, _Traits>  *__sb) : __istream_type(__sb), __ostream_type(__sb) 
# 850
{ } 
# 856
virtual ~basic_iostream() { } 
# 859
protected: basic_iostream() : __istream_type(), __ostream_type() 
# 860
{ } 
# 884 "/usr/include/c++/5/istream" 3
}; 
# 906 "/usr/include/c++/5/istream" 3
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &ws(basic_istream< _CharT, _Traits>  & __is); 
# 932 "/usr/include/c++/5/istream" 3
}
# 41 "/usr/include/c++/5/bits/istream.tcc" 3
namespace std __attribute((__visibility__("default"))) { 
# 45
template< class _CharT, class _Traits> 
# 47
basic_istream< _CharT, _Traits> ::sentry::sentry(basic_istream &__in, bool __noskip) : _M_ok(false) 
# 48
{ 
# 49
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 50
if ((__in.good())) 
# 51
{ 
# 52
if ((__in.tie())) { 
# 53
((__in.tie())->flush()); }  
# 54
if ((!__noskip) && ((bool)((__in.flags()) & ios_base::skipws))) 
# 55
{ 
# 56
const __int_type __eof = traits_type::eof(); 
# 57
__streambuf_type *__sb = (__in.rdbuf()); 
# 58
__int_type __c = (__sb->sgetc()); 
# 60
const __ctype_type &__ct = __check_facet((__in._M_ctype)); 
# 61
while ((!traits_type::eq_int_type(__c, __eof)) && (__ct.is(ctype_base::space, traits_type::to_char_type(__c)))) { 
# 64
__c = (__sb->snextc()); }  
# 69
if (traits_type::eq_int_type(__c, __eof)) { 
# 70
(__err |= ::std::ios_base::eofbit); }  
# 71
}  
# 72
}  
# 74
if ((__in.good()) && (__err == ::std::ios_base::goodbit)) { 
# 75
(_M_ok) = true; } else 
# 77
{ 
# 78
(__err |= ::std::ios_base::failbit); 
# 79
(__in.setstate(__err)); 
# 80
}  
# 81
} 
# 83
template< class _CharT, class _Traits> 
# 84
template< class _ValueT> basic_istream< _CharT, _Traits>  &
# 87
basic_istream< _CharT, _Traits> ::_M_extract(_ValueT &__v) 
# 88
{ 
# 89
sentry __cerb(*this, false); 
# 90
if (__cerb) 
# 91
{ 
# 92
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 93
try 
# 94
{ 
# 95
const __num_get_type &__ng = __check_facet((this->_M_num_get)); 
# 96
(__ng.get(*this, 0, *this, __err, __v)); 
# 97
} 
# 98
catch (::__cxxabiv1::__forced_unwind &) 
# 99
{ 
# 100
(this->_M_setstate(ios_base::badbit)); 
# 101
throw; 
# 102
} 
# 103
catch (...) 
# 104
{ (this->_M_setstate(ios_base::badbit)); }  
# 105
if (__err) { 
# 106
(this->setstate(__err)); }  
# 107
}  
# 108
return *this; 
# 109
} 
# 111
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 114
basic_istream< _CharT, _Traits> ::operator>>(short &__n) 
# 115
{ 
# 118
sentry __cerb(*this, false); 
# 119
if (__cerb) 
# 120
{ 
# 121
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 122
try 
# 123
{ 
# 124
long __l; 
# 125
const __num_get_type &__ng = __check_facet((this->_M_num_get)); 
# 126
(__ng.get(*this, 0, *this, __err, __l)); 
# 130
if (__l < ::__gnu_cxx::__numeric_traits_integer< short> ::__min) 
# 131
{ 
# 132
(__err |= ::std::ios_base::failbit); 
# 133
__n = ::__gnu_cxx::__numeric_traits_integer< short> ::__min; 
# 134
} else { 
# 135
if (__l > ::__gnu_cxx::__numeric_traits_integer< short> ::__max) 
# 136
{ 
# 137
(__err |= ::std::ios_base::failbit); 
# 138
__n = ::__gnu_cxx::__numeric_traits_integer< short> ::__max; 
# 139
} else { 
# 141
__n = ((short)__l); }  }  
# 142
} 
# 143
catch (::__cxxabiv1::__forced_unwind &) 
# 144
{ 
# 145
(this->_M_setstate(ios_base::badbit)); 
# 146
throw; 
# 147
} 
# 148
catch (...) 
# 149
{ (this->_M_setstate(ios_base::badbit)); }  
# 150
if (__err) { 
# 151
(this->setstate(__err)); }  
# 152
}  
# 153
return *this; 
# 154
} 
# 156
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 159
basic_istream< _CharT, _Traits> ::operator>>(int &__n) 
# 160
{ 
# 163
sentry __cerb(*this, false); 
# 164
if (__cerb) 
# 165
{ 
# 166
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 167
try 
# 168
{ 
# 169
long __l; 
# 170
const __num_get_type &__ng = __check_facet((this->_M_num_get)); 
# 171
(__ng.get(*this, 0, *this, __err, __l)); 
# 175
if (__l < ::__gnu_cxx::__numeric_traits_integer< int> ::__min) 
# 176
{ 
# 177
(__err |= ::std::ios_base::failbit); 
# 178
__n = ::__gnu_cxx::__numeric_traits_integer< int> ::__min; 
# 179
} else { 
# 180
if (__l > ::__gnu_cxx::__numeric_traits_integer< int> ::__max) 
# 181
{ 
# 182
(__err |= ::std::ios_base::failbit); 
# 183
__n = ::__gnu_cxx::__numeric_traits_integer< int> ::__max; 
# 184
} else { 
# 186
__n = ((int)__l); }  }  
# 187
} 
# 188
catch (::__cxxabiv1::__forced_unwind &) 
# 189
{ 
# 190
(this->_M_setstate(ios_base::badbit)); 
# 191
throw; 
# 192
} 
# 193
catch (...) 
# 194
{ (this->_M_setstate(ios_base::badbit)); }  
# 195
if (__err) { 
# 196
(this->setstate(__err)); }  
# 197
}  
# 198
return *this; 
# 199
} 
# 201
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 204
basic_istream< _CharT, _Traits> ::operator>>(__streambuf_type *__sbout) 
# 205
{ 
# 206
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 207
sentry __cerb(*this, false); 
# 208
if (__cerb && __sbout) 
# 209
{ 
# 210
try 
# 211
{ 
# 212
bool __ineof; 
# 213
if (!__copy_streambufs_eof((this->rdbuf()), __sbout, __ineof)) { 
# 214
(__err |= ::std::ios_base::failbit); }  
# 215
if (__ineof) { 
# 216
(__err |= ::std::ios_base::eofbit); }  
# 217
} 
# 218
catch (::__cxxabiv1::__forced_unwind &) 
# 219
{ 
# 220
(this->_M_setstate(ios_base::failbit)); 
# 221
throw; 
# 222
} 
# 223
catch (...) 
# 224
{ (this->_M_setstate(ios_base::failbit)); }  
# 225
} else { 
# 226
if (!__sbout) { 
# 227
(__err |= ::std::ios_base::failbit); }  }  
# 228
if (__err) { 
# 229
(this->setstate(__err)); }  
# 230
return *this; 
# 231
} 
# 233
template< class _CharT, class _Traits> typename basic_istream< _CharT, _Traits> ::int_type 
# 236
basic_istream< _CharT, _Traits> ::get() 
# 237
{ 
# 238
const int_type __eof = traits_type::eof(); 
# 239
int_type __c = __eof; 
# 240
(_M_gcount) = (0); 
# 241
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 242
sentry __cerb(*this, true); 
# 243
if (__cerb) 
# 244
{ 
# 245
try 
# 246
{ 
# 247
__c = ((this->rdbuf())->sbumpc()); 
# 249
if (!traits_type::eq_int_type(__c, __eof)) { 
# 250
(_M_gcount) = (1); } else { 
# 252
(__err |= ::std::ios_base::eofbit); }  
# 253
} 
# 254
catch (::__cxxabiv1::__forced_unwind &) 
# 255
{ 
# 256
(this->_M_setstate(ios_base::badbit)); 
# 257
throw; 
# 258
} 
# 259
catch (...) 
# 260
{ (this->_M_setstate(ios_base::badbit)); }  
# 261
}  
# 262
if (!(_M_gcount)) { 
# 263
(__err |= ::std::ios_base::failbit); }  
# 264
if (__err) { 
# 265
(this->setstate(__err)); }  
# 266
return __c; 
# 267
} 
# 269
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 272
basic_istream< _CharT, _Traits> ::get(char_type &__c) 
# 273
{ 
# 274
(_M_gcount) = (0); 
# 275
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 276
sentry __cerb(*this, true); 
# 277
if (__cerb) 
# 278
{ 
# 279
try 
# 280
{ 
# 281
const int_type __cb = ((this->rdbuf())->sbumpc()); 
# 283
if (!traits_type::eq_int_type(__cb, traits_type::eof())) 
# 284
{ 
# 285
(_M_gcount) = (1); 
# 286
__c = traits_type::to_char_type(__cb); 
# 287
} else { 
# 289
(__err |= ::std::ios_base::eofbit); }  
# 290
} 
# 291
catch (::__cxxabiv1::__forced_unwind &) 
# 292
{ 
# 293
(this->_M_setstate(ios_base::badbit)); 
# 294
throw; 
# 295
} 
# 296
catch (...) 
# 297
{ (this->_M_setstate(ios_base::badbit)); }  
# 298
}  
# 299
if (!(_M_gcount)) { 
# 300
(__err |= ::std::ios_base::failbit); }  
# 301
if (__err) { 
# 302
(this->setstate(__err)); }  
# 303
return *this; 
# 304
} 
# 306
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 309
basic_istream< _CharT, _Traits> ::get(char_type *__s, ::std::streamsize __n, char_type __delim) 
# 310
{ 
# 311
(_M_gcount) = (0); 
# 312
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 313
sentry __cerb(*this, true); 
# 314
if (__cerb) 
# 315
{ 
# 316
try 
# 317
{ 
# 318
const int_type __idelim = traits_type::to_int_type(__delim); 
# 319
const int_type __eof = traits_type::eof(); 
# 320
__streambuf_type *__sb = (this->rdbuf()); 
# 321
int_type __c = (__sb->sgetc()); 
# 323
while ((((_M_gcount) + (1)) < __n) && (!traits_type::eq_int_type(__c, __eof)) && (!traits_type::eq_int_type(__c, __idelim))) 
# 326
{ 
# 327
(*(__s++)) = traits_type::to_char_type(__c); 
# 328
++(_M_gcount); 
# 329
__c = (__sb->snextc()); 
# 330
}  
# 331
if (traits_type::eq_int_type(__c, __eof)) { 
# 332
(__err |= ::std::ios_base::eofbit); }  
# 333
} 
# 334
catch (::__cxxabiv1::__forced_unwind &) 
# 335
{ 
# 336
(this->_M_setstate(ios_base::badbit)); 
# 337
throw; 
# 338
} 
# 339
catch (...) 
# 340
{ (this->_M_setstate(ios_base::badbit)); }  
# 341
}  
# 344
if (__n > (0)) { 
# 345
(*__s) = char_type(); }  
# 346
if (!(_M_gcount)) { 
# 347
(__err |= ::std::ios_base::failbit); }  
# 348
if (__err) { 
# 349
(this->setstate(__err)); }  
# 350
return *this; 
# 351
} 
# 353
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 356
basic_istream< _CharT, _Traits> ::get(__streambuf_type &__sb, char_type __delim) 
# 357
{ 
# 358
(_M_gcount) = (0); 
# 359
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 360
sentry __cerb(*this, true); 
# 361
if (__cerb) 
# 362
{ 
# 363
try 
# 364
{ 
# 365
const int_type __idelim = traits_type::to_int_type(__delim); 
# 366
const int_type __eof = traits_type::eof(); 
# 367
__streambuf_type *__this_sb = (this->rdbuf()); 
# 368
int_type __c = (__this_sb->sgetc()); 
# 369
char_type __c2 = traits_type::to_char_type(__c); 
# 371
while ((!traits_type::eq_int_type(__c, __eof)) && (!traits_type::eq_int_type(__c, __idelim)) && (!traits_type::eq_int_type((__sb.sputc(__c2)), __eof))) 
# 374
{ 
# 375
++(_M_gcount); 
# 376
__c = (__this_sb->snextc()); 
# 377
__c2 = traits_type::to_char_type(__c); 
# 378
}  
# 379
if (traits_type::eq_int_type(__c, __eof)) { 
# 380
(__err |= ::std::ios_base::eofbit); }  
# 381
} 
# 382
catch (::__cxxabiv1::__forced_unwind &) 
# 383
{ 
# 384
(this->_M_setstate(ios_base::badbit)); 
# 385
throw; 
# 386
} 
# 387
catch (...) 
# 388
{ (this->_M_setstate(ios_base::badbit)); }  
# 389
}  
# 390
if (!(_M_gcount)) { 
# 391
(__err |= ::std::ios_base::failbit); }  
# 392
if (__err) { 
# 393
(this->setstate(__err)); }  
# 394
return *this; 
# 395
} 
# 397
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 400
basic_istream< _CharT, _Traits> ::getline(char_type *__s, ::std::streamsize __n, char_type __delim) 
# 401
{ 
# 402
(_M_gcount) = (0); 
# 403
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 404
sentry __cerb(*this, true); 
# 405
if (__cerb) 
# 406
{ 
# 407
try 
# 408
{ 
# 409
const int_type __idelim = traits_type::to_int_type(__delim); 
# 410
const int_type __eof = traits_type::eof(); 
# 411
__streambuf_type *__sb = (this->rdbuf()); 
# 412
int_type __c = (__sb->sgetc()); 
# 414
while ((((_M_gcount) + (1)) < __n) && (!traits_type::eq_int_type(__c, __eof)) && (!traits_type::eq_int_type(__c, __idelim))) 
# 417
{ 
# 418
(*(__s++)) = traits_type::to_char_type(__c); 
# 419
__c = (__sb->snextc()); 
# 420
++(_M_gcount); 
# 421
}  
# 422
if (traits_type::eq_int_type(__c, __eof)) { 
# 423
(__err |= ::std::ios_base::eofbit); } else 
# 425
{ 
# 426
if (traits_type::eq_int_type(__c, __idelim)) 
# 427
{ 
# 428
(__sb->sbumpc()); 
# 429
++(_M_gcount); 
# 430
} else { 
# 432
(__err |= ::std::ios_base::failbit); }  
# 433
}  
# 434
} 
# 435
catch (::__cxxabiv1::__forced_unwind &) 
# 436
{ 
# 437
(this->_M_setstate(ios_base::badbit)); 
# 438
throw; 
# 439
} 
# 440
catch (...) 
# 441
{ (this->_M_setstate(ios_base::badbit)); }  
# 442
}  
# 445
if (__n > (0)) { 
# 446
(*__s) = char_type(); }  
# 447
if (!(_M_gcount)) { 
# 448
(__err |= ::std::ios_base::failbit); }  
# 449
if (__err) { 
# 450
(this->setstate(__err)); }  
# 451
return *this; 
# 452
} 
# 457
template< class _CharT, class _Traits> typename basic_istream< _CharT, _Traits> ::__istream_type &
# 460
basic_istream< _CharT, _Traits> ::ignore() 
# 461
{ 
# 462
(_M_gcount) = (0); 
# 463
sentry __cerb(*this, true); 
# 464
if (__cerb) 
# 465
{ 
# 466
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 467
try 
# 468
{ 
# 469
const int_type __eof = traits_type::eof(); 
# 470
__streambuf_type *__sb = (this->rdbuf()); 
# 472
if (traits_type::eq_int_type((__sb->sbumpc()), __eof)) { 
# 473
(__err |= ::std::ios_base::eofbit); } else { 
# 475
(_M_gcount) = (1); }  
# 476
} 
# 477
catch (::__cxxabiv1::__forced_unwind &) 
# 478
{ 
# 479
(this->_M_setstate(ios_base::badbit)); 
# 480
throw; 
# 481
} 
# 482
catch (...) 
# 483
{ (this->_M_setstate(ios_base::badbit)); }  
# 484
if (__err) { 
# 485
(this->setstate(__err)); }  
# 486
}  
# 487
return *this; 
# 488
} 
# 490
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 493
basic_istream< _CharT, _Traits> ::ignore(::std::streamsize __n) 
# 494
{ 
# 495
(_M_gcount) = (0); 
# 496
sentry __cerb(*this, true); 
# 497
if (__cerb && (__n > (0))) 
# 498
{ 
# 499
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 500
try 
# 501
{ 
# 502
const int_type __eof = traits_type::eof(); 
# 503
__streambuf_type *__sb = (this->rdbuf()); 
# 504
int_type __c = (__sb->sgetc()); 
# 513 "/usr/include/c++/5/bits/istream.tcc" 3
bool __large_ignore = false; 
# 514
while (true) 
# 515
{ 
# 516
while (((_M_gcount) < __n) && (!traits_type::eq_int_type(__c, __eof))) 
# 518
{ 
# 519
++(_M_gcount); 
# 520
__c = (__sb->snextc()); 
# 521
}  
# 522
if ((__n == ::__gnu_cxx::__numeric_traits_integer< long> ::__max) && (!traits_type::eq_int_type(__c, __eof))) 
# 524
{ 
# 525
(_M_gcount) = ::__gnu_cxx::__numeric_traits_integer< long> ::__min; 
# 527
__large_ignore = true; 
# 528
} else { 
# 530
break; }  
# 531
}  
# 533
if (__large_ignore) { 
# 534
(_M_gcount) = ::__gnu_cxx::__numeric_traits_integer< long> ::__max; }  
# 536
if (traits_type::eq_int_type(__c, __eof)) { 
# 537
(__err |= ::std::ios_base::eofbit); }  
# 538
} 
# 539
catch (::__cxxabiv1::__forced_unwind &) 
# 540
{ 
# 541
(this->_M_setstate(ios_base::badbit)); 
# 542
throw; 
# 543
} 
# 544
catch (...) 
# 545
{ (this->_M_setstate(ios_base::badbit)); }  
# 546
if (__err) { 
# 547
(this->setstate(__err)); }  
# 548
}  
# 549
return *this; 
# 550
} 
# 552
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 555
basic_istream< _CharT, _Traits> ::ignore(::std::streamsize __n, int_type __delim) 
# 556
{ 
# 557
(_M_gcount) = (0); 
# 558
sentry __cerb(*this, true); 
# 559
if (__cerb && (__n > (0))) 
# 560
{ 
# 561
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 562
try 
# 563
{ 
# 564
const int_type __eof = traits_type::eof(); 
# 565
__streambuf_type *__sb = (this->rdbuf()); 
# 566
int_type __c = (__sb->sgetc()); 
# 569
bool __large_ignore = false; 
# 570
while (true) 
# 571
{ 
# 572
while (((_M_gcount) < __n) && (!traits_type::eq_int_type(__c, __eof)) && (!traits_type::eq_int_type(__c, __delim))) 
# 575
{ 
# 576
++(_M_gcount); 
# 577
__c = (__sb->snextc()); 
# 578
}  
# 579
if ((__n == ::__gnu_cxx::__numeric_traits_integer< long> ::__max) && (!traits_type::eq_int_type(__c, __eof)) && (!traits_type::eq_int_type(__c, __delim))) 
# 582
{ 
# 583
(_M_gcount) = ::__gnu_cxx::__numeric_traits_integer< long> ::__min; 
# 585
__large_ignore = true; 
# 586
} else { 
# 588
break; }  
# 589
}  
# 591
if (__large_ignore) { 
# 592
(_M_gcount) = ::__gnu_cxx::__numeric_traits_integer< long> ::__max; }  
# 594
if (traits_type::eq_int_type(__c, __eof)) { 
# 595
(__err |= ::std::ios_base::eofbit); } else { 
# 596
if (traits_type::eq_int_type(__c, __delim)) 
# 597
{ 
# 598
if ((_M_gcount) < ::__gnu_cxx::__numeric_traits_integer< long> ::__max) { 
# 600
++(_M_gcount); }  
# 601
(__sb->sbumpc()); 
# 602
}  }  
# 603
} 
# 604
catch (::__cxxabiv1::__forced_unwind &) 
# 605
{ 
# 606
(this->_M_setstate(ios_base::badbit)); 
# 607
throw; 
# 608
} 
# 609
catch (...) 
# 610
{ (this->_M_setstate(ios_base::badbit)); }  
# 611
if (__err) { 
# 612
(this->setstate(__err)); }  
# 613
}  
# 614
return *this; 
# 615
} 
# 617
template< class _CharT, class _Traits> typename basic_istream< _CharT, _Traits> ::int_type 
# 620
basic_istream< _CharT, _Traits> ::peek() 
# 621
{ 
# 622
int_type __c = traits_type::eof(); 
# 623
(_M_gcount) = (0); 
# 624
sentry __cerb(*this, true); 
# 625
if (__cerb) 
# 626
{ 
# 627
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 628
try 
# 629
{ 
# 630
__c = ((this->rdbuf())->sgetc()); 
# 631
if (traits_type::eq_int_type(__c, traits_type::eof())) { 
# 632
(__err |= ::std::ios_base::eofbit); }  
# 633
} 
# 634
catch (::__cxxabiv1::__forced_unwind &) 
# 635
{ 
# 636
(this->_M_setstate(ios_base::badbit)); 
# 637
throw; 
# 638
} 
# 639
catch (...) 
# 640
{ (this->_M_setstate(ios_base::badbit)); }  
# 641
if (__err) { 
# 642
(this->setstate(__err)); }  
# 643
}  
# 644
return __c; 
# 645
} 
# 647
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 650
basic_istream< _CharT, _Traits> ::read(char_type *__s, ::std::streamsize __n) 
# 651
{ 
# 652
(_M_gcount) = (0); 
# 653
sentry __cerb(*this, true); 
# 654
if (__cerb) 
# 655
{ 
# 656
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 657
try 
# 658
{ 
# 659
(_M_gcount) = ((this->rdbuf())->sgetn(__s, __n)); 
# 660
if ((_M_gcount) != __n) { 
# 661
(__err |= ((::std::ios_base::eofbit | ::std::ios_base::failbit))); }  
# 662
} 
# 663
catch (::__cxxabiv1::__forced_unwind &) 
# 664
{ 
# 665
(this->_M_setstate(ios_base::badbit)); 
# 666
throw; 
# 667
} 
# 668
catch (...) 
# 669
{ (this->_M_setstate(ios_base::badbit)); }  
# 670
if (__err) { 
# 671
(this->setstate(__err)); }  
# 672
}  
# 673
return *this; 
# 674
} 
# 676
template< class _CharT, class _Traits> streamsize 
# 679
basic_istream< _CharT, _Traits> ::readsome(char_type *__s, ::std::streamsize __n) 
# 680
{ 
# 681
(_M_gcount) = (0); 
# 682
sentry __cerb(*this, true); 
# 683
if (__cerb) 
# 684
{ 
# 685
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 686
try 
# 687
{ 
# 689
const ::std::streamsize __num = ((this->rdbuf())->in_avail()); 
# 690
if (__num > (0)) { 
# 691
(_M_gcount) = ((this->rdbuf())->sgetn(__s, std::min(__num, __n))); } else { 
# 692
if (__num == (-1)) { 
# 693
(__err |= ::std::ios_base::eofbit); }  }  
# 694
} 
# 695
catch (::__cxxabiv1::__forced_unwind &) 
# 696
{ 
# 697
(this->_M_setstate(ios_base::badbit)); 
# 698
throw; 
# 699
} 
# 700
catch (...) 
# 701
{ (this->_M_setstate(ios_base::badbit)); }  
# 702
if (__err) { 
# 703
(this->setstate(__err)); }  
# 704
}  
# 705
return _M_gcount; 
# 706
} 
# 708
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 711
basic_istream< _CharT, _Traits> ::putback(char_type __c) 
# 712
{ 
# 715
(_M_gcount) = (0); 
# 717
(this->clear((this->rdstate()) & ((~::std::ios_base::eofbit)))); 
# 718
sentry __cerb(*this, true); 
# 719
if (__cerb) 
# 720
{ 
# 721
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 722
try 
# 723
{ 
# 724
const int_type __eof = traits_type::eof(); 
# 725
__streambuf_type *__sb = (this->rdbuf()); 
# 726
if ((!__sb) || traits_type::eq_int_type((__sb->sputbackc(__c)), __eof)) { 
# 728
(__err |= ::std::ios_base::badbit); }  
# 729
} 
# 730
catch (::__cxxabiv1::__forced_unwind &) 
# 731
{ 
# 732
(this->_M_setstate(ios_base::badbit)); 
# 733
throw; 
# 734
} 
# 735
catch (...) 
# 736
{ (this->_M_setstate(ios_base::badbit)); }  
# 737
if (__err) { 
# 738
(this->setstate(__err)); }  
# 739
}  
# 740
return *this; 
# 741
} 
# 743
template< class _CharT, class _Traits> typename basic_istream< _CharT, _Traits> ::__istream_type &
# 746
basic_istream< _CharT, _Traits> ::unget() 
# 747
{ 
# 750
(_M_gcount) = (0); 
# 752
(this->clear((this->rdstate()) & ((~::std::ios_base::eofbit)))); 
# 753
sentry __cerb(*this, true); 
# 754
if (__cerb) 
# 755
{ 
# 756
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 757
try 
# 758
{ 
# 759
const int_type __eof = traits_type::eof(); 
# 760
__streambuf_type *__sb = (this->rdbuf()); 
# 761
if ((!__sb) || traits_type::eq_int_type((__sb->sungetc()), __eof)) { 
# 763
(__err |= ::std::ios_base::badbit); }  
# 764
} 
# 765
catch (::__cxxabiv1::__forced_unwind &) 
# 766
{ 
# 767
(this->_M_setstate(ios_base::badbit)); 
# 768
throw; 
# 769
} 
# 770
catch (...) 
# 771
{ (this->_M_setstate(ios_base::badbit)); }  
# 772
if (__err) { 
# 773
(this->setstate(__err)); }  
# 774
}  
# 775
return *this; 
# 776
} 
# 778
template< class _CharT, class _Traits> int 
# 781
basic_istream< _CharT, _Traits> ::sync() 
# 782
{ 
# 785
int __ret = (-1); 
# 786
sentry __cerb(*this, true); 
# 787
if (__cerb) 
# 788
{ 
# 789
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 790
try 
# 791
{ 
# 792
__streambuf_type *__sb = (this->rdbuf()); 
# 793
if (__sb) 
# 794
{ 
# 795
if ((__sb->pubsync()) == (-1)) { 
# 796
(__err |= ::std::ios_base::badbit); } else { 
# 798
__ret = 0; }  
# 799
}  
# 800
} 
# 801
catch (::__cxxabiv1::__forced_unwind &) 
# 802
{ 
# 803
(this->_M_setstate(ios_base::badbit)); 
# 804
throw; 
# 805
} 
# 806
catch (...) 
# 807
{ (this->_M_setstate(ios_base::badbit)); }  
# 808
if (__err) { 
# 809
(this->setstate(__err)); }  
# 810
}  
# 811
return __ret; 
# 812
} 
# 814
template< class _CharT, class _Traits> typename basic_istream< _CharT, _Traits> ::pos_type 
# 817
basic_istream< _CharT, _Traits> ::tellg() 
# 818
{ 
# 821
pos_type __ret = ((pos_type)(-1)); 
# 822
sentry __cerb(*this, true); 
# 823
if (__cerb) 
# 824
{ 
# 825
try 
# 826
{ 
# 827
if (!(this->fail())) { 
# 828
__ret = ((this->rdbuf())->pubseekoff(0, ios_base::cur, ios_base::in)); }  
# 830
} 
# 831
catch (::__cxxabiv1::__forced_unwind &) 
# 832
{ 
# 833
(this->_M_setstate(ios_base::badbit)); 
# 834
throw; 
# 835
} 
# 836
catch (...) 
# 837
{ (this->_M_setstate(ios_base::badbit)); }  
# 838
}  
# 839
return __ret; 
# 840
} 
# 842
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 845
basic_istream< _CharT, _Traits> ::seekg(pos_type __pos) 
# 846
{ 
# 850
(this->clear((this->rdstate()) & ((~::std::ios_base::eofbit)))); 
# 851
sentry __cerb(*this, true); 
# 852
if (__cerb) 
# 853
{ 
# 854
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 855
try 
# 856
{ 
# 857
if (!(this->fail())) 
# 858
{ 
# 860
const pos_type __p = ((this->rdbuf())->pubseekpos(__pos, ios_base::in)); 
# 864
if (__p == ((pos_type)((off_type)(-1)))) { 
# 865
(__err |= ::std::ios_base::failbit); }  
# 866
}  
# 867
} 
# 868
catch (::__cxxabiv1::__forced_unwind &) 
# 869
{ 
# 870
(this->_M_setstate(ios_base::badbit)); 
# 871
throw; 
# 872
} 
# 873
catch (...) 
# 874
{ (this->_M_setstate(ios_base::badbit)); }  
# 875
if (__err) { 
# 876
(this->setstate(__err)); }  
# 877
}  
# 878
return *this; 
# 879
} 
# 881
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 884
basic_istream< _CharT, _Traits> ::seekg(off_type __off, ::std::ios_base::seekdir __dir) 
# 885
{ 
# 889
(this->clear((this->rdstate()) & ((~::std::ios_base::eofbit)))); 
# 890
sentry __cerb(*this, true); 
# 891
if (__cerb) 
# 892
{ 
# 893
::std::ios_base::iostate __err = ::std::ios_base::goodbit; 
# 894
try 
# 895
{ 
# 896
if (!(this->fail())) 
# 897
{ 
# 899
const pos_type __p = ((this->rdbuf())->pubseekoff(__off, __dir, ios_base::in)); 
# 903
if (__p == ((pos_type)((off_type)(-1)))) { 
# 904
(__err |= ::std::ios_base::failbit); }  
# 905
}  
# 906
} 
# 907
catch (::__cxxabiv1::__forced_unwind &) 
# 908
{ 
# 909
(this->_M_setstate(ios_base::badbit)); 
# 910
throw; 
# 911
} 
# 912
catch (...) 
# 913
{ (this->_M_setstate(ios_base::badbit)); }  
# 914
if (__err) { 
# 915
(this->setstate(__err)); }  
# 916
}  
# 917
return *this; 
# 918
} 
# 921
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 923
operator>>(basic_istream< _CharT, _Traits>  &__in, _CharT &__c) 
# 924
{ 
# 925
typedef basic_istream< _CharT, _Traits>  __istream_type; 
# 926
typedef typename basic_istream< _CharT, _Traits> ::int_type __int_type; 
# 928
typename basic_istream< _CharT, _Traits> ::sentry __cerb(__in, false); 
# 929
if (__cerb) 
# 930
{ 
# 931
ios_base::iostate __err = ios_base::goodbit; 
# 932
try 
# 933
{ 
# 934
const __int_type __cb = ((__in.rdbuf())->sbumpc()); 
# 935
if (!_Traits::eq_int_type(__cb, _Traits::eof())) { 
# 936
__c = _Traits::to_char_type(__cb); } else { 
# 938
(__err |= ((ios_base::eofbit | ios_base::failbit))); }  
# 939
} 
# 940
catch (__cxxabiv1::__forced_unwind &) 
# 941
{ 
# 942
(__in._M_setstate(ios_base::badbit)); 
# 943
throw; 
# 944
} 
# 945
catch (...) 
# 946
{ (__in._M_setstate(ios_base::badbit)); }  
# 947
if (__err) { 
# 948
(__in.setstate(__err)); }  
# 949
}  
# 950
return __in; 
# 951
} 
# 953
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 955
operator>>(basic_istream< _CharT, _Traits>  &__in, _CharT *__s) 
# 956
{ 
# 957
typedef basic_istream< _CharT, _Traits>  __istream_type; 
# 958
typedef basic_streambuf< _CharT, _Traits>  __streambuf_type; 
# 959
typedef typename _Traits::int_type int_type; 
# 960
typedef _CharT char_type; 
# 961
typedef ctype< _CharT>  __ctype_type; 
# 963
streamsize __extracted = (0); 
# 964
ios_base::iostate __err = ios_base::goodbit; 
# 965
typename basic_istream< _CharT, _Traits> ::sentry __cerb(__in, false); 
# 966
if (__cerb) 
# 967
{ 
# 968
try 
# 969
{ 
# 971
streamsize __num = (__in.width()); 
# 972
if (__num <= (0)) { 
# 973
__num = __gnu_cxx::__numeric_traits_integer< long> ::__max; }  
# 975
const __ctype_type &__ct = use_facet< ctype< _CharT> > ((__in.getloc())); 
# 977
const int_type __eof = _Traits::eof(); 
# 978
__streambuf_type *__sb = (__in.rdbuf()); 
# 979
int_type __c = (__sb->sgetc()); 
# 981
while ((__extracted < (__num - (1))) && (!_Traits::eq_int_type(__c, __eof)) && (!(__ct.is(ctype_base::space, _Traits::to_char_type(__c))))) 
# 985
{ 
# 986
(*(__s++)) = _Traits::to_char_type(__c); 
# 987
++__extracted; 
# 988
__c = (__sb->snextc()); 
# 989
}  
# 990
if (_Traits::eq_int_type(__c, __eof)) { 
# 991
(__err |= ios_base::eofbit); }  
# 995
(*__s) = char_type(); 
# 996
(__in.width(0)); 
# 997
} 
# 998
catch (__cxxabiv1::__forced_unwind &) 
# 999
{ 
# 1000
(__in._M_setstate(ios_base::badbit)); 
# 1001
throw; 
# 1002
} 
# 1003
catch (...) 
# 1004
{ (__in._M_setstate(ios_base::badbit)); }  
# 1005
}  
# 1006
if (!__extracted) { 
# 1007
(__err |= ios_base::failbit); }  
# 1008
if (__err) { 
# 1009
(__in.setstate(__err)); }  
# 1010
return __in; 
# 1011
} 
# 1014
template< class _CharT, class _Traits> basic_istream< _CharT, _Traits>  &
# 1016
ws(basic_istream< _CharT, _Traits>  &__in) 
# 1017
{ 
# 1018
typedef basic_istream< _CharT, _Traits>  __istream_type; 
# 1019
typedef basic_streambuf< _CharT, _Traits>  __streambuf_type; 
# 1020
typedef typename basic_istream< _CharT, _Traits> ::int_type __int_type; 
# 1021
typedef ctype< _CharT>  __ctype_type; 
# 1023
const __ctype_type &__ct = use_facet< ctype< _CharT> > ((__in.getloc())); 
# 1024
const __int_type __eof = _Traits::eof(); 
# 1025
__streambuf_type *__sb = (__in.rdbuf()); 
# 1026
__int_type __c = (__sb->sgetc()); 
# 1028
while ((!_Traits::eq_int_type(__c, __eof)) && (__ct.is(ctype_base::space, _Traits::to_char_type(__c)))) { 
# 1030
__c = (__sb->snextc()); }  
# 1032
if (_Traits::eq_int_type(__c, __eof)) { 
# 1033
(__in.setstate(ios_base::eofbit)); }  
# 1034
return __in; 
# 1035
} 
# 1040
extern template class basic_istream< char, char_traits< char> > ;
# 1041
extern template basic_istream< char, char_traits< char> >  &ws(basic_istream< char, char_traits< char> >  & __is);
# 1042
extern template basic_istream< char, char_traits< char> >  &operator>>(basic_istream< char, char_traits< char> >  & __in, char & __c);
# 1043
extern template basic_istream< char, char_traits< char> >  &operator>>(basic_istream< char, char_traits< char> >  &, char *);
# 1044
extern template basic_istream< char, char_traits< char> >  &operator>>(basic_istream< char, char_traits< char> >  & __in, unsigned char & __c);
# 1045
extern template basic_istream< char, char_traits< char> >  &operator>>(basic_istream< char, char_traits< char> >  & __in, signed char & __c);
# 1046
extern template basic_istream< char, char_traits< char> >  &operator>>(basic_istream< char, char_traits< char> >  & __in, unsigned char * __s);
# 1047
extern template basic_istream< char, char_traits< char> >  &operator>>(basic_istream< char, char_traits< char> >  & __in, signed char * __s);
# 1049
extern template basic_istream< char, char_traits< char> > ::__istream_type &basic_istream< char, char_traits< char> > ::_M_extract(unsigned short & __v);
# 1050
extern template basic_istream< char, char_traits< char> > ::__istream_type &basic_istream< char, char_traits< char> > ::_M_extract(unsigned & __v);
# 1051
extern template basic_istream< char, char_traits< char> > ::__istream_type &basic_istream< char, char_traits< char> > ::_M_extract(long & __v);
# 1052
extern template basic_istream< char, char_traits< char> > ::__istream_type &basic_istream< char, char_traits< char> > ::_M_extract(unsigned long & __v);
# 1053
extern template basic_istream< char, char_traits< char> > ::__istream_type &basic_istream< char, char_traits< char> > ::_M_extract(bool & __v);
# 1055
extern template basic_istream< char, char_traits< char> > ::__istream_type &basic_istream< char, char_traits< char> > ::_M_extract(long long & __v);
# 1056
extern template basic_istream< char, char_traits< char> > ::__istream_type &basic_istream< char, char_traits< char> > ::_M_extract(unsigned long long & __v);
# 1058
extern template basic_istream< char, char_traits< char> > ::__istream_type &basic_istream< char, char_traits< char> > ::_M_extract(float & __v);
# 1059
extern template basic_istream< char, char_traits< char> > ::__istream_type &basic_istream< char, char_traits< char> > ::_M_extract(double & __v);
# 1060
extern template basic_istream< char, char_traits< char> > ::__istream_type &basic_istream< char, char_traits< char> > ::_M_extract(long double & __v);
# 1061
extern template basic_istream< char, char_traits< char> > ::__istream_type &basic_istream< char, char_traits< char> > ::_M_extract(void *& __v);
# 1063
extern template class basic_iostream< char, char_traits< char> > ;
# 1066
extern template class basic_istream< wchar_t, char_traits< wchar_t> > ;
# 1067
extern template basic_istream< wchar_t, char_traits< wchar_t> >  &ws(basic_istream< wchar_t, char_traits< wchar_t> >  & __is);
# 1068
extern template basic_istream< wchar_t, char_traits< wchar_t> >  &operator>>(basic_istream< wchar_t, char_traits< wchar_t> >  & __in, wchar_t & __c);
# 1069
extern template basic_istream< wchar_t, char_traits< wchar_t> >  &operator>>(basic_istream< wchar_t, char_traits< wchar_t> >  &, wchar_t *);
# 1071
extern template basic_istream< wchar_t, char_traits< wchar_t> > ::__istream_type &basic_istream< wchar_t, char_traits< wchar_t> > ::_M_extract(unsigned short & __v);
# 1072
extern template basic_istream< wchar_t, char_traits< wchar_t> > ::__istream_type &basic_istream< wchar_t, char_traits< wchar_t> > ::_M_extract(unsigned & __v);
# 1073
extern template basic_istream< wchar_t, char_traits< wchar_t> > ::__istream_type &basic_istream< wchar_t, char_traits< wchar_t> > ::_M_extract(long & __v);
# 1074
extern template basic_istream< wchar_t, char_traits< wchar_t> > ::__istream_type &basic_istream< wchar_t, char_traits< wchar_t> > ::_M_extract(unsigned long & __v);
# 1075
extern template basic_istream< wchar_t, char_traits< wchar_t> > ::__istream_type &basic_istream< wchar_t, char_traits< wchar_t> > ::_M_extract(bool & __v);
# 1077
extern template basic_istream< wchar_t, char_traits< wchar_t> > ::__istream_type &basic_istream< wchar_t, char_traits< wchar_t> > ::_M_extract(long long & __v);
# 1078
extern template basic_istream< wchar_t, char_traits< wchar_t> > ::__istream_type &basic_istream< wchar_t, char_traits< wchar_t> > ::_M_extract(unsigned long long & __v);
# 1080
extern template basic_istream< wchar_t, char_traits< wchar_t> > ::__istream_type &basic_istream< wchar_t, char_traits< wchar_t> > ::_M_extract(float & __v);
# 1081
extern template basic_istream< wchar_t, char_traits< wchar_t> > ::__istream_type &basic_istream< wchar_t, char_traits< wchar_t> > ::_M_extract(double & __v);
# 1082
extern template basic_istream< wchar_t, char_traits< wchar_t> > ::__istream_type &basic_istream< wchar_t, char_traits< wchar_t> > ::_M_extract(long double & __v);
# 1083
extern template basic_istream< wchar_t, char_traits< wchar_t> > ::__istream_type &basic_istream< wchar_t, char_traits< wchar_t> > ::_M_extract(void *& __v);
# 1085
extern template class basic_iostream< wchar_t, char_traits< wchar_t> > ;
# 1090
}
# 42 "/usr/include/c++/5/iostream" 3
namespace std __attribute((__visibility__("default"))) { 
# 60 "/usr/include/c++/5/iostream" 3
extern istream cin; 
# 61
extern ostream cout; 
# 62
extern ostream cerr; 
# 63
extern ostream clog; 
# 66
extern wistream wcin; 
# 67
extern wostream wcout; 
# 68
extern wostream wcerr; 
# 69
extern wostream wclog; 
# 74
static ios_base::Init __ioinit; 
# 77
}
# 5 "test.cu"
void add(int n, float *x, float *y) ;
#if 0
# 6
{ 
# 7
int index = __device_builtin_variable_threadIdx.x; 
# 8
int stride = __device_builtin_variable_blockDim.x; 
# 9
for (int i = 0; i < n; i++) { 
# 10
(y[i]) = ((x[i]) + (y[i])); }  
# 11
} 
#endif
# 13 "test.cu"
int main() 
# 14
{ 
# 15
int N = (1 << 20); 
# 16
float *x, *y; 
# 19
cudaMallocManaged(&x, N * sizeof(float)); 
# 20
cudaMallocManaged(&y, N * sizeof(float)); 
# 23
for (int i = 0; i < N; i++) { 
# 24
(x[i]) = (1.0F); 
# 25
(y[i]) = (2.0F); 
# 26
}  
# 29
(cudaConfigureCall(1, 256)) ? (void)0 : add(N, x, y); 
# 32
cudaDeviceSynchronize(); 
# 35
float maxError = (0.0F); 
# 36
for (int i = 0; i < N; i++) { 
# 37
maxError = fmax(maxError, fabs((y[i]) - (3.0F))); }  
# 38
(((((std::cout << ("Max error: "))) << maxError)) << (std::endl)); 
# 41
cudaFree(x); 
# 42
cudaFree(y); 
# 44
return 0; 
# 45
} 

# 1 "test.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__12_test_cpp1_ii_b0a118f9
# 1 "test.cudafe1.stub.c"
#include "test.cudafe1.stub.c"
# 1 "test.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
