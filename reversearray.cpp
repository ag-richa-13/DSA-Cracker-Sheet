// Que.02  Reverse an Array

#include <iostream>

using namespace std;

int reverseArray(int nums[], int n)
{
    int st = 0;
    int en = n-1;
    while(st < en) {
        int temp = nums[st];
        nums[st] = nums[en];
        nums[en] = temp;
        st++;
        en--;
    }
}

int main()
{
    int arr[] = {75, 23,76,12, 39};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Before Array: "<<endl;
    cout<<"{";
    for(int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
    cout<<"}";
    cout<<endl;
    reverseArray(arr, n);
    cout<<"Reverse Array: "<<endl;
    cout<<"{";
    for(int i = 0; i < n; i++)
    {
        cout<<" "<<arr[i]<<" ";
    }
    cout<<"}";
}