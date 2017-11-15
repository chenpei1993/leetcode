//使用公式
int climbStairs(int n) {
    int *result=(int *)malloc(sizeof(int)*n);
    result[0]=1;
    result[1]=2;
    
    for(int i=2;i<n;i++){
        result[i] = result[i-1] + result[i-2];
    }
    
    return result[n-1];
    
}
