/**
 * 编写程序，打印出用户输入的两个整数之间的所有整数
*/
#include<iostream>
int main()
{
    int v1,v2;
    std::cout<<"请输入2个整数：";
    std::cin>>v1>>v2;
    /*
    //使用while循环的版本
    if(v1 > v2)
    {
        while(v1 >= v2)
        {
            std::cout<<v2<<std::endl;
            v2++;
        }
    }
    else
    {
        while(v1 <= v2)
        {
            std::cout<<v1<<std::endl;
            v1++;
        }
    }
    */


    //使用for循环的版本
    // if(v1 > v2)
    // {
    //     for(int i = v2; i <= v1; i++)
    //     {
    //         std::cout<<i<<std::endl;
    //     }
    // }
    // else 
    // {
    //     for(int i = v1; i <= v2; i++)
    //     {
    //         std::cout<<i<<std::endl;
    //     }
    // }

    
    return 0;
}