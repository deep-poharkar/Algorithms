// Identification of the problem: arr or str given , subarray or substring asked , window size or condition given, max or min asked.
//  Sliding Window Technique: Fixed Size Window
//  Time Complexity: O(n)
//  Space Complexity: O(1)

int maximumSumSubarray(int k, vector<int> &Arr, int n)
{
    int i, j = 0;
    int sum = 0;
    int maxSum = INT_MIN;
    while (j < n)
    {
        sum = sum + Arr[j]; // calculation of sum to reduce time complexity
        if (j - i + 1 < k)
        {
            j++; // inc j till window size is reached
        }
        else if (j - i + 1 == k)
        {                              // when window size is reached
            maxSum = max(maxSum, sum); // update maxSum
            sum = sum - Arr[i];        // remove the first element of the window
            i++;
            j++;
        }
    }
    return maxSum;
};
