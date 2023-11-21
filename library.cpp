#include "library.h"

#include <iostream>
#include "com_zhaoyuan_AsyncServletDemo_jni_CPPLibrary.h"

double temp[5];

JNIEXPORT jdoubleArray JNICALL Java_com_zhaoyuan_AsyncServletDemo_jni_CPPLibrary_calc1(
        JNIEnv * jniEnv, jobject jobject1, jdoubleArray arr1, jdoubleArray arr2, jboolean flag){
    jdoubleArray result = (*jniEnv).NewDoubleArray(5);
    jdouble * vals1 = (* jniEnv).GetDoubleArrayElements(arr1, NULL);
    jdouble * vals2 = (* jniEnv).GetDoubleArrayElements(arr2, NULL);
    for (int i = 0; i < 5; ++i) {
        temp[i] = vals1[i] * vals2[i];
    }
    (*jniEnv).SetDoubleArrayRegion(result,0,5,temp);
    return result;
}

void hello() {
    std::cout << "Hello, World!" << std::endl;
}
