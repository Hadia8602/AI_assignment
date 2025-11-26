//17.	Write a program to separate the integral and fractional parts of a 15.58971 real number and print the result on screen.
#include<iostream>
#include<string>
using namespace std;
float fraction(float num, float real)
{
    float fraction = num - real;
    return fraction;
}
int main()
{
    float num = 15.8971;
    float real = 15;
    float F = fraction(num,real);
    cout<<"the real part of "<< num <<"is"<< real <<"and fractional part is"<< F << endl;
    return 0;
}