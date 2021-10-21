#include <iostream>
#include <string>

void First()
{
    std::string meters;
    std::cout << "Введите количество метров: ";
    std::cin >> meters;
    std::cout << meters << " метров равно " << std::stof(meters) / 1000.0f << " километров";
}
void Second()
{
    std::string input;
    std::cout << "Введите пятизначное число: ";
    std::cin >> input;
    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << " разряд равен " << input[i] << std::endl;
    }
}
void Third()
{
    int numFirst;
    int numSecond;
    int numThird;

    for (int i = 0; i < 3; i++)
    {
        std::cout << "Введите первое число: ";
        std::cin >> numFirst;
        std::cout << "Введите второе число: ";
        std::cin >> numSecond;
        std::cout << "Введите третье число: ";
        std::cin >> numThird;
    }
    if (numFirst == numThird || numFirst == numSecond || numSecond == numThird)
        std::cout << "равных нет" << std::endl;
    else
    {
        std::cout << "1 число = " << numFirst << std::endl;
        std::cout << "2 число = " << numSecond << std::endl;
        std::cout << "3 число = " << numThird << std::endl;
    }
}
int main()
{
    setlocale(LC_ALL, "RUS");
    First();
    //Second();
    //Third();
    return 0;
}