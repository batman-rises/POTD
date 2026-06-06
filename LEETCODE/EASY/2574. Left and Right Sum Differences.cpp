class Solution {
public:
    vector<int> leftRightDifference(vector<int>& a) {
        int n=a.size();
        vector<int> ans;
        int left=0;
        int right=0;
        vector<int> leftSum(n,0);
        vector<int> rightSum(n,0);
        leftSum[0]=left;
        for(int i=1;i<n;i++){
            
            left+=a[i-1];
            
            leftSum[i]=left;
            
        }
        for(int i:leftSum){
            cout<<i<<" ";
        }
        cout<<endl;
        rightSum[n-1]=right;
        for(int i=n-2;i>=0;i--){
            
            right+=a[i+1];
            
            rightSum[i]=right;
            
        }
        for(int i:rightSum){
            cout<<i<<" ";
        }
        for(int i=0;i<n;i++){
            ans.push_back(abs(leftSum[i]-rightSum[i]));
        }
        return ans;
    }
};