#include<iostream>

using namespace std;

int area1(int x ,int y){
    int z = (x*x) + (y*y) + 2*(x+y);
    return z;
}

int main(){
    int a= 5;
    int b= 10;
    int c= area1(a,b);
    std::cout<<"The area is : "<<c<<endl;

    int a1= 55;
    int b1= 10;
    int c1= area1(a1,b1);

    std::cout<<"The area is : "<<c1<<endl;
    int a2= 12;
    int b2= 8;
    int c2= area1(a2,b2);
    std::cout<<"The area is : "<<c2;

}

