#include<iostream>
using namespace std;

float kmToMiles(float km){

float _1_mile=0.621371;
 return km*_1_mile;
}

int main(){
     float km;
    cout<<"Enter the Kilometer :";
    cin>>km;
    cout<<kmToMiles(km);

}