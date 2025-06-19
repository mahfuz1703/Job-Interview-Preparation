// Problem - https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/

public class Solution
{
    public int MostWordsFound(string[] sentences)
    {
        int ans = 0;

        foreach (string str in sentences)
        {
            int space = 0;
            for (int i = 0; i < str.Length; i++)
            {
                if (str[i] == ' ') space++;
            }

            if (space + 1 > ans)
            {
                ans = space + 1;
            }
        }
        return ans;
    }
}

// Time Complexity: O(n * m), where n is the number of sentences and m is the average length of each sentence.
// Space Complexity: O(1), since we are using a constant amount of extra space.