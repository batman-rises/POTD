class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {


        int n=grid.size();
        int m=grid[0].size();

        int cnt=0;
        vector<int> a;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                a.push_back(grid[i][j]);
            }
        }

        sort(a.begin(),a.end());
        int size=a.size();

        int median=a[size/2];

        for(int i=0;i<size;i++){
            if((median-a[i]) % x != 0)
                return -1;
            else
                cnt+=(abs(median-a[i]) / x);
        }
        return cnt;
    }
};