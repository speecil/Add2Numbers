#include <iostream>
#include <conio.h>

int main(){

    double num1;
    double num2;
    double answer;

    // ask and store input 1 from user
    std::cout << "Please enter the first number...";
    std::cin >> num1;

    // ask and store input 2 from user

    std::cout << "Please enter the second number...";
    std::cin >> num2;

    // add both numbers and output them

    answer = num1 + num2;

    std::cout << "The answer is " << answer << "\n";

    system("pause");
}