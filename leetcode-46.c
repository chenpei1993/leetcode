//主要是全排列
void swap(int *i,int *j){
    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}


void backtrace(int* nums,int numsSize,int *returnSize,int begin,int **ans){
    int i;
    if(begin>=numsSize){
        for(int k=0;k<numsSize;k++){
            ans[*returnSize][k]=nums[k];
            printf("%d",nums[k]);
        }
        *returnSize+=1;
        printf("\n");
        return;
    }else{
       for(i=begin;i<numsSize;i++){
           swap(&nums[begin],&nums[i]);
           backtrace(nums,numsSize,returnSize,begin+1,ans);
           swap(&nums[begin],&nums[i]);
       }
    }
    
}


int** permute(int* nums, int numsSize, int* returnSize) {
    int **ans=(int**)malloc(sizeof(int *)*10000);
    for(int k=0;k<10000;k++){
        ans[k]=(int *)malloc(sizeof(int)*numsSize);
    }
    *returnSize=0;
    backtrace(nums,numsSize,returnSize,0,ans);

    return ans;
}
