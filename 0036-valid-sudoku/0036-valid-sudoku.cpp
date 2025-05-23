class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       unordered_set<char>rows[9];
       unordered_set<char>cols[9];
       unordered_set<char>boxes[9];        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                   int box=3*(i/3)+j/3;
                   char value=board[i][j];
                if(rows[i].count(value)||cols[j].count(value)||boxes[box].count(value)) return false;
                rows[i].insert(value);
                cols[j].insert(value);
                boxes[box].insert(value);
            }
        }
        return true;
    }
};