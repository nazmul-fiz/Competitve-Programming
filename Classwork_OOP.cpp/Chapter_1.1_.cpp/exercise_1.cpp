/* Example 1. Write a program that inputs the number of hours that an employee works and the em-
ployee’s wage. Then display the employee’s gross pay. (Be sure to prompt for input.)*/


#include <iostream>
#define Nazmul_Code      int main()
#define db   double
using namespace std;

Nazmul_Code
{
 db wage, Working_hrs;
 cout<<"Enter the worked hours: "<<endl; cin>>Working_hrs;
 
 cout<<"Enter the Wage per hour: "<<endl; cin>>wage;
 
 db cal= wage*Working_hrs;
 
 cout<<"The employee's Gross pay is = "<<cal<<endl;
return 0;
}