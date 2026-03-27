import java.util.*;

class Solution {
    long total = 0;

    public boolean checkHorCut(int[][] grid) {
        int m = grid.length;
        int n = grid.length;
        long top = 0;
        Set<Long> st = new HashSet<>();

        // Iterate through rows except the last one to ensure a horizontal cut
        for (int i = 0; i < m - 1; i++) {
            for (int j = 0; j < n; j++) {
                top += grid[i][j];
                st.add((long) grid[i][j]);
            }

            long bottom = total - top;
            long diff = top - bottom;

            // Check if parts are already equal
            if (diff == 0) return true;

            // Check specific corner/boundary cases based on your diff logic
            if (diff == (long) grid) return true;
            if (diff == (long) grid[n - 1]) return true;
            if (diff == (long) grid[i]) return true;

            // Check if any previously seen element can bridge the difference
            if (i > 0 && n > 1 && st.contains(diff)) return true;
        }
        return false;
    }

    public boolean canPartitionGrid(int[][] grid) {
        int m = grid.length;
        int n = grid.length;
        total = 0; // Reset total for each call

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                total += grid[i][j];
            }
        }

        // 1. Check original Horizontal Cut
        if (checkHorCut(grid)) return true;

        // 2. Check Reversed Horizontal Cut (Bottom-up)
        reverseRows(grid);
        if (checkHorCut(grid)) return true;
        reverseRows(grid); // Reverse back to original state

        // 3. Check Vertical Cut (by Transposing)
        int[][] transpose = new int[n][m];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                transpose[j][i] = grid[i][j];
            }
        }

        if (checkHorCut(transpose)) return true;

        // 4. Check Reversed Vertical Cut
        reverseRows(transpose);
        if (checkHorCut(transpose)) return true;

        return false;
    }

    // Helper method to simulate C++ std::reverse for 2D arrays (reversing rows)
    private void reverseRows(int[][] matrix) {
        int left = 0, right = matrix.length - 1;
        while (left < right) {
            int[] temp = matrix[left];
            matrix[left] = matrix[right];
            matrix[right] = temp;
            left++;
            right--;
        }
    }
}