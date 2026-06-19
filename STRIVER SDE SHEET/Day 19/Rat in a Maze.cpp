class Solution{
    public:
    void func(int r,int c,int m,int n,vector<vector<int> > &grid,string res,
    vector<string> &ans,int delrow[],int delcol[],vector<vector<int> > &vis){
        if(r==m-1 && c==n-1){
            ans.push_back(res);
            return;
        }
        string dir="DLRU";
        for(int i=0;i<4;i++){
            int nrow=r+delrow[i];
            int ncol=c+delcol[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n
                && grid[nrow][ncol]==1 && vis[nrow][ncol]==-1 ){
                    vis[nrow][ncol]=1;
                    func(nrow,ncol,m,n,grid,res+dir[i],ans,delrow,delcol,vis);
                    vis[nrow][ncol]=-1;
                }
        }
        return;
    }
    vector<string> findPath(vector<vector<int> > &grid) {
        //your code goes here
        vector<string> ans;
        string res="";
        int m=grid.size();
        int n=grid[0].size();
        int delrow[]={1,0,0,-1};
        int delcol[]={0,-1,1,0};
        vector<vector<int> > vis(m,vector<int> (n,-1));
        vis[0][0]=1;
        func(0,0,m,n,grid,res,ans,delrow,delcol,vis);

        return ans;
    }
};