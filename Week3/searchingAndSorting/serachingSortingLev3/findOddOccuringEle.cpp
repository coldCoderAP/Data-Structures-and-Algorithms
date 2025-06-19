#include<iostream>

using namespace std;


//Logic By me 
int getOddOccurence(int arr[],int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(s==e){
            return s;
        }

        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                s=mid+2;
            }else{
                // ans=mid;
                e=mid;
            }
        }else{
            if(arr[mid]==arr[mid-1]){
                s=mid+1; 
            }else{
                // ans=mid;
                e=mid-1; 
            }
        }
       mid=s+(e-s)/2;
    }
    return ans;
}


//Logic By babbar bhayya

int findOddOccuringElement(int arr[], int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
  
    while(s <= e) {
  
      //single element
      if(s == e) {
        return s;
      }
  
      //mid check -> even or odd
      if(mid & 1) { //mid&1 -> true -> odd number
        if(mid-1 >=0 && arr[mid-1] == arr[mid]) {
          //right me jao
          s = mid + 1;
        }
        else {
          //left me jao
          e = mid - 1;
        }
      }
      else {
        //even
        if(mid+1 < n && arr[mid] == arr[mid+1]){
          //right me jao
          s = mid + 2;
        }
        else {
          //ya toh main right part pr khada hu
          //ya toh main answer k upar khada hu
          //that's why e = mid krra hu
          // kyoki e = mid - 1; se ans lost ho skta h 
          e = mid;    
        }
      }
      mid = s + (e-s)/2;
    }
    return -1;
  }
   

int main(){

    int arr[]={1,2,2,3,3,4,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    

    //1.Lgic By me
    int ans=getOddOccurence(arr,size);
    //2.Love babbar
    // int ans=findOddOccuringElement(arr,size);

    if(ans==-1){
        cout<<"Element Not found";

    }else{
        cout<<"Element is "<<ans;
    }
}