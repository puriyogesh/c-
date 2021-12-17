#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cout<<"enter two numbers"<<endl;
   cin>>a>>b;
   char op;
   cout<<"enter an operator"<<endl;
   cin>>op;

   switch(op)
   {
     case 'a':
     cout<<a+b<<endl;
     break;
     case 'b':
     cout<<a-b<<endl;
     break;
default:
cout<<"sorry i am lazy"<<endl;

}
return 0;
}