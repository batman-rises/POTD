class Solution {
    public int[][] constructProductMatrix(int[][] a) {
        int m = a.length;
        int n = a[0].length;
        int mod = 12345;

        int[][] s = new int[m][n];

        long suff = 1;

        // Suffix pass (bottom-right → top-left)
        for (int i = m - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                s[i][j] = (int) suff;
                suff = (suff * a[i][j]) % mod;
            }
        }

        long pref = 1;

        // Prefix pass (top-left → bottom-right)
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                s[i][j] = (int)((s[i][j] * pref) % mod);
                pref = (pref * a[i][j]) % mod;
            }
        }

        return s;
    }
}