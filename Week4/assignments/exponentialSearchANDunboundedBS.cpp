#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int bs(int a[],int start,int end,int x){
    
    while(start<=end){

        int mid=start+(end-start)/2; 

        if(x==a[mid]){
            return mid;
        }else if(x>a[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }

    }
    return -1;
}


int expSearch(int a[],int n,int x){

    if(a[0]==x)return 0; 
    int i=1;

    while(i<n && a[i]<=x){
        i=i*2;
    }
    return  bs(a,i/2,min(i,n-1),x);
    // bs(arr,start index of sub array,gives min of i or n-1,x ele to find)

}

int main(){ 

    int a[]={3,5,6,11,13,14,15,56,70};
    int n=sizeof(a)/sizeof(a[0]);
    int k=56;  //k= find the ele in array
 
    int ans=expSearch(a,n,k);
    cout<<ans;

    

}