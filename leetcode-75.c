void sortColors(int* nums, int numsSize) {
    
    int num;
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]>nums[j]){
                num=nums[j];
                nums[j]=nums[i];
                nums[i]=num;
            }
        }
    }
    
}