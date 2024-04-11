// Ques : Given a point (x, y), 
//        write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0). 
#include<iostream>
using namespace std;
int main()
{
    int p1 ;
    cout<<"Enter x cordinate: ";
    cin>>p1;
    int p2 ;
    cout<<"Enter y cordinate: ";
    cin>>p2;

    if(p1==0 && p2!=0)
    {
        cout<<"Y axis";
    }
    else if(p2==0 && p1!=0)
    {
        cout<<"X axis";
    }
    else if(p1==0 && p2==0)
    {
        cout<<"Origin";
    }
    else
    {
        cout<<"Somewhere on the graph";
    }

}