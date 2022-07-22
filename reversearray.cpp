#include <iostream>

using namespace std;

int reverseArray(int arr[], int n)
{
    int st = 0;
    int en = n-1;
    while(st < en) {
        int temp = arr[st];
        arr[st] = arr[en];
        arr[en] = temp;
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