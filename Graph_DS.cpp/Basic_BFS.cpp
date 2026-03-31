#include <bits/stdc++.h>
using namespace std;
const int N=10000;

  vector<int> Adj[N];
  bool visited[N];
  
  void Bfs(int start)
  {
    queue<int>q;
    
    visited[start] = true;
    q.push(start);
    
    while(!q.empty())
    {
      int node = q.front();
      q.pop();
      
      cout<<node<<" ";
      
      for(int neighbor : Adj[node])
      {
        if(!visited[neighbor])
        {
          visited[neighbor]= true;
          q.push(neighbor);
          
        }
      }
    }
  }
  
  int main()
  {
     // Building graph manually (VERY IMPORTANT ORDER)
    // see through the Adjacency with the give data and See the Specific node and Connected Component; 

     Adj[1]= {2, 3};
     Adj[2]= {1, 4, 5};
     Adj[3]= {1, 6, 7};
     Adj[4]= {2};
     Adj[5]= {2};
     Adj[6]= {3};
     Adj[7]= {3};
     
     Bfs(2);  // 2nd node what are the Connected into that //
     
  
    return 0;
}