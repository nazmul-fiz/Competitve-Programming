#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n; i++)
    {
      cin>> a[i];
    }
    // sort(a, a+4); // ascending // mean small to big 
    sort(a, a+4, greater<int>()); // descending mean big to small
    // changing the a+number can sort to that number or just stay n;
    for(int i=0; i<n; i++)
    {
      cout<< a[i] <<" ";
    }
    return 0;
}