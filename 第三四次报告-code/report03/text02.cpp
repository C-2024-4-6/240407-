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