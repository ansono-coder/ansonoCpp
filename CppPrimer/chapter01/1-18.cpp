/**
 * 获取输入的数值，判断每个数值连续出现了几次，输入全都相等的数值，会出现什么情况
 * 如果输入的数值全部相同，输出该数值出现的次数 
*/
#include<iostream>
int main()
{
    // 1 2 1 1 2 1 1 1 2 2 1 2 1  
    /**
     * 先获取currentVar和var
     * 给1个计数器 count
     * if currentVar == var count++
     *  else cout currentVar  currentVar = var
    */
   int currentVar, var;
   if(std::cin >> currentVar)
   {
        //每一个数值至少出现1次
        int count = 1;
        while(std::cin >> var) 
        {      
            if(var == currentVar)
            {
                count++;
            }
            else
            {
                std::cout << currentVar << "出现了" << count << "次！" 
                          << std::endl ;
                currentVar = var ;
                //重置count
                count = 1;               
            }
        }
        std::cout << currentVar << "出现了" << count << "次！"
                  << std::endl; 
   }
}