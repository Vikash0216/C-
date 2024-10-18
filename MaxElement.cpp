#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {76,66,55,47,77};
int max;
max = arr[0];
for (int i = 1; i < 5; i++)
{
if (arr[i]>max)
{
max = arr[i];
}
}
 std::cout<<"the max number of the array is"<<max;
return 0;
}


