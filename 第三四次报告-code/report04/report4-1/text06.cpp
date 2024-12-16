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