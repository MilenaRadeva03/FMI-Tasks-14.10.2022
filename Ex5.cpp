#include <iostream>

int main()
{
    int number;
    std::cin >> number;
    int lastn = number % 10;
    number /= 10;
    int thirdn = number % 10;
    number /= 10;
    int secondn = number % 10;
    int firstn = number / 10;
    std::cout << lastn << "*" << thirdn << "*" << secondn << "*" << firstn;
    return 0;
}
