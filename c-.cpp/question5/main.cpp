//5.	Write a program to get two numbers. Calculate the sum and product of the numbers and then print the result on the screen.
#include<iostream>
#include<string>
using namespace std;
int product(int a, int b)
{
    int z= a*b;
    return z;
}
int addition(int a,int b)
{
    int c= a+b;
    return c;
}
int main()
{
    int a, b;
    int Product, sum;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
     cin>>b;
     sum= addition(a,b);
     cout<<"the sum of "<< a <<"and"<< b << "is"<< sum <<endl;
     Product=product(a,b);
     cout<<"the product of "<< a <<"and"<< b << "is"<< Product <<endl;
     
}