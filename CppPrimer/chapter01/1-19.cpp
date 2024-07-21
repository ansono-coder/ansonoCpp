/**
 * 修改1-10的练习，使其能处理用户输入的第一个数比第二个数小的情况 
 * 打印用户输入的两个整数之间的所有整数，要求能处理用户输入整数间的大小问题
*/
#include<iostream>
int main()
{
    int numOne,numTwo;
    std::cin >> numOne >> numTwo;
    //numOne > numTwo
    if(numOne > numTwo)
    {
        for(; numOne >= numTwo; numOne--)
            std::cout << numOne << std::endl;  
    }
    else
    {
        for(; numOne <= numTwo; numTwo--)
            std::cout<< numTwo << std::endl;
    }
    return 0;
}