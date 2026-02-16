#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;





// Recursive Function for Sum of array   /
int digit_sum(int n)
{
  if(n== 0) return 0;
  return digit_sum(n/10) + (n%10);
}
int main()
{
  int n; cin>>n;
  int ans = digit_sum(n);
  cout<<ans<<endl;
}



// // Recursive Function for Sum of array   /
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^   /
int sum_of(int n, int a[])
{
  if(n< 0) return 0;
  return sum_of(n-1, a) + a[n];
}
int main()
{
  int n; cin>>n;
  int a[n];

  for(int i=0; i<n; i++)
{
  cin>>a[i];
}
  int ans = sum_of(n-1, a);
  cout<<ans<<endl;
}



// Recursive Function for factorial  /
// ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^     /

int recursive_func(int n)
{
  if(n==0) return 1;
  return recursive_func(n-1) *n;
}  

int main() 
{
    int n; cin>>n;
    recursive_func(n);
    cout<<recursive_func(n)<<endl;
    return 0;
}
