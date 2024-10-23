#include<bits/stdc++.h>

using namespace std;

int findduplicate(int arr[], int length)
{
    set<int> seen;
    cout<<"Duplicate elements: ";
    for(int i= 0; i<length; i++)
    {
        if(seen.find(arr[i])!=seen.end())
        {
            cout<<arr[i]<<" "; 
        }
        else
        {
            seen.insert(arr[i]);
        }
    }
    return 0;
    
}

int main()
{
    int arr[] = {32, 1,5,1,5,64};
    int length = sizeof(arr)/sizeof(arr[0]);
    findduplicate(arr, length);
    return 0;
}