#include <iostream> 
#define Nazmul_Code  int main()
#include <cstring> 
using namespace std; 

class strtype
{ 
    char str[20]; 
public: 
    strtype(char *s) 
    { 
        strcpy(str, s); 
    } 
    void ShowThis()
     { 
        cout<<str<< endl; 
    } 
}; 

Nazmul_Code { 
    strtype obj1("Hello"); 
    strtype obj2("Good"); 
    obj1.ShowThis(); 
    obj2.ShowThis(); 
    return 0; 
} 