class Solution {
public:
    int firstStableIndex(vector<int>& a, int k) {
        int n=a.size();
        int ans=INT_MAX;
        
        if(n==1)return 0;
        
        vector<int> preMax(n),suffMin(n);
        
        preMax[0]=a[0];
        for(int i=1;i<n;i++){
            preMax[i]=max(a[i],preMax[i-1]);
        }
        
        suffMin[n-1]=a[n-1];
        for(int i=n-2;i>=0;i--){
            suffMin[i]=min(a[i],suffMin[i+1]);
        }
        
        for(int i=0;i<n;i++){
            int maxi=preMax[i];
            int mini = suffMin[i];
            if(maxi-mini <= k){
                ans=i;
                break;
            }
        }
        
        return ans==INT_MAX ? -1 : ans;
    }
};