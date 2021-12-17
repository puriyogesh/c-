#include<iostream>

using namespace  std;
int main()
{
    int n;
    cin>>n;

int i;
    for(i=2;i<=n;i++){
if(n%i==0){
        cout<<"this is  not prime number"<<endl;
        break;
    }
    
else{
        cout<<"this is prime numbers "<<endl;
}
    cout<<"this is prime numbers "<<endl;
    return 0;
    
}