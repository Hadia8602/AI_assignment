//23.	Write a program to input the radius of a circle and calculate area & circumstance of the circle.
//          AREA = pi*r*radius
//          CIRCUMFERENCE = 2*pi*radius
#include<iostream>
#include<string>
using namespace std;
const float pi=3.1417;
float area(float r)
{
    float A = pi*r*r;
    return A;
}
float circumference(float r)
{
    float C = 2*pi*r;
    return C;
}
int main()
{
    float r, a, c;
    cout<<"enter the radius of a circle "<< endl;
    cin>>r;
    a= area(r);
    c= circumference(r);
    cout<<"AREA: \t" << a << "\nCIRCUMFERENCE:\t"<< c <<endl;
    return 0;
}
