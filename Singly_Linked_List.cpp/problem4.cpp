#include <iostream>
using namespace std;
///o Question: Take a singly linked list as input and print the middle element. If there are multiple values in the middle print both.

class Node 
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
//////
void tail(Node *&head, int val)
{
  Node *newNode = new Node (val);
  if(head ==NULL)
  {
    head = newNode;
    return;
  }
  Node *tmp = head;
  while(tmp->next !=NULL)
  {
    tmp=tmp->next;
  }
  tmp->next = newNode;
}
//////
void print_mid(Node *head)
{
  Node *slow = head;
  Node *fast = head;
  Node *prev = NULL;
  
  while (fast !=NULL && fast->next != NULL)
  {
    prev = slow;
    slow = slow->next;
    fast= fast->next->next;
    /// upore else er kaj hoise;  If the length is ODD(bijor) ////
  }
  
  if(fast==NULL)
  {
    cout<<"The Middle Number is: "<<prev->val<<" "<<slow->val <<endl;
    //// Eikhane jor er kaj Hoise; // if length is Even 
  }
  else {
    cout<<"The Middle Number is: "<<slow->val<<endl;
  }
  
}
int main() 
{
    int val;
    Node *head = NULL;
    while(true)
    {
      cin>>val;
      if(val==-1) break;
      tail(head, val);
    }
    print_mid(head);
    return 0;
}