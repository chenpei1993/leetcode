bool isValidSudoku(char** board, int boardRowSize, int boardColSize) {
    
    if(board==NULL){
        return false;
    }
    
    int m=0,n=0;
    char c;   
    for(m=0;m<boardRowSize;m++){                
        for(n=0;n<boardColSize;n++){
            c=board[m][n];
            //检查横向
            for(int i=m+1;i<boardRowSize;i++){
                if(board[i][n]==c && board[i][n]!='.'){
                    return false;
                }
            }
            
            for(int i=n+1;i<boardColSize;i++){
                if(board[m][i]==c && board[m][i]!='.'){
                    return false;
                }
            }
            
            for(int i=(m/3)*3;i<=2+(m/3)*3;i++){
                for(int j=(n/3)*3;j<=(n/3)*3+2;j++){
                    if(board[i][j]==c && board[i][j]!='.' && m!=i &&n!=j){
                        return false;
                    }
                }
            }
            
        }
    }
    return true;
}
//设置成bool型，不然会遍历所有可能，（包括正确答案）
bool getAnwser(char** board,int i,int j){  
    if(i==8 && j==9){
        return true;
    }
    
    if(j==9){
        i++;
        j=0;
    }
    
    if(j<0){
        i--;
        j=8;
    }
    if(board[i][j]=='.'){      
        for(int k=1;k<=9;k++){            
            board[i][j]=k+'0';
            if(isValidSudoku(board,9,9)){
                printf("%d %d %c \n",i,j,board[i][j]);
            
                if(getAnwser(board,i,++j)){
                    return true;   
                }
                j--;
            }
            
        }
        board[i][j]='.';
    }else{
        j++;
        if(getAnwser(board,i,j)){
            return true;
        }
        j--;
    }
    
    
    return false;
}




void solveSudoku(char** board, int boardRowSize, int boardColSize) {
    getAnwser(board,0,0);
}

