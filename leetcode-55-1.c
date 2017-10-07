//想用递归，回溯去做 在70/75的时候出现TLE，超时了。

void backtrace(int *nums,int numsSize,int jumpNum,int sum,bool *ans){
    if(sum +jumpNum>=numsSize-1){
        //printf("ture \n");
        *ans =true;
        return;
    }else{
        for(int i=nums[sum];i>0;i--){
            sum=i+sum;
            jumpNum=nums[sum];
            
            backtrace(nums,numsSize,jumpNum,sum,ans);
            sum -=i;
        }
        return;
    }
    
}

bool canJump(int* nums, int numsSize) {
    int sum=0;
    int jumpNum=nums[0];
    
    bool ans=false; 
    backtrace(nums,numsSize,jumpNum,sum,&ans);

    return ans;
}
