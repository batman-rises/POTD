class Solution {
    public int minimumDistance(int[] a) {
        int n = a.length;
        if (n < 3) return -1;
        
        int mini = 100000000;
        boolean found = false;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] != a[j]) continue; 
                for (int k = j + 1; k < n; k++) {
                    if (a[i] == a[k]) {
                        // Formula: abs(i-j) + abs(j-k) + abs(k-i)
                        // Simplified since i < j < k: 2 * (k - i)
                        int dist = 2 * (k - i); 
                        if (dist < mini) mini = dist;
                        found = true;
                    }
                }
            }
        }
        return found ? mini : -1;
    }
}