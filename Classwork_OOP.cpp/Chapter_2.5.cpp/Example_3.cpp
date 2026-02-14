#include <iostream> 
using namespace std; 
 
struct StrType { 
    string str; 
    StrType(const string& s)
    { 
        str = s; 
        cout << "Constructor called: " << str << endl; 
    } 
    ~StrType() 
    { 
        cout << "Destructor called: " << str << endl; 
    } 
    void showAns()
    { 
        cout << "String says: " << str << endl; 
    } 
};

int main()
{ 
    StrType obj1("Hellow "); 
    obj1.showAns(); 
    
    StrType obj2("Programmers"); 
    obj2.showAns(); 
 
    return 0; 
} 

 