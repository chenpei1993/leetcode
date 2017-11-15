int removeDuplicates(int* nums, int numsSize) {
    
    int * ans=(int *)malloc(sizeof(int)*numsSize);
    int j=0;
    if(numsSize==1){
        return 1;
    }
    
    for(int i=0;i<numsSize;i++){
        ans[j]=nums[i];
        if(i>=1){
            if(nums[i]!=nums[i-1]){
                j++;
            } 
        }else{
            j++;
        }
        
    }
    printf("%d",ans[0]);
    for(int i=0;i<j;i++){
        nums[i]=ans[i];
    }
    
    free(ans);
    return j;
    
}