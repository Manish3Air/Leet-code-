
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    ListNode *l1 = new ListNode(1);
    ListNode *l2 = new ListNode(2);
    ListNode *l3 = new ListNode(3);
    ListNode *l4 = new ListNode(2);
    ListNode *l5 = new ListNode(1);
    ListNode *head = NULL;
    head = l1;
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    Solution s;
    cout << s.oddEvenList(head);

    return 0;
}
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *oddEvenList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *Odd = head;
        ListNode *Even = head->next;
        ListNode *temp = Even;

        while (Even != NULL && Even->next != NULL)
        {
            Odd->next = Odd->next->next;
            Even->next = Even->next->next;
            Odd = Odd->next;
            Even = Even->next;
        }
        Odd->next = temp;
        return head;
    }
};


