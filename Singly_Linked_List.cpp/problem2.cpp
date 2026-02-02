#include <iostream>
using namespace std;
/// Question: Take two singly linked lists as input and check if their sizes are same or not. Print Yes/NO//
class node 
{
  public:
  int val;
  node *next;
  
  node(int val)
  {
    this->val=val;
    this->next= NULL;
  }
};
void insert_at_tail(node *&head, int v) 
{
  node *newNode = new node(v);
  if (head ==NULL)
  {
    head = newNode;
    return ;
  }
  node *tmp = head;
  while(tmp->next !=NULL)
  {
    tmp= tmp->next;
  }
  tmp->next = newNode;
}
int size(node *head)
{
  int count =0;
  node *tmp =head;
  while(tmp !=NULL)
  {
    count++;
    tmp=tmp->next;
  }
  return count;
}
void insert_lists(node *&head)
{
  int val;
  cout<<"Value: ";
  while(true)
  {
    cin>>val;
    if(val==-1) break;
    
    insert_at_tail(head, val);
  }
  
}
int main() 
{
    node *list1 = NULL;
    node *list2 = NULL;
    
    
    cout<<"insert The first list: ";
    insert_lists(list1);
    cout<<endl;
    
    cout<<"Enter The second list: ";
    insert_lists(list2);
    
    if( size(list1) == size(list2) )
    {
      cout<<" YES ";
    }
    else{
      cout<<"NO";
    }
    
    return 0;
}