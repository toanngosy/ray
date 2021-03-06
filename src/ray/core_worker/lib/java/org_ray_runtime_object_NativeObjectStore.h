/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_ray_runtime_object_NativeObjectStore */

#ifndef _Included_org_ray_runtime_object_NativeObjectStore
#define _Included_org_ray_runtime_object_NativeObjectStore
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_ray_runtime_object_NativeObjectStore
 * Method:    nativePut
 * Signature: (JLorg/ray/runtime/object/NativeRayObject;)[B
 */
JNIEXPORT jbyteArray JNICALL
Java_org_ray_runtime_object_NativeObjectStore_nativePut__JLorg_ray_runtime_object_NativeRayObject_2(
    JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     org_ray_runtime_object_NativeObjectStore
 * Method:    nativePut
 * Signature: (J[BLorg/ray/runtime/object/NativeRayObject;)V
 */
JNIEXPORT void JNICALL
Java_org_ray_runtime_object_NativeObjectStore_nativePut__J_3BLorg_ray_runtime_object_NativeRayObject_2(
    JNIEnv *, jclass, jlong, jbyteArray, jobject);

/*
 * Class:     org_ray_runtime_object_NativeObjectStore
 * Method:    nativeGet
 * Signature: (JLjava/util/List;J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_org_ray_runtime_object_NativeObjectStore_nativeGet(
    JNIEnv *, jclass, jlong, jobject, jlong);

/*
 * Class:     org_ray_runtime_object_NativeObjectStore
 * Method:    nativeWait
 * Signature: (JLjava/util/List;IJ)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_org_ray_runtime_object_NativeObjectStore_nativeWait(
    JNIEnv *, jclass, jlong, jobject, jint, jlong);

/*
 * Class:     org_ray_runtime_object_NativeObjectStore
 * Method:    nativeDelete
 * Signature: (JLjava/util/List;ZZ)V
 */
JNIEXPORT void JNICALL Java_org_ray_runtime_object_NativeObjectStore_nativeDelete(
    JNIEnv *, jclass, jlong, jobject, jboolean, jboolean);

#ifdef __cplusplus
}
#endif
#endif
