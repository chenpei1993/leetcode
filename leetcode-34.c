//我想的的是两指针，前后向中逼近，这时间维度应该是N/2，过了
//但是按照标签是二分查找
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    
    
    *returnSize=2;
    int* ans=(int *)malloc(sizeof(int) *(*returnSize));
   
    
    
    int start=0;
    int end=numsSize-1;
    int ansStart=-1,ansEnd=-1;
    bool findStart=false,findEnd=false;
    while( (!findStart || !findEnd )&& start <=end ){
        if(nums[start]==target){
            ansStart=start;
            findStart=true;
        }else{
            start++;
        } 
        
        if(nums[end]==target){
            ansEnd=end;
            findEnd=true;
        }else{
            end--;
        } 
    }
  
      ans[0]=ansStart;
      ans[1]=ansEnd;
        
    
    return ans;
}
