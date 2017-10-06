//二分法
int search(int* nums, int numsSize, int target) {
    int start=0;
    int end=numsSize-1;
    int mid;
    while (start <= end){
        mid=(start+end)/2;
        if(nums[mid] == target){
            return mid;
        }
        //nums[mid]>=nums[start] 关键一步，分为一个有序数组
        if(nums[mid] >= nums[start]){
            if(nums[mid]>= target && target >= nums[start]){
                end=mid-1;  
            }else{
                start=mid+1;
            }
        }else{
            if(nums[mid] <= target && target <= nums[end]){
                start=mid+1;
            }else{
                end=mid-1;
            }
        }
        
      
    }
   
    return -1;
}
