/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_omegaup_transact_Interface */

#ifndef _Included_com_omegaup_transact_Interface
#define _Included_com_omegaup_transact_Interface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_omegaup_transact_Interface
 * Method:    get
 * Signature: (Lcom/omegaup/transact/Message;)V
 */
JNIEXPORT void JNICALL Java_com_omegaup_transact_Interface_get
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_omegaup_transact_Interface
 * Method:    allocate
 * Signature: (Lcom/omegaup/transact/Message;IJ)V
 */
JNIEXPORT void JNICALL Java_com_omegaup_transact_Interface_allocate
  (JNIEnv *, jobject, jobject, jint, jlong);

/*
 * Class:     com_omegaup_transact_Interface
 * Method:    call
 * Signature: (Lcom/omegaup/transact/Message;ZZ)V
 */
JNIEXPORT void JNICALL Java_com_omegaup_transact_Interface_call
  (JNIEnv *, jobject, jobject, jboolean, jboolean);

/*
 * Class:     com_omegaup_transact_Interface
 * Method:    nativeInit
 * Signature: (ZLjava/lang/String;Ljava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_com_omegaup_transact_Interface_nativeInit
  (JNIEnv *, jobject, jboolean, jstring, jstring, jlong);

#ifdef __cplusplus
}
#endif
#endif
