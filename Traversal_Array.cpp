// #include<iostream>

// using namespace std;

// int main() {
//  int arr[5] = {10,15,7,14,12};
//  for (int i = 0; i < 5; i++)
//  {
//     std::cout<<arr[i] << "  ";
//  }
//  return 0 ;
// }


// #include<iostream>

// using namespace std;

// int main() {
//  int arr[5] = {18,15,7,14,12};
//  int sum = 0;
//  for (int i = 0; i < 5; i++)
//  {
//    sum += arr[i];
//  }
// std::cout<<"The sum of the array is :"<< sum ;
//  return 0 ;
// }

#include<iostream>

using namespace std;

int main() {
 int arr[5] = {18,15,7,20,12};
 int max = arr[0];
 for (int i = 1; i < 5; i++)
 {
   if (arr[i] > max){
    max = arr[i];
   }
 }
std::cout<<"The max of the array is :"<< max ;
 return 0 ;
}
