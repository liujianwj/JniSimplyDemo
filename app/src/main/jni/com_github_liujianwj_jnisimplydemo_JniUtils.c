//
// Created by 刘坚 on 16/7/13.
//

#include "com_github_liujianwj_jnisimplydemo_JniUtils.h"
/*
 * Class:     com_github_liujianwj_jnisimplydemo_JniUtils
 * Method:    getNativeString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_github_liujianwj_jnisimplydemo_JniUtils_getNativeString
        (JNIEnv *env, jobject obj){
    return (*env)->NewStringUTF(env,"This just a test for Android Studio NDK JNI developer!");
}