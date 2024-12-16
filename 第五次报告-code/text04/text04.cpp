#include<iostream>
#include<vector>
class Student
{
public:
	int nums;
	int score;
};

void max(std::vector<Student> all)
{
	int res = 0;
	int nums = 0;
	for(int i = 0;i < all.size();i++)
	{
		if (all[i].score > res)
		{
			res = all[i].score;
			nums = all[i].nums;
		}
	}
	std::cout << nums;
}
int main()
{
	std::vector<Student> all(5);
	for (int i = 0; i < 5; i++)
	{
		all[i].nums = i + 1;
		std::cin >> all[i].score;
	}
	max(all);
}