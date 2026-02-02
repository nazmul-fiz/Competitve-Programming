#include<bits/stdc++.h>
using namespace std;
// stack er kaj and some of the uses operation how its done;

class MyStack 
{
   public:
   vector<int> v;

   void push(int val) 
   {
     v.push_back(val);
   }      
   void pop()
   {
     v.pop_back(); 
   }
   int top()
   {
      return  v.back();
   }
   int size()
   {
     return v.size();
   }
   bool empty()
   {
     if(v.size()== 0) return true;
     else return false;
   }
};
int main()
{
    MyStack st;
    // // demo if olpo man thakle  //
    // st.push(10);
    // st.push(20);

    // cout<<st.top()<<endl;  // answer 20 
    // st.pop(); // ber kore dilo
    // cout<<st.top()<<endl; // answer 10
    // st.pop(); // ber kore dilo
    // if(st.empty() == false )
    // {
    //   cout<<st.top() <<endl;
    // }
    // ///////////////////

    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
      int x;
      cin>>x;
      st.push(x);
    }
    while( st.empty() == false )
    {
      cout<<st.top() <<endl;
      st.pop();
    }
    // duke duke sob khali kore dile  //
cout<<st.size()<<endl;
return 0;
}