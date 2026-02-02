#include<bits/stdc++.h>
using namespace std;
class boba
{
    public:
    string name;
    int age, marks1, marks2;
    boba( string nm, int ag, int m1,int m2)
    {
        name =nm;
        age=ag;
        marks1=m1;
        marks2= m2;
    }
    void fun()
    {
        cout<<name<<" "<<age<< endl;
    }
    int fun2()
    {
        return marks1+marks2;
    }
};
int main()
{
    boba mister("Rakib khan", 22, 95,65);
    cout<<mister.fun2()<<endl;

    return 0;
}