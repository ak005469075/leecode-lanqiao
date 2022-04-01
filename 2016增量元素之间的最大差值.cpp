// 给你一个下标从 0 开始的整数数组 nums ，该数组的大小为 n ，
// 请你计算 nums[j] - nums[i] 能求得的 最大差值 ，
// 其中 0 <= i < j < n 且 nums[i] < nums[j] 。

// 返回 最大差值 。如果不存在满足要求的 i 和 j ，返回 -1 。

// 来源：力扣（LeetCode）
// 链接：https://leetcode-cn.com/problems/maximum-difference-between-increasing-elements
// 著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
#include<bits/stdc++.h>
using namespace std;
int maximumDifference(vector<int>& nums) {
       int value=-1,min=nums[0];
      for(int i=1;i<nums.size();i++)
      {
            if(nums[i]>min)
            {
                value=max(value,nums[i]-min);
            }
            else min=nums[i];
      }
      return value;
    }
int main()
{
    int b[4]={7,1,5,4};
    vector<int> nums(b,b+4);
    cout<<maximumDifference(nums);
}