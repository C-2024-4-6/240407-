#include<iostream>

class Point
{
private:
	int x, y;
public:
	Point(int x, int y)
		: x(x), y(y) {};
	void setPoint(int i, int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		std::cout << "x:" << x << std::endl << "y:" << y << std::endl;
	}
};

int main()
{
	Point point(60, 80);
	point.setPoint(50, 50);
	point.display();
}s