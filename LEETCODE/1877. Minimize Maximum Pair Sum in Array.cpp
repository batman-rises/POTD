class Solution {
public:
    int minPairSum(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        int maxi=-1;
        for(int i=0;i<(n/2);i++){
            maxi=max(maxi,a[i]+a[n-i-1]);
        }
        return maxi;
    }
};