#include<iostream>
using namespace std;
int main()
{
	std::cout << "请输入华氏温度：" << std::endl;
	double  T = 0;
	std::cin >> T;
	double T1 = (T - 32) * 5 / 9;
	
	std::cout << "摄氏温度为：" << T1  << std::endl;
}