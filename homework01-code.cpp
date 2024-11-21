#include<iostream>
using namespace std;
//text01
int main()
{
    int i = 1;
    cout << ++i << endl;
    cout << "Welcome to C++" << endl;
    return 0;
}
//end of text01

//text02
#define pi 3.14
int main()
{
    int r;//半径
    int h;//高
    cout << "请输入圆锥的半径和高：" << endl;
    cin >> r >> h;
    cout << "圆锥的面积为：" << (pi * r * r* h)/3 << endl;
    cin.get();
}
//end of text02

//text05
int main()
{
	std::cout << "请输入华氏温度：" << std::endl;
	double  T = 0;
	std::cin >> T;
	double T1 = (T - 32) * 5 / 9;
	
	std::cout << "摄氏温度为：" << T1  << std::endl;
}
//end of text05

//实验二

//text01
int main() {
    char ch;
    cout << "请输入一个字符：";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << char(ch - 32);
    }
    else {
        cout << int(ch + 1);
    }
    return 0;
}
//end of text01

//text02
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
//end of text02

//text03
int main() {
    double a, b, c;
    cout << "请输入三角形的三条边：";
    cin >> a >> b >> c;

    // 判断能否构成三角形
    if (a + b > c && a + c > b && b + c > a) {
        double perimeter = a + b + c;
        cout << "三角形的周长为：" << perimeter << endl;

        // 判断是否为等腰三角形
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a)) {
            cout << "该三角形是等腰三角形。" << endl;
        }
        else {
            cout << "该三角形不是等腰三角形。" << endl;
        }
    }
    else {
        cout << "这三条边不能构成三角形。" << endl;
    }

    return 0;
}
//end of text03

//text04
#include <limits>
#include <cctype>

int main() {
    double num1, num2;
    char op;
    bool inputValid = false;

    while (!inputValid) {
        std::cout << "请输入第一个数字：";
        if (!(std::cin >> num1)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "输入错误，请重新输入。" << std::endl;
        }
        else {
            inputValid = true;
        }
    }

    inputValid = false;
    while (!inputValid) {
        std::cout << "请输入运算符（+、-、*、/、%）：";
        std::cin >> op;
        if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%') {
            std::cout << "非法运算符，请重新输入。" << std::endl;
        }
        else {
            inputValid = true;
        }
    }

    inputValid = false;
    while (!inputValid) {
        std::cout << "请输入第二个数字：";
        if (!(std::cin >> num2)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "输入错误，请重新输入。" << std::endl;
        }
        else if (op == '/' && num2 == 0) {
            std::cout << "除数不能为 0，请重新输入。" << std::endl;
        }
        else if (op == '%' && (num2 == 0 || static_cast<int>(num2) * static_cast<int>(num1) != num2 * num1)) {
            std::cout << "对于取余运算，除数不能为 0 且参与运算的数必须为整数，请重新输入。" << std::endl;
        }
        else {
            inputValid = true;
        }
    }

    double result;
    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '%':
        result = static_cast<int>(num1) % static_cast<int>(num2);
        break;
    }

    std::cout << "结果为：" << result << std::endl;

    return 0;
}
//end of text04

//text05
#include <cctype>
using namespace std;

int main() {
    char str[1000];
    cout << "请输入一行字符：";
    cin.getline(str, 1000);

    int letterCount = 0;
    int spaceCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            letterCount++;
        }
        else if (isspace(str[i])) {
            spaceCount++;
        }
        else if (isdigit(str[i])) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "英文字母个数：" << letterCount << endl;
    cout << "空格个数：" << spaceCount << endl;
    cout << "数字字符个数：" << digitCount << endl;
    cout << "其它字符个数：" << otherCount << endl;

    return 0;
}
//end of text05

//text06
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
//end of text06

//text07
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
//end of text07

//text08
#include <cmath>
using namespace std;

int main() {
    double a;
    cout << "请输入一个数：";
    cin >> a;

    double x = a;
    while (true) {
        double nextX = 0.5 * (x + a / x);
        if (fabs(nextX - x) < 1e-6) {
            break;
        }
        x = nextX;
    }

    cout << "输入数 " << a << " 的平方根是：" << x << endl;
    cin.get();
    cin.get();

}
//end of text08

//text09
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
//end of text09


