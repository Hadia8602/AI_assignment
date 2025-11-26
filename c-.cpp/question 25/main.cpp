//25.	Write a program to input the values of three sides of a triangle and calculate its area using the formula:
// Area = sqrt(s*((s-a)*(s-b)*(s-c)))
// s = (a+b+c)/25
#include<iostream>
#include<cmath>
using namespace std;
float sides(float a, float b, float c)
{
    float s = (a+b+c)/2;
    return s;
}
float area(float S)
{
    float s, a, b, c;
   float A = sqrt(s*((s-a)*(s-b)*(s-c)));
   return A;
}
int main()
{
    float b, c, S, a;
    cout<<"enter the sides of trangle a:"<<endl;
    cin>>a;
    cout<<"enter the sides of trangle b:"<<endl;
    cin>>b;
    cout<<"enter the sides of trangle c:"<<endl;
    cin>>c;
    S= sides(a,b,c);
    a = area(S);
    cout<<"the area of triangle is :\t"<< a << endl;
    return 0;
}