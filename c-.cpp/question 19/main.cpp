//19.	Write a program to assign your age in a variable and find the age in months and days.
#include<iostream>
#include<string>
using namespace std;
int age_months(int year)
{
    int months = year * 12;
    return months;
}
int age_days(int year)
{
    int days = year * 365;
    return days;
}
int main()
{
  int year = 6;
  int M = age_months(year);
  int D = age_days(year);
  cout<<"your age in months is "<< M << endl;
  cout<<"your age in days is "<< D << endl;
  return 0;
}