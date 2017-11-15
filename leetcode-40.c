/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

void backtrace(int* candidates, int candidatesSize, int target,int begin,int *temp,int m,int **ans,int **columnSizes,int *returnSize)
{
    if(target<0){
        return;
    }
    
    if(target==0){
        ans[*returnSize]=(int *)malloc(sizeof(int) *m);
        for(int k=0;k<m;k++){
            ans[*returnSize][k]=temp[k];
            printf("%d",temp[k]);
        }
        (*columnSizes)[*returnSize]=m;
        printf("\n");
        (*returnSize)++;
        return;
    }
    
    if(target>0){
        for(int i=begin;i<candidatesSize;i++){
                temp[m]=candidates[i];
            if(i&&candidates[i]==candidates[i-1]&&i>begin){
                continue;
            }
            m++;
            backtrace(candidates,candidatesSize,target-candidates[i],i+1,temp,m,ans,columnSizes,returnSize);
            m--;   
            
            
        }
        
    }
    
}

int** combinationSum2(int* candidates, int candidatesSize, int target, int** columnSizes, int* returnSize) {
    int t;
    for(int i=0;i<candidatesSize;i++){
        for(int j=i;j<candidatesSize;j++){
            if(candidates[i]>candidates[j]){
                t=candidates[j];
                candidates[j]=candidates[i];
                candidates[i]=t;
            }
        }
        
    }
    
    int *temp=(int *)malloc(sizeof(int)*candidatesSize);
    int **ans=(int *)malloc(sizeof(int *)*10000);
    (*columnSizes)=(int *)malloc(sizeof(int)*1000);
    *returnSize=0;
    int m=0;    
    backtrace(candidates,candidatesSize,target,0,temp,m,ans,columnSizes,returnSize );
    return ans;
}
