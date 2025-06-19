#include<iostream>
using namespace std;

int count(int arr[],int size){
 
 int zerocount=0;
 int onecount=0;

 for(int i=0;i<size;i++){
    if(arr[i]==0){
        zerocount++;
    }
    if(arr[i]==1){
        onecount++;
    }
 }
 cout<<"Zero's count :"<<zerocount<<endl<<"one's count :"<<onecount;

}

int main(){

    // count zeros and one from array
    int arr[]={1,0,1,1,0,0,1,1,0,1,1,0,0};

    int size=sizeof(arr)/sizeof(int);

    count(arr,size);


}