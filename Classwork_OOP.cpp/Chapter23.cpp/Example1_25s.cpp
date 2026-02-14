#include <iostream> 
using namespace std; 
 
struct Student
{ 
    int id; 
    char grade; 
     
    Student(int IDs, char Grd) 
    { 
        id = IDs; 
        grade = Grd; 
    } 
     
    void showAns() 
    { 
        cout<<"ID: "<<id<<endl; 
        cout<<"Grade: "<<grade<<endl; 
    } 
}; 
int main() 
{ 
    Student obj1(101, 'A'); 
    obj1.showAns(); 
    
    
    return 0; 
} 