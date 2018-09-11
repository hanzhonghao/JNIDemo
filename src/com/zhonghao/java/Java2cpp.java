package com.zhonghao.java;

/**
 * Created by zhonghao.han on 9/11/2018.
 */
public class Java2cpp {
  static {
    System.loadLibrary("TestJNI");
  }

  public native  int DLL_ADD(int a,int b);
  public native  int DLL_SUB(int a,int b);
  public native  int DLL_MUL(int a,int b);
  public native  int DLL_DIV(int a,int b);

  public static void main(String[] args) {
    int sum = 0,ans1=0,ans2=2,ans3=0;
    Java2cpp test = new Java2cpp();

    sum =test.DLL_ADD(2,4);
    ans1 =test.DLL_SUB(7,2);
    ans2 =test.DLL_MUL(4,5);
    ans3 = test.DLL_DIV(9,3);
    System.out.println("Java call cpp dll result: "
        +"\n"+ "sum = " +sum + " ans1 = "+ ans1+" ans2= "+ans2
    +" ans3= "+ans3);
  }

}
