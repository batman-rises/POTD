class Solution {
public:
    typedef long long ll;
    ll solve(int i,int j,vector<int>& robot,vector<int>& positions,vector<vector<ll>> &dp){
        if(i>=robot.size())
            return 0;
        if(j>=positions.size())
            return 1e18;
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        ll take=abs(robot[i]-positions[j])+solve(i+1,j+1,robot,positions,dp);
        ll notTake=0+solve(i,j+1,robot,positions,dp);
        return dp[i][j]=min(take,notTake);
    }
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        sort(robot.begin(),robot.end());
        sort(factory.begin(),factory.end());
        //factory is 2d where [(pos,limit)...]->matlab ek particular factory kitne robots ko fix kar payega
        //so for convinience mai wo 2d array ko 1d kar dunga
        vector<int> positions;
        for(int i=0;i<factory.size();i++){
            int limit=factory[i][1];
            int pos=factory[i][0];
            for(int j=0;j<limit;j++){
                positions.push_back(pos);
            }
        }
        int n=robot.size();
        int m=positions.size();
        vector<vector<ll>> dp(n+1,vector<ll> (m+1,-1));
        return solve(0,0,robot,positions,dp);
    }
};