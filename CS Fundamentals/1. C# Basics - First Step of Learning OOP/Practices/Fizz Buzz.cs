// Problem - https://leetcode.com/problems/fizz-buzz/description/

public class Solution
{
    public IList<string> FizzBuzz(int n)
    {
        IList<string> ans = new List<string>();

        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
            {
                ans.Add("FizzBuzz");
            }
            else if (i % 3 == 0)
            {
                ans.Add("Fizz");
            }
            else if (i % 5 == 0)
            {
                ans.Add("Buzz");
            }
            else
            {
                ans.Add($"{i}");
            }
        }

        return ans;
    }
}

// Time Complexity: O(n), where n is the input number.
// Space Complexity: O(n), since we are storing the results in a list of size n.