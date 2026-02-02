#include <bits/stdc++.h>
using namespace std;

int main() 
{
//   list<int>popi;
//   list<int>list2 ={1, 2, 3, 4, 5};
//   list<int>popi(10, 5);  /// First is size and then Value   ///
//   list<int>popi (list2);   // Ek list e arekta ke call   //
//   //
   
   vector<int>v={21, 22, 23, 24} ;
   //
   int a[5]={1, 2, 3, 4, 5};
  // list<int>myList (a, a+n);   // array list kora, suru theke sesh    //
   
   list<int>myList(v.begin(), v.end() );  // vector er khetre, but v. diye access kora jabe na //
  follow down
  for(int val : myList)
  {
    cout<<val <<endl;
  }
   
    return 0;
}