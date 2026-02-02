#include<bits/stdc++.h>
using namespace std;
// stack er kaj and some of the uses operation how its done;

class MyStack 
{
   public:
   list<int> l;

   void push(int val) 
   {
     l.push_back(val);
   }      
   void pop()
   {
     l.pop_back(); 
   }
   int top()
   {
      return  l.back();
   }
   int size()
   {
     return l.size();
   }
   bool empty()
   {
     if(l.size()== 0) return true;
     else return false;
   }
};
int main()
{
    MyStack st;
    
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
      int x;
      cin>>x;
      st.push(x);
    }
    while( !st.empty() )
    {
      cout<<st.top() <<endl;
      st.pop();
    }
    // duke duke sob khali kore dile  //
    
cout<<st.size()<<endl;

return 0;
}