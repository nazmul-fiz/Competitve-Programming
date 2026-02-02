             /**************************************************************************************
            *                                                                                     *
            |                                 Nazmul_Fiz                                          |
            *                                 Date: 8/ 12/ 25                                *
            |                 Topic/ Approach: Bit wise Problem.
            **************************************************************************************/ /*
                             Building Instinct to Sort the Life out                             */
 
 
#include<bits/stdc++.h>
#define checkmate  return 0;
using namespace std;
//..........................................Let's Start with the Grace of Almighty.......................................

void Printing_Binary(int num)
{
    for(int i=10; i>=0; --i)
    {
        cout<<((num >> i) & 1);
    }
    cout<<endl;
}


int main()
{
  Printing_Binary(9);
  //----------------------//

  // n ith bit set or Not Check ; //
  int a= 12;
  int i=0;
  if((a & (1<<i )) != 0)
  {
    cout<<"bit is SET";
  }
  else{
    cout<<"Bit is Not SET";
  }
  cout<<endl;

// Making the Bit -Set  selectively  //
Printing_Binary( a | (1<<1));  // 1th bit becomes set

// Making the a th bit UnSet  // using And . 

Printing_Binary( a &(~(1 << 3 )) );

// Toggle a Bit // Flipping the bit in the Place //
 Printing_Binary(a ^ (1 <<2));  // the 2nd bit flipped
 Printing_Binary(a ^ (1<<3));  // the 3rd bit flipped

 ///Bit Counting, how many are set// 
 int cnt=0;
for(int i=31; i>=0; --i)
{
   if(( a & (1<<i)) !=0)
   { 
    cnt++; 
   }
}
cout<<cnt<<endl;

// other is Build in function like __builtin_popcount(a)//

cout<< __builtin_popcount(a)<<endl;    // this is For Integer 

cout<< __builtin_popcountll((1LL <<35)-1); // Which is long long 




  checkmate
}