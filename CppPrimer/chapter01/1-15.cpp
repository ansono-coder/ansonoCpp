/**
 * 编写程序，包含p14页中讨论的常见错误，熟悉编译器生成的错误信息
 *
 * 语法错误（syntax error）
 * 类型错误 (type error)
 * 声明错误 (declaration error)
 *  
*/

#include<iostream>
int main()
{
    // //语法错误 常见于将分号达成冒号
    // int i = 10:
    // std::cout<<"i = "<<i<<std::endl;
    // return 0;

    // //类型错误  常见于将字符串类型的数值直接传递给整数类型或者浮点型数据
    // int i = "3.14"; 
    // std::cout<<i<<std::endl;

    // //声明错误 C++中的变量是先声明后使用， 常见的错误有使用但忘记声明
    // std::cout<<j<<std::endl;
}