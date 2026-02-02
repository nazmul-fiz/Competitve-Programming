#include<iostream>
#include<string.h>
using namespace std;

class tutorial{
    
    //int id; // if i want to take string and number at the same time.
    // use the string instead of int. 
    string name, program, id;

    public:
    void input(){
        cout<<"Enter your name = ";
        getline(cin, name);

        cout<<"Enter your program = ";
        getline(cin, program);

        cout<<"Enter your id = ";
        getline(cin, id);
        //getline id; // if you string use getline to take input
    }
    
    friend int display(tutorial displayObj);
};

int display(tutorial displayObj){
    cout<<"My name is "<<displayObj.name;
    cout<<"\nMy Program = "<<displayObj.program;
    cout<<"\nand my id = "<<displayObj.id;
}
int main(){
    tutorial tutorialObj;
    tutorialObj.input();

    display(tutorialObj);

    return 0;
}