//30.	Write a program to test whether a given integer is odd or even using simple 'if' structure.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    if (n%2==0)
    {
        cout<<"the " << n << " is even integer"<<endl;
    }
    else
    {
    cout<<"the " << n << " is odd integer"<<endl;    
    }
    return 0;
}