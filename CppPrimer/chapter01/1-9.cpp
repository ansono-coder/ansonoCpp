/**
 * 编写程序，用while循环将50~100的整数相加
*/
#include<iostream>
int main()
{
    int sum = 0,tag = 50;
    while(tag <= 100)
    {
        sum += tag;
        //std::cout<<tag<<std::endl;
        tag++;
    }
    std::cout<<"sum的值为："<<sum;
}