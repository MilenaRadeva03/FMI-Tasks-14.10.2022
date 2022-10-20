#include <iostream>

int main()
{
	int a, b;
	std::cout << "a = ";
	std::cin >> a;
	std::cout << "b = ";
	std::cin >> b;
	int max = (a > b) ? a : b;
	std::cout << "max = " << max;
	return 0;
}
