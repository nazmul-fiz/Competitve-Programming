// Example 2. Here is another example of function overloading. In this case, the function date() is
//  overloaded to accept the date either as a string or as three integers. In both cases, the
//  function displays the data passed to it.

#include <iostream>
#define Nazmul_Code int main()

using namespace std;
// if we declare recieving work first then do the rest , it will work

void date(char *date);
void date(int mon, int d, int yr);

Nazmul_Code
{
    date(" 8/23/99 ");
    date(8, 23, 99);
    return 0;
}

void date(char *date)
{
    cout << " Date : " << date << "\n";
}
// Integer Inut for the Date  //
void date(int mon, int d, int yr)
{
    cout << " Date : " << mon << "/";
    cout << d << "/" << yr << "\n";
}