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