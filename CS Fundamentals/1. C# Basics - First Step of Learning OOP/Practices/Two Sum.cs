// LeetCode Problem: https://leetcode.com/problems/two-sum/
public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> dict = new Dictionary<int, int>();

        for(int i  = 0; i < nums.Length; i++){
            int rem = target - nums[i];

            if(dict.ContainsKey(rem)){
                return new int[] {dict[rem], i};
            }
            if (!dict.ContainsKey(nums[i])) {
                dict.Add(nums[i], i);
            }
        }
        return new int[] {-1, -1};
    }
}

// Time Complexity: O(n)
// Space Complexity: O(1)