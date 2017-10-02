/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
//第一次尝试这个系统。
#include <stdlib.h>
#include <stdio.h>

int* twoSum(int* nums, int numsSize, int target) {
    int begin,sum;
    int *ans=malloc(sizeof(int)*2);
	for(int i=0;i<numsSize;i++){
		begin=*(nums+i);
		for(int j=1+i;j<numsSize;j++){
			sum =begin+*(nums+j);
			if(sum == target){
				*ans=i;
				*(ans+1)=j;
				return ans;
			}
		}
	}
    
    return ans;
}

