LOCAL_PATH := $(call my-dir)

#include $(CLEAR_VARS)
#LOCAL_MODULE := myadd
#LOCAL_SRC_FILES := libmyadd.a
#include $(PREBUILT_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := myadd
LOCAL_SRC_FILES := libmyadd.so
LOCAL_CFLAGS := -fPIC
include $(PREBUILT_SHARED_LIBRARY)


include $(CLEAR_VARS)
LOCAL_MODULE    := testjni
LOCAL_SRC_FILES := testJni.cpp
#LOCAL_STATIC_LIBRARIES := myadd
LOCAL_SHARED_LIBRARIES := myadd
LOCAL_LDLIBS := -llog

include $(BUILD_SHARED_LIBRARY)