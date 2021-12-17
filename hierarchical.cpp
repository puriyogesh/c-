#include<iostream>
using namespace std;
class employee
{
    int eid;
    int salary;
public:
    void setempdata(int e,int sal)
    {
        cout<<"enter employee id : "<<endl;
        cin>>eid;
        cout<<"enter salary : "<<endl;
        cin>>salary;
        }
        void displayemp()
        {
            cout<<"employee id : "<<endl;
            cout<<"employee salary : "<<endl;
        }
};
class engineer:public employee
{
    string dept;
public:
    void setengdata()
    {
        cout<<"enter dept : "<<endl;
        cin>>dept;

    }
    void displayeng()
    {
        cout<<"department is : "<<dept<<endl;
        }
    };
    class secretary:public employee
    {
        int ts;
    public:
        void setsec(int s)
        {
        ts=s;
        }
        void displaysec()
        {
            cout<<"typing speed is : "<<ts<<endl;
        }
        };
        int main()
        {
            engineer e;
            int id,s;
            cout<<"enter employee id,salary : "<<endl;
            cin>>id>>s;
            e.setempdata(id,s);
            e.setengdata();
            e.displayemp();
            e.displayeng();

            secretary sobj;
            int t;
            cout<<"enter id and salary : "<<endl;
            cin>>id>>s;
            cout<<"enter typing speed : "<<endl;
            cin>>t;
            sobj.setempdata(id,s);
            sobj.setsec(t);
            sobj.displayemp();
            sobj.displaysec();
            return 0;
            }
