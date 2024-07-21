/**
 * 使用--运算符在循环中按递减顺序打印出10到0之间的整数
*/
#include<iostream>
int main()
{
    int v = 10;
    while(v >= 0)
    {
        std::cout<<"v = "<<v<<std::endl;
        v--;
    }
    return 0;
}