//to swap values of two variables using reference arguments in a function
// lab sheet 2a
#include<iostream>
#include<conio.h>

using namespace std;

void swap(int &a,int &b);
int main()
{
    int a = 10, b = 20;
    cout<<"Before swapping values of the variables : "<<endl;
    cout<<"a= "<<a<<"\t"<<"b= "<<b<<endl;
    swap(a,b);
    cout<<"After swapping values of the variables : "<<endl;
    cout<<"a= "<<a<<"\t"<<"b= "<<b<<endl;
    getch ();
    return 0;
}
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
