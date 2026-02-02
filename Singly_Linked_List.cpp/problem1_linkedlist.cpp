#include <bits/stdc++.h>
using namespace std;
/// Question: Take input linkedlist and Check Duplicate. With YES and NO print

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
  // Function to check for duplicates
bool dupli(node *head)
    {
        int freq[101] = {0}; // max value will be 100 given in question 
        node *tmp = head;
        while(tmp){
            if (freq[tmp->val]==1)
            return true; //dulicate found
            freq[tmp->val] =1; // per value will read as 1 means already marked
            tmp = tmp->next;
        }
        return false;
    }
int main()
{
  int val;
  node *head = NULL;
  while(true)
  {
    cin>>val;
    if(val==-1) break;
    insert_at_tail(head, val);
  }
// Check for duplicates
    if (dupli(head))
        cout << "Yes" << endl;
    else
        cout << "NO" << endl;
    
  return 0;
}