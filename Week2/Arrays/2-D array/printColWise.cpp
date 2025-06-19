#include<iostream>
using namespace std;


    // to print 1 4 7  column wise row 
    //          2 5 8 
    //          3 6 9

    void PrintColumnWise(int arr[][4],int r,int c){
         for(int i=0;i<c;i++){
           for(int j=0;j<r;j++){
            cout<<arr[j][i]<<" ";
            }
        }

    }

    int rowWiseSum(int arr[][4],int row,int col){
      int sum=0;
      for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           sum+=arr[i][j];
        }
      }
      return sum;
    }


    // digonal print row and col size are same are called digonal

   void digonalPrint(int arr[][4],int r,int c){
    //   digonal print (0,0) (1,1) (2,2) (3,3)
   int sum=0;
     for(int i=0;i<r;i++){
        // row and col have same index reduces time complexity
        cout<<arr[i][i]<<" ";
        sum+=arr[i][i];
     }
     cout<<"  Sum of digonal is "<<sum<<endl;

    }

    void secondaryDigonal(int arr[][4],int n){
        // digional have same row and col c

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i+j==(n-1)){
                    cout<<arr[i][j] <<" ";
                }
            }
        }
    }

    // Traversing row to col
    void traversing(int arr[][4],int r,int c){
//  if we dont apply cond then all will reverse to its orignal position.
// 1. Way 1
for(int i=0;i<r;i++){
    // for(int j=0;j<=i;j++) this will also works
    for(int j=i;j<c;j++){ 
        swap(arr[i][j],arr[j][i]);
    }
}
        // int k=0;
        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //         if(i!=j  && j>k){
        //             swap(arr[i][j],arr[j][i]);
                     
        //         }
        //     }
        //     k++;
        // }
    }

    // maxnum

    void maxNum(int arr[][4],int r,int c){
        int maxnum=INT32_MIN;
        for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){

            if(arr[i][j]>maxnum){
                maxnum=arr[i][j];
            }

        }
        }
        cout<<endl<<"Max Number :"<<maxnum<<endl;
    }

int main(){


// 1.Array is is static so we have to decleare 
//   it row and col size.beacuse aray is Static.
// 2.when fun creation mendatory to decleare its col size.
// 3.i am getting error if changes  3 with row when  initialization.

  int row=4,col=4;
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
         
    };
        
// NOTE:here this programs are digoanl roe and col are same 
//      so,we can only pass one only row or col .viseversa
PrintColumnWise(arr,row,col);
 
cout<<endl<<"Sum of row :"<<rowWiseSum(arr,row,col)<<endl;

maxNum(arr,row,col);
// 1. primary digoanl

digonalPrint(arr,row,col);
// 2.secondary digonal 
// here we pass row or col size beacuse both are same for digonal 
secondaryDigonal(arr,row);

cout<<endl<<"Before traversing :";

for(auto &row:arr){
    for(int &col:row){
        cout<<col<<" ";
    }
    cout<<endl;
}
//3. traverse array row to col .sol diogonals are
// Three approch 1.plus minus 2.Tempory variable 3. Xor
traversing(arr,row,col);

cout<<endl<<"After traversing :";
for(auto &row:arr){
    for(int &col:row){
        cout<<col<<" ";
    }
    cout<<endl;
}



//    int colsize=sizeof(arr)/sizeof(arr[0]);
//    int rowsize=sizeof(arr[0])/sizeof(arr[0][0]);


 
 






}