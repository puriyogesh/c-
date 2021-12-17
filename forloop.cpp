#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;                         //sum ko value zero nai mention garnu parxa
    cout<<"enter n number "<<endl;
    cin>>n;
    
    for(int yofesh =0;yofesh<=n;yofesh++) //initialisation;condition;update
    {
        sum=sum+yofesh;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}