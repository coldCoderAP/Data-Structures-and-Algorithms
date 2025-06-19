#include<iostream> 
using namespace std;


// in left shift value added to binary 
// in right shift value removed from binary
int main(){

int a=8; /* Binary :  1 0 0 0 */

int b=8<<2;  /* binary  1 0 0 0 0 0  ,two bits added to binary of a*/

cout<<"Left shift of b : "<<b<<endl;

int c=a>>2; /* value stored in c is 2, two bits are removed from binary */

cout<<"Right shift of a : "<<c;
  

}