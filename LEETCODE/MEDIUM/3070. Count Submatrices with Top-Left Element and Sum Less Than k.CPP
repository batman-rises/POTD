class Solution {
public:
    int countSubmatrices(vector<vector<int>>& a, int k) {
        int m=a.size();
        int n=a[0].size();
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i-1 >= 0)
                    a[i][j]+=a[i-1][j];
                if(j-1 >= 0)
                    a[i][j]+=a[i][j-1];
                if(i-1 >= 0 && j-1 >=0)
                    a[i][j]-=a[i-1][j-1];

                if(a[i][j] <= k)
                    cnt++;
                else
                    break;
            }
        }
        return cnt;
    }
};