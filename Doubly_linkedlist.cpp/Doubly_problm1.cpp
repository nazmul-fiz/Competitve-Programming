// Question: Take two doubly linked lists as input and check if they are the same or not.

#include<bits/stdc++.h>
using namespace std;
//// Doubly linked list node ////
class node
{
  public:
  int val;
  node* next;
  node* prev;
  
  node(int val){
    this->val= val;
    this->next= NULL;
    this->prev = NULL;
  }
};
///  Inserting in Doubly 
void insert(node*& head, node*& tail, int val)
{
  node* newNode = new node(val);
  if(tail==NULL){
    head = tail = newNode;
    return;
  }
  else{
    tail->next= newNode;
    newNode->prev = tail;
    tail=newNode;
  }
}
  // Create a List   /
  void liste(node*& head, node*& tail)
  {
    int x;
    while(cin>>x && x !=-1) {
      insert(head, tail, x);
    }
  }
// Comparing the lists   
bool compare(node* head1, node * head2)
{
  while(head1 && head2){
    if(head1->val != head2->val) return false;
    head1= head1->next;
    head2= head2->next;
  }
  return head1== NULL && head2 == NULL;
}
int main()
{
  node *head1 = NULL, *tail1 =NULL;
  node *head2 = NULL, *tail2 = NULL;
  
  cout<<"Enter The List 1:";
  liste(head1, tail1);
  cout<<endl;
  cout<<"Enter the List 2:" ;
  liste(head2, tail2);
  
  if(compare(head1, head2))
  {
    cout<<"yes\n";
  }
  else{
    cout<<"No\n";
  }
  
}
