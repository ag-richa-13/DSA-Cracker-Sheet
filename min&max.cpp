// Que.01  Minimum and maximum of an array

#include <iostream>

using namespace std;

class minMax
{
public:
    void getMinMax(int nums[], int n)
    {
        int min, max;
        if(n == 1)
        {
            min = max = nums[0];
        }

        if(nums[0] < nums[1])
        {
            min = nums[0];
            max  = nums[1];
        }
        else {
            min = nums[1];
            max = nums[0];
        }

        for(int i = 2; i < n; i++)
        {
            if(nums[i] < min)
            {
                min = nums[i];
            }
            else if(nums[i] > max)
            {
                max = nums[i];
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

