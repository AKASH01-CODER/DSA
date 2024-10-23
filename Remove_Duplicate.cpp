#include<bits/stdc++.h>

using namespace std;

int remove_duplicate(int arr[], int length)
{
    set<int> seen;
    int index = 0;
    for(int i= 0; i<length; i++)
    {
        if(seen.find(arr[i])==seen.end())
        {
            seen.insert(arr[i]);
            arr[index] = arr[i];
            index++;
        }
    }
    cout<<"Array without duplicate elements: ";
    for(int i=0; i< index; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
    
}

int main()
{
    int arr[] = {32, 1,5,1,5,64};
    int length = sizeof(arr)/sizeof(arr[0]);
    remove_duplicate(arr, length);
    return 0;
}