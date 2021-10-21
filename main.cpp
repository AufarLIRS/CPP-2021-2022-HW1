#include <iostream>

void task_1()
{
  float metr;
  std::cout << "Введите количество метров: ";
  std::cin >> metr;
  std::cout << metr << " метров равно " << metr * 0.001 << " километров" << std::endl;
}

void task_2()
{
  int n;
  std::cout << "Введите пятизначное число: ";
  std::cin >> n;

  std::cout << "1 разряд равен " << (n / 10000) << std::endl;
  std::cout << "2 разряд равен " << (n / 1000 % 10) << std::endl;
  std::cout << "3 разряд равен " << (n / 100 % 10) << std::endl;
  std::cout << "4 разряд равен " << (n / 10 % 10) << std::endl;
  std::cout << "5 разряд равен " << (n % 10) << std::endl;
}

void task_3()
{
  int n1, n2, n3;
  std::cout << "Введите первое число: ";
  std::cin >> n1;
  std::cout << "Введите второе число: ";
  std::cin >> n2;
  std::cout << "Введите третье число: ";
  std::cin >> n3;
  if (n1 == n2 || n1 == n3 || n2 == n3)
  {
    std::cout << "1 число = " << n1 + 5 << std::endl;
    std::cout << "2 число = " << n2 + 5 << std::endl;
    std::cout << "3 число = " << n3 + 5 << std::endl;
  }
  else
    std::cout << "Равных нет" << std::endl;
}

int main()
{
  setlocale(LC_ALL, "RUS");
  //   task_1();
  //   task_2();
  //   task_3();
}
