// Que.01  Minimum and maximum of an array

#include <iostream>

using namespace std;

class minMax
{
public:
    void getMinMax(int arr[], int n)
    {
        int min, max;
        if(n == 1)
        {
            min = max = arr[0];
        }

        if(arr[0] < arr[1])
        {
            min = arr[0];
            max  = arr[1];
        }
        else {
            min = arr[1];
            max = arr[0];
        }

        for(int i = 2; i < n; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
            }
            else if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        cout<<"min: "<<min<<endl;
        cout << "max: "<<max;
    }
};
int main()
{
    minMax find;
    int arr[] = {2, 3, 6, 5, 1, 4, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    find.getMinMax(arr, n);

    return 0;
}

