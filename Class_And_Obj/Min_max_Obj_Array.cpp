#include <bits/stdc++.h>
using namespace std;
class student
{
  public:
  string name;
  int roll, marks;
};
int main() 
{
    int n;
    cin>>n;
    student a[n];
    for(int i=0; i<n; i++)
    {
      cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    student mn; // This is an object under the class
    mn.marks= INT_MAX;  // if we search based on marks, so use mn.marks to hold a based

    student mn2;
    mn2.marks= INT_MIN;
    
    for(int i=0; i<n; i++)
    {
      if(a[i].marks< mn.marks) // we hold the marks and compute the minimum
      {
        mn= a[i];
      }
    }
    for(int i=0; i<n; i++)
    {
      if(a[i].marks> mn2.marks) // we hold the marks and compute the minimum
      {
        mn2= a[i];
      }
    }

     cout << mn.name<<" "<<mn.roll<<" "<<mn.marks<<" "<<endl;
     cout << mn2.name<<" "<<mn2.roll<<" "<<mn2.marks<<" "<<endl;
    return 0;
}