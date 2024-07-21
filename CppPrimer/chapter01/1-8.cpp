/**
 * 指出下列语句的合法性
*/
#include<iostream>
int main()
{
    //1. std::cout<<"/*"; right
    //2. std::cout<<"*/"; right
    //3. std::cout<< /* "*/" */; worry
    //4. std::cout<</* "*/" /* "/*" */; right

    std::cout<<"/*";
     std::cout<<"*/"; 
    //std::cout<< /* "*/" */; 
    std::cout<</* "*/" /* "/*" */; 
    return 0;
}