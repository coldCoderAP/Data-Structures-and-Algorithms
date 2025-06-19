#include<iostream>
using namespace std;
// extreme print means print first and last element 
int main(){


int arr[]={1,2,3,4,5,6,7};
int size=sizeof(arr)/sizeof(int);
 
for(int first=0,last=size-1;first<=last;first++,last--){
   
   if(last==first){ //when odd number then it print num 1 times only . 
      cout<<arr[first]<<" ";
   }else{

    cout<<arr[first];
    cout<<arr[last];
   }


}

}
