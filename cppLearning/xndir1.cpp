#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    std::cout << "First number is ";
    std::cin >> a;
    std::cout << "Second number is ";
    std::cin >> b;

    std::cout << "SUM is " << (a + b) << std::endl;

    std::cout << "DIFERENCE is " << (a - b) << std::endl;
    std::cout << "PRODUCT is " << (a * b) << std::endl;
    if (b != 0)
    {
        std::cout << "INTEGER DIZVISION is " << (a / b) << std::endl;
        std::cout << "REMAINDER is " << (a % b) << std::endl;
    }

    return 0;
}