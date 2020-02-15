int removeElement(int* nums, int numsSize, int val){
    int diff = 0;
    for (int i = 0; i < numsSize; i++)
        if (nums[i] != val) 
            nums[diff++] = nums[i];
    return diff;
}