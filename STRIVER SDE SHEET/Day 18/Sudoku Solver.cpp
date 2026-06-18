class Solution {
public:
    bool isValid(vector<vector<char>>& board,int row,int col,char ch){
        for(int i=0;i<9;i++){
            if(board[row][i]==ch)
                return false;
            if(board[i][col]==ch)
                return false;
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==ch)
                return false;
        }
        return true;
    }
    bool solve(vector<vector<char>>& board,int m,int n){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j] == '.'){
                    for(char ch='1'; ch<='9'; ch++){
                        if(isValid(board,i,j,ch)){
                            board[i][j] = ch;
                        
                        if(solve(board,m,n)==true)return true;
                        else
                        board[i][j] = '.';
                    }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        
        solve(board,m,n);
        return;
    }
};