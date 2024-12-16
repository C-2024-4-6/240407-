#include<iostream>

class cuboid
{
private:
	double length, width, height;
public:
	cuboid(double len, double wid, double hei)
		:length(len), width(wid), height(hei) {}
	double getvolume()
	{
		return length * width * height;
	}
};

int main()
{
	cuboid cube1(1, 1, 1);
	cuboid cube2(2, 3, 4);
	cuboid cube3(5, 7, 9);
	std::cout << "cube1'volume:" << cube1.getvolume() << std::endl << "cube2'volume:" << cube2.getvolume() << std::endl << "cube3'volume:" << cube3.getvolume() << std::endl;
}