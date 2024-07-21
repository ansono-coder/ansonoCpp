/**
 * int 、long 、 long long和short的区别
 * 无符号类型和带符号类型的区别
 * float和double之间的区别
*/
#include<iostream>
int main()
{
    /**
     *long long 类型和int、long类型相比有着更大的取值范围
    */
    std::cout << INT_MIN << "\t" << INT_MAX << std::endl;
    std::cout << LONG_MIN << "\t" << LONG_MAX << std::endl;
    std::cout << LLONG_MIN << "\t" << LLONG_MAX << std::endl;
    //short类型取值范围是-32768~32767
    return 0;
}
