

#include <iostream>

int main()
{
    unsigned x,y;
    std::cin >> x >> y;
    unsigned sum = x + y;
    int diff = x - y;
    unsigned mult = x * y;
    unsigned res = x % y;
    std::cout << "x + y = " << sum <<std::endl;
    std::cout << "x - y = " << diff << std::endl;
    std::cout << "x * y = " << mult << std::endl;
    std::cout << "x % y = " << sum << std::endl;
    return 0;
}
