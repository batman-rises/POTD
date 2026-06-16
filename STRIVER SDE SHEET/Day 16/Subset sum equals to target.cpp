
class Solution{   
public:
    bool func(vector<int> &arr,int i ,int k,vector<vector<int>> &dp){
        if(k==0)return true;
        if(i<0)return false;
        //BASE CASE
        if(i==0){
            if(k==arr[0]){
                return true;
            }
            return false;
        }
        
        if(dp[i][k] != -1)return dp[i][k];
        
        bool notPick=func(arr,i-1,k,dp);
        bool pick=false;
        if(arr[i] <= k){
            pick=func(arr,i-1,k-arr[i],dp);
        }
        return dp[i][k]=pick||notPick;
    }
    bool isSubsetSum(vector<int>arr, int target){
        int n=arr.size();
        vector<vector<int>> dp(n+1,vector<int> (target+1,-1));
        return func(arr,n-1,target,dp);
    }
};