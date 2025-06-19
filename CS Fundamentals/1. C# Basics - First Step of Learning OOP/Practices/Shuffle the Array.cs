// Problem - https://leetcode.com/problems/shuffle-the-array/description/

public class Solution
{
    public int[] Shuffle(int[] nums, int n)
    {
        int[] ans = new int[n * 2];

        int indx = 1, i = 0;
        ans[0] = nums[0];
        while (indx < n * 2)
        {
            i += n;
            if (i >= (n * 2))
            {
                i -= (n * 2) - 1;
            }
            // Console.WriteLine(i-1);
            ans[indx] = nums[i];
            indx++;
        }

        return ans;
    }
}

// Time Complexity: O(n), where n is the length of the input array nums.
// Space Complexity: O(n), for the output array ans which stores the shuffled result.