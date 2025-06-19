#include<iostream>

using namespace std;

int  findSqrtBS(int n){


    int s=0;
    int e=n;
    int ans=0;

    while(s<=e){
        int mid=s+(e-s)/2;

        if(mid*mid<=n){
            ans=mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    } 
    return ans;
}


double myPrecisionSqrt(int n){
    double sqrt=findSqrtBS(n);

    double step=0.1; 
    
    int precision=3;//precision means 7.111 (point after numbers)
    
    
    for(int i=0;i<precision;i++){
        double j=sqrt;

        while(j*j<=n){
            sqrt=j;
            j+=step;
        }
        step=step/10;
    }

    return sqrt;
}

int main(){

    int no;
    cin>>no;

    int ans1=findSqrtBS(no);

    double ans2=myPrecisionSqrt(no);

    
    cout<<"In Int :"<<ans1<<endl;
    cout<<"In precison :"<<ans2<<endl;

}