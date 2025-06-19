#include<iostream>
#include<vector>
#include<numeric>

using namespace std;

 
bool isPossibleSolution(vector<int> arr,int n,int k,int sol){
          
          int pageSum=0;

          int c=1;//c no of student count
          
          for(int i=0;i<n;i++){
              if(arr[i]>sol){
                  return false;
              }
              if(pageSum+arr[i]>sol){                                                                                                                                                                                                                                                                                                               
                  c++;
                  pageSum=arr[i];
                  
                  if(c>k){
                      return false;
                  }
                  
              }else{
                  pageSum +=arr[i];
              }
          }
          
          return true; 
}
       
int findPages(vector<int> &arr, int k) { 
          int n=arr.size();
          
          if(k>n) return -1;
          
          int start=0;
          int end=accumulate(arr.begin(),arr.end(),0); //accumulate() gives sum of array
          int ans=-1; 
         
         while(start<=end){
             int mid=(start+end)>>1;
             
             if(isPossibleSolution(arr,n,k,mid)){
                 ans=mid;
                 end=mid-1;
             }else{
                 start=mid+1;
             }
         }
         return ans;
}
   

int main(){

    vector<int> BookPages={12,24,67,90};
    int k;
    cout<<"enter no of students";
    cin>>k;

    int ans=findPages(BookPages,k);
    cout<<ans;

}