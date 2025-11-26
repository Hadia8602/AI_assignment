//3.	Write a program to assign two variables by assignment statement. Interchange the values and print the result on the screen.
#include<iostream>
#include<string>
     void interchange(int& a, int&b )
    {
      int temp=a;
      a=b;
      b=temp;
    }
    int main()
{
    int a, b;
    a=10;
    b=30;
    std::cout<<"the value of a before interchange"<< a <<std::endl;
    std::cout<<"the value of b before interchange"<< b <<std::endl;
    interchange(a,b);
    std::cout<<"the value of a after interchange"<< a <<std::endl;
    std::cout<<"the value of b after interchange"<< b <<std::endl;
    return 0;
}