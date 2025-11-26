//13.	Write a program using define directive to find the area of a circle. The formula to find the area ofa circle is:
// AREA = pi*r*r       pi = 3.1417
#include<iostream>
#include<string>
using namespace std;
const float pi = 3.1417;
float Area(float r)
{
    float area= pi*r*r;
    return area;
}
int main()
{
    float A, r;
    r= 3.19;
    A= Area(r);
    cout<<"the area of circle is " << A << endl;
    return 0;
}