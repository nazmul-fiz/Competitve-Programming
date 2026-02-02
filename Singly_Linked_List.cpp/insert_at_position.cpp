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
// tail insertation Function
void insert_at_tail(node *&head, int v) // give the head pointer reference to change in main 
{
  node *newNode = new node(v);
  if (head ==NULL)
  {
    head = newNode;
    cout<<"Inserted at Head"<<endl;
    return ;
  }
  
  node *tmp = head;
  while(tmp->next !=NULL)
  {
    tmp= tmp->next;
  }
  // tmp ekon last node ekon
  tmp->next = newNode;
  cout<<endl<<"Inserted at Tail"<<endl; // sundor dekhar jonno
}
// linked list printing Function
void print_linked_list(node *head)
{
  cout<<endl; // faka dekhar jonno
  cout<<"Your Linked List: ";
  node *tmp = head;
  while(tmp != NULL)
  {
    cout<<tmp->val<<" ";
    tmp = tmp->next;
  }
  cout<<endl;// faka dekhar jonno
}
//position er Function;
void insert_at_posi(node *head, int pos, int v) // kontay ki recive hobe 
{
    node *newNode = new node(v);
    node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp =tmp->next;
    }
    newNode->next= tmp->next;
    tmp->next = newNode;
    cout<<endl<<"Inserted at position "<< pos<<endl<<endl; // using the endls to look good
}
int main() 
{
   node *head = NULL; //initailly a node head dhore nei NULL
   while(true)
   // here we chose option and to continue the loop to Insert linked list
   {
    cout <<"Option 1: Insert a Tail: "<< endl;
    cout <<"Option 2: Print Linked List: "<< endl;
    cout <<"Option 3: Insert At Position: "<< endl;
    cout <<"Option 4: I want to Off: "<< endl;
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
     int pos, v;
     cout<<"Enter Position:" ;
     cin>>pos;
     cout<<"Enter value: ";
     cin>>v;
     insert_at_posi(head, pos, v);
   }
   else if ( op==4)
   {
     break;
   }
   }
    return 0;
}