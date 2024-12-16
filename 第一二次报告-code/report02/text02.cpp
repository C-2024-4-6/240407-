#include<iostream>
using namespace std;
int main()
{
	double x;
	while (true)
	{
		std::cout << "please input a number:" << std::endl;
		std::cin >> x;
		if (0 < x < 1)
		{
			std::cout << "y = " << 3 - 2 * x << std::endl;
		}
		else if (1 <= x < 5)
		{
			std::cout << "y = " << 2 / (4 * x) + 1 << std::endl;
		}
		else if (5 <= x <= 10)
		{
			std::cout << "y =  " << x * x << std::endl;
		}
	}

}