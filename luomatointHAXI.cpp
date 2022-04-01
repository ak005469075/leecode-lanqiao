#include<iostream>
#include<tr1/unordered_map>
#include<map>
#include<string>
using namespace std::tr1;
using namespace std;
int rotoint(string s)
{
   unordered_map<char,int> mymap;
    mymap['I']=1;
    mymap['V']=5;
    mymap['X']=10;
    mymap['L']=50;
    mymap['C']=100;
    mymap['D']=500;
    mymap['M']=1000;
    int num=0;
    for(int i=0;i<s.length();i++)
    {
         if(mymap[s[i]]<mymap[s[i+1]])
         {
         num+=mymap[s[i+1]]-mymap[s[i]];
         i++;
         }
         else num+=mymap[s[i]];

    }
    return num;
}
int main()
{ 
    string s="LVIII";
    cout<<rotoint(s);
    return 0;
    
}