#include<iostream>
#define AGETOMONTH 12
int main()
{
    int user_age;
    std::cout<<"Please input your age:";
    std::cin>>user_age;
    std::cout<<"The monthes of your age is "<<user_age*AGETOMONTH<<" !"<<std::endl;
    return 0;
}