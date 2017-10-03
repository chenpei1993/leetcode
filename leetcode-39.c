//精华在于控制回溯的结束 ，target-candidates[i]
void combination(int *candidates,int candidatesSize,int target,int *temp,int m,int **ans, int idx,int *returnSize,int **columnSizes){
    if(target<0){
        return;
    }
    if(target==0){
            ans[*returnSize]=(int *)malloc(sizeof(int)*m);
            for(int k=0;k<m;k++){
                printf("%d",temp[k]);
                ans[*returnSize][k]=temp[k];
            }
            printf("\n");
            (*columnSizes)[*returnSize]=m;
            (*returnSize)++;
            return;
        }
    for(int i=idx;i<candidatesSize;i++){        
            temp[m]=candidates[i];
            m++;
            combination(candidates, candidatesSize,target-candidates[i],temp,m, ans,i,returnSize,columnSizes);
            m--;
        
    }
   
}

int** combinationSum(int* candidates, int candidatesSize, int target, int** columnSizes, int* returnSize) {
    int **ans=(int **)malloc(sizeof(int *)*1000);
   
    int *temp=(int *)malloc(sizeof(int)*1000);//顺序栈
    *returnSize=0;
    int m=0,idx=0;
    *columnSizes = (int*)malloc(10000*sizeof(int));
    combination(candidates,candidatesSize,target,temp,m,ans,idx,returnSize,columnSizes);
  
    free(temp);
    return ans;
}
