// Problem - https://leetcode.com/problems/richest-customer-wealth/description/

public class Solution
{
    public int MaximumWealth(int[][] accounts)
    {
        int ans = 0;

        foreach (var arr in accounts)
        {
            int cnt = 0;
            foreach (int val in arr)
            {
                cnt += val;
            }

            ans = Math.Max(ans, cnt);
        }

        return ans;
    }
}

// Time Complexity: O(n * m), where n is the number of customers and m is the number of accounts per customer.
// Space Complexity: O(1), since we are using a constant amount of extra space.