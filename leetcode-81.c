//二分法 相对于前面一题，就是去重，由于是有序的，就很简单
int search(int* nums, int numsSize, int target) {
    int start=0;
    int end=numsSize-1;
    int mid;
    int r=false,l=false;
    while (start <= end){
        mid=(start+end)/2;
        
        if(nums[mid] == target){
            return true;
        }
        
        if(nums[start]==nums[mid]){
            start++;
        }else if(nums[end]==nums[mid]){
            end--;
        }else if(nums[start] < nums[mid]){
            if(nums[start] <= target && target <=nums[mid]){
                end=mid-1;
            }else{
                start=mid+1;
            }
        }else{
            if(nums[mid] <= target && target <=nums[end]){
                start=mid+1;
            }else{
                
                end=mid-1;
            }
        }
      
      
    }
   
    return false;
}
