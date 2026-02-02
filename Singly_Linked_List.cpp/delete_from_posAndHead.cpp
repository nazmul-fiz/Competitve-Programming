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
        if(tmp==NULL) //tmp mane tmp r next jodi khali thake,
    {
      cout<<endl<<"Invalid position"<<endl;
      return;
    }
    }
    newNode->next= tmp->next;
    tmp->next = newNode;
    cout<<endl<<"Inserted at position "<< pos<<endl<<endl; // using the endls to look good
}
void insert_at_head(node *&head, int v)
{
    node *newNode = new node(v);
    newNode->next= head;
    head = newNode;
    cout<<endl<<"inserted at Head"<<endl;
}
void delete_at_position(node *head, int pos)
{
    node *tmp = head;
    for(int i=1; i<=pos-1; i++)
    {
        tmp = tmp->next;
    }
     node *deletenode = tmp->next;
        tmp->next= tmp->next->next;
        delete deletenode;
        cout<<"deleted Position: "<<pos<<endl;
}
void delete_head(node *&head)
{
  node *deleteNode = head;
  head=head->next;
  delete deleteNode;
  cout<<endl<<"deleted Head"<<endl;
}
int main() 
{
   node *head = NULL; //initailly a node head dhore nei NULL
   while(true)
   // here we chose option and to continue the loop to Insert linked list
   {
    cout <<"Option 1: Insert a Tail: "<< endl;   //error handled
    cout <<"Option 2: Print Linked List: "<< endl; //error handled
    cout <<"Option 3: Insert At Position: "<< endl; //error handled
    cout <<"Option 4: Insert At Head: "<< endl;
    cout <<"Option 5: Delete from position: "<< endl;
    cout <<"Option 6: Delete Head: "<< endl;
    cout <<"Option 7: I want to Off: "<< endl;
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
     if (pos==0) // this means if we input 0 it can insert the value in Head
     {
        insert_at_head(head, v);
     }
     else // otherwise its do the position work
     {
        insert_at_posi(head, pos, v);
     }
   }
   else if ( op==4) // this is option 4, its gonna do the dedicatedly for 
   {
     int v;
     cout<<"Enter Value:" ;
     cin>>v;
     insert_at_head(head, v);
   }
   else if ( op==5)
   {
     int pos;
     cout<<"Enter the Position: ";
     cin>>pos;
     if(pos==0)
     {
      delete_head(head);
     }
     else{
     delete_at_position(head, pos);
     }
   }
   else if ( op==6)
   {
     delete_head(head);
   }
   else if ( op==7)
   {
     break;
   }
   }
    return 0;
}