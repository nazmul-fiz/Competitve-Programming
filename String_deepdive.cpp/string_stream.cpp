#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int cnt=0; // jodi count dekhte chai koyta word ase
    while(ss >> word)   // printing the whole sentence;
    {
      cout<<word<<endl;
    //   cnt++;
    }
    // cout<<cnt<<endl;
  
    //[ ss>>word;
    // cout<<word<<endl;     // step by step printing process
    // ss>>word;
    // cout<<word<<endl; ]

    
    return 0;
}