#include <iostream>
using namespace std;

// lenear search means search in line from start to end
bool search(int arr[], int size, int ser)
{

//    0 means false and 1 means trues
   bool isFound=false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ser)
        {
            isFound=true;
            return 1;
        }
    }

    return isFound;
}

int main()
{

    int arr[] = {1, 23, 4, 5, 6, 34, 5, 6, 7, 33};

    cout << "Enter the element you want search" << endl;
    int ele;
    cin >> ele;
    int arrSize = sizeof(arr) / sizeof(int);

    bool res = search(arr, arrSize, ele);

    if (res)
    {
        cout << "The element is present";
    }
    else
    {
        cout << "Not present";
    }

    return 0;
}