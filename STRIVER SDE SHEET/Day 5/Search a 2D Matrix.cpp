class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {
        int m=a.size();
        int n=a[0].size();
        int l=0;
        int h=(m*n)-1;
        while(l<=h){
            int mid=(l+h)/2;
            int r=mid/n;
            int c=mid%n;
            if(a[r][c] == target)return true;
            else if(a[r][c] > target){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return false;
    }
};