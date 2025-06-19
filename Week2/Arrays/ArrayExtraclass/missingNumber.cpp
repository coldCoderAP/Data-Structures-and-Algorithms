#include<iostream>
using namespace std;

int missingNumber(int arr[],int n){
   
   int sum=0;
    for(int i=0;i<n;i++){
     sum+=arr[i];
    } 

    int totSum=((n)*(n+1))/2;

    int missingNum=totSum-sum;

    return missingNum;

}
  
  
int main(){
// this problem for  0 to n only.
    int arr[]={0,1,2,3,4,5,6,7,9};  
    int n=sizeof(arr)/sizeof(int);

    int MissingNum=missingNumber(arr,n);

    cout<<"Missing Number : "<<MissingNum;
    cout<<"Missing Number : "<<((n)*(arr[0]+arr[n-1]))/2;

 


}