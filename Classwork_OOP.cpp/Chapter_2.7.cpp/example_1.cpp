#include <iostream> 
#define Nazmul_code  int main()
using namespace std; 

 

class myclass 
{ 
    int value; 

public: 

    myclass(int v) 
    { 

        value = v; 

        cout << "Constructor called, value of this= " << value << endl; 

    } 

    ~myclass() { 
        cout << "Destructor called, value if this = " << value << endl; 
    } 
    void ShowAns()
    { 

        cout << "Real Value is " << value << endl; 

    } 

}; 

Nazmul_code { 

    myclass obj1(10); 

    obj1.ShowAns(); 

    myclass obj2(25); 
    obj2.ShowAns(); 

    return 0; 
} 