#include <bits/stdc++.h>
using namespace std;
int main() 
{
    list<int>mylist = {10, 20, 30, 40, 50, 60, 70, 80};
    list<int>NewList = {100, 200, 400};
    // mylist.pop_back();       // deleting from the back, and can be use multiple times for deleting from back;
    // mylist.pop_front();     // deleting from front 
    // mylist.push_back();     // adding in the back, push.front()  // adding in the pop_front
    
    // mylist.insert(next(mylist.begin(), 2), 100);     // inserting 100 in the 2nd index.
    // mylist.insert(next(mylist.begin(), 2), NewList.begin(), NewList.end() ));        // insert a New list
    
    // mylist.erase(next(mylist.begin(), 2));                                // erase the 2nd index  from begining
    mylist.erase(next(mylist.begin(), 2), next(mylist.begin(), 5)) ;         // erase from where to where
    
    mylist.remove(10);                // Remove the 10 from the list
    mylist.sort();                    // sorting small to big
    mylist.sort(greater<int>());     // this is sorting when in list
    mylist.unique();                 // duplicate values are deleted. 
    
    for(int val: mylist)
    {
      cout<<val <<endl;  // using loop to see output of a Linkedlist    
    }
    return 0;
}