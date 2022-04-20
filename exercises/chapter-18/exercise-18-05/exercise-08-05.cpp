#include <iostream>

int main()
{
    int arr[] = {3, 20, 8, 15, 10};
    size_t arrSize = sizeof(arr) / sizeof(int);
    for (int i = 0; i < arrSize; i++)
    {
        std::cout << "arr[" << i << "] = " << arr[i] << '\n';
    }
}
