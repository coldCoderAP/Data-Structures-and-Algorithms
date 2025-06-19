#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;


// 1 solutio using two pinter approch
vector<int> twoPtrMethod(vector<int>& arr, int k, int x) {
    vector<int> ans; 
       int h=arr.size()-1;
       int l=0;

       while(h-l>=k){
           if(x-arr[l]>arr[h]-x){
               l++;
           }else{
               h--;
           } 
       }

   for(int i=l;i<=h;i++){
       ans.push_back(arr[i]);
   }
     return ans;

}



//  2 soln Sing Binary search 


int  lowerBound(vector<int>& arr, int x) {
    int s=0;
    int e=arr.size()-1;

    int ans=e; 
    // here ans=end beacuse in the case ith x is not defined then 
    // ans  is -1 so ans=e

    while(s<=e){
     int mid=s+(e-s)/2;
        if(arr[mid]>=x){
            ans=mid;
            e=mid-1;
        }else if(x>arr[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }

    }
    return ans;
  
}
vector<int> bs_method(vector<int>& arr, int k, int x) {
    int h=lowerBound(arr,x);
    int l=h-1;

    while(k--){
        if(l<0){
            h++;
        }else if(h>=arr.size()){
            l--;
        }
        else if(x-arr[l]>arr[h]-x){
            h++;
        }else{
            l--;
        }
    }

 return vector<int> (arr.begin()+l+1,arr.begin()+h);
}


   
// LEETcode Main()
   vector<int> findClosestElements(vector<int>& arr, int k, int x) {
   // 1 soln Using two pointer approch
     return twoPtrMethod(arr,k,x);

    //  2 Binary search 
   }


int main(){

    vector<int> arr={1,2,3,4,5};

    cout<<"Enter size of ele to find near x ";
    int k;
    cin>>k;
    cout<<"Enter the any element present in array";
    int x;
    cin>>x;

    // COMMENT ANY ONE SOLUTION
    // 1soln Two pointer Approch
//    vector<int> ans= findClosestElements(arr,k,x);
//    2 soln  Binary search
vector<int> ans= bs_method(arr,k,x);

   for(auto i:ans){
    cout<<i<<" ";
   }
}