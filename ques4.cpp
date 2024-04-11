// Ques : Given the length and breadth of a rectangle, 
//        write a program to find whether numerically the area of the rectangle is greater than its perimeter
#include<iostream>
using namespace std;
int main()
{
    int l = 4;
    int b = 2; 
    int area = l*b;
    int peri = 2*(l+b);
    if(area<peri)
    {
        cout<<"perimeter is greater";
    }
    else if(area>peri)
    {
        cout<<"area is greater";
    }
    else
    {
        cout<<"Equal";
    }
}