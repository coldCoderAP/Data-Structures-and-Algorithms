#include<iostream>
using namespace std;

int main(){
    

    int staticarray[]= {1,2,3,4,5};

    // dynamic array 

    int dyArr[10];
    int size=sizeof(dyArr) / sizeof(int);

    cout<<size;
    for(int i=0;i<size;i++){
      cout<<"Enter value "<<i<<endl;
      cin>>dyArr[i];

    }
cout<<endl<<"Printing array "<<endl;
    for(int i=0;i<size;i++){
        cout<<dyArr[i]*2<<endl;
        
    }



}
