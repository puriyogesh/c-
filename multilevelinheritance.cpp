//multilevel inheritance
#include<iostream>
using namespace std;
class students
{
    int rollno;
    string name;
public:
    void setstd()
    {
        cout<<"Enter the roll no and name : "<<endl;
        cin>>rollno>>name;
    }
    void displaystd()
    {
        cout<<"The roll no is : "<<rollno<<endl;
        cout<<"Name is : "<<name<<endl;
    }

};
class marks:public students
{
protected:
    int s1,s2,s3;
public:
    void setsub()
    {
        cout<<"Enter the marks of three subjects : "<<endl;
        cin>>s1>>s2>>s3;
    }
    void displaysub()
    {
        cout<<"Marks of three subject are : "<<endl;
        cout<<s1<<"\t"<<s2<<"\t"<<s3<<endl;
    }
};
class result:public marks
{
private:
    int total,percentage;
public:
    void calculate()
    {
        total=s1+s2+s3;
        percentage=total/3;
    }
    void displaycalculate()
    {
        cout<<"Total marks is : "<<total<<endl;
        cout<<"Percentage is : "<<percentage<<endl;
    }
};
int main()
{
    result r;
    r.setstd();
    r.setsub();
    r.displaystd();
    r.displaysub();
    r.calculate();
    r.displaycalculate();

    return 0;
}
