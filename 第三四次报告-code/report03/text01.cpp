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