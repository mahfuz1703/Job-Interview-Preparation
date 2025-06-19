// Problem - https://leetcode.com/problems/find-the-difference/description/

public class Solution
{
    public char FindTheDifference(string s, string t)
    {
        // int[] ch = new int[26];

        // foreach (char c in s)
        // {
        //     ch[c - 'a']++;
        // }

        // foreach (char c in t)
        // {
        //     ch[c - 'a']--;
        // }

        // for (int i = 0; i < 26; i++)
        // {
        //     if (ch[i] != 0)
        //     {
        //         return (char)(i + 'a');
        //     }
        // }

        // return '?';

        // More efficient
        int ans = 0;
        foreach (char c in t)
        {
            ans += c;
        }

        foreach (char c in s)
        {
            ans -= c;
        }

        return (char)(ans);
    }
}

// Time Complexity: O(n) // Size of the string
// Space Complexity: O(1) // Fixed size array of 26 characters