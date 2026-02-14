/* Excersice 2. Create a class called card that maintains a library card catalog entry. Have the class
store a book’s title, author, and number of copies on hand. Store the title and author
as strings and the number on hand as an integer. Use a public member function called
store() to store a book’s information and a public member function called show() to
display the information. Include a short main() function to demonstrate the class.
*/

#include<iostream>
#define Nazmul_Code  int main()
using namespace std;

class Queue{
  
  static const int size=100;
  int a[size];
  int front, Rear, cnt;
  
  
  public:
  
  Queue()
  {
    front= 0;
    Rear= -1;
    cnt= 0;
    
  }
  
  void inserting(int n)
  {
    if(cnt==size)
    {
      cout<<"This is full"<<endl;
      return;
    }
    
    Rear= (Rear+1) % size;
    a[Rear]= n;
    cnt++;
  }
  
  int Pull_out()
  {
    if(cnt==0)
    {
      cout<<"This is Empty"<<endl;
      return -1;
    }
    int n= a[front];
    front= (front+1)%size;
    cnt--;
    return n;
  }
  
  void Answer()
  {
    if(cnt==0)
    {
      cout<<"This is Empty()"<<endl;
      return ;
      
    }
    cout<<"The Queue is ";
    
    for(int i=0; i<cnt; i++)
    {
      cout<<a[(front+i)%size]<<" ";
    }
    
    cout<<endl;
  }
  
 
};

Nazmul_Code
{
  Queue Q;
  
  Q.inserting(10);
  Q.inserting(40);
  Q.inserting(60);
  
  Q.Answer();
  
  cout<<"Remove this "<<Q.Pull_out()<<endl;
  
  Q.Answer();
  
  
  return 0;
  
}