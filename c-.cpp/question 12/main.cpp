//question 12 write a program to find the volume of cylinder by using const qualifier the formula to find the volume of cylinder is 
//                   volume = pi *r*r*h
// value of pi = 3.1417
#include<iostream>
#include<string>
using namespace std;
float volume(float r, float h, float pi)
{
    float v= pi*r*r*h;
    return v;
}
int main()
{
    float r, h, pi, V;
    r= 3.45;
    h= 1.59;
    pi = 3.1417;
    V = volume(r,h,pi);
    cout<<"the volume of a cylinder is"<< V <<endl;
    return 0;
}