#include<iostream>
using namespace std;
int main(){
    int t;
    cout<<"enter t"<<endl;
    cin>>t;
    for(int i=1;i<=t;i++){
        for(int j=1;j<=t;j++){
             if(j<=t-i) 
             {cout<<" ";
             }
             else{
                 cout<<"*";
             }
        }
        
        cout<<endl;
    }
    return 0;
}