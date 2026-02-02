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
void print_link(node *head)
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
int size(node *head)
{
  node *tmp = head;
  
  int cnt=0;
  while(tmp != NULL)
  {
    cnt++;
    tmp= tmp->next;
  }
  return cnt;
}
/////////   Head Function   ///////////
void insert_head(node *&head, node *&tail, int val)
{
  node *newNode = new node(val);
  if(head==NULL)
  {
    head = newNode;
    tail = newNode;
    return ;
  }
  // connection for new head
  newNode->next = head;
  head->prev= newNode;
  head= newNode;
}
void insert_tail(node *&head, node *&tail, int val)
{
  node *newNode = new node (val);
  if(tail==NULL)
  {
    head = newNode;
    tail = newNode;
    return ;
  }
  tail->next = newNode;
  newNode->prev= tail;
  tail = newNode;
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
    /////   Head and Tail insert at the Same time  ////
    int val2, val;
    cin>>val>>val2;
    insert_tail(head,tail, val);
    insert_head(head, tail, val2);
    ////


  //////    Eigula Position insert er jonno ; head and Tail function use;
  // if (pos == 0)
  // {
  //   insert_head(head, tail, val);
  // }
  // else if(pos == size(head))
  // {
  //   insert_tail(tail, val);
  // }
  // else if(pos >= size(head))
  // {
  //   cout<<"Invalid Insertation"<<endl;
  // }
  // else {
  //   insert_position(head, pos, val);
  // }
  /////////


    cout<<"Linked List is:";
    print_link(head);
    cout<<endl;
    cout<<"This is Doubly List Reverse: ";
    print_reverse(tail);
    
    
    return 0;
}