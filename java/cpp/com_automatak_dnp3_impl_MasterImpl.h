/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_automatak_dnp3_impl_MasterImpl */

#ifndef _Included_com_automatak_dnp3_impl_MasterImpl
#define _Included_com_automatak_dnp3_impl_MasterImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_automatak_dnp3_impl_MasterImpl
 * Method:    enable_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_automatak_dnp3_impl_MasterImpl_enable_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_automatak_dnp3_impl_MasterImpl
 * Method:    disable_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_automatak_dnp3_impl_MasterImpl_disable_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_automatak_dnp3_impl_MasterImpl
 * Method:    shutdown_native
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_automatak_dnp3_impl_MasterImpl_shutdown_1native
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_automatak_dnp3_impl_MasterImpl
 * Method:    select_and_operate_native
 * Signature: (JLcom/automatak/dnp3/CommandHeaders;Ljava/util/concurrent/CompletableFuture;)V
 */
JNIEXPORT void JNICALL Java_com_automatak_dnp3_impl_MasterImpl_select_1and_1operate_1native
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     com_automatak_dnp3_impl_MasterImpl
 * Method:    direct_operate_native
 * Signature: (JLcom/automatak/dnp3/CommandHeaders;Ljava/util/concurrent/CompletableFuture;)V
 */
JNIEXPORT void JNICALL Java_com_automatak_dnp3_impl_MasterImpl_direct_1operate_1native
  (JNIEnv *, jobject, jlong, jobject, jobject);

/*
 * Class:     com_automatak_dnp3_impl_MasterImpl
 * Method:    scan_native
 * Signature: (JLjava/lang/Iterable;)V
 */
JNIEXPORT void JNICALL Java_com_automatak_dnp3_impl_MasterImpl_scan_1native
  (JNIEnv *, jobject, jlong, jobject);

/*
 * Class:     com_automatak_dnp3_impl_MasterImpl
 * Method:    add_periodic_scan_native
 * Signature: (JLjava/time/Duration;Ljava/lang/Iterable;)V
 */
JNIEXPORT void JNICALL Java_com_automatak_dnp3_impl_MasterImpl_add_1periodic_1scan_1native
  (JNIEnv *, jobject, jlong, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif