#include <iostream>

int main() 
{
  setlocale (LC_ALL, "RUS");
  Task1();
  Task2();
  Task3();
  return 0;
}
int Task1()
{
  int distance;
   std::cout<<"Введите количество метров:"<<std::endl;
   std::cin>> distance;
   std::cout<<distance<<" метров равно"<<(float)distance*0.001<<" километрам"<<std::endl;
}

int Task2()
{
int number;
std::cout<<"Введите пятизначное число: "<<std::endl;;
std::cin>>number;
   
std::cout <<"Первый разряд равен "<< (number / 10000) <<std::endl;
std::cout <<"Второй разряд равен "<<(number  / 1000 % 10) <<std::endl;
std::cout <<"Третий разряд равен "<< (number  / 100 % 10) <<std::endl;
std::cout <<"Четвертый разряд равен "<< (number  / 10 % 10) <<std::endl;
std::cout <<"Пятый разряд равен "<< (number  / 1 % 10) <<std::endl;   
}
int Task3()
{
  int x,y,z;
  std::cout<<"Введите первое число"<<std::endl;
  std::cin>>x;
  std::cout<<"Введите второе число"<<std::endl;
  std::cin>>y;
  std::cout<<"Введите третье число"<<std::endl;
  std::cin>>z;
  if(x==y==z||x==y||x==z||y==z)
  {
    std::cout<<"1 число = "<< x + 5 <<std::endl;
    std::cout<<"2 число = "<< y + 5 <<std::endl;
    std::cout<<"3 число = "<< z + 5 <<std::endl;
  }
  else
    std::cout<<"Равных нет"<<std::endl;
}