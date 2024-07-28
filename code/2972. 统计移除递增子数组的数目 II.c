long long incremovableSubarrayCount(int* nums, int numsSize) {
    long long count = 0;
    int l=1 ,r=numsSize-1;
    for(;l<numsSize;l++)
    {
        if(nums[l-1]>nums[l])
        break;
    }
    if(l==numsSize-1)
    count=numsSize*(numsSize+1)/2;
    count=l+2;
    for(;r>0;r--)
    {
        if(nums[r]<nums[r-1])
        break;
        while (nums[r]<nums[l])
        {
            l--;
        }
        count+=l+2;
        
    }
    return count;
}