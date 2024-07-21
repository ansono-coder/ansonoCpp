/**
 * 获取用户的输入的整数，计算+和*
*/
#include<iostream>
int main()
{
    int num_one,num_two;
    std::cout<<"请输入两个整数：";
    std::cin>>num_one>>num_two;
    std::cout<<(num_one+num_two)<<"\t"<<(num_one*num_two)<<std::endl;
    return 0;
}