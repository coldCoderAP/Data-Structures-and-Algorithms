#include<iostream>
#include<vector>

using namespace std; 

 
        int mySqrt(int x) {
            int s=0;
            int e=x;
            long long int mid=s+ (e-s)/2;
            //mid*mid gives long value so long long int 
            int ans=-1;
    
            while(s<=e){
                // kya mid hi to answer nahi
                if(mid*mid==x){
                    
                    return mid;
                }
    
                if(mid*mid<x){
                    //ans store karo
                    //right mai jao
                    ans=mid;
                    s=mid+1;
                }else{
                    //left mai jana hai
                    e=mid-1;
                }
                mid=s +( e-s)/2;
            }
            return ans;
            
        }
int main(){
    int x=88;

    int ans=mySqrt(88);
    cout<<"Square of "<<x<<" is :"<<ans;
}
   