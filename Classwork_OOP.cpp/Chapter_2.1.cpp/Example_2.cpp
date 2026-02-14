#include <iostream>
#include <ctime>
using namespace std;

class timer {
    clock_t start;

public:
   timer() 
{
    start = clock();
}

~timer() 
{
    clock_t end;
    end = clock();
    
    cout << "Elapsed time: "<<(double)(end-start) / CLOCKS_PER_SEC<< " seconds" << endl;
}

};



int main() 
{
    timer ob; 

    char c;
    cout<< "Enter your Input  ";
    cin>>c;

    return 0; 
}
