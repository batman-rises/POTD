class Solution {
public:
    vector<int> getBiggestThree(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        set<int>st;

        auto addToSet = [&](int val){
            st.insert(val);
            if(st.size() > 3){
                st.erase(begin(st));
            }
        };
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                addToSet(grid[i][j]);
                for(int size=1;
                i+size<m && j+size<n && i-size>=0 && j-size>=0
                ;size++){
                    int s=0;
                    for(int k=0;k<size;k++){
                        //top to right
                        s+=grid[i-size+k][j+k];
                        //right to bottom
                         s+=grid[i+k][j+size-k];
                        //bottom to left
                         s+=grid[i+size-k][j-k];
                        //left to top
                         s+=grid[i-k][j-size+k];
                    }
                    addToSet(s);
                }
            }
        }
        return vector<int>(rbegin(st),rend(st));
    }
};