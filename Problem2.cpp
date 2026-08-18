#include <iostream>

int main()
{
    float firstNum;
    float secondNum;

    std::cout << "Enter first number:";
    std::cin >> firstNum;

    std::cout << "Enter second number:";
    std::cin >> secondNum;

    std::cout << '\n';

    std::cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << '\n';
    std::cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum << '\n';
    std::cout << firstNum << " x " << secondNum << " = " << firstNum * secondNum << '\n';
    std::cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum << '\n';

    return 0;
}
