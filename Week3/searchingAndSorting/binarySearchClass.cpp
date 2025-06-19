#include<iostream>

using namespace std;


int binarySearch(int arr[],int n,int target){

    int start=0;
    int end=n-1;

    // there is some flow in below line HW


    // int mid=(start+end)/2;
    // BEST PRACTISE (integer overflow Nhi hota hai)
    int mid=start+(end-start)/2;

    while(start<=end){


        if(arr[mid]==target){
            // found return
            return mid;
        }else if(target>arr[mid]){
            //right mai jao
            start=mid+1;

        }else if(target<arr[mid]){
            // left mai jao
            end=mid-1;
        }

        // mid update (yaha par galti hoti hai)
        mid=(start+end)/2;
    }

    // agar yha tak pohanche ho to element nahi found hua then return any thing

    return -1;

}


int findFirstOccurence(int arr[],int n ,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;


    int ans=-1;

    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            e=mid-1;

        }else if(target>arr[mid]){
            s=mid+1;
        }else if(target<arr[mid]){
            e=mid-1;
        }
        mid=(s+e)/2;
    }

    return ans;

}

//Last Occurennce

int findLastOccurence(int arr[],int n,int target){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;


    int ans=-1;

    while(s<=e){
        if(arr[mid]==target){
            ans=mid;
            s=mid+1;

        }else if(target>arr[mid]){
            s=mid+1;
        }else if(target<arr[mid]){
            e=mid-1;
        }
        mid=(s+e)/2;
    }

    return ans;

}


// FInd total occurence

int totalOccurance(int arr[],int n,int target){
    int firstOccurance=findFirstOccurence(arr, n, target);
    int lastOccurance=findLastOccurence( arr, n, target);
    int totOccurence=firstOccurance-lastOccurance+1;


   return totOccurence;
}


//missing ele in array array (from 1 to n only) {1,2,3,4,5,7,8,9}

int findMissingElement(int arr[],int n){

    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
         int diff=arr[mid]-mid;

         if(diff==1){
            //right mai jao
            s=mid+1;

         }else{
            //ans store karo
            ans=mid;
            //left mai jao
            e=mid-1;
         } 
        //  Ye imp hai (mid ko update karana)
          mid=s + ( e - s ) / 2; 
    }

    //HW-> how to remove this ,by modyfying this 
    if(ans+1==0){
        return n+1;
    } 
    return ans+1; 
} 

using namespace std; 
    
int main(){
    
        int arr[]={1,2,3,4,5,6,7,8}; 
        
        // int arr[]={1,2,2,2,2,6,7,8,9}; 
        int target=2;
        int n = sizeof(arr) / sizeof(arr[0]);
        
        // 1.
        // int ans=binarySearch(arr,n,target);
        
        //2. 
        // int ans=findFirstOccurence(arr,n,target);
        
        //3.
        // int ans=findLastOccurence(arr,n,target);
        
        //4.
        // int ans=totalOccurance(arr,n,target);
        
        //5.
        int ans=findMissingElement(arr,n); 
        cout<<"Missing element is :"<<ans<<endl; 
        // only for {1,2,3,4,6,7,8,9} sorted arrray 1 to n


        
    
    
        if(ans  == -1){
            cout<<"Element Not Found";
            
        }else{
            cout<<"Element is "<<ans;
        }
        // cout<<n;
    // 
        

    return 0;
}