#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << "S = " << s;
    return 0;
}
