#include <iostream>
#include <cstring>
using namespace std;

class strtype 
{
    char *p;   
    int len;
    
public:
  
    strtype(int size) 
    {
        cout << "Constructor called in upperside "<<endl;
        p= new char[size];  
        len= 0;              
        p[0]= '\0';         
    }

    ~strtype()
    {
        cout <<"Destructor called in Upperside"<<endl;
        delete[] p;
    }

    void set(const char *s) 
    {
        strcpy(p, s);
        len = strlen(s);
    }

    void show() 
    {
        cout<<"The main String: " <<p<<endl;
        cout<<"Length of it- : " <<len <<endl;
    }
};

int main()
{
    strtype ob1(30), ob2(20);
    

    ob1.set("This is OPPs course in C++");
    ob2.set("The Formula of this Book");
    
    ob1.show();
    ob2.show();
    

    return 0;
}
