#include <bits/stdc++.h>
using namespace std;
// use the stringstream;
void fun(stringstream &ss)
{
  string word;
  if (ss>>word)
  {
    // cout<<word<<endl;  // this will print the sentence by per word
    fun(ss);
    cout<<word<<endl;
  }
}
int main() 
{
    string s;
    getline (cin, s);
    stringstream ss(s);
    fun(ss);
    return 0;
}