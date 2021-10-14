#include <iostream>
using namespace std;
int Task_1()
{
    int num; double result;
    std::cout<<"Введите количество метров: ";
    std::cin>>num;
    result = num / 1000.0;
    std::cout<<num << " метров равно " << result << " киллометров"<<std::endl;
}
int Task_2()
{
    int num; int del = 10000;
    std::cout<<"Введите пятизначное число: ";
    std::cin>>num;
    for(int i = 1; i < 6; i++)
    {
        std::cout<<i << " разряд равен " << num/del <<std::endl;
        num = num - num/del * del;
        del = del / 10;
    }
}
int Task_3() 
{
    int num1, num2, num3; 
    std::cout<<"Введите число: ";
    std::cin>>num1;
    std::cout<<"Введите число: ";
    std::cin>>num2;
    std::cout<<"Введите число: ";
    std::cin>>num3;
    if (num1 == num2 || num1 == num3 || num2 == num3)
    {
        std::cout<<"1 число = "<< num1 + 5 <<std::endl;
        std::cout<<"1 число = "<< num2 + 5 <<std::endl;
        std::cout<<"1 число = "<< num3 + 5 <<std::endl;
    }
    else
    {
        std::cout<<"Равных нет"<<std::endl;
    }
}
int main()
{
    Task_1();
    Task_2();
    Task_3();
}
