/*******************************************************************************
 * Copyright (C) 2015, 2016 RAPID EU Project
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *******************************************************************************/
#include <string.h>
#include <jni.h>



/* This is a trivial JNI example where we use a native method
 * to return a new VM String. 
 */

//JavaVM *g_vm;		// Can't have globals - SIGSEGV on server
 
JNIEXPORT jstring JNICALL 
Java_eu_project_rapid_synthBenchmark_JniTest_stringFromJNI( JNIEnv* env,
                                                  jobject thiz )
{
    return (*env)->NewStringUTF(env, "Hello from JNI 7!");
}

jint JNI_OnLoad(JavaVM* vm, void* reserved)
{
    //g_vm = vm;
   	return JNI_VERSION_1_4;
}
