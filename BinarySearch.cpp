#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int ele)
{

    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low<=high)
    {
        mid = (high + low) / 2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        if (arr[mid] < ele)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {5, 7, 9, 10, 18, 35};
    int size = 6;
    int ele = 60;
    int searchIndex = BinarySearch(arr, size, ele);
std:
    cout << searchIndex;
    return 0;
}