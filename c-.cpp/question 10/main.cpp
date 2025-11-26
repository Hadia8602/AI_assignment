//10.	Write a program to convert 2.5 miles into kilometers and print the result on screen. (Hint: 1 mile = 1.609 kilometers)
#include<iostream>
#include<string>
using namespace std;
float into_km(float m)
{
    float kilo_m =m*1.609;
    return kilo_m;
}
int main()
{
    float km, m;
    m = 2.5;
    km = into_km(m);
    cout<<"the value in kilometers is"<< km <<endl;
    return 0;
}