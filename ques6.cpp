//Ques : If the marks of A, B and C are input through the keyboard, 
//       write a program to determine the student scoring least marks
#include<iostream>
using namespace std;
int main()
{
    int s1 ;
    cout<<"Enter student 1 marks: ";
    cin>>s1;
    int s2 ;
    cout<<"Enter student 2 marks: ";
    cin>>s2;
    int s3 ;
    cout<<"Enter student 3 marks: ";
    cin>>s3;
    
    if(s1<s2 && s1<s3)
    {
        cout<<"student 1";
    }
    else if(s2<s1 && s2<s3)
    {
        cout<<"student 2";
    }
    else 
    {
        cout<<"studnet 3";
    }
}