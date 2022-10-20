#include <iostream>

int main()
{
    int a, b;
    std::cout << "a = ";
    std::cin >>a;
    std::cout << "b = ";
    std::cin >> b;
    a = a - b;
    b = b + a;
    a = b - a;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    return 0;
}
