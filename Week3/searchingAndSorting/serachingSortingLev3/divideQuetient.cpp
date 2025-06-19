#include<iostream>

using namespace std;

int getQuetient(int divisor,int divident){
  
    int s=0;
    int e=divident;
    int ans=-1;
    int mid=s+(e-s)/2;

    while(s<=e){
        if(mid*divisor==divident){
            return mid;
        }else if(mid*divisor>divident){
            e=mid-1;
        }else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

    return ans; 
}

int main(){

    int divisor=5;
    int divident=-35; 

    // abs()  fun ives only positive value 
    //getting only posive ans from function and then we are converting into negative
    
    int ans=getQuetient(abs(divisor),abs(divident));
    
    
    //if any no is negative then ans should be neative (-/-=+,+/+=+,+/-=-,-/+=-, )
    if((divisor>0 && divident<0)||(divisor<0 && divident>0)){
        ans=0-ans;
    }
    cout<<"Quetient is : "<<ans;



}