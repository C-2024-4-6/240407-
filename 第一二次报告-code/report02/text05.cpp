#include<iostream>
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