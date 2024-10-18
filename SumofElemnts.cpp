#include<iostream>
using namespace std;

int main(){
   int a[6] = {74,90,73,84,92,86};
   int sum = 0;
   for (int i = 0; i < 6; i++)
   {
    sum = sum + a[i];
   }
   std::cout<<"The sum of the array is: "<<sum<<endl;
   return 0;
}
