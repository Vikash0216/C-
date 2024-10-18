#include <iostream>

using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << "  ";
    }
    std::cout << "\n";
}
int indInsertion(int arr[], int size, int capacity, int ele, int pos)
{
    if (size >= capacity)
    {
        std::cout << "The array is full";
        return -1;
    }
    for (int i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = ele;
    return 1;
}

int main()
{
    int arr[100] = {10, 15, 12, 23};
    int size = 4, ele = 22, pos = 3, capacity = 100;
    display(arr, size);
    indInsertion(arr, size, capacity, ele, pos);
    size += 1;
    display(arr,size);
    return 0;
}
