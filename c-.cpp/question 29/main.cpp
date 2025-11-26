//29.	Write a program to print a message if the value of variable "n" is greater than 100, otherwise ignore the statement.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value for n" << endl;
    cin>>n;
    if (n > 100){
      cout<<"the "<< n << "is greater than 100" << endl;
    }
    return 0;
}