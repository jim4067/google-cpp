#include <iostream>

int gcd(int a, int b);

int main()
{
    int num1 = 0, num2 = 0;
    std::cout << "Provide two numbers to calculate the gcd gcd : ";
    if (!(std::cin >> num1 >> num2))
    {
        std::cout << "please provide numeric types";
    }

    std::cout << std::endl;

    std::cout << gcd(num1, num2) << std::endl;
    return 0;
}

int gcd(int a, int b)
{
    int temp = 0;
    while (b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}