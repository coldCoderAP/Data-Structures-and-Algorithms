#include<iostream>
using namespace std;

int sortZeroOne(int arr[],int n){

int countZero=0;
int countOne=0;

// Step 1:Count 0 and 1

 for(int i=0;i<n;i++){
    if(arr[i]==0){
    countZero++;
    }
    
    if(arr[i]==1){
     countOne++;
    }
 }
// Step 2:Place all zeros first
         // After placing all zeros in for loop, to get next index to palce ones we have to palce initialization of i ouside of for.

// 1. Using for 
 int i=0; 
   for( i=0;i<countZero;i++){
      arr[i]=0;
   }  
    for(int j=i;j<n;j++){
      arr[j]=1;
    }


//2.Easy Way Using While

// int index=0;

// while(countZero--){
//    arr[index]=0;
//    index++;
// }
 
// while(countOne--){
//    arr[index]=1;
//    index++;
// }
 

   
 

}

int main(){

int arr[]={0,1,0,1,1,1,0,0,1,1,1,1,0};

int size=sizeof(arr)/sizeof(int);

sortZeroOne(arr,size);

//  Print
for(int j=0;j<size;j++){
   cout<<arr[j]<<" ";
}

}
