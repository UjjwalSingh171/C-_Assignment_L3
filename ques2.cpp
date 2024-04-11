// Ques : Given the radius of the circle predict whether 
//        numerically area of this circle is larger than the circumference or not.
#include<iostream>
using namespace std;
int main()
{
    int radius = 10;
    float area = 3.14*radius*radius;
    float circumference = 2*3.14*radius;
    if(area>circumference)
    {
        cout<<"area is greater";
    }
    else if(area<circumference)
    {
        cout<<"circum is greater";
    }
    else{
        cout<<"Both equal";
    }
}