#include<iostream> 
#include<vector>
#include<algorithm>


using namespace std;

void print(vector<int> &v){

    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
}

bool myComparator(int &a ,int &b){
    // return a>b;//desending order
    return a<b;//assending order
}

int main(){

    //sort() fun is inbluid fun only sort in assending order
    //Sort() Turd parameter is Custom Comparator Used to sort array into  monotony order (assecding or decending order)
    // with index number 
    vector<int> v={5,3,2,1,4};

    // sort(v.begin(),v.end());
    sort(v.begin(),v.end(),myComparator);

     
    print(v);


}