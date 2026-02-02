#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // using the vector modifiers: list in the google.
    vector<int> v={1, 2, 3, 4, 5};
    // vector<int> v2={11, 22, 33, 44, 55};
    
    // v.insert(v.begin()+2, v2.begin(),v2.end());     //insert the v2 in the middle of v
    
    v.erase(v.begin()+3);   // delete the vector using erase and then access in pointer using
    //begin 
    for(int x: v)
    {
      cout << x<< endl;
    }
    
    
    return 0;
}