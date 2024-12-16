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