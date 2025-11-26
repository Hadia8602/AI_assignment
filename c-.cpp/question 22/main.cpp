//22.	Write a program to input the name, age, height and gender of the student and prints the data of student on screen.
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name, gender;
    int age;
    float height;
    cout<<" Enter the name of student" << endl;
    cin>>name;
    cout<<" Enter the age of student" << endl;
    cin>>age;
    cout<<" Enter the height of student" << endl;
    cin>>height;
    cout<<" Enter the gender of student" << endl;
    cin>>gender;
    cout<<"name:\t"<< name <<"\n age:\t"<< age <<"\n gender:\t"<< gender <<"\n height:\t"<< height << endl;
    return 0;
}