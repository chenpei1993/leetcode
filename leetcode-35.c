//找到那个数，有点像选择排序
int searchInsert(int* nums, int numsSize, int target) {
   int i; 
   for(i=0;i<numsSize;i++){
       if(target<=nums[i]){
           break;
       }
   }
    
    return i;
    
}
