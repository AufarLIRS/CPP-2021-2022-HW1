#include <iostream>
using namespace std;
int Task_1()
{
  int num;
  std::cout << "Введите количество метров: ";
  std::cin >> num;
  double result = num / 1000.0;
  std::cout << num << " метров равно " << result << " киллометров" << std::endl;
}
int Task_2()
{
  int num;
  std::cout << "Введите пятизначное число: ";
  std::cin >> num;
  for (int i = 5; i > 0; i--)
  {
    std::cout << i << " разряд равен " << num % 10 << std::endl;
    num = num / 10;
  }
}
int Task_3()
{
  int num1, num2, num3;
  std::cout << "Введите число: ";
  std::cin >> num1;
  std::cout << "Введите число: ";
  std::cin >> num2;
  std::cout << "Введите число: ";
  std::cin >> num3;
  if (num1 == num2 || num1 == num3 || num2 == num3)
  {
    std::cout << "1 число = " << num1 + 5 << std::endl;
    std::cout << "2 число = " << num2 + 5 << std::endl;
    std::cout << "3 число = " << num3 + 5 << std::endl;
  }
  else
  {
    std::cout << "Равных нет" << std::endl;
  }
}
int main()
{
  Task_1();
  Task_2();
  Task_3();
}
