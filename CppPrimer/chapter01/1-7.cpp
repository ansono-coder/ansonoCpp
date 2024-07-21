/**
 * 不正确的嵌套注释，观察编译器返回的错误信息
*/
#include<iostream>
int main()
{
    /**
     * //
     * /
    */
   //这是一种情况
   /*
   */
  //这是另一种情况
  /**
   * 
   * /*
   * */
  //  error: expected primary-expression before '/' token
  */
 //error: expected primary-expression before 'return' 
    return 0;
}