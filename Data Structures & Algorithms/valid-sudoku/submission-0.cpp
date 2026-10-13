class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char,int>r[9];
        map<char,int>c[9];
        map<char,int>s[9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char ch = board[i][j];
                int sq= (i/3)*3 + j/3;
                if(board[i][j]=='.')
                  continue;
                if(r[i].find(ch)!=r[i].end() || c[j].find(ch)!=c[j].end() || s[sq].find(ch)!=s[sq].end()){
                    return false;
                }
                 r[i][ch]++;
                 c[j][ch]++;
                 s[sq][ch]++;
            }
        }
        
        return true;
    }
};
