#include<iostream>
#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	Time(int hour, int minute, int sec)
		:hour(hour), minute(minute), sec(sec) {}
	void gettime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	int t1hour, t1minute, t1sec;
	cin >> t1hour >> t1minute >> t1sec;
	Time t1(t1hour, t1minute, t1sec);//定义t1为Time类对象
	t1.gettime();
	return 0;
}
