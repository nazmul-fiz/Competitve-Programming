#include <iostream> 
#define Nazmul_code  int main()
using namespace std; 

class MyClass 
{ 
    int data; 

public: 

    void SetA(int d) 
    {
      data = d; 
      
    } 

    int GetA() 
    { 
      return data;
      } 

void showAns() 
{ 
  cout << "The Data is = " << data << endl;
  } 

}; 

Nazmul_code 
{ 

    MyClass obj1; 

    obj1.SetA(50); 

    obj1.showAns(); 

 

    cout << "value is : " << obj1.GetA() << endl; 

    return 0; 

} 