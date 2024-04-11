// Ques : Write a C++ program to input any character and check whether it is the alphabet, 
//        digit or special character.
#include<iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter character: ";
    cin>>x;
    
    int y = x;

    if(y>=48 && y<58)
    {
        cout<<" Digit";
    }
    else if(y>=65 && y<123)
    {
        cout<<" Alphabet";
    }
    else
    {
        cout<<" Special Character";
    }
}
