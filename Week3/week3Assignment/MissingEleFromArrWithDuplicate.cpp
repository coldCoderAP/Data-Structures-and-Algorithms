#include<iostream>
#include <algorithm> //sort() library
#include<vector>

using namespace std;

int visitingMet(int *arr,int size){
     for(int i=0;i<size;i++){
        int index=abs(arr[i]);
    //  beacuse  we treat val as index  (1 to n)
        if(arr[index-1]>0){
            arr[index-1]=arr[index-1]*-1;
        }
     }

     for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
     }

    //  All positive indexes are missing numbers

cout<<endl<<"Missing Numbers are :";
    for(int i=0;i<size;i++){
         
         if(arr[i]>0){
            cout<<i+1<<" ";
         }
     }
}

int main(){

    int arr[]={1,3,3,3,3};

    int size=sizeof(arr)/sizeof(int);

    visitingMet(arr,size);

    //after sorting we put all visited  




}