#include <iostream>

int main()
{
    unsigned month, year, days;
    std::cout << "Month:";
    std::cin >> month;
    std::cout << "Year:";
    std::cin >> year;
    bool isYearLeap;
    if (year % 400 == 0)
    {
        isYearLeap = true;
    }
    else if (year % 100 == 0)
    {
        isYearLeap = false;
    }
    else if (year % 4 == 0)
    {
        isYearLeap = true;
    }
    else
    {
        isYearLeap = false;
    }

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        days = 31;
        std::cout << "Days in month:" << days;
    }else if (month == 4 || month == 6 || month == 9 || month == 11 )
    {
        days = 30;
        std::cout << "Days in month:" << days;
    }
    else if (month == 2 && isYearLeap == true)
    {
        days = 29;
        std::cout << "Days in month:" << days;
    }
    else if (month == 2 && isYearLeap == false)
    {
        days = 28;
        std::cout << "Days in month:" << days;
    }
    else
    {
        std::cout << "Month must be between 1 and 12!";
    }
    return 0;
}
