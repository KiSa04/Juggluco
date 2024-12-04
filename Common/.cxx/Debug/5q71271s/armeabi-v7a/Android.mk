LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := g
LOCAL_SRC_FILES := C:\Users\da\Downloads\Juggluco-primary\Common\build\intermediates\cxx\Debug\5q71271s\obj\armeabi-v7a\libg.so
LOCAL_CPP_FEATURES := rtti exceptions
LOCAL_EXPORT_LDLIBS := -lc++_static -lc -llog -lGLESv3 -landroid -lEGL -lm -latomic -lz -ldl
include $(PREBUILT_SHARED_LIBRARY)

