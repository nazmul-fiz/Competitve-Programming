/* Excersice 2. Create a class called card that maintains a library card catalog entry. Have the class
store a book’s title, author, and number of copies on hand. Store the title and author
as strings and the number on hand as an integer. Use a public member function called
store() to store a book’s information and a public member function called show() to
display the information. Include a short main() function to demonstrate the class.
*/

#include<iostream>
#define Nazmul_Code  int main()
using namespace std;

class card{
  string title, author;
  int have_amount;
  
  public:
  
  void store(string t, string au, int n)
  {
    title = t;
    author = au;
    have_amount = n;
  }
  
  void show()
  {
    cout<<"Book Title: "<<title<<endl;
    cout<<"Author is: "<<author<<endl;
    cout<<"Available Ammount: "<<have_amount<<endl;
    
  }
};

Nazmul_Code
{
  card obj1;
  
  obj1.store("OOPs in C++", "Ravikant", 12);
  
  obj1.show();
  
  
  return 0;
  
}