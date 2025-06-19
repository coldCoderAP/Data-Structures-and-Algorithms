#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
// #include<pair>

using namespace std;

// 1. Two pointer approch
int findPairs(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    set<pair<int,int>> ans;  
    //set stores only once(do not store dupplicates)
    int j=1;
    int i=0;
    cout<<"k diff pairs are :"<<endl;
     while(j<nums.size()){
          if (i == j) {
              j++;  // Ensure i != j
              continue;
          }
          int diff=nums[j]-nums[i];

          if(diff==k){
           ans.insert({nums[i],nums[j]});
           cout<<nums[i]<<" "<<nums[j]<<endl;
           i++;j++;
          }else if(diff>k){
              i++;
          }else{
              j++;
          }
      }

      // if(i==j) {j++};

   return ans.size();   
  }



// 2. With binary search
// a[j]=K+a[i] and int diff=a[i]-a[j]  both are same 


int bs(vector<int> v,int start,int k){
        int end=v.size()-1;
        while(start<=end){

            int mid=start+(end-start)/2;
            if(v[mid]==k){
                return mid;
            }else if(k>v[mid]){
                start=mid+1;
            }else{
                end=mid-1;
            }
            
        }

        return -1;
}
int findPairsBS(vector<int> v,int k){

    sort(v.begin(),v.end());
    set<pair<int,int>> ans;

    for(int i=0;i<v.size();i++){
        //we have to to search a[i]+k in right sub array
        //if(bs ans is not equal to -1)
         if(bs(v,i+1,v[i]+k) !=-1){ 
             ans.insert({v[i],v[i]+k});
         }

    }
    return ans.size();
 
}


int main(){
// if Diff between pairs is k then 
vector<int> v={1,2,3,4,5};
cout<<"Enter the NO  :";
int diff;//idff between ele i-j
cin>>diff;

cout<<"pairs count :"<<findPairsBS(v,diff);

}