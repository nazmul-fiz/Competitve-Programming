#include <bits/stdc++.h>
using namespace std;
/// Question 5: take Input a linkedlist and Print the Maximum value of the List . 
class node 
{
  public:
  int val;
  node *next;
  node(int val)
  {
    this->val=val;
    this->next=NULL;  
  }
};
///////////
void tail(node *&head, int val) //// tail ke pointer reference diye dite hobe jate head change hoye jete pare
{
  node *newNode = new node(val);
  if(head==NULL)
  {
    head= newNode;
    return;
  }
  node *tmp = head;
  while(tmp->next!=NULL)
  {
    tmp=tmp->next;
  }
  tmp->next=newNode;
}
////////////
int maxi(node *head)
{
  int max = INT_MIN;
 while(head !=NULL){ /// null na houya porjonto cholo 
    if(head->val > max)
    {
      max=head->val;
    }
     head=head->next;
  }
  return max;
}
/////////
int main() 
{
    int val;
    node *head = NULL;
    while(true)
    {
      cin>>val;
      if(val==-1) break;
      tail(head, val);
    }
    cout<<"The Maximum Value is: "<<maxi(head)<<endl;
    return 0;
}