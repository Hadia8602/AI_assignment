//14.	Write a program to convert millimeters into inches and print the result on screen. (Hint: 1 inch = 25.4 mm)
#include<iostream>
#include<string>
using namespace std;
float mm_in(float n)
{
    float inch= n/25.4;
    return inch;
}
int main()
{
    float n, Inch;
    cout<<"enter the value in mm"<<endl;
    cin>>n;
    Inch= mm_in(n);
    cout<<"the value in inches is"<< Inch <<endl;
    return 0;
}