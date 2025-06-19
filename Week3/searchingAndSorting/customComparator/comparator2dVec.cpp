#include<iostream> 
#include<vector>
#include<algorithm>


using namespace std;

void printv(vector<vector<int>> &v){

    int n=v.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;

    }

    cout<<endl;
}

bool muCompFor1StIndex(vector<int> &a,vector<int> &b){
    return a[1]<b[0];//sort with 1 index  in 2d  inner vector (desending  order)
    // return a[1]>b[1];//sort with 1 index  in 2d  inner vector (assending order)
}

int main(){
 
    vector<vector<int>> v;

    int n;
    cout<<"Enter size of n <vector> \n";
    cin>>n;

    for(int i=0;i<n;i++){
 
             vector<int> temp;
             int a,b;
             cout<<"Enter the A & B \n";
             cin>>a>>b;
             temp.push_back(a);
             temp.push_back(b);
             v.push_back(temp);
       
    }

     
    sort(v.begin(),v.end());//inbuilt sort only in assendingand sort with only 0 index

    //Custom Comparator
    sort(v.begin(),v.end(),muCompFor1StIndex);
    printv(v);

}