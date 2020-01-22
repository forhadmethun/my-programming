package leetcode.array;

public class AvailableCapturesforRook_999 {
    public int numRookCaptures(char[][] board) {
        int x = 0, y = 0;
        for(int i = 0; i < board.length; i++){
            for(int j = 0; j < board[i].length; j++){
                if(board[i][j] == 'R'){
                    x = i;
                    y = j;
                    break;
                }
            }
        }
        int count = 0;
        //row wise right
        int r = x, c = y;
        y = c + 1;
        while(y < 8){
            if(board[x][y] == '.'){
                y++;
            }
            else if(board[x][y] == 'p'){
                count++;
                break;
            }
            else break;
        }

        //row wise left
        y = c - 1;
        while(y >= 0){
            if(board[x][y] == '.'){
                y--;
            }
            else if(board[x][y] == 'p'){
                count++;
                break;
            }
            else break;
        }
        //column wise up
        y = c;
        x = r - 1;
        while(x >= 0){
            if(board[x][y] == '.'){
                x--;
            }
            else if(board[x][y] == 'p'){
                count++;
                break;
            }
            else break;
        }
        //colum wise down
        x = r + 1;
        while(x < 8){
            if(board[x][y] == '.'){
                x++;
            }
            else if(board[x][y] == 'p'){
                count++;
                break;
            }
            else break;
        }
        return count;
    }
}
