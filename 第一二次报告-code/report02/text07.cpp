#include<iostream>
int main()
{
	int n = 0;
	while (n <= 5)
	{
		n++;
		for (int i = 1; i < n; i++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;

	}
}