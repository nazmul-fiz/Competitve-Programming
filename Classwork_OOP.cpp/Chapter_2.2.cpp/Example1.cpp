#include <iostream> 
using namespace std; 

 
class myclass 
{ 
    int n1; 
    int n2; 
   public : 
       myclass (int pi, int qi)
       { 
       n1 = pi; 
       n2 = qi; 
   } 
    void show () 
   { 
       cout<<n1<< "  " << n2 << endl; 
   } 
}; 
 
int main () 
{ 
    myclass myobj (1, 3); 
    myobj.show (); 
    return 0; 
} 