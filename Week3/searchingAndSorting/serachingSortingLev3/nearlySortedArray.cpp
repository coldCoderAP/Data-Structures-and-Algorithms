#include<iostream>

using namespace std;

int searchNearlySorted(int arr[],int n,int target){

    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(mid-1 >=0 && arr[mid-1]==target){
            return mid-1;
        }else if (arr[mid]==target){
            return mid;
        }else if (mid+1<n && arr[mid+1]==target){
            return mid+1; 
        }


        //here we are doing mid+2,mid-2 we check above index,index left and right (CATCH ) 
        // here we are checking doubble 
        //we can use mid+1,mid-1 also but it takes more time
        
        if(target>arr[mid]){
            //here we are doing mid+2 we check above index,index left and right (CATCH )
            s=mid+2;
        }else{
            e=mid-2;
        }
        mid=s+(e-s)/2;
    }
    return -1;

}


//nearly sorted array means ->the index should be in index or, left of index or, right of index 
 
//int arr[]={20,10,30,50,40,70,60};
// int arr[]={20,10,30,50,40,70,60};

int main(){

    int arr[]={20,10,30,50,40,70,60};

    int size=sizeof(arr)/sizeof(arr[0]);
 
    int ans=searchNearlySorted(arr,size,20);

    if(ans==-1){
        cout<<"Element not Found";

    }else{
        cout<<"Element index is : "<<ans;
    } 
}