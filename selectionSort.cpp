#include <iostream>
using namespace std;
void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << "\n";
}

void selectionSort(int arr[], int size)
{
    int indexofMin, third;
    // 0, 1, 2, 3, 4, 5, 6
    // 4, 7, -2, 12, 15, 1
    for (int i = 0; i < size - 1; i++)
    {
        // First number will be min number
        indexofMin = i;
        // We will start comparing i with the next all elemnents from i so basically we will start from i+1
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[indexofMin])
            {
                indexofMin=j;
            }
        }
        third = arr[i];
        arr[i] = arr[indexofMin];
        arr[indexofMin] = third;
    }
}

int main()
{
    int arr[] = {4, 7, -2, 12, 15, 1};
    int size = 6;
    displayArray(arr, size);
    selectionSort(arr,size);
    displayArray(arr, size);
    return 0;
}