//双指针法
int maxArea(int* height, int heightSize) {
    int start=0;
    int end=heightSize-1;
    int column=0;
    int ans=0;
    while(start!= end){
        if(height[start] >= height[end]){
            column=(end-start)*height[end];
            end--;
        }else{
            column=(end-start)*height[start];
            start++;
        }
        
        
        if(ans<column){
            ans=column;
        }
    }
    
    return ans; 
}
