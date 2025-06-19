#include<iostream> 
#include<algorithm>
#include<vector>

using namespace std;

int moveAllNegToLeft(int * arr,int n){

    int l=0;
    int h=n-1;
    int index=0;

    while(l<h){
        if(arr[index]<0){
            index++;
            l++;
        }else if(arr[index]>0) {
            swap(arr[index],arr[h]);
            h--;
        
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

// same approch
int moveAllNegToLeft2(int arr[],int n){

    int l=0;
    int h=n-1;
  

    while(l<h){
        if(arr[l]<0){
            
            l++;
        }else if(arr[h]>0) {
            h--;
        
        }else{ 
            swap(arr[l],arr[h]);
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

int main() {
    int arr[]={-1,23,-34,44,45,66,-56};

    int size=sizeof(arr)/sizeof(int);

    moveAllNegToLeft(arr,size);

}