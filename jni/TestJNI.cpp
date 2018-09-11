// TestJNI.cpp : 瀹氫箟 DLL 搴旂敤绋嬪簭鐨勫鍑哄嚱鏁般€?
//

#include "com_zhonghao_java_Java2cpp.h"
#include<jni.h>
#include <stdio.h>

int DLL_API_ADD(int a, int b)
{
return (a + b);
}

int DLL_API_SUB(int a, int b)
{
return (a - b);
}

int DLL_API_MUL(int a, int b)
{
return (a*b);
}

int DLL_API_DIV(int a, int b)
{
return (a / b);
}

JNIEXPORT jint JNICALL Java_com_zhonghao_java_Java2cpp_DLL_1ADD(JNIEnv *env, jobject obj, jint a, jint b){
int var = 0;
var = DLL_API_ADD(a, b);
return var;
}

JNIEXPORT jint JNICALL Java_com_zhonghao_java_Java2cpp_DLL_1SUB(JNIEnv *env, jobject obj, jint a, jint b){
int var = 0;
var = DLL_API_SUB(a, b);
return var;
}

JNIEXPORT jint JNICALL Java_com_zhonghao_java_Java2cpp_DLL_1MUL(JNIEnv *env, jobject obj, jint a, jint b){
int var = 0;
var = DLL_API_MUL(a, b);
return var;
}

JNIEXPORT jint JNICALL Java_com_zhonghao_java_Java2cpp_DLL_1DIV(JNIEnv *env, jobject obj, jint a, jint b){
int var = 0;
var = DLL_API_DIV(a, b);
return var;
}