/**
 * 代码合理性判断，并给出原因
*/
#include<iostream>
int main()
{
    int v1 =10,v2 =12;
    std::cout<<"The sum of"<<v1;
    //这里需要使用std::cout输出，c++中一句话的结束用分号来体现
    <<"and"<<v2;
    <<"is"<<v1+v2<<std::endl;
    return 0;
}