#include<iostream>
#define LONGTOMA 220
int main()
{
    double distance;
    std::cout<<"Please enter your long number:";
    std::cin>>distance;
    std::cout<<"Your long number change to ma is "<<distance*LONGTOMA<<" !"<<std::endl;
    return 0;
}