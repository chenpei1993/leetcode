//主要是先对角线变换，在列序变换
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
    
    
}

void rotate(int** matrix, int matrixRowSize, int matrixColSize) {
        
    for (int i=0; i<matrixRowSize; i++)  
    {  
        for (int j=0; j<i; j++){
            swap(&matrix[i][j], &matrix[j][i]); 
        }  
             
    }  
    //列序变换  
    for (int i=0, j=matrixRowSize-1; i<j; i++,j--)  
    {  
        for (int k=0; k<matrixRowSize; k++)  
            swap(&matrix[k][i], &matrix[k][j]);  
    }  
}
