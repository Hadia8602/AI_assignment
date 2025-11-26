//11.	Write a program to declare and initialize two variables of "int" type. Calculate the average of these values and print the result on screen.
#include<iostream>
#include<string>
using namespace std;
float total(float a, float b)
{
    float T = a+b;
    return T;
}
float avg(float t)
{
    float A = t/2;
    return A;
}
int main ()
{
    float a, b, t, av;
    a= 3.0;
    b=5.0;
    t = total(a,b);
    av = avg(t);
    cout<<" TOTAL :"<< t <<endl;
    cout<<"AVERAGE :"<< av <<endl;
    return 0;
}