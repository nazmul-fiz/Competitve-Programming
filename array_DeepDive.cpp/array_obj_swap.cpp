#include <iostream>
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
    // selection sorting using 
    for(int i=0; i<n-1; i++)
    {
      for(int j= i+1; j<n; j++)
      {
        if( a[i].marks < a[j].marks) // decide big to small or small to big
        {
          swap( a[i], a[j]);
        }
        if(a[i].marks == a[j].marks)
        {
            if ( a[i].roll < a[j].roll) // decide the roll big to small if they are same marks 
            {
                swap(a[i], a[j]);
            }
        }
      }
    }
    for(int i=0; i<n; i++){
    cout<<a[i].name<< " "<<a[i].roll<<" "<< a[i].marks<<endl;
    }
    return 0;
}