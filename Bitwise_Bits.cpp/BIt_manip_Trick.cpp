 
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
// Trick 1: 

    int n=6;
    cout<< (n>>1)<<endl;  // Nth number diveide by 2

    cout<<(n<<1)<<endl;  // Nth number multiply by 2
     
cout<<endl;
  //Trick 2: 
 // OTher Binary Search Operation //
    // (hi +lo) /2 ---> instead -->  (hi+lo) >>1
// -------------------------------------------------//

// Trick 3: String and Characters //
// Uppercase to Lowercase  //
char B = 'B';
char b= B | ' ';     // desire character ke OR korle space er sathe lowercase hye jay
cout<<b<<endl;

// Lowercase to Uppercase  //
char d = 'd';
char D = (d & '_');    // charecter ke AND korle underscore er sathe Uppercase hye Jay  /
cout<<D<<endl;
cout<<endl;
// -------------------------------------------//


// Trick 4: 
cout<<"The LSB Work Here: ";
Printing_Binary(59);

// Play with LSB- Lowest significant bit 
int a= 59;
int i= 4; //ith tomo porjonto
int lsb= (a & (~((1<<(i+1)) -1 )));   // ith bit er LSB unset kore disi //
// kaj-- 59 er binary number i th porjonto er ager bit gula unset korsi.(sob clear korsi)
Printing_Binary(lsb);
cout<<endl;

// ----------------------------------------------//


// Trick 5:
// check a number is power of 2 or not 
int n= 15;
if(n &(n-1))
{
    cout<<"Not power of 2"<<endl;
}
else{
    cout<<"Power of 2"<<endl;
}
 

}