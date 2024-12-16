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