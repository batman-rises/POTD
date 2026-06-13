class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(i>0 && a[i]==a[i-1])continue;
            int j=i+1;
            int k=n-1;
            while(j<k){
                int s=(a[i]+a[j]+a[k]);
                if(s>0){
                    k--;
                }else if(s<0){
                    j++;
                }else{
                    ans.push_back({a[i],a[j],a[k]});
                    j++;
                    k--;
                    while(j<k && a[j]==a[j-1]){
                        j++;
                    }
                    while(j<k && a[k]==a[k+1]){
                        k--;
                    }
                }
            }
        }
        return ans;
    }
};