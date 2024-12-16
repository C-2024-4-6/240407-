#include<iostream>

int main()
{
	double allcost = 0;
	double price = 0.8;
	int nums = 2;
	int days = 0;
	while (nums < 100)
	{
		allcost += nums * price;
		nums = nums * 2;
		days++;
	}
	std::cout << "平均每天花费了：" << allcost / days << std::endl;
return 0;
}