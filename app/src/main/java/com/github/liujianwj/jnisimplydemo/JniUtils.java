package com.github.liujianwj.jnisimplydemo;

/**
 * Created by liujian on 16/7/13.
 */
public class JniUtils {

    static {
        System.loadLibrary("jnitest");
    }

    public native String getNativeString();
}
