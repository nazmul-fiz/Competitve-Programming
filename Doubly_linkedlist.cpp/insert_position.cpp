#include <iostream>
using namespace std;
class node 
{
  public:
  int val;
  node *next;
  node *prev;
  node(int val)
  {
    this->val=val;
    this->next= NULL;
    this->prev=NULL;
  }
};
void print_soja(node *head)
{
 //eita error samlanor jonno, jodio eikhane kaj nei,
  while(head==NULL)
  {                        ///// ei mark kora
    return;
  }
  ///////
  node *tmp = head;
  while(tmp !=NULL)
  {
    cout<<tmp->val<<" ";
    tmp=tmp->next;
  }
}
void print_reverse(node *tail) /// this is what doubly do. 
{
  node *tmp = tail;
  while(tmp !=NULL)
  {
    cout<<tmp->val<<" ";
    tmp= tmp->prev;
  }
}
void insert_position(node *head, int val, int pos)
{
  node *newNode = new node(val);
  node *tmp = head;
  for(int i=1; i<=pos-1; i++)
  {
    tmp = tmp->next;
  }
  /// connection for the insert positions; ////
  newNode->next= tmp->next;      //100->30
  tmp->next = newNode;           // 20 -> 100
  newNode->next->prev= newNode;   // 100 <- 30
  newNode->prev= tmp;             // 20 <- 100
  
}
int main() 
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node (40);
    node *tail = c;
    
    // connection the list ; by visiting the next and previous.
    head->next = a;
    a->prev= head;
    a->next= b;
    b->prev= a;
    b->next = c;
    c->prev = b;
    
    cout<<"printing the position"<<endl;
    insert_position(head, 100, 2);
    cout<<endl;

    print_soja(head);
    cout<<endl;
    print_reverse(tail);
    
    
    
    return 0;
}