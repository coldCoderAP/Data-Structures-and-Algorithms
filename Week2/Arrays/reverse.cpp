#include <iostream>
using namespace std;
// practise revrese using element.adddition-substraction,XOR,swap() fun

void reverse(int arr[], int size)
{

    // for loop and while loop are same in while initialization outside loop ,
    // cond in (),incre/decre in {}
 
    int start = 0;
    int end = size - 1;

    // 1)approch logic build by programer
    while (start <= end)
    {
        int ele = arr[start];
        arr[start] = arr[end];
        arr[end] = ele;

        start++;
        end--;
    }

    // 2) approch  using swap() method
    // while (start <= end)
    // {
    //    swap(arr[start],arr[end]);

    //     start++;
    //     end--;
    // }

    // 3.using for loop . in for initialization,cond, incre/decre in only for loop
    
    // for(int left=0,right=size-1;left<right; left++,right-- ){
    //     swap(arr[left],arr[right]);
    // }
}

void print(int arr[], int si)
{
    for (int i = 0; i < si; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[6] = {2, 3, 4, 11, 22, 22};
    int arr2[5] = {3, 33, 544, 512, 214};

    reverse(arr1, 6);
    reverse(arr2, 5);

    print(arr1, 6);
    print(arr2, 5);
}
