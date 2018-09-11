#include<jni.h>
#include <stdio.h>
#include "com_zhonghao_java_HelloJNI.h"

JNIEXPORT void JNICALL Java_com_zhonghao_java_HelloJNI_sayHello(JNIEnv *env, jobject thisObj) {
   printf("Hello World! ahaahaaha \n");
   return;
}