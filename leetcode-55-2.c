//逐渐扩大可以达到的区域，看最终可以达到的区域是否包括最后一个位置
bool canJump(int* nums, int numsSize) {
    if(numsSize <= 1)  
        return true;  
    int maxStep = 0;  
    int i ;  
    for(i = 0;i < numsSize;i++)  
    {  
        maxStep = maxStep > (nums[i]+i) ? maxStep : (nums[i]+i);  //关键一步
        if(i != numsSize-1 && maxStep <= i)  
            return false;  
        if(maxStep >= numsSize-1)  
            return true;  
    }  
    return true; 
}
