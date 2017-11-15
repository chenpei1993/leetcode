/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *columnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
/*
 if(m>0){
       
        *columnSizes[*returnSize]=m;
        ans[*returnSize]=(int *)malloc(sizeof(int)*m);
        for(int k=0;k<m;k++){
            printf("%d",temp[k]);
            ans[*returnSize][k]=temp[k];
        }    
        printf("\n");
        (*returnSize)++;
        
        
    }
*/
void backtrace(int *nums,int numsSize,int begin,int *temp,int m,int **ans,int **columnSizes,int *returnSize)
{
    int i=0;
    ans[*returnSize]=(int *)malloc(sizeof(int)*m);
    for(int k=0;k<m;k++){
        printf("%d",temp[k]);
        ans[*returnSize][k]=temp[k];
    }    
    printf(" \n");
    (*columnSizes)[*returnSize]=m;
    (*returnSize)++;
   
    
    for(i=begin;i<numsSize;i++){
        temp[m]=nums[i];
        m++;
        backtrace(nums,numsSize,begin+1,temp,m,ans,columnSizes,returnSize);
        begin++;
        m--;  
    }  
}

int** subsets(int* nums, int numsSize, int** columnSizes, int* returnSize) {
    int **ans=(int **)malloc(sizeof(int *)*10000);
    (*columnSizes)=(int *)malloc(sizeof(int *)*10000);
    *returnSize=0;
    int *temp=(int *)malloc(sizeof(int)*1000);
    int begin=0,m=0;
    backtrace(nums,numsSize,begin,temp,m,ans,columnSizes,returnSize);
    return ans;
}
