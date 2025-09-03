#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

// approach 1 TC: O(N^2), SC:O(1)
int missingNumber(vector<int> &nums, int N)
{

    for (int i = 1; i < N; i++)

    {
        int found = 0;
        for (int x : nums)
        {
            if (i == x)
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
            return i;
    }
}

// approach 2 TC: O(NlogN) for sorting else O(N), SC:O(1)
int missingNumber2(vector<int> &nums, int N)
{
    // first sort the array
    sort(nums.begin(), nums.end());

    for (int i = 0; i < N - 1; i++)
    {
        if (nums[i] != (nums[i + 1] - 1))
        {
            return nums[i] + 1;
        }
    }
}

// approach 3 TC: O(N), SC:O(1)
int missingNumber3(vector<int> &nums, int N)
{
    int sum_of_n = (N * (N + 1)) / 2; // fixed formula
    int sum_of_array = accumulate(nums.begin(), nums.end(), 0);
    // formula sum_of_n = sum_of_array + missing_num
    // missing_num = sum_of_n - sum_of_array
    return sum_of_n - sum_of_array;
}

// approach 4 TC: O(N), SC:O(1)
int missingNumber4(vector<int> &nums, int N)
{
    sort(nums.begin(), nums.end());

    for (int i = 0; i < N; i++)
    {
        if ((nums[i] ^ i + 1) != 0)
        {
            return i + 1;
        }
    }
}

int main()
{
    int N = 8;
    vector<int> nums = {1, 2, 4, 6, 3, 7, 5};
    cout << "missing num1: " << missingNumber(nums, N) << endl;
    cout << "missing num2: " << missingNumber2(nums, N) << endl;
    cout << "missing num3: " << missingNumber3(nums, N) << endl;
    cout << "missing num4: " << missingNumber4(nums, N) << endl;
}