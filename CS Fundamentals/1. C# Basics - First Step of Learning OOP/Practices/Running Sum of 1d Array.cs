// Problem - https://leetcode.com/problems/running-sum-of-1d-array/description/

public class Solution
{
    public int[] RunningSum(int[] nums)
    {
        int[] ans = new int[nums.Length];

        ans[0] = nums[0];

        for (int i = 1; i < nums.Length; i++)
        {
            ans[i] = ans[i - 1] + nums[i];
        }

        return ans;
    }
}

// Time Complexity: O(n), where n is the length of the input array nums.
// Space Complexity: O(n), for the output array ans which stores the running sum.