//27.	Write a program to input time in hours, minutes and seconds. Convert time into seconds and print the result on screen.
#include<iostream>
#include<string>
using namespace std;
int conversion(int h,  int min, int sec)
{
    int  S = (h*3600) + (min*60) + sec;
    return S;
}
int main()
{
  int h, min, sec, Sec;
  cout<<"enter the time in hours " << endl;
  cin>>h;
  cout<<" enter the time in minutes" << endl;
  cin>>min;
  cout<<"enter the time in second"<< endl;
  cin>>sec;
  Sec = conversion(h, min, sec);
  cout<<"time in second =" << Sec << endl;
  return 0;
}
