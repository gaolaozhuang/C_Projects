#include <stdio.h>

//定义外部变量
int x;
int y;

//定义函数
int addtwonum(){
    //函数内部声明 x 和 y 为外部变量
    extern int x;
    extern int y;
    //给外部变量赋值
    x=1;
    y=2;
    return x+y;
}

int main(){
    int result;
    //调用函数 addtwonum
    result = addtwonum();
    printf("result:%d",result);
    return 0;
}