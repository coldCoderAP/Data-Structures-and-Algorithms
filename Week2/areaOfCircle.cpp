#include<iostream>
using namespace std;

float circleArea(float radius){

float circlearea=3.14*radius*radius;

return circlearea;

}

int main(){

    float area=circleArea(5.33);
     
     cout<<"Areaof circle :"<<area;

}