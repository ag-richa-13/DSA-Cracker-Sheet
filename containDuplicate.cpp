// Que.04  Contain Duplicates

#include <iostream>
#include <vector>

using namespace std;

bool conDupli(int arr[], int n)
{
    // time complexity ecxeed  = O(n^2)
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }
    return false;
}

void SelectionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

bool containDuplicate(vector<int> &arr)
{
    int n = arr.size();
    SelectionSort(arr);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> arr1 = {-24500,-24499,-24498,-24497,-24496,29936,29937,29938,29939,29940,29941,29942,29943,29944,29945,29946};
    



    // Time Complexity = O(n^2)
    cout<< "Contain Duplicates: " << conDupli(arr, n);
    cout<<endl;
    //
    cout << "Contain Duplicates: " << containDuplicate(arr1);
    return 0;
}