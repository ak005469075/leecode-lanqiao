//最大点数
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
     if(nums.size() < 1) return 0;
        int maxn = 0;
        for(int it : nums)
            maxn = max(maxn, it);//取vector中最大值
        vector<int> cnt(maxn+1), dp(maxn+1);
        for(int it : nums)
            cnt[it]++;
        dp[1] = cnt[1];
        for(int i = 2; i <= maxn; i++)
            dp[i] = max(dp[i-1], dp[i-2] + cnt[i] * i);
        return dp[maxn];
       
    }
};
int main()
{
   Solution s;
   int b[3]={3,4,2};
   vector<int>nums(b,b+3);
   cout<<s.deleteAndEarn(nums);
}