//8.	Write a program to get temperature in Fahrenheit. Convert the temperature to Celsius degrees by using the formula.
//			C = 5/9(f - 32)
#include<iostream>
#include<string>
using namespace std;
float temperature_in_Celsius(float f)
{
    float C;
    C = (5.0/9.0)*(f - 32);
    return C;
}
int main()
{
    float f;
    float c;
    cout<<"enter the temperature in fahrenheit"<<endl;
    cin>>f;
    c= temperature_in_Celsius(f);
    cout<<"the value of temprature in clesius is"<< c <<endl;
    return 0;
}