/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_doordu_webserver_WebServer */

#ifndef _Included_com_doordu_webserver_WebServer
#define _Included_com_doordu_webserver_WebServer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_doordu_webserver_WebServer
 * Method:    Init
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_doordu_webserver_WebServer_Init
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_doordu_webserver_WebServer
 * Method:    SetToken
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_doordu_webserver_WebServer_SetToken
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_doordu_webserver_WebServer
 * Method:    Start
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_doordu_webserver_WebServer_Start
  (JNIEnv *, jobject);

/*
 * Class:     com_doordu_webserver_WebServer
 * Method:    Destory
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_doordu_webserver_WebServer_Destory
  (JNIEnv *, jobject);

/*
 * Class:     com_doordu_webserver_WebServer
 * Method:    Response
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_doordu_webserver_WebServer_Response
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif