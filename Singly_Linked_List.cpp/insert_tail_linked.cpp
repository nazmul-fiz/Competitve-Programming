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
//
void insert_at_tail(node *&head, int v) // give the head pointer reference to change in main 
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
  // tmp ekon last node ekon
  tmp->next = newNode;
}
void print_linked_list(node *head)
{
  node *tmp = head;
  while(tmp != NULL)
  {
    cout<<tmp->val<<endl;
    tmp = tmp->next;
  }
}
int main() 
{
   node *head = NULL; //initailly a node head dhore nei NULL
   while(true)
   // here we chose option and to continue the loop to Insert linked list
   {
    cout <<"Option 1: Insert a Tail: "<< endl;
    cout <<"Option 2: Print Linked List: "<< endl;
    cout <<"Option 3: I want to Off: "<< endl;
    int op;
    cin>>op;
    if (op==1)
    {
      int v;
      cin>>v;
      insert_at_tail(head, v);
    }
   else if(op==2)
   {
      print_linked_list(head);
   }
   else if ( op==3)
   {
     break;
   }
   }
    return 0;
}