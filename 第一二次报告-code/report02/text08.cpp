#include<iostream>
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