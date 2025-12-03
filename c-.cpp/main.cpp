//24.	Write a program to input marks of five subjects of a student. Calculate the Total and Average marks. (Each subject has weight of 100 marks).
#include<iostream>
#include<string>
using namespace std;
float total(float a, float b, float c, float d, float e)
{
	float tot= a+b+c+d+e;
	return tot;
}
float average(float T)
{
	float avg= T/5;
	return avg;
}
int main()
{
	float a, b, c, d, e, T, A;
	cout<<"enter the marks of subject 1 (out of 100)" << endl;
	cin>>a;
	cout<<"enter the marks of subject 2 (out of 100)" << endl;
	cin>>b;
	cout<<"enter the marks of subject 3 (out of 100)" << endl;
	cin>>c;
	cout<<"enter the marks of subject 4 (out of 100)" << endl;
	cin>>d;
	cout<<"enter the marks of subject 5 (out of 100)" << endl;
	cin>>e;
	T = total(a,b,c,d,e);
	A = average(T);
	cout<<"total \t" << T << "\naverage\t"<< A << endl;
	return 0;
}