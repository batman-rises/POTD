class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int result = 0;
        vector<int>prevRow(n,0);
        for(int row = 0; row < m; row++) {
            vector<int> curRow=matrix[row];

            for(int col = 0; col < n; col++) {
                
                if(curRow[col] == 1) {
                    curRow[col] += prevRow[col];
                }
                
            }
                        prevRow=curRow;

           sort(curRow.begin(),curRow.end(),greater<int>());
            
            //vector<int> currRow = matrix[row];
            //sort(begin(currRow), end(currRow), greater<int>());
            for(int col = 0; col < n; col++) {
                int base   = (col+1); 
                int height = curRow[col];
                
                result = max(result, base*height);
            }
        
        }
        
        return result;
    }
};
