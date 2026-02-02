#include <bits/stdc++.h>
using namespace std;
class student 
{
  public:
  string name;
  int roll, marks;
};
bool cmp(student a, student b)
{
  // [ 1st Part-
  // if (a.marks < b.marks)
  //   return true;
  // else 
  // return false;
  // 1st part end- ]
  
  // return a.marks < b.marks; // use this instead

// If the marks, name, roll whatever are same. compute like this
 if (a.marks==b.marks)
  {
    return a.roll< b.roll; // i took base roll to compute
  }
  else
  {
    return a.marks > b.marks; // that's means if the condition right true otherwise false
  }
}
int main() 
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0; i<n; i++)
    {
      cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    
    sort(a, a+n, cmp);
    
    for(int i=0; i<n; i++)
    {
    cout<<a[i].name<< " "<<a[i].roll<<" "<< a[i].marks<<endl;
    }
    return 0;
}