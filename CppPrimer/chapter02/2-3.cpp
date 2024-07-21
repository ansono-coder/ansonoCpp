#include<iostream>
int main(void)
{
	//读程序，写结果
	unsigned u=10,u2=42;
	std::cout << u2-u << std::endl; // 42-10 = 32
	std::cout << u-u2 << std::endl; //这里的计算结果是-32，但由于是无符号，所以自动取模 
	int i=10,i2=42;
	std::cout << i2-i << std::endl; // 42-10=32
	std::cout << i-i2 << std::endl; // 10-42=-32
	std::cout << i-u << std::endl;  // 10-10=0
	std::cout << u-i << std::endl;  // 10-10=0
	
	//我预测的结果
	std::cout << "32,（计算是无符号，但是自动取模）,32,-32,0,0" << std::endl;
	return 0;
}
