#include<iostream>
#include<vector>


using namespace std;


class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            vector<int> ans;
            int m=matrix.size();
            int n=matrix[0].size();
            int tot_ele=m*n;
            int count=0;
    
            int startingRow=0;
            int startingCol=0;
            int endingCol=n-1;
            int endingRow=m-1;
     
         while(count<tot_ele){
            // print row 
            for(int i=startingCol;i<=endingCol && count<tot_ele ;i++){
                ans.push_back(matrix[startingRow][i]);
                count++ ;
            }
            startingRow++;
    
            //print endingCol
            for(int i=startingRow;i<=endingRow && count<tot_ele ; i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
    
            //print ending row
            for(int i=endingCol;i>=startingCol && count<tot_ele ; i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
    
            //print startcol
            for(int i=endingRow;i>=startingRow && count<tot_ele;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
         }
            return ans;
        }//vec
    };

int main(){

    vector<vector<int>> vec={{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};

    Solution s;
    vector<int>  ans=s.spiralOrder(vec);

    for(auto i:ans){
        cout<<i<<" ";
    };

};