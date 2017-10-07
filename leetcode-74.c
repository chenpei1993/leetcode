//如果不是动态分配，那么二维数组在内存中保存是连续的，所以直接用二分法就可以了
bool searchMatrix(int** matrix, int matrixRowSize, int matrixColSize, int target) {
    int start=0;
    int end=matrixRowSize*matrixColSize-1;
    int mid;
    while(start<=end){
        mid=(start+end)/2;
        
        int row = mid/matrixColSize;
        int col = mid%matrixColSize;

        if(matrix[row][col]==target)
            return true;
        else if(matrix[row][col]<target)
            start = mid+1;
        else 
            end = mid-1;
    }
    
    return false;
    
}
