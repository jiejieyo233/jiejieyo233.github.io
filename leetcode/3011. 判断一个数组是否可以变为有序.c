int bio(int number);
bool canSortArray(int* nums, int numsSize) {
    //冒泡排序，看是否可以执行
    int zanshi;
    int i=0;
    while(i!=numsSize-1)
    {
        if(nums[i]>nums[i+1])
        {   
            if(bio(nums[i])!=bio(nums[i+1]))
            return false;
            zanshi=nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=zanshi;
        }
        i++;
    }
    return true;
}
int bio(int number)
{
    int count = 0;
    while (number)
    {
        count += number & 1;
        number >>= 1;
    }
    return count;
}