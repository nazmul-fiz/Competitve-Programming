#include<bits/stdc++.h>
using namespace std;
class fol
{
  public:
  int count;
  char value;
};
//comparing true false;
bool cmp(fol a, fol b)
{
  if (a.count== b.count){ 
    return a.value < b.value; //value means characters
  }
  else{
    return a.count> b.count; // count means- character quantity
  }
}
int main()
{
  string s;
   cin>>s;
   fol f[26];
   for( int i=0; i<26; i++) // take all character into intiger
   {
     f[i].value = char( i + 'a'); // here we converted intiger into character; and set charater
     f[i].count = 0; // set value;
   }
   for(char c:s) // here we can break down the string into character
   {
     int ascii = int (c - 'a');  // set the ascii value from 0 to 25 by just convert their real asci values
// For example:

// If c = 'a', then 'a' - 'a' = 0.
// If c = 'b', then 'b' - 'a' = 1.
// If c = 'z', then 'z' - 'a' = 25.

     f[ascii].count += 1; // thats take a +1 count everytime;
   }
   sort (f, f+26, cmp); //sort to 26 character;
   for(int i=0; i<26; i++) // start lopp to 26 character
   {
       for(int j=0; j<f[i].count; j++) // start loop to counting 
       {
         cout<<f[i].value; // then we print value
       }
   }
   
   return 0;
}