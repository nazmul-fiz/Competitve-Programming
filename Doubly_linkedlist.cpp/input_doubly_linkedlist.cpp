#include <iostream>
using namespace std;
class node{
  public:
  int val;
  node *next;
  node *prev;
  node(int val)
  {
    this->val=val;
    this->next = NULL;
    this->prev = NULL;
  }
};
void insert_tail(node *&head, node *&tail, int val)
{
  node *newNode = new node(val);
  if(tail==NULL)
  {
    head = newNode;
    tail = newNode;
    return ;
  }
  tail->next= newNode;
  newNode->prev= tail;
  tail = newNode;
}
void print_list(node *head)
{
  while(head == NULL)
  {
    return;
  }
  node *tmp = head;
  
  while(tmp !=NULL )
  {
    cout<<tmp->val<<" ";
    tmp= tmp->next;
  }
  
}
void print_reverse(node *tail)
{
  node *tmp =tail;
  while(tmp !=NULL)
  {
    cout<<tmp->val<<" ";
    tmp=tmp->prev;
    
  }
}
int main() 
{
    node *head = NULL;
    node *tail = NULL;
    
    int val;
    while(true) {
      cin>>val;
      if(val==-1) break;
      insert_tail(head, tail, val);
    }
    
    print_list(head);
    cout<<endl;
    print_reverse(tail);
    
    return 0;
}