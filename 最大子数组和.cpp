#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
            int sum=0;
          for(int i=1;i<nums.size();i++)
          {
               if(nums[i-1]>=0)
               {
                   nums[i]+=nums[i-1];
                   sum=nums[i];
               }
          }
          return sum;
    }
};
int main()
{
    Solution s;
    int b[]={-2,1,-3,4,-1,2,1,-5,4};
    vector<int> nums(b,b+9);
    cout<<s.maxSubArray(nums);
}