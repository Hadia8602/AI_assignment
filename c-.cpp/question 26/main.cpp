//26.	Write a program to convert 12000 rupees into dollars (1 dollar = Rs. 60)
#include<iostream>
#include<string>
using namespace std;
float conversion(float RS)
{
    float con = 60.0;
    float dollars = RS/con;
    return dollars;
}
int main()
{
    float RS = 12000;
    float Dollars = conversion(RS);
    cout<<"Dollars =\t"<< Dollars << endl;
    return 0;
}