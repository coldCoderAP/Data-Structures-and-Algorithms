  #include<iostream>
  #include<vector>
  using namespace std;

  void rearrangeArray(int nums[]) {
        int n=sizeof(nums)/ sizeof(int);
        int ans[] = new int[n-1];
        int i=0; 
        int j=0; 
        int k=1;
        while(i<n){
            if(nums[i]<0){
                ans[k++]=nums[i++];
                k++;
            } else if(nums[i]>0){
                ans[j++]=nums[i++];
                j++;
            }
        }

        nums=ans;
         
        // return nums;
    }


int main(){
//  Input: nums = [3,1,-2,-5,2,-4]  one positive one negative
// Output: [3,-2,1,-5,2,-4]
   int nums[]={23,-23,2,34,-44,-13};
   
    rearrangeArray(nums);

    cout<<"After Rearranging :"<<endl;

    for(int i:nums){
        cout<<i<<" ";
    }

 


}