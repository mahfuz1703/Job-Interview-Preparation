// Problem - https://leetcode.com/problems/valid-anagram/description/

public class Solution
{
    public bool IsAnagram(string s, string t)
    {
        if (s.Length != t.Length) return false;

        int[] ch = new int[26];
        for (int i = 0; i < 26; i++)
        {
            ch[i] = 0;
        }

        foreach (char c in s)
        {
            ch[c - 'a']++;
        }

        foreach (char c in t)
        {
            ch[c - 'a']--;
        }

        for (int i = 0; i < 26; i++)
        {
            if (ch[i] != 0) return false;
        }

        return true;
    }
}

// Time Complexity: O(n) // Size of the string
// Space Complexity: O(1) // Fixed size array of 26 characters