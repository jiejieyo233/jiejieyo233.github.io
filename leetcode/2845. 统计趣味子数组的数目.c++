#include <iostream>
#include <vector>
#include <unordered_map>
/*
给你一个下标从 0 开始的整数数组 nums ，以及整数 modulo 和整数 k 。

请你找出并统计数组中 趣味子数组 的数目。

如果 子数组 nums[l..r] 满足下述条件，则称其为 趣味子数组 ：

在范围 [l, r] 内，设 cnt 为满足 nums[i] % modulo == k 的索引 i 的数量。并且 cnt % modulo == k 。
以整数形式表示并返回趣味子数组的数目。

注意：子数组是数组中的一个连续非空的元素序列。
*/
class Solution
{
public:
    long long countInterestingSubarrays(std::vector<int> &nums, int modulo, int k)
    {

        long long ans = 0;
        if (nums.size() == 1)
        {
            if (nums[0] % modulo == 1 % modulo)
                return 1;
            else
                return 0;
        }
        int prefix=0;
        std::unordered_map<int, int> freq;
        if (nums[0] % modulo == k)
            prefix = 1;
        else
            prefix= 0;
        freq[0]++;//why?
        ans += ((prefix- k + modulo) % modulo == 0);//why?
        freq[prefix% modulo]++;
        for (int i = 1; i < nums.size(); freq[prefix% modulo]++, i++)
        {
            if (nums[i] % modulo == k)
            {
                prefix++;
            }
            ans += freq[(prefix- k + modulo) % modulo];
        }
        return ans;
    }
};