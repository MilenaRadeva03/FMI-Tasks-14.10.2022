#include <iostream>

int main()
{
	char chr1;
	std::cin >> chr1;
	if (chr1 >= 'a' && chr1 <= 'z')
	{
		std::cout << "It is a small letter." << std::endl;
	}
	else if (chr1 >= 'A' && chr1 <= 'Z')
	{
		std::cout << "It is a capital letter." << std::endl;
	}
	else if (chr1 >= '0' && chr1 <= '9')
	{
		std::cout << "It is a number." << std::endl;
	}
	else
	{
		std::cout << "It is other type of character." << std::endl;
	}
	return 0;

}
