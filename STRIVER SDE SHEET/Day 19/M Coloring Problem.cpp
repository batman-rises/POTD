class Solution{
public:
    bool isSafe(int node,int col,vector<vector<int> >& edges, int n, vector<int> &vis){
        for(auto it:edges[node]){
            if(vis[it]==col)
                return false;
        }
        return true;
    }
    bool func(int node,vector<vector<int> >& edges, int m, int n, vector<int> &vis){
        if(node==n)return true;

        for(int i=1;i<=m;i++){
            if(isSafe(node,i,edges,n,vis)){
                vis[node]=i;
            if(func(node+1,edges,m,n,vis))
                return true;
            
            //backtrack
                vis[node]=0;
            }
        }
        return false;
    }
    bool graphColoring(vector<vector<int> >& edges, int m, int n) {
    	//your code goes here
        vector<int> vis(n,0);
        vector<vector<int>> adj(n);

        for(auto &e : edges){
            int u = e[0];
            int w = e[1];
        
            adj[u].push_back(w);
            adj[w].push_back(u);
        }
        return func(0,adj,m,n,vis);
    }
};