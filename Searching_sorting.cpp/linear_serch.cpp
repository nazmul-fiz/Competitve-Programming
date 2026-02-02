#include <iostream>
using namespace std;

int linear_search(int num[10], int find, int size)
{
  int i=0;
  for(i;i<size; i++)
  {
    if(num[i]==find){
      return i;
      break;
    }
  }
  i=-1;
  return i;
  
}
int main() 
{
    int num[10]= {10,20,30,40,50,60,70,80,90,100};
    int find = 200;
    int size = 10;
    int res= linear_search(num, find, size);
    
    
    if (res==-1){
      cout<<find <<" Number Array not Found !"<<endl;
    }
    else{
      cout<<"The Number found at index = "<<res<<endl;
    }
    return 0;
}