//16.	Write a program to assign a value 3 to "int" type variables a, b and c using multiple assignment statement. Calculate the product of these numbers
#include<iostream>
#include<string>
using namespace std;
int product(int a, int b, int c)
{
    int z = a*b*c;
    return z;
}
int main()
{
    int a, b, c, p;
    a=b=c=3;
    p= product(a,b,c);
    cout<<"the product of "<< a << "and" << b << "and"<< c <<"is"<< p <<endl;
    return 0;
}