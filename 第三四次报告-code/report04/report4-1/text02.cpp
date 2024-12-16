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