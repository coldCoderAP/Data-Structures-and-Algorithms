#include<iostream>

using namespace std;


// 1 way bruteforce simple
int bruteForceToFindEleInInfiniteArr(int a[],int n,int k){
    cout<<"With Brute Force Liner Search "<<endl;
    int ans=0;
 int i=0;
    while(i<n){
        if(a[i]==k){
            return i;
        } 
        i++; 
    }

    return ans;
}

// 2 Way Exponential search with binary search

int bs(int a[],int s,int e ,int k){ 
    cout<<"With Exponential Search BS"<<endl;
    while(s<=e){

        int mid=s+(e-s)/2;

        if(a[mid]==k){
            return mid;
        }else if(k>a[mid]){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
}

int expoSerach(int a[],int n,int k){

    int i=0;
    int j=1;

    if(a[i]==k) return 0;

    while(a[i]<k){ 
        i=j;
        j=i*2; 
    }

    int start=i;
    int end=j;

    return bs(a,start,end,k);

}


// ==========Print Array function()
void printArr(int a[],int n){
    cout<<"printing Array"<<endl;
    for(int i=0 ;i<n;i++){
        cout<<a[i]<<" ";
    }
}


int main(){
    const int size = 1e6; // 1,000,000 elements
    int* a = new int[size]; // Heap allocation to prevent stack overflow
    // int a[size];

     
    // int n=sizeof(a)/sizeof(a[0]);    if size if decleared then no nedd to find size
    cout<<"Element inserted in array..."<<endl;
    for(int i=0;i<size;i++){
        a[i]=i*2;
    }

    // printArr(a,size);


    int k=32;
    // 1.bruteforce 
//    int ans= bruteForceToFindEleInInfiniteArr(a,size,k);

//    2 .ExpoSearch BS
   int ans=expoSerach(a,size,k);

   cout<<"In Arr Element "<<k<<" at index :"<<ans;

   delete[] a; // Free memory




}

// It makes the code cleaner and easier to read, especially for large numbers. Similarly:

// 1e3 = 1000
// 1e9 = 1000000000