#include <iostream>
using namespace std;
/// Question 3: input a linkedlist and print the reverse linkedlist 
class  Node 
{
  public:
  int val;
  Node *next;
  Node (int val)
  {
    this->val=val;
    this->next= NULL;
    
  }
};
/// Tail 
void insert_tail(Node *&head, int val)
{
  Node *newNode = new Node(val);
  while(head==NULL)
  {
    head= newNode;
   return;
  }
  Node *tmp = head;
  while(tmp->next !=NULL)
  {
    tmp=tmp->next;
  }
  tmp->next = newNode;
}
void reverse(Node *c)
{
  if(c==NULL) return;
  reverse(c->next);
  cout<<c->val<<" ";
}
int main() 
{
    int val;
    Node *head =NULL;
    while(true)
    {
      cin>>val;
      if(val==-1) break;
      insert_tail(head, val);
    }
  cout<<"Printing the Reverse of the Recursive Value: "<<endl;
  reverse(head);
    return 0;
}