//25.	Write a program to input the values of three sides of a triangle and calculate its area using the formula:
// Area = sqrt(s*((s-a)*(s-b)*(s-c)))
// s = (a+b+c)/2
#include<iostream>
#include<cmath>
using namespace std;
float sides(float a, float b, float c)
{
    float s = (a+b+c)/2;
    return s;
}
float area(float s, float a, float b, float c)
{
    
   float A = sqrt(s*((s-a)*(s-b)*(s-c)));
   return A;
}
int main()
{
    float a, b, c, s, Area;
    cout<<"enter the sides of trangle a:"<<endl;
    cin>>a;
    cout<<"enter the sides of trangle b:"<<endl;
    cin>>b;
    cout<<"enter the sides of trangle c:"<<endl;
    cin>>c;
    s= sides(a,b,c);
    Area = area(s, a, b, c);
    cout<<"the area of triangle is :\t"<< Area << endl;
    return 0;
}