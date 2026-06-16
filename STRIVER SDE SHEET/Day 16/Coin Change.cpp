class Solution {
public:
    int func(vector<int>& coins,int i, int amount,vector<vector<int>> &dp){
        //base case
        if(i==0){
            if(amount % coins[0] == 0 ){
                return amount/coins[0];
            }else{
                return 1e9;
            }
        }

        if(dp[i][amount] != -1){
            return dp[i][amount];
        }

        int notPick=0+func(coins,i-1,amount,dp);
        int pick=1e9;
        if(coins[i]<=amount)
            pick=1+func(coins,i,amount-coins[i],dp);

        return dp[i][amount]=min(notPick,pick);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>> dp(n+1,vector<int> (amount+1,-1));
        int ans=func(coins,n-1,amount,dp);
        return ans == 1e9 ? -1 : ans;
    }
};