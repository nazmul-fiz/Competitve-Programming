#include <iostream> 
using namespace std; 
 
union Data 
{ 
    double num; 
    char ch[sizeof(double)]; 
}; 

void show_bits(unsigned char x)
{ 
    for (int i = 8; i >= 0; i--) 
    { 
        cout<<((x >> i) & 1);   
    } 
} 
int main() 
{ 
    Data obj1; 
    obj1.num = 421.521; 
 
    for(int i = sizeof(double) - 1; i >= 1; i--) 
    { 
        cout<< "Bit pattern in byte is: - " << i << ": "; 
        
        show_bits(obj1.ch[i]); 
        
  
        cout << endl; 
    } 
    return 0; 
} 