#include<iostream>
#include<array>
using namespace std;
 
  
int main()
{     

  int arr[]={1,2,3,4,5};
  int size=sizeof(arr)/sizeof(arr[0]);

  int temp=0;
  for(int i=0,j=size-1;i<j;i++,j--){
     
      temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;

     
  }

  for(auto i:arr){
    cout<<i<<" ";
  }
  
}

 