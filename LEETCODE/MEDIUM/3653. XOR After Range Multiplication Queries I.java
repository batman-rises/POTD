import java.util.List;

class Solution {
    private final int MOD = 1_000_000_007;

    public int xorAfterQueries(int[] nums, int[][] queries) {
        // Process each query
        for (int[] q : queries) {
            int l = q[0];
            int r = q[1];
            int k = q[2];
            int v = q[3];

            // Update elements in the range [l, r] with step k
            while (l <= r) {
                // Use long for intermediate multiplication to prevent overflow
                nums[l] = (int) ((1L * nums[l] * v) % MOD);
                l += k;
            }
        }

        // Calculate the XOR sum of the final array
        int res = 0;
        for (int i : nums) {
            res ^= i;
        }

        return res;
    }
}