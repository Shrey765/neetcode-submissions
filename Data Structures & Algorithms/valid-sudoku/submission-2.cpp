class Solution {
public:
    bool rowCheck(int row, int col, char num, vector<vector<char>>& board){
        for(int i = 0; i < 9; i++){
            if(i != col && board[row][i] == num) return false;
        }

        return true;
    }

    bool colCheck(int row, int col, char num, vector<vector<char>>& board){
        for(int i = 0; i < 9; i++){
            if(i != row && board[i][col] == num) return false;
        }

        return true;
    }

    bool blockCheck(int row, int col, char num, vector<vector<char>> &board){
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                int newRow = (row/3)*3 + i;
                int newCol = (col/3)*3 + j;

                if(newRow == row && newCol == col) continue;
                if(board[newRow][newCol] == num) return false;
            }
        }

        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] >= '1' && board[i][j] <= '9'){
                    if(!rowCheck(i, j, board[i][j], board) || 
                        !colCheck(i, j, board[i][j], board) || 
                        !blockCheck(i, j, board[i][j], board)){
                        return false;
                    }
                }
            }
        }

        return true;
    }
};
