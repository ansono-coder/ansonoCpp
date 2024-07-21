/**
 * 从cin中读取一组数，输出其和
*/
#include<iostream>
int main()
{
    int sum = 0,temp;
    std::cout<<"请输入需要累加的数字（输入q退出）：";
    while(std::cin>>temp)
    {
        sum += temp;
    }
    std::cout<<sum<<std::endl;
    return 0;
}