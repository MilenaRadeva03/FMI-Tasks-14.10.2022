#include <iostream>

int main()
{
    unsigned year;
    std::cin >> year;
    if (year % 400 == 0)
    {
        std::cout << "It is a leap year.";
    }
    else if (year % 100 == 0)
    {
        std::cout << "It isn't a leap year.";
    }
    else if (year % 4 == 0)
    {
        std::cout << "It is a leap year.";
    }
    else
    {
        std::cout << "It isn't a leap year.";
    }
    return 0;
}
