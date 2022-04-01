// 一对景点（i < j）组成的观光组合的得分为 values[i] + values[j] + i - j ，
// 也就是景点的评分之和 减去 它们两者之间的距离。
// 返回一对观光景点能取得的最高分。
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int pmaxs=values[0],co=0,pco=0,sum=0;
          for (int i = 1; i < values.size(); i++)
          {
                pmaxs=max(pmaxs,values[i]+i);
                co=max(co,values[i]-i);
                sum=max(sum,pmaxs+co);
          }
          return sum;
          
    }
};
int main()
{
   Solution s;
   int b[]={8,1,5,2,6};
   vector<int> sum(b,b+5);
   cout<<s.maxScoreSightseeingPair(sum);
}