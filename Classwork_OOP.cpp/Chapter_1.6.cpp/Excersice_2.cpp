//Example 2. On your own, try declaring local variables at various points in a C++ program. Try the
// same in a C program, paying attention to which declarations generate errors.


#include <iostream>
using namespace std;

int main()
{
    int num=10;
    cout<<"num = "<<num<<endl;

    int y = 20;  
    cout<<"y = "<<y<<endl;

    for(int i = 0; i < 5; i++) 
    {
        int z= i*2;
        cout<<"z = "<<z<<endl;
    }
    
    return 0;
}

// and i do C code that is wrong //
#include <stdio.h>

int main()
{
    int num = 10;
    printf("num = %d\n", num);

    int y = 20;
    printf("y = %d\n", y);

    return 0;
}