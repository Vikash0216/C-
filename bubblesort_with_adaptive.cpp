#include<iostream>
using namespace std;

void displayArray(int arr[] , int n){
    for (int i = 0; i < n; i++)
    {
        std:cout<<arr[i] << "  ";
    }
    cout<<endl;
}

void bubbleSort(int arr[] , int n){
    int temp;
    int swap = 0;
    for (int i = 0; i < n-1; i++)
    {
        swap =1;
        cout<<"The num of passes are "<<i+1<<endl;
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 0;
            }
        } 
        if (swap)
        {
           return; 
        }
        
    } 
}

int main(){
    // int arr[]= {10,8,6,12,2,0,-2};
    int arr[]= {10,25,12,22,25,30,35};
    int n = 7;
    displayArray(arr,n);
    bubbleSort(arr, n);
    displayArray(arr,n);
    return 0;
}