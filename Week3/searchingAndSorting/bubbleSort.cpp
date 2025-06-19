#include<iostream>
#include<vector>

using namespace std;

void showArr(vector<int> & v){

    for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
    }
    cout<<endl;
}
//In bubble sort we are storing ele in last 
void bubbleSort(vector<int> &arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-i-1;j++){ 
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}


//In Insertion sort comparting element and store at first 
void selectionSort(vector<int> &arr){
    cout<<"Using Selection Sort"<<endl;
    //i=0;i<arr.size()-1 beacuse wehave to sort n-1 element (if n=5 then we have sort 4 ele only)
    for(int i=0;i<arr.size()-1;i++){
        int minIndex=i;//ith ele hi smallest hai

        for(int j=i+1;j<arr.size();j++){ 
            if(arr[j]<arr[i]){
                minIndex=j; 
            }
        }
        //swap ith and mid element 
        swap(arr[i],arr[minIndex]);
    }
}


void insertionSort(vector<int> &v){
    cout<<"using Insertion sort"<<endl;
    int n=v.size();
    //i=0 kok chood dete hai

    for(int i=1;i<n;i++){
        int key=v[i];
        int j=i-1;

        while(j>=0 && v[j]>key ){
              v[j+1]=v[j];
              j--;
        }

        v[j+1]=key; 
    }
}
int main(){

    vector<int> arr={5,4,3,2,1}; 
    showArr(arr);

    // bubbleSort(arr);
    
    // selectionSort(arr);
    insertionSort(arr);
    showArr(arr);

}