#include<iostream>
#include<string>
using namespace std;
int romantoint(string s)
{
    char zifu[7]={'I','V','X','L','C','D','M'};
    int zhi[7]={1,5,10,50,100,500,1000};
    int cunshu[s.length()];
   
    for (int i = 0; i < s.length(); i++)
     for(int j=0;j<7;j++)
    {
        if(s[i]==zifu[j])
          {
             cunshu[i]=zhi[j];
          }
    }
    int min=cunshu[0];
     int num=0;
    int k=0;
    /*
    for(int i=1;i<s.length();i++) //从1开始，方便与min比较，但如果一直执行num+=min,会少加最后一次,k会溢出
    {
        if(min<cunshu[i])//左边小于右边
        {
            num+=cunshu[i]-cunshu[i-1];
            k=i+1;//若1,2已相减，min表示第三位
            i++;//第四位
        }
    else
    {
        num+=min;
         k++;
    }
   
    min=cunshu[k];
    
    }
    */
    for(int i=1;i<s.length();i++) //
    {
        if(min<cunshu[i])//左边小于右边
        {
            num+=cunshu[i]-cunshu[i-1];
            k=i+1;//若1,2已相减，min表示第三位

            i++;//第四位
        }
    else
    {
        num+=min;
         k++;
    }
   
   if(k==s.length()) //随便处理，使得数组不越界
       break;
      else min=cunshu[k];
    }
    if(k<s.length())//因为循环时若一直是num+=min的情况会少执行一次，所以要补一次
     num+=cunshu[k];
    return num;
}
int main()
{
    string s;
    cin>>s;
    cout<<"对应值为:"<<romantoint(s);
    return 0;

}