#include<iostream>
using namespace std;

int main()
{
    int a[5]={2,3,4,5,6};
    int product=1;
    for (int i = 0; i < 5; i++)
    {
    product = product*a[i];
    }
    std:: cout<<"the product of thr array is : "<<product;
    return 0;
}
    
