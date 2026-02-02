#include <iostream>
using namespace std;
// Dynamic array input ; When we create function and take array in function and return to main
//--function; that case we use dynamic array.
int *fun()
{
  int *a= new int [5];
  for(int i=0; i<5;i++)
  {
    cin>> a[i];
  }
  return a;
}
int main() 
{
    int *a= fun();
    for(int i=0; i<5;i++)
    {
      cout<< a[i]<< " ";
    }
    return 0;
}
// #include <iostream>
// using namespace std;

// int main() 
// {
//     int n;
//     cin>> n;
//     int *a= new int [n];
//     for(int i=0;i<n; i++)
//     {
//       cin>> a[i];
//     }
//     for(int i=0; i<n; i++)
//     {
//       cout<< a[i]<< endl;
//     }
//     return 0;
// }