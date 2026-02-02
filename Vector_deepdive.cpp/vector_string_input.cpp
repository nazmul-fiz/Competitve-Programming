#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   cin>>n;
   cin.ignore(); // use when the string sentence are there
   vector<string> v(n);
   for(int i=0; i<n; i++)
   {
    // cin>> v[i];   use this when single string are there
     getline(cin, v[i]);
   }
   
   for( string val :v){
     cout <<val<<endl;
   }
    return 0;
}