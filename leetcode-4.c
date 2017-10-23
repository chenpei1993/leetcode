//只记得是归并排序，
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int numSize=nums1Size+nums2Size;
    int *num=(int *)malloc(sizeof(int)*numSize);
    int i=0,j=0,k=0;
    int a=0,b=0;
    for(int k=0;k<numSize;k++){
        if((nums1+i)==NULL){
            a=10000;
        }else{
            a=nums1[i];
        }
        
        if((nums2+j)==NULL){
            b=10000;
        }else{
            b=nums2[j];
        }
        
        if(a>b){
            num[k]=b;
            j++;
        }else{
            num[k]=a;
            i++;
        }
    }
    
    for(int k=0;k<numSize;k++){
        printf("%d",num[k]);
    }
    
    double ans=0;
    if(numSize%2==0){
        printf("\n %d, %d",num[numSize/2],num[numSize/2-1]);
        ans=(double)(num[numSize/2]+(double)num[numSize/2-1])/2;
    }else{
        ans=num[numSize/2];
    }
    //free(num);
    return ans;
}
