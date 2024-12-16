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