//4.	Write a program to assign the numeric value to a variable year. Calculate the number of months, and print on the screen.
#include<iostream>
#include<string>
using namespace std;
  int numberofmonths(int years)
  {
     int months=years*12;
      return months;
  }
  int main()
  {
      int years =3;
      int months =numberofmonths(years);
      cout<<"the number of months are"<< months << endl;
      return 0;
  }
