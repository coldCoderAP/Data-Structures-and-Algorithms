#include<iostream>
using namespace std;

int RightsShiftArrayByK(int arr[],int n,int k){

    // Store the Last elements in temp array

    int temp[k-1];
    int first[n-k];
    // Step 1: store last element in temp array (Right shifted element).
    for(int i=0;i<k;i++){
        // n-1-i gives last elemnt to first element until k
        temp[i]=arr[n-1-i];
    }

    // Step2:store first element in first array 

    for(int i=0;i<n-k ;i++){
        first[i]=arr[i]; 
    }
 
//After placing all first array ele in arr[], to get next index to palce last array ele we have to palce initialization of i ouside of for.

 int i=0;


//  Step 3:store last element to arr[]
 for(i=0;i<k;i++){
    arr[i]=temp[i];
 }
// Step 4: Store first element to
for(int k=0,j=i;j<n;j++,k++){
    arr[j]=first[k];
}

   
     
}

int main(){

    int arr[]={10,20,30,40,50,60};
    
    int size=sizeof(arr)/sizeof(int);
    int k;
    cout<<"Enter Array shift by :"<<endl;
    cin>>k;

    RightsShiftArrayByK(arr,size,k);

    // // Print After shifting

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }


}