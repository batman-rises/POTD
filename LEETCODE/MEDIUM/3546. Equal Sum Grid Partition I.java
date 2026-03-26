class Solution {
    public boolean canPartitionGrid(int[][] a) {
        int m = a.length;
        int n = a[0].length;

        long total = 0;

        long[] rowSum = new long[m];
        long[] colSum = new long[n];

        // Compute total, row sums, and column sums
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                total += a[i][j];
                rowSum[i] += a[i][j];
                colSum[j] += a[i][j];
            }
        }

        // If total is odd → cannot split equally
        if (total % 2 != 0) return false;

        // Check vertical partition
        long left = 0;
        for (int j = 0; j < n - 1; j++) {
            left += colSum[j];
            long right = total - left;

            if (left == right) return true;
        }

        // Check horizontal partition
        long upper = 0;
        for (int i = 0; i < m - 1; i++) {
            upper += rowSum[i];
            long lower = total - upper;

            if (upper == lower) return true;
        }

        return false;
    }
}