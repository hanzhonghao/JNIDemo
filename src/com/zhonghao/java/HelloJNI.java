package com.zhonghao.java;

/**
 * Created by zhonghao.han on 9/11/2018.
 */
public class HelloJNI {

  static {
    // hello.dll (Windows) or libhello.so (Unixes)
    System.loadLibrary("HelloJNI");
  }

  private native void sayHello();

  public static void main(String[] args) {

    new HelloJNI().sayHello();  // invoke the native method
  }

}
