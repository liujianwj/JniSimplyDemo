LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := jnitest
LOCAL_LDLIBS := -llog
LOCAL_SRC_FILES := com_github_liujianwj_jnisimplydemo_JniUtils.c

include $(BUILD_SHARED_LIBRARY)