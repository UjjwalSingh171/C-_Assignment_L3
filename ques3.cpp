// Ques : Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. 
//        (Considering leap year occurs after every 4 years)
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year: ";
    cin>>year;

    if(year%400 == 0)
    {
        cout<<"Leap Year";
    }
    else if(year%100 == 0 && year%400 != 0)
    {
        cout<<"Not Leap Year";
    }
    else if(year%100 != 0 && year%4 == 0)
    {
        cout<<"Leap Year";
    }
    else
    {
        cout<<"Not Leap Year";
    }
    
}