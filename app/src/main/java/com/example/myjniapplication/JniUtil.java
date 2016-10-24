package com.example.myjniapplication;

/**
 * Created by howell on 2016/10/24.
 */

public class JniUtil {

    static{
        System.loadLibrary("testjni");
    }

    public static native void testJni();
}
