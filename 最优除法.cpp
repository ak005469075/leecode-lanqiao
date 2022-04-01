// 给定一组正整数，相邻的整数之间将会进行浮点除法操作。例如， [2,3,4] -> 2 / 3 / 4 。
// 但是，你可以在任意位置添加任意数目的括号，来改变算数的优先级。
// 你需要找出怎么添加括号，才能得到最大的结果，并且返回相应的字符串格式的表达式。
// 你的表达式不应该含有冗余的括号。

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string optimalDivision(vector<int>& nums) {
          string s=to_string(nums[0]);
            if(nums.size()==1) return s;
            else if(nums.size()==2) return s+"/"+to_string(nums[1]);
            else s+="/(";
      for(int i=1;i<nums.size();i++)
          {
              if(i!=nums.size()-1)
              {
                  s+=to_string(nums[i])+"/";
              }
              else s+=to_string(nums[i])+")";
          }
          return s;
    }
};
int main()
{
       Solution s;
       int b[4]={1000,100,10,2};
       vector<int>nums(b,b+4);
   // cout<<nums[0];
       cout<< s. optimalDivision(nums);
}