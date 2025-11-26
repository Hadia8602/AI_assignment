//6.	Write a program to get age (in years) of a person. Calculate the age in months and print the age in months.
#include<iostream>
#include<string>
using namespace std;
int calculateMonths(int years)
{
    int months = years*12;
    return months;
}
int main()
{
    int years, months, numberOfMonths;
    cout<<"enter your age in years"<<endl;
    cin>>years;
    numberOfMonths=calculateMonths(years);
    cout<<"the number of months :"<<numberOfMonths<<endl;
    return 0;
}