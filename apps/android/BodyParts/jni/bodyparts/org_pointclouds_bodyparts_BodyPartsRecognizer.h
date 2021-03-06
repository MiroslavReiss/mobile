/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_pointclouds_bodyparts_BodyPartsRecognizer */

#ifndef _Included_org_pointclouds_bodyparts_BodyPartsRecognizer
#define _Included_org_pointclouds_bodyparts_BodyPartsRecognizer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_pointclouds_bodyparts_BodyPartsRecognizer
 * Method:    cacheIds
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_pointclouds_bodyparts_BodyPartsRecognizer_cacheIds
  (JNIEnv *, jclass);

/*
 * Class:     org_pointclouds_bodyparts_BodyPartsRecognizer
 * Method:    create
 * Signature: ([[B)V
 */
JNIEXPORT void JNICALL Java_org_pointclouds_bodyparts_BodyPartsRecognizer_create
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     org_pointclouds_bodyparts_BodyPartsRecognizer
 * Method:    free
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_pointclouds_bodyparts_BodyPartsRecognizer_free
  (JNIEnv *, jobject);

/*
 * Class:     org_pointclouds_bodyparts_BodyPartsRecognizer
 * Method:    recognize
 * Signature: (Lorg/pointclouds/bodyparts/Cloud;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_pointclouds_bodyparts_BodyPartsRecognizer_recognize
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
