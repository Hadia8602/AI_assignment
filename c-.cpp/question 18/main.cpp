//18.	Write a program to assign values to variables 'vi' and 't' an compute the value of 's' by using the formula:
//       S= vi*t* (1/2)*a*t*t
#include<iostream>
#include<string>
using namespace std;
float distance(float vi, float t, float a)
{
    float S = (vi*t)+(0.5*a*t*t);
    return S;
}
int main()
{
    float vi, t, a, s;
    vi = 32,0;
    t =25.0;
    a =9.8;
    s=distance(vi, t, a);
    cout<<" the value of distance is \t"<< s << endl;
    return 0;
}