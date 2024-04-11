//Ques : Write a program to input sides of 
//       a triangle and check whether a triangle is equilateral, scalene or isosceles triangle.
#include<iostream>
using namespace std;
int main()
{
    int s1 ;
    cout<<"Enter side 1: ";
    cin>>s1;
    int s2 ;
    cout<<"Enter side 2: ";
    cin>>s2;
    int s3 ;
    cout<<"Enter side 3: ";
    cin>>s3;
    
    if(s1==s2 && s2==s3)
    {
        cout<<"Equilateral";
    }
    else if(s1!=s2 && s2!=s3)
    {
        if(s1!=s3)
        {
            cout<<"Isosceles";
        }
        else 
        {
            cout<<"Scalene";
        }
    }
    else
    {
        cout<<"Scalene";
    }
}