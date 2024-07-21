/**
 * 抄写程序，如果输入的所有值是相等的，本节程序会输出什么，如果没有重复值，输出又会怎样
 * 如果输入的数值全部相同，输出该数值出现的次数
 * 如果输入的数值没有相同的，则输出每个数值的次数，且次数都为1
 * 
*/
#include<iostream>
int main()
{
#pragma region C++Primer中这道题的写法
    //定义currVal和val变量
    int currVal = 0, val = 0;
    if(std::cin >> currVal) {
        int cnt = 1;
        while(std::cin >> val) {
            if(val == currVal)
                ++cnt;
            else {
                std::cout << currVal << " occurs "
                          << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs "
                  << cnt << " times " << std::endl;
    }
#pragma endregion
    return 0;
}