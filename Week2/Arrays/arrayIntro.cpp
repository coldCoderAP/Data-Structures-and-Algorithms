#include <iostream>
using namespace std;

void arraysFun(int arr[] ,int size){

   for(int i=0; i<size;i++){
    cout<<arr[i];
   }
   cout<<endl<<"Sucess"<<endl;

}


int main()
{

    // decleare
    int number[15];
    // accessing an array
    cout << "Value at 14 index " << number[14] << endl;
    cout << "Everything is fine" << endl;

    // Initializing an array
    int second[3] = {5, 6, 7};
    // accessing an element
    cout << "Value at 2 index" << second[2] << endl;

    int third[10] = {2, 3};
    cout << "Printing the array " << endl;
    // print the array
    int tSize = sizeof(third) / sizeof(third[0]);
    cout << "size of array :" << tSize << endl;
    for (int i = 0; i < tSize; i++)
    {
        cout << third[i];
    }
     cout<<endl;
    // Arrays with function 
    int arr[] = {1, 2, 3, 4, 5, 6};  
    int arrSize = sizeof(arr) / sizeof(int);
     cout<<"With Function()"
    arraysFun(arr,arrSize);
}