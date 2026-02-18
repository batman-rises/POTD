class Solution {
public:
    int minRemoval(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int n=a.size();
        int i=0,j=0;
        int mini=a[0];
        int maxi=a[0];
        int longest=-1;
        while(j<n){
            mini=a[i];
            maxi=a[j];
            while(i<n && (long long)maxi > (long long)mini*k){
                i++;
                mini=a[i];
            }
            longest=max(longest,j-i+1);
            j++;
        }
        return n-longest;
    }
};