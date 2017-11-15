int removeElement(int* nums, int numsSize, int val) {
    int i = 0, j = 0;

    int *array = (int *)malloc(sizeof(int)*numsSize);

    for(i=0; i<numsSize; i++)
    {
        if(val != nums[i])
        {
            array[j] = nums[i];
            j++;
        }
    }

    for(i=0; i<j; i++)
        nums[i] = array[i];

    free(array);

    return j;
}