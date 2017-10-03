//去重的全排列
void swap(int *i,int *j)
{
    int temp=*i;
    *i=*j;
    *j=temp;
}

bool isSwap(int start,int end, int *nums)
{
    for(int k=start;k<end;k++){
        if(nums[k]== nums[end]){
            return false;
        }
    }
    return true; 
}

void backtrace(int *nums, int numsSize, int begin,int *returnSize,int ** ans)
{
    int i;
    if(begin>=numsSize){
        for(int k=0;k<numsSize;k++){
            ans[*returnSize][k]=nums[k];
            printf("%d",nums[k]);
        }
        *returnSize += 1;
        printf("\n");
    }else{
        
        for(i=begin;i<numsSize;i++){
            if(isSwap(begin,i,nums)){
                swap(&nums[begin],&nums[i]);      
                backtrace(nums,numsSize,begin+1,returnSize,ans);
                swap(&nums[begin],&nums[i]);
            }     
        }
        
    }
    
}


int** permuteUnique(int* nums, int numsSize, int* returnSize) {
    int **ans=(int **)malloc(sizeof(int *)*10000);
    for(int i=0;i<10000;i++){
        ans[i]=(int *)malloc(sizeof(int)*numsSize);
    }
    *returnSize=0;
    backtrace(nums,numsSize,0,returnSize,ans);
    return ans;
}
