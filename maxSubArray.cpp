// Que.03  Maximum SubArray

#include <iostream>
#include <climits>

using namespace std;


// Brute Force 
int maxSubArray(int arr[], int n)
{
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)                                
        {
            int sum = 0;
            for(int k = i; k <= j; k++)

            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}


// Cumulative Approch

int maxSubArray2(int arr[], int n)
{
    int cumSum[n + 1];
    cumSum[0] = 0;
    for(int i = 1; i < n; i++)
    {
        cumSum[i] = cumSum[i -1] + arr[i - 1];
    }
    int maxSum = INT_MIN;
    for(int i = 1; i < n; i++)
    {
        int sum = 0;
        maxSum = max(maxSum, cumSum[i]);
        for(int j = 1; j <= i; j++)
        {
            sum = cumSum[i] - cumSum[j - 1];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int maxSubArray3(int arr[], int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main()
{
    int arr1[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    int arr2[] = {-1, 2, -3, 4, -2, 7};
    int m = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[] = {1};
    int k = sizeof(arr3)/sizeof(arr3[0]);

    //Brute Force Approch
    cout<<"Max sum of sub arrays by brute force approach: "<<maxSubArray(arr1, n)<<endl;
    //Cumulative Approch
    cout<<"Max sum of sub arrays by commulative approach: "<<maxSubArray2(arr2, m)<<endl;
    //Kadane's Approch
    cout<<"Max sum of sub arrays by kadane's approach: "<<maxSubArray3(arr3, k)<<endl;

    return 0;
}



// For Brute Force Approch, Time Complexity = O(n^3)
// For Cumulative approach, Time Complexity = O(n^2)
// For Kadane's approach, Time Complexity = O(n^2)
