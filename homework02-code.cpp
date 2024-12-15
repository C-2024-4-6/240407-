//text3-1
    #include<iostream>

    int solve(int& a, int& b)
    {
        int ans =std::min(a,b);
        while (ans >= 1)
        {
            if (ans == 1)
            {
                return ans;
            }
            else if (a % ans == 0 && b % ans == 0)
            {
                return ans;
            }
            else
            {
                ans--;
            }
        }
    }
    struct res
    {
        int x, y;
    };
    std::ostream& operator<<(std::ostream& stream, res res)
    {
        stream << res.x  << "  ,  " << res.y;
        return stream;
    }
    res solvep (int& a, int& b)
    {
        res res;
        res.x = solve(a, b);
        int temp = std::max(a, b);
        while (true)
        {
            if (temp % a == 0 && temp % b == 0)
            {
                break;
            }
            else
            {
                temp++;
            }
        }
        res.y = temp;
        return res;
    }

    int main()
    {
        int m, n;
        std::cout << "请输入两个数：" << std::endl;
        std::cin >> m >> n;
        std::cout << "它们的最大公约数是：" << solve(m, n) << std::endl;
        std::cout << "测试二：" << std::endl;
        std::cout << "请输入两个数:" << std::endl;
        std::cin >> m >> n;
        std::cout << "它们的最大公约数和最小公倍数分别是" << solvep(m, n) << std::endl;
    }
//the end of text3-1

//text3-2
    #include<iostream>

    bool is_prime(int& num)
    {
        int times = 0;
        if (num == 1 || num == 2)
        {
            return true;
        }
        else
        {
            for (int i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    times++;
                }
            }
            if (times == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    int main()
    {
        int times = 0;
        for (int i = 2; i <= 200; i++)
        {
            bool res = is_prime(i);
            if (res)
            {
                std::cout << i << " ";
                times++;
            }
            if (times == 10)
            {
                std::cout << "\n";
                times = 0;
            }
        }


    }
//the end of text3-2

//text3-3
    //mytemperature.h
    #ifndef MYTEMPERATURE_H
    #define MYTEMPERATURE_H

    double celsius_to_fah(double cel);
    double fahrenheit_to_cels(double fah);
    #endif
    //end
    // mytemperature.cpp
    #include"text3-3_mytemperature.h"

    double celsius_to_fah(double cel)
    {
        return cel * 1.8 + 32;
    }
    double fahrenheit_to_cels(double fah)
    {
        return (fah - 32) / 1.8;
    }
    //end
    //main.cpp
    #include<iostream>
    #include"text3-3_mytemperature.h"

    int main()
    {
        std::cout << "Celsius	Fahrenheit | Fahrenheit    Celsius" << std::endl;
        std::cout << "40.0    " << celsius_to_fah(40.0) << "    |    " << " 120.0    " << fahrenheit_to_cels(120.0) << std::endl;
        std::cout << "39.0    " << celsius_to_fah(39.0) << "    |    " << " 110.0    " << fahrenheit_to_cels(110.0) << std::endl;
        std::cout << ".....    " << "....." << "|    " << " .....    " << "....." << std::endl;
        std::cout << "31.0    " << celsius_to_fah(31.0) << "    |    " << " 30.0    " << fahrenheit_to_cels(30.0) << std::endl;

    }
    //end
//the end of text3-3

//text3-5
    #include<iostream>

    int func(int& nums)
    {
        return (nums + 1) * 2;
    }

    int main()
    {
        int ans = 0;
        int temp = 1;
        for (int i = 1; i < 10; i++)
        {
            temp = func(temp);
        }
        ans = temp;
        std::cout << "一共摘了：" << ans << "个桃子。" << std::endl;

    }
//the end of text3-5

//text4-1-1
    #include<iostream>
    #include<vector>
    int main()
    {
        int arr[10];
        std::vector<int> all(10);
        std::cout << "Enter ten numbers: ";
        for (int i = 0; i < 10; i++)
        {
            std::cin >> arr[i];
        }
        std::cout << "The distinct numbers are: ";
        for (int i = 0; i < 10; i++)
        {
            
            if (std::find(all.begin(), all.end(), arr[i]) != all.end())
            {
                continue;
            }
            else
            {
                all.push_back(arr[i]);
        
                std::cout << arr[i] << " ";
            }
        }

    }
//the end od text4-1-1

//text4-1-2
    #include<iostream>

    void swap(double& a, double& b)
    {
        double temp;
        temp = a;
        a = b;
        b = temp;
    }

    int main()
    {
        std::cout << "please input ten numbers:" << std::endl;
        double arr[10];
        for (int i = 0; i < 10; i++)
        {
            std::cin >> arr[i];
        }
        bool changed = true;
        do
        {
            changed = false;
            for (int j = 0; j < 9; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    changed = true;
                }
            }
        } while (changed);
        for (double values : arr)
        {
            std::cout << values << "  ";
        }
    }
//the end of text4-1-2

//text4-1-3
    #include<iostream>

    int main()
    {
        bool tank[101] = { false };
        for (int i = 1; i <= 100; i++)
        {
            for (int j = i; j <= 100; j += i)
            {
                if (tank[j])
                {
                    tank[j] = false;
                }
                else
                {
                    tank[j] = true;
                }
            }
        }
        for (int i = 1; i <= 100; i++)
        {
            if (tank[i])
            {
                std::cout << i << " ";
            }
        }

    }
//the end od text4-1-3

//text4-1-4
    #include <iostream>

    void merge(const int list1[], int size1, const int list2[], int size2, int list[])
    {
        for (int i = 0; i < size1; i++)
        {
            list[i] = list1[i];
        }
        for (int i = 0; i < size2; i++)
        {
            list[i + size1] = list2[i];
        }
        std::cout << "合并后的数组为：";
        for (int i = 0; i < size1 + size2; i++)
        {
            std::cout << list[i] << " ";
        }
    }

    int main()
    {
        int list1[80];
        int list2[80];
        int listnum1 = sizeof(list1) / sizeof(list1[0]);
        int listnum2 = sizeof(list2) / sizeof(list2[0]);
        std::cout << "Enter list1:";
        std::cin >> listnum1;
        for (int i = 0; i < listnum1; i++)
        {
            std::cin >> list1[i];
        }
        std::cout << "Enter list2:";
        std::cin >> listnum2;
        for (int i = 0; i < listnum2; i++)
        {
            std::cin >> list2[i];
        }
        int list[80];
        merge(list1, listnum1, list2, listnum2, list);

    }
//the end of text4-1-4

//text4-1-5
    #include <iostream>
    #include <cstring>


    int indexOf(const char s1[], const char s2[]) {
        int len1 = strlen(s1);
        int len2 = strlen(s2);

        for (int i = 0; i <= len2 - len1; ++i) {
            int j;
            for (j = 0; j < len1; ++j) {
                if (s2[i + j] != s1[j]) {
                    break;
                }
            }
            if (j == len1) {
                return i;
            }
        }

        return -1;
    }

    int main() {
        const int MAX_LENGTH = 100;
        char s1[MAX_LENGTH];
        char s2[MAX_LENGTH];

        std::cout << "请输入第一个字符串: ";
        std::cin.getline(s1, MAX_LENGTH);

        std::cout << "请输入第二个字符串: ";
        std::cin.getline(s2, MAX_LENGTH);

        int result = indexOf(s1, s2);

        if (result != -1) {
            std::cout << s1 << " 是 " << s2 << " 的子串，下标为: " << result << std::endl;
        }
        else {
            std::cout << s1 << " 不是 " << s2 << " 的子串" << std::endl;
        }

    return 0；
    }
//the end of text4-1-5

//text4-1-6
    #include <iostream>
    #include <cctype>

    void count(const char s[], int counts[]) {
        for (int i = 0; i < 26; ++i) {
            counts[i] = 0;
        }

        int length = strlen(s);
        for (int i = 0; i < length; ++i) {
            char ch = tolower(s[i]);
            if (isalpha(ch)) {
                counts[ch - 'a']++;
            }
        }
    }

    int main() {
        const int MAX_LENGTH = 100;
        char str[MAX_LENGTH];
        int letterCounts[26];

        std::cout << "请输入一个字符串: ";
        std::cin.getline(str, MAX_LENGTH);

        count(str, letterCounts);

        std::cout << "每个字母出现的次数如下:\n";
        for (int i = 0; i < 26; ++i) {
            if (letterCounts[i] != 0) {
                char ch = 'a' + i;
                std::cout << ch << ": " << letterCounts[i] << " times\n";
            }
        }

        return 0;
    }
//the end of text4-1-6

//text4-2-1
    #include <iostream>
    #include <cstring>


    int indexOf(const char s1[], const char s2[]) {
        int len1 = strlen(s1);
        int len2 = strlen(s2);

        for (int i = 0; i <= len2 - len1; ++i) {
            int j;
            for (j = 0; j < len1; ++j) {
                if (s2[i + j] != s1[j]) {
                    break;
                }
            }
            if (j == len1) {
                return i;
            }
        }

        return -1;
    }

    int main() {
        const int MAX_LENGTH = 100;
        char s1[MAX_LENGTH];
        char s2[MAX_LENGTH];

        std::cout << "请输入第一个字符串: ";
        std::cin.getline(s1, MAX_LENGTH);

        std::cout << "请输入第二个字符串: ";
        std::cin.getline(s2, MAX_LENGTH);

        int result = indexOf(s1, s2);

        if (result != -1) {
            std::cout << s1 << " 是 " << s2 << " 的子串，下标为: " << result << std::endl;
        }
        else {
            std::cout << s1 << " 不是 " << s2 << " 的子串" << std::endl;
        }

    return 0；
    }
//the end of text4-2-1

//text4-2-2
.#include <iostream>
    #include <cstring>
    #include <cctype>

    int parseHex(const char* const hexString) {
        int decimalValue = 0;
        int length = strlen(hexString);
        int base = 1;

        for (int i = length - 1; i >= 0; i--) {
            if (isdigit(hexString[i])) {
                decimalValue += (hexString[i] - '0') * base;
            }
            else if (isupper(hexString[i])) {
                decimalValue += (hexString[i] - 'A' + 10) * base;
            }
            else if (islower(hexString[i])) {
                decimalValue += (hexString[i] - 'a' + 10) * base;
            }
            base *= 16;
        }

        return decimalValue;
    }

    int main() {
        const char* hexNumber = "A5";
        int decimalResult = parseHex(hexNumber);

        std::cout << "十六进制数 " << hexNumber << " 转换后的十进制数为: " << decimalResult << std::endl;

        return 0;
    }
//the end of text4-2-2

//text4-2-3
    #include <iostream>
    using namespace std;
    void sortArray(int* arr, int size);

    int main() {
        int size;
        cout << "请输入数组元素个数：";
        cin >> size;

        int* arr = new int[size];

        cout << "请依次输入数组元素：" << endl;
        for (int i = 0; i < size; ++i) {
            cin >> arr[i];
        }

    
        sortArray(arr, size);

        
        cout << "排序后的数组元素为：" << endl;
        for (int i = 0; i < size; ++i) {
            cout << *(arr + i) << " ";
        }
        cout << endl;

    
        delete[] arr;

        return 0;
    }

    void sortArray(int* arr, int size) {
        for (int i = 0; i < size - 1; ++i) {
            for (int j = 0; j < size - i - 1; ++j) {
                if (*(arr + j) > *(arr + j + 1)) {
                    
                    int temp = *(arr + j);
                    *(arr + j) = *(arr + j + 1);
                    *(arr + j + 1) = temp;
                }
            }
        }
//the end of text4-2-3


