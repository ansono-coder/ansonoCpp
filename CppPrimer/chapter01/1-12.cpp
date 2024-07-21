/**
 * 指出下面for完成的功能，求sum的值
*/
#include<iostream>
int main()
{
    int sum = 0;
    /**
     * 累加从-100到100的整数
     * sum 最终等于0
    */
    for(int i = -100; i <= 100; ++i)
        sum += i;
    std::cout<<"sum = "<<sum; 
    return 0;
}