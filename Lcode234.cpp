

    struct ListNode {
    int val;
      ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
   ListNode(int x, ListNode *next) : val(x), next(next) {}
};


//  ListNode* reverseList(ListNode* head) {
//         if(head == NULL || head->next == NULL){
//             return head;}

//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* forward = NULL;
//         while(curr!= NULL){
//             forward = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = forward;
//         }
//         head = prev;
//        return head;
//     }
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        string s;
        while (head != NULL)
        {
            s.push_back(head->val);
            head = head->next;
        }
        string temp = s;
        reverse(s.begin(), s.end());
        if (s == temp)
        {
            return true;
        }
        else
            return false;
    }
};

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    ListNode* l1=new ListNode(1);
    ListNode* l2=new ListNode(2);
    ListNode* l3=new ListNode(3);
    ListNode* l4=new ListNode(2);
    ListNode* l5=new ListNode(1);
    ListNode* head=NULL;
    head=l1;
    l1->next=l2;
    l2->next=l3;
    l3->next=l4;
    l4->next=l5;
    Solution s;
    cout<<s.isPalindrome(head);

return 0;
}