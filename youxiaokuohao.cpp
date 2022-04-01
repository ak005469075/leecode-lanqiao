#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string s)
{
    stack<int> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
         st.push(')');
         if(s[i]=='{')
         st.push('}');
         if(s[i]=='[')
         st.push(']');
         else if(st.empty()||st.top()!=s[i]) return false;//若栈顶与之后的右括号不符
         else st.pop();//若栈顶与s[i]相等，出栈
    }
    return st.empty();


}
int main()
{
    string s="{[()}]";
    isvalid(s);
}