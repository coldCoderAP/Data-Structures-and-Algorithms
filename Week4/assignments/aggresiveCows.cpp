#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm> 
 
using namespace std; 
 
bool isPossibleSolution(vector<int> stalls,int k,int mid){
      
    int c=1;
    int pos=stalls[0];
    
    
  // find min of distance between cows is max (min of max)
    for(int i=1;i<stalls.size();i++){
        if(stalls[i]-pos>=mid){
            c++;
            pos=stalls[i];
        }
        if(c==k) return true; 
    } 
    return false;
}

  int aggressiveCows(vector<int> &stalls, int k) {

      sort(stalls.begin(),stalls.end());   
      
      int start=0;
      int end=stalls[stalls.size() - 1] - stalls[0];
      int ans=-1;
      
      while(start <= end){
          int mid=start+(end-start)/2;
          
          if(isPossibleSolution(stalls,k,mid)){
              ans=mid;
              start=mid+1;
          }else{
              end=mid-1;
          }
          
      }
      
      return ans;
  }


int main(){

    vector<int> stalls={1,2,4,8,9};

    int k=3;

    int ans= aggressiveCows(stalls,k);

    cout<<"cows stalls distance is :"<<ans;

}