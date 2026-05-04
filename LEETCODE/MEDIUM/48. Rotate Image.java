class Solution {
    void reverse(int[] a){
        int l=0;
        int r=a.length-1;
        while(l<r){
            int t=a[l];
                a[l]=a[r];
                a[r]=t;
                l++;
                r--;
        }
        return;
    }
    public void rotate(int[][] a) {
        int n=a.length;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int t=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=t;
            }
        }
        for(int i=0;i<n;i++){
            reverse(a[i]);
        }
        return;
    }
}