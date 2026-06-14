class Solution {
public:
    
    int trap(vector<int>& a) {
        int n=a.size();
        vector<int> leftMaxm(n);
        leftMaxm[0]=a[0];
        
        for(int i=1;i<n;i++){
            leftMaxm[i]=max(a[i],leftMaxm[i-1]);
        }
        
        vector<int> rightMaxm(n);
        rightMaxm[n-1]=a[n-1];
        
        for(int i=n-2;i>=0;i--){
            rightMaxm[i]=max(a[i],rightMaxm[i+1]);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans+=(min(rightMaxm[i],leftMaxm[i]) - a[i]);
        }
        return ans;
    }
};