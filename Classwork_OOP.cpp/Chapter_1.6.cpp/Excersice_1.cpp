// Example 1: The following program will not compile as a C++ program. Why not?
//  This program has an error because we call function first that doesnt Exist there, and born in later.

#include <iostream>
using namespace std;
int main()
{
    NewFunc();
    return 0;
}
void NewFunc()
{
    cout << " This won ’t work ";
}