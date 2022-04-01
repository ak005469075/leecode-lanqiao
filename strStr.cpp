#include<iostream>
#include<string>
using namespace std;
int strStr(string haystack,string needle)
{
 for (int i = 0; i +needle.length()<= haystack.length(); i++)
 {
     int flag=true;
 for (int j = 0; j < needle.length(); j++)
 {
     if(haystack[i+j]!=needle[j])
     {
         flag=false;
         break;
     }
 }
 if(flag) return i;
 }
return -1;
}
int main()
{
    string s="hello",a="ll";
    cout<<strStr(s,a);
}