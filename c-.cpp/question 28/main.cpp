//28.	Write a program to input values into variables a, b and c. Compute the value of 'disc' by using formula:
//disc = b2 - 4ac
#include<iostream>
#include<string>
using namespace std;
int Disc(int a, int b, int c)
{
    int disc = (b*b) - 4*a*c;
    return disc;
}
int main()
{
    int a, b, c, D;
    cout<<"enter the value of a" << endl;
    cin>>a;
    cout<<"enter the value of b" << endl;
    cin>>b;
    cout<<"enter the value of c" << endl;
    cin>>c;
    D = Disc(a,b,c);
    cout<<" the value of disc is \t"<< D << endl;
    return 0;
}
