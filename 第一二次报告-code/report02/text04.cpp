#include<iostream>
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