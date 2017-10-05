//暴力搜索 没有通过。。。
int** threeSum(int* nums, int numsSize, int* returnSize) {
    if(nums==NULL){
        return 0;
    }
    
    
    
    int min_element = 100000000;
    int max_element = -100000000;
    for(int i = 0; i < numsSize; i++)
    {
        if(min_element > nums[i])
            min_element = nums[i];
        if(max_element < nums[i])
            max_element = nums[i];
    }
  
    for(int i=0;i<numsSize;i++){
        for(int k=i+1;k<numsSize;k++){
            if(nums[i]>nums[k]){
                int temp=nums[k];
                nums[k]=nums[i];
                nums[i]=temp;
            }
        }
    }
    

    
    int **ans=(int **)malloc(sizeof(int)*numsSize*numsSize);
    
    int j=0;
    
    for(int i=0;i<numsSize-1;i++){
        for(int k=i+1;k<numsSize-1;k++){
            for(int n=k+1;n<numsSize;n++){
                if(nums[i]+nums[k]+nums[n]==0){
                    ans[j]=malloc(sizeof(int)*3);
                    ans[j][0]=nums[i];
                    ans[j][1]=nums[k];
                    ans[j][2]=nums[n];

                    for(int m=0;m<j;m++) {
                        if(ans[m][0]==ans[j][0]&&ans[m][1]==ans[j][1]&&ans[m][2]==ans[j][2]){
                            free(ans[j]);
                            ans[j]=NULL;
                            j--;
                        }
                    }
                    j++;   
                }
            }
           
               
            
            
        }  
    }
 
    *returnSize=j;
    return ans;
}
