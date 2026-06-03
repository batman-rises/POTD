class Solution {
public:
    void rotate(vector<vector<int>>& a) {
        int n=a.size();
        //step 1 : transpose
        for(int i=0;i<=n-2;i++){
            for(int j=i+1;j<n;j++){
                swap(a[i][j],a[j][i]);
            }
        }

        //step 2 : reverse eacch row
        for(int i=0;i<n;i++){
            reverse(a[i].begin(),a[i].end());
        }
    }
};