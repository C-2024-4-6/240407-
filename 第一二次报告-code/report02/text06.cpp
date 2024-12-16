#include<iostream>
#include<algorithm>
int main()
{
	int a, b;
	std::cout << "请输入两个数字：" << std::endl;
	std::cin >> a >> b;
	int c = std::max(a, b);
	int d = 1;
	while (true)
	{
		c++;
		if (c % a == 0 && c % b == 0)
		{
			break;
		}
	}
	while (true)
	{
		d++;
		if (a % d == 0 && b % d == 0)
		{
			break;
		}
	}
	std::cout << "两个数的最大公因数与最小公倍数分别为：" << d << " 和 " << c << std::endl;

}