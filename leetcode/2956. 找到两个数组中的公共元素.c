/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int answer(int* nums1, int nums1Size, int* nums2, int nums2Size)
{   
    int count=0;
    for (int i = 0; i < nums1Size; i++) 
    {
        for (int j = 0; j < nums2Size; j++) 
        { 
            if (nums1[i] == nums2[j])
            {count++;
            break;        
            }
        }
    }
    return count;
}
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* ans = (int*)malloc(2 * sizeof(int));
    ans[0] = answer(nums1, nums1Size, nums2, nums2Size);
    ans[1] = answer(nums2, nums2Size, nums1, nums1Size);

    *returnSize = 2;
    return ans;
}
