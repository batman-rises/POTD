class Solution {
    public boolean areSimilar(int[][] a, int k) {
        int m = a.length;
        int n = a.length;
        
        // If k is greater than the number of columns, 
        // the effective shift is k % n.
        k = k % n;
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int future;
                
                // Even-indexed rows: Shift Left
                // Odd-indexed rows: Shift Right
                if (i % 2 == 0) {
                    future = (j + k) % n;
                } else {
                    // Adding 'n' before modulo handles negative results in Java
                    future = (j - k + n) % n;
                }
                
                // If the element at the current position doesn't match 
                // the element at the shifted position, the matrix changes.
                if (a[i][j] != a[i][future]) {
                    return false;
                }
            }
        }
        
        return true;
    }
}