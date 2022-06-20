//HARD
//https://leetcode.com/problems/n-queens/submissions/

class Solution {
public:
    void getQueens(int col, int n, vector<vector<string>> &ans, vector <string> &board, vector<int> &left, vector<int> &LDiagnol, vector<int> &RDiagnol){
        
        if(col==n){
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++){
            
            if(left[row]==0 && LDiagnol[row+col]==0 &&RDiagnol[(n-1)+(col-row)]==0){
                
                board[row][col]='Q';
                left[row]=1;
                LDiagnol[row+col]=1;
                RDiagnol[(n-1)+(col-row)]=1;
                
                getQueens(col+1, n, ans, board, left, LDiagnol, RDiagnol);
                
                board[row][col]='.';
                left[row]=0;
                LDiagnol[row+col]=0;
                RDiagnol[(n-1)+(col-row)]=0;
            }
        }
    }
    
        
        
        public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n, '.');
        
        vector<int>left(n,0);
        vector<int> LDiagnol(2*n-1,0);
        vector<int> RDiagnol(2*n-1,0);
        for(int i=0; i<n;i++){
            
            board[i]=s;
        }
        
        getQueens(0, n, ans, board, left, LDiagnol, RDiagnol);
        
        return ans;
        
    }
};
