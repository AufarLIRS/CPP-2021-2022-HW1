#include <iostream>
#include <string>

void Task1(){
    int unput{};
    std::string start{"Введите количество метров: "};
    std::cout << start;
    std::cout << "" << std::endl;
    std::cin >> unput;
    std:: cout << unput << " метров = " << float(0.001)*unput << " километров";
}

void Task2(){
    int num_Task2{};
    std::string start_Task2{"Введите пятизначное число: "};
    std::cout << start_Task2;
    std::cout << "" << std::endl;
    std::cin >> num_Task2;
    int sub_num{10000};
    for(int i{1}; i < 6; i++ ){
        
        std::cout << i << " разряд равен \n" << (num_Task2 / sub_num) % 10 << std::endl;
        sub_num /= 10;
    }
}

int dop_Task3(std::string str){
    int num{};
    std::string start{"Введите " + str + " число: "};
    std::cout << start;
    std::cout << "" << std::endl;
    std::cin >> num;
    return num;
}

void return_Func_Task3(int num1, int num2, int num3){
        std::cout << "Первое число : " << num1 + 5 << std::endl;
        std::cout << "Второе число : " << num2 + 5 << std::endl;
        std::cout << "Третье число : " << num3 + 5 << std::endl;
}

void Task3(){
    int num1{dop_Task3("первое")}, num2{dop_Task3("второе")}, num3{dop_Task3("третье")};
    
    if (num1 == num3 || num3 == num2 || num1 == num3){
        return_Func_Task3(num1, num2, num3);
    }
    else{
        std::cout << "Равных нет" << std::endl;
    }
}

int main()
{   
    // Task1(); 
    // Task2();
    // Task3();
    return 0;
}