/**
 * 这是一个学习字符串的cpp文件
 * windows10 c++ 1个简体中文汉字占3个字符位置，字符串中1个汉字要4个字符位置，最后一个字符位置用来存放\0
*/
#include<iostream>
//c语言风格字符串的头文件
#include<cstring>
//c++风格字符串的头文件
#include<string>
int main()
{
    #pragma region C语言风格
    // char str1[20] = "我是陆上无敌";
    // //拷贝 str1复制到str2
    // char str2[20];
    // strcpy(str2,str1);
    // std::cout << str1 << "\t" << str2 << std::endl;
    // //字符拼接 str3拼接到str1上
    // char str3[20] = ",陈老总";
    // strcat(str1,str3);
    // std::cout << str1 << std::endl;
    // //返回字符串长度 返回str1长度
    // char str4[4] = "我";
    // std::cout << strlen(str1) << std::endl;
    // std::cout << strlen("a") << std::endl;
    // //比较两个字符串 = return 0  < return>0  > return<0
    // char str5[16] = "abc";
    // char str6[16] = "bba";
    // std::cout << strcmp(str5,str6) << std::endl;
    // //查找字符串中某一个字符第一次出现的位置
    // char str7[8] = "abababa";
    // char *ptrLocationCh = strchr(str7,'a');
    // std::cout << *ptrLocationCh << std::endl;
    // //查找字符串x1中字符串x2第一次出现的位置,输出从这一位置开始的字符串
    // char str8[4] = "ba";
    // std::cout << strstr(str7,str8) << std::endl;
    #pragma endregion
    #pragma region C++风格
    std::string str = "陆上无敌";
    std::string str02 = "老陈";
    //字符串拼接
    std::cout << str02 + str << std::endl;
    //字符串复制
    std::string str03;
    str03 = str02 + str;
    std::cout << str03 << std::endl;
    //字符串长度计算
    int length = str03.size();
    std::cout << length << std::endl;

    #pragma endregion
    //其余字符串操作函数可以查看C++文档 
    return 0;
}