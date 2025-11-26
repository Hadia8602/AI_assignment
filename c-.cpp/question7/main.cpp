//7.	Write a program to get the Roll No. of a student and marks obtained in three subject Programming Fundamentals, Introduction to Computing and Computer Graphics. Calculate the Total and Average. Each subject has a maximum of 100 marks.
#include<iostream>
#include<string>
using namespace std;
float total_marks(float a,float  b,float c)
{
    float z = a+b+c;
    return z;
}
float average_time(float z)
{
       float d=z/3.0;
    return d;
}
int main()
{
    int roll_num;
    float a, b, c, Total;
    float Avg, z;
    cout<<"enter your roll number:"<<endl;
    cin>>roll_num;
    cout<<"enter your marks in programming fundamental (out of 100):"<<endl;
    cin>>a;
    cout<<"enter your marks in Introduction to computer (out of 100):"<<endl;
     cin>>b;
    cout<<"enter your marks in Introduction to computer graphic (out of 100):"<<endl;
     cin>>c;
    Total =total_marks(a,b,c);
    Avg = average_time(Total);
    cout<<"Total marks are"<< Total << endl;
    cout<<"average is"<< Avg << endl;
    return 0;
}