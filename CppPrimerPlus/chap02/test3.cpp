#include<iostream>
void BlindMice();
void Run();
int main()
{
    BlindMice();
    BlindMice();
    Run();
    Run();
    return 0;
}
void BlindMice()
{
    std::cout<<"Three blind mice"<<std::endl;
}
void Run()
{
    std::cout<<"See how they run"<<std::endl;
}