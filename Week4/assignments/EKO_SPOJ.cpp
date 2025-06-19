#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossibleSolution(vector<long long int > &trees,long long int mid,long long int m){
 
    long long int woodCollected=0;
    for( int i=0;i<trees.size();i++){
        if(trees[i]>mid){ 
            woodCollected+=trees[i]-mid;
        }
    }
    // 1 woodCollected>=m  if true then return true else false 
    return woodCollected>=m;
    // 2   if(woodCollected>=m) return true;    return false;
}
                                              


long long int maxSawBladeHeight(vector<long long int> &trees,long long int m){

    long long int  ans=-1;
    long long int start,end;

    start=0;
    end=*max_element(trees.begin(),trees.end());

    while(start<=end){
        long long int  mid=start+(end-start)/2;
        if(isPossibleSolution(trees,mid,m)){
            ans=mid;
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans; 
}


int main(){
    vector<long long int > trees;

    long long int n,m;
    cout<<"Enter treesize & woodCut size  "<<endl;
    cin>>n;
  
    cin>>m;

    while(n--){
        long long int height;
        cin>>height;
        trees.push_back(height); 
    }

    long long int ans=maxSawBladeHeight(trees,m);
    cout<<"Set saw blade height :"<<ans;
    return 0;
}