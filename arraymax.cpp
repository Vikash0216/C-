#include<iostream>
using namespace std;

int main(){
    int a[6] = {10,75,65,88,0,-90};
    int max = a[0];

    for (int i = 1; i < 6; i++)
    {
       if (a[i]>max)
       {
        max = a[i];
       }
       
    }
    std::cout<<"The largest number in the array is: "<<max;
    return 0;
}