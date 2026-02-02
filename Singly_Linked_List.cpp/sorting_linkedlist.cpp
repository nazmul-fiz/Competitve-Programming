#include <bits/stdc++.h>
using namespace std;
class node // it is same class node for linked list
{
  public:
  int val;
  node *next;
  node (int val)
  {
    this-> val=val;
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
void print_linked_list(node *head)
{
  cout<<endl;
  cout<<"Your Linked List: ";
  node *tmp = head;
  while(tmp != NULL)
  {
    cout<<tmp->val<<" ";
    tmp = tmp->next;
  }
  cout<<endl<<endl;// faka dekhar jonno
}

int main()
{
  int val;
  node *head = NULL;
  while(true)
  {
    cin>>val;
    if(val==-1) break;
    insert_at_tail(head, val); //loop take in tail and value;
  }

  for(node *i =head; i->next !=NULL; i=i->next)
  {
    for(node *j= i->next; j !=NULL ; j=j->next)
    {
        if(i->val > j->val) /// changing the " <, > " to get the answer
        { 
         swap(i->val, j->val);
        }
    }
  }
   print_linked_list(head);
  return 0;
}