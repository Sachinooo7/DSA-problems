
class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int r = board.size();
        int c = board[0].size();
        vector<int> dirX = {1,-1,0,0,-1,1,1,-1};
        vector<int> dirY = {0,0,1,-1,1,1,-1,-1};

        auto isValid = [&](int i, int j) {
            return i >= 0 && i < r && j >= 0 && j < c;
        };

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                int live = 0;
                for(int d = 0; d < 8; d++) {
                    int ni = i + dirX[d];
                    int nj = j + dirY[d];
                    if (isValid(ni, nj)) {
                        if (board[ni][nj] == 1 || board[ni][nj] == 2)
                            live++;
                    }
                }

                if (board[i][j] == 0) {
                    if (live == 3) board[i][j] = 3;
                } else {
                    if (live < 2 || live > 3) board[i][j] = 2;
                }
            }
        }

        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if (board[i][j] == 2) board[i][j] = 0;
                else if (board[i][j] == 3) board[i][j] = 1;
            }
        }
    }
};
