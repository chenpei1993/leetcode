// 根据出栈的顺序，来配对右括号

void backtrace(char **ans,int l,int r,int *returnSize, char *temp, int m){
    
    if(l==0 && r==0 ){
        temp[m]=0;
        ans[*returnSize]=(char *)malloc(sizeof(char)*m);
        strcpy(ans[*returnSize],temp);
        (*returnSize)++;
        return;
    }
    
    if(l>0){
        temp[m]='(';
        backtrace(ans,l-1,r,returnSize,temp,m+1); 
    }
    
    if(r>0 && l<r){
        temp[m]=')';
        backtrace(ans,l,r-1,returnSize,temp,m+1);
    }
    
}

char** generateParenthesis(int n, int* returnSize) {
    
    char **ans=(char **)malloc(sizeof(char *)*10000);
    char *temp=(char *)malloc(sizeof(char) *(n*2+1));
    int l=n;
    int r=n;
    *returnSize=0;
    int m=0;
    backtrace(ans,l,r,returnSize,temp,m);
    return ans;
}
