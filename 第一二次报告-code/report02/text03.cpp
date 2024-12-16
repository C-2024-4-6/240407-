#include<iostream>
using namespace std;
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