class Solution {
    boolean columnAndRow(char[][] board, int givenRow, int givenCol, char val){
        for(int row = 0; row < 9; row++){
            if(row == givenRow) continue;
            else if(board[row][givenCol] == val) return true;
        }

        for(int col = 0; col < 9; col++){
            if(col == givenCol) continue;
            else if(board[givenRow][col] == val) return true;
        }

        return false;
    }

    boolean box(char[][] board, int givenRow, int givenCol, char val){
        int boxRow = givenRow - givenRow%3;
        int boxCol = givenCol - givenCol%3;

        for(int row = boxRow; row < boxRow + 3; row++){
            for(int col = boxCol; col < boxCol  + 3; col++){
                if(row == givenRow && col == givenCol) continue;
                else if(board[row][col] == val) return true;
            }
        }

        return false;
    }

    boolean isValid(char[][] board, int givenRow, int givenCol, char val){
        return !(columnAndRow(board, givenRow, givenCol, val) || box(board, givenRow, givenCol, val));
    }
    public boolean isValidSudoku(char[][] board) {
        
        for(int row = 0; row < 9; row++){
            for(int col = 0; col < 9; col++){
                if(board[row][col] >= '1' && board[row][col] <= '9'){
                    if(!isValid(board, row, col, board[row][col])){
                        return false;
                    }
                }
            }
        }

        return true;

    }
}
