#include <iostream> 
using namespace std; 
class MathCal { 
  
  
public: 
    bool divisibility_Chck(int a, int b)
    { 
        if (b == 0) { 
            cout << "Division by zero is not allowed!" << endl; 
            return false; 
        } 
        return (a % b == 0); 
    } 
}; 
int main() { 
    MathCal obj; 

 
    int n1 = 20, n2 = 5; 
    int n3 = 15, n4 = 4; 
 
    if(obj.divisibility_Chck(n1, n2)) 
        {cout << n1 << " is divisible by " << n2 << endl;} 
    else 
       { cout << n1 << " is not divisible by " << n2 << endl;  }
     
    if(obj.divisibility_Chck(n3, n4)) 
       { cout << n3 << " is divisible by " << n4 << endl;  }
       
    else 
     {   cout << n3 << " is not divisible by " << n4 << endl; }
     
 
    return 0; 
} 