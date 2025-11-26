//15.	Write a program to interchange values of two variables.
#include<iostream>
#include<string>
using namespace std;
void change(int &a, int &b)
{
    int temp;
    temp =a;
    a= b;
    b= temp;
}
int main()
{
    int a= 10;
    int b = 20;
    cout<<"the value of a and b before interchange is a:"<< a << "and b :"<< b <<endl;
    change(a,b);
    cout<<"the value of a and b after interchange is a:"<< a << "and b :"<< b <<endl;
    return 0;
}