#include<iostream>
#include<vector>
using namespace std;


 
 void sortingColors(vector<int>& nums){

    // to sort we use logic we sort 0 to left and 2 to right 
    // and 1 will reamin in middle. and array sorted for 3 elements

      int n=nums.size(); //gives vector size
        int index=0;
        int left=0;
        int right=n-1;
         
         while(index<=right){//right is sorting from n-1  an index is
                              //sorting from left 0.
            
            if(nums[index]==0){
                swap(nums[index],nums[left]);
                index++;
                left++;
            }else if(nums[index]==2){
                swap(nums[index],nums[right]);
                right--;
                // We dont index++ beacause we dont know shifted value
                // we have to check it if it is 0,1,2
            }else{
                // if nums[index]==1 
                index++;
                // beacuse We only shift 0 to left and 2 to right .then remaning 
                // ele will get in middle.

            }
         }
    }
int main(){

    // we have to sort 0,1,2 this are the colors red,white,blue
   vector<int> nums={2,1,0,1,2,1,0,0,1};
cout<<nums.size()-1;
    int size=sizeof(nums)/sizeof(int);

    sortingColors(nums);

    cout<<"After sorting"<<endl;

    for(auto i:nums){
        cout<<i<<" ";
    }

 


}