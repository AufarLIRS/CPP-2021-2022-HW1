#include <iostream>
// using namespace std;

void task1()
{
    std::cout << "Введите количество метров: ";
    double a;
    std::cin >> a;
    std::cout <<  a << " метров равно " << a/1000 << 
    " километров" << std::endl;
}

void task2()
{
    int a;
    std::cout << "Введите пятизначное число: ";
    std::cin >> a;
    int discharge = 1;
    int del1 = 10000;
    while (discharge != 6)
    {
        std::cout << discharge << " разряд равен " << a / del1 << std::endl;
        a %= del1;
        del1 /= 10;
        discharge++;
    }
    
}

void task3()
{
    bool exp = false;
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Введите первое число: ";
        std::cin >> arr[i];
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (arr[i] == arr[j])
            {
                exp = true;
            }
            
        }
        
    }
    if (exp)
    {
        for (int i = 0; i < 3; i++)
        {
            arr[i] += 5;
            std::cout << i + 1 << " число = " << arr[i] << std::endl;
        }
        
    } else
    {
        std::cout << "Равных нет";
    }
    
    
    
}

int main()
{
    // task1();
    task2();
    // task3();
}
