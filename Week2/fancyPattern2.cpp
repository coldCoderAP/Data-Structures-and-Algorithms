#include<iostream>
using namespace std;

int main(){

  int n=4;

int c=1;

// Growing phase
  for(int i=0;i<n;i++){
    for(int j=0;j<i+1;j++){
        cout<<c;
        c++;
        if(j<i){
            cout<<"*";
        }
    }
    cout<<endl;
  }

// Shrinking phase

int start=c-n;
for(int i=0;i<n;i++){
    for(int j=0;j<=n-i-1;j++){
        cout<<start;
        start++;

        if(j<n-i-1){
           cout<<"*";
        }

    }
    start=start-(n-i-1);
    cout<<endl;
}
  

}

// End Of Program


//  ONLY FOR TRYING PURPUESE
// int no=4;
// int count=1; 
//     for(int i=0;i<no;i++){
//       for(int j=0;j<i+1;j++){ 
//           if(j<i){
//              cout<<count<<"*"; 
//           }else{
//             cout<<count;
//           } 
//           count++;
//       }
//       cout<<endl;
//     }
 
//     int start_no=count-no;
//     for(int i=0;i<no;i++){
//       start_no=count-no+i;
//       for(int j=0;j<no-i;j++){

//         if(j<no-i-1){
//           cout<<start_no<<"*";
//         }else{
//           cout<<start_no;
//         }
//           start_no++; 
//       }
//       cout<<endl;
//     }







