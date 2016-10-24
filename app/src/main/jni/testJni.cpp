//
// Created by howell on 2016/10/24.
//

#include "com_example_myjniapplication_jniUtil.h"
#include <android/log.h>
#include "add.h"

#define LOGI(...) ((void)__android_log_print(ANDROID_LOG_INFO, "123", __VA_ARGS__))
#define LOGW(...) ((void)__android_log_print(ANDROID_LOG_WARN, "123", __VA_ARGS__))
#define LOGE(...) ((void)__android_log_print(ANDROID_LOG_ERROR, "123", __VA_ARGS__))


JNIEXPORT void JNICALL Java_com_example_myjniapplication_JniUtil_testJni
  (JNIEnv *, jclass){
    int a = 1;
    int b = 2;
    int c = 0;
    int d =  my_add(a,b);
    LOGI("test jni in cpp   %d+%d=%d",a,b,d);
  }