#include<iostream>
using namespace std;


 
 int shiftNegativeRightside(int arr[],int n){
//  j -> memory block -> jaha pe main negative
//   ele store kar sakta hu 
    int j=0;
     for(int index=0;index<n;index++){
    //    index->entire array traverse karne ke liye
       if(arr[index]<0){
          swap(arr[index],arr[j]);
          j++;
       }

     }


 }
int main(){

    int arr[]={-12,-10,14,0,1,4,5,-30};

    int size=sizeof(arr)/sizeof(int);

    shiftNegativeRightside(arr,size);

    cout<<"After Shifting : "<<endl;

    for(auto i:arr){
        cout<<i<<" ";
    }



}