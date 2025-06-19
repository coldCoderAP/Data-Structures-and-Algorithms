#include<iostream> 
#include<algorithm>
#include<vector>

using namespace std;
//    approch 1
    int UsingSumApproch(vector<int> &nums){
        
        // numbrs stasts from 0 to n;
        // sum of all natural numbers till nums.size.

        int n=nums.size();
        // Use sum of n natural numbers formula and find - actual sum
        int actsum=n*(n+1)/2;
        int sum=0;
        //nums array sum
        for(auto i:nums){
            sum+=i;
        }

          return actsum-sum; 
    }

    // Approch 2  :Using sorting method

    int UsingSortingMethod(vector<int> &nums){
    //  after sorting it wil arrange 0 to n with one missing number
     sort(nums.begin(),nums.end());

    // check arr[0]=1,arr[1]=1, until <n.and allare arrenged then missing no last number n.
     for(int i=0;i<nums.size();i++){
         if(nums[i]==i){
            continue;
         }else{
            return i;
         }
     }
    // if no is found then missing no is n.
    return nums.size();

    }

    // Approch 3 : using Xor operation
//   This is optimal solution T.C=O(n)
    int usingXorOperation(vector<int> &nums){
       
       int n=nums.size();
       int ans=0;
       for(int i=0;i<n;i++){
            ans=ans^nums[i];
            // cout<<ans<<" ";
       }

       for(int i=0;i<=n;i++){
        ans=ans^i;
        // cout<<endl<<ans<<" ";
       }

       return ans;

    }


    
int main() {

vector<int> nums={0,1,2,3,4,5,6};
      
    // int ans=UsingSumApproch(nums);
    // int ans=UsingSortingMethod(nums);
    int ans=usingXorOperation(nums);

    cout<< ans;
 
}
