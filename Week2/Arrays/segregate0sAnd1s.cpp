#include<iostream>
#include <bits/stdc++.h> 
using namespace std;


int sorting(int a[],int n){

    int l=0;
    int h=n-1;

    // Way 1

    // while(l<h){

    //     while(a[l]==0 && l<h){
    //         l++;
    //     }

    //     while(a[h]==1 && l<h){
    //         h--;
    //     } 
    //     swap(a[l],a[h]);
    //     l++;
    //     h--; 
    // }


    // Way 2
    while(l<h){

        if(a[l]==0){
           l++;
        }else if(a[h]==1){
            h--;
        }else{
        swap(a[l],a[h]);
            l++;
            h--;
        }
    }

}

int main()
{
 int a[]={0,1,0,1,0,1,0,1,0,1,0};
int size=sizeof(a)/sizeof(int);

sorting(a,size);


for(int i=0;i<size;i++){

cout<<a[i]<<" ";
}

}