#include <jni.h>
#include <string>

#include "libv4l2-android-master/CameraHardware.h"
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <sys/mman.h>
#include <linux/videodev2.h>
#include <sys/ioctl.h>



extern "C"
{
JNIEXPORT jstring JNICALL
Java_camera_don_com_camera_MainActivity_stringFromJNII(JNIEnv *env, jobject instance) {

    // TODO


    return env->NewStringUTF("This just a test for Android Studio NDK JNI developer!");
}
JNIEXPORT jstring JNICALL
Java_camera_don_com_camera_MainActivity_stringFromJNI
(JNIEnv* env, jobject obj){
std::string hello = "Hello from C++";
return env->NewStringUTF(hello.c_str());
}


}
