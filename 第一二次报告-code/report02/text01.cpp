#include<iostream>
using namespace std;
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