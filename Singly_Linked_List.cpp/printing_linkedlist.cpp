#include <iostream>
using namespace std;
class node{
  public:
  int val;
  node *next;
  
  node(int val)
  {
    this->val= val;
    this->next = NULL;
  }
};
int main() 
{
    node *head= new node(10);
    node *a= new node(20);
    node *b= new node(30);
    node *c= new node(40);
    node *d= new node(50);
    
    // connect the linked list that way;
    head->next =a;
    a->next= b;
    b->next= c;
    c->next= d;
    
    // // printing way but we don't use that way------ Manual way
    // cout <<head->val<<endl;
    // cout <<head->next->val<<endl;
    // cout <<head->next->next->val<<endl;
    
    node *temp = head; // to savezone head that we don't lose head
    while (temp !=NULL) // loop till finding the null means last node
    {
        cout<<temp->val<<endl;
        temp = temp->next; 
    }
    
    return 0;
}