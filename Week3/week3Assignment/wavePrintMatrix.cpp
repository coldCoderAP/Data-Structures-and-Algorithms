#include<iostream>
#include<vector>


using namespace std;
class  Solution{
public :
       void printWavy(vector<vector<int>> v){

        int m=v.size(); //row size
        int n=v[0].size(); //col size

        // Print columnWise
        for(int startcol=0;startcol<n;startcol++){
            // if col is even then-> print Top to Bottom

            if((startcol & 1)==0){ 

                for(int i=0;i<m;i++){
                    cout<<v[i][startcol]<<" ";
                }

            }else{
                //if col is odd ->bottom to top

                for(int i=m-1;i>=0;i--){
                    cout<<v[i][startcol]<<" ";
                }
            } 
        }
 
       }

};


int main(){
    vector<vector<int>> v={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    int m=v.size();  //rows
    int n=v[0].size();  //colums size
    // cout<<n <<" "<<m<<endl;


    Solution s;
     s.printWavy(v);


}