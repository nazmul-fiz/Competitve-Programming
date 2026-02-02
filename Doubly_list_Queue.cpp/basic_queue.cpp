#include<bits/stdc++.h>
#define ll long long 
#define endl '\n'
#define db double
#define fase ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
  int t;
  priority_queue<int>pq;
  pq.push(45);
  pq.push(100);
  pq.push(46);
  pq.pop();
  // priority_queue basaed on the Greatest value to Least Value.  ///
  // priority is greatest insider value is the Priority // 
  cout<<pq.top()<<endl;
}
