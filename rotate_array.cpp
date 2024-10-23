#include<bits/stdc++.h>

using namespace std;

int Rotatearray(int arr[], int length)
{
    int arr1[length];
    
    for(int i=0; i<length; i++){
        int index = (i+3)%length;
        arr1[index] = arr[i];
    }
    
    for(int i=0; i<length; i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
    
}

int main()
{
    int arr[] = {32, 4,5,1,100,64};
    int length = sizeof(arr)/sizeof(arr[0]);
    Rotatearray(arr, length);
    return 0;
}