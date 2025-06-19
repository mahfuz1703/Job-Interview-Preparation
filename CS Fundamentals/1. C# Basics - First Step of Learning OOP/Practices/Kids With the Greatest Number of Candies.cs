// Problem - https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/

public class Solution
{
    public IList<bool> KidsWithCandies(int[] candies, int extraCandies)
    {
        int mx = 0;
        foreach (int val in candies)
        {
            mx = Math.Max(mx, val);
        }

        IList<bool> ans = new List<bool>();
        for (int i = 0; i < candies.Length; i++)
        {
            if (candies[i] + extraCandies >= mx)
            {
                ans.Add(true);
            }
            else ans.Add(false);
        }

        return ans;
    }
}

// Time Complexity: O(n), where n is the length of the input array candies.
// Space Complexity: O(n).