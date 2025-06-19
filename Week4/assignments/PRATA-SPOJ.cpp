#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossibleSolution(vector<int> &cooksRank,int nP,int mid){
    int currP=0;

    for(int i=0;i<cooksRank.size();i++){
        int R=cooksRank[i];
        int j=1; 
        int timeTaken=0;

        while(true){
            if(timeTaken+(j*R)<=mid){
                currP++;
                timeTaken+=(j*R);
                ++j;
            }else{
                break;
            }

            if(currP>=nP){
                 return true;
            }

        }
    }
    return false;
}

int minTimeCompleteToOrder(vector<int> &cooksRank,int nP){
    int start=0;
    int highestRank=*max_element(cooksRank.begin(),cooksRank.end());
    int end=highestRank * (nP  *(nP + 1  )/2);
    int ans=-1;
    while(start <= end){
        int mid=start + (end - start) /  2;
        if(isPossibleSolution(cooksRank,nP,mid)){
            ans=mid;
            end=mid - 1;
        }else{
            start=mid+1;
        }
    }

    return ans;
}
int main(){

    int T;//no of test cases to run
    cin>>T;
    // no of parathas .no of cooks
    
    while(T--){
        int nP,nC;
        cout<<"no of paratha & no of count :"<<endl;
        cin>>nP>>nC; 
        vector<int> cooksRank;
        while(nC--){
            int R;
            cin>>R;
            cooksRank.push_back(R); 
        }
        int ans=minTimeCompleteToOrder(cooksRank,nP);
        cout<<"Time taken to make "<< nP <<" is :"<<ans<<endl;
    }
    

    return 0;
}
 