    #include <iostream>
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