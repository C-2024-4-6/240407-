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