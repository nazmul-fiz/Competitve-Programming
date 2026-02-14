#include <iostream> 
using namespace std; 
 
class myclass { 
    int n1; 
public: 
    myclass(int num) 
    { 
        n1 = num; 
    } 
    void show()
    { 
        cout<<"Value of number1: " << n1 << endl; 
    } 
}; 

int main()
{ 
    myclass obj(10); 
    myclass *m; 
 
 // we can show this using it  //
    m = &obj; 
    m->show();           
 
    return 0; 
} 