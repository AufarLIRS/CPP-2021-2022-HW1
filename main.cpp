#include <iostream>
#include <string>

void Task1()
{
    std::string meters;
    std::cout << "Введите количество метров: ";
    std::cin >> meters;
    std::cout << meters << " метров равно " << std::stof(meters) / 1000.0f << " километров";
}
void Task2()
{
    std::string input;
    std::cout << "Введите пятизначное число: ";
    std::cin >> input;
    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << " разряд равен " << input[i] << std::endl;
    }
}
void Task3()
{
    bool pairFound {false};
    int nums[3] {};

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Введите первое число: ";
        std::cin >> nums[i];
        for (int n = i - 1; n >= 0; n--)
        {
            if (nums[n] == nums[i])
            {
                pairFound = true;
                break;
            }
        }
    }
    if (pairFound)
    {
        for (int i = 1; i <= 3; i++)
            std::cout << i << " число = " << nums[i - 1] + 5 << std::endl;
    } else
        std::cout << "равных нет" << std::endl;
    
}
int main()
{
    setlocale(LC_ALL, "RUS");
    Task1();
    //Task2();
    //Task3();
    return 0;
}