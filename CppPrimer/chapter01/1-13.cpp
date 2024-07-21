/**
 * 使用for循环重做1.4.1节中的所有练习
*/
#include<iostream>
int main()
{
    int v1,v2,sum = 0;
    
    //将50~100的整数累加
    for(int i = 50; i <= 100; i++)
    {
        sum += i;
    }
    std::cout<<"sum的值为："<<sum<<std::endl;

    //使用--运算符递减打印10~0之间的整数
    for(int i = 10; i <= 0; i--)
        std::cout<<i<<std::endl;
    
    //打印用户输入的2个整数之间的所有整数 正序+逆序
    std::cout<<"请输入2个整数：";
    std::cin>>v1>>v2;
    if(v1 < v2)
    {
        //for(; v1 <= v2; v1++)
        for(int i = v1; i <= v2; i++)
            std::cout<<i<<std::endl;
    }
    else
    {
        //for(; v2 <= v1; v2++)
        for(int i = v2; i <= v1; i++)
            std::cout<<i<<std::endl;
    }

    return 0;
}