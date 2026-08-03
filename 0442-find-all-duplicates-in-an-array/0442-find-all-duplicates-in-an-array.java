class Solution {
    public List<Integer> findDuplicates(int[] nums) {
        int n = nums.length;
        List<Integer> ans = new ArrayList<>();
        int[] freq = new int[n + 1];

        // Count the frequency of each number
        for (int num : nums) {
            freq[num]++;
        }

        // Add numbers that appear more than once
        for (int i = 1; i <= n; i++) {
            if (freq[i] > 1) {
                ans.add(i);
            }
        }

        return ans;
    }
}