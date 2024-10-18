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
int indInsertion(int arr[], int size, int pos)
{
    if (pos>= size)
    {
        std::cout << "Enter the correct index";
        return -1;
    }
    for (int i = pos ; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    return 1;
}

int main()
{
    int arr[100] = {10, 15, 12, 23};
    int size = 4,  pos = 0, capacity = 100;
    display(arr, size);
    indInsertion(arr, size,  pos);
    size -= 1;
    display(arr,size);
    return 0;
}
