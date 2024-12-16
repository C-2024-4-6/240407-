#include<iostream>
#define pi 3.14
using namespace std;
int main()
{
    int r;//半径
    int h;//高
    cout << "请输入圆锥的半径和高：" << endl;
    cin >> r >> h;
    cout << "圆锥的面积为：" << (pi * r * r* h)/3 << endl;
    cin.get();
}