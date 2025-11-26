//9.	Write a program to find the maximum number from four numbers.
#include<iostream>
#include<string>
using namespace std;
int maximum(int a, int b, int c, int d)
{
    int max;
    if((a>b)&&(a>c)&&(a>d))
    max= a;
    else if((b>a)&&(b>c)&&(b>d))
    max = b;
    else if((c>a)&&(c>b)&&(c>d))
    max = c;
    else
    max=d;
    return max;
}
int main()
{
    int maxi, max, a, b, c, d;
    cout<<"enter the value for a "<<endl;
    cin>>a;
    cout<<"enter the value for b "<<endl;
    cin>>b;
    cout<<"enter the value for c "<<endl;
    cin>>c;
    cout<<"enter the value for d "<<endl;
    cin>>d;
    maxi = maximum(a,b,c,d);
    cout<<"maximum number from all of  them is"<< maxi <<endl;
    return 0;
    
    
    
    
}