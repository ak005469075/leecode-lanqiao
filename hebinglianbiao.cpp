//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
#include<iostream>
#define nullptr NULL
using namespace std;
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
{
         if(l1==nullptr)
            return l2;
            else if(l2==nullptr)
            return l1;
           if (l1->val <= l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        }
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
}
int main()
{
    ListNode *l1,*l2;
    int a[3]={1,2,4},b[3]={1,3,4};
    for (int i = 0; i < 3; i++)
    {
       l1->next->val=a[i];
       l2->next->val=b[i];
       cout<<l1->next->val<<l2->next->val;
       l1->next=l1->next->next;
       l2->next=l2->next->next;
    }
    
    //cout<<
}