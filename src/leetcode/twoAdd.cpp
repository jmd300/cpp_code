/*
https://leetcode.cn/problems/add-two-numbers/
2. 两数相加
*/
#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode start(0);
        ListNode* cur = &start;

        int flag{0}, num{0};
        while(l1 != nullptr || l2 != nullptr){
            auto sum = ((l1 == nullptr ? 0 : l1->val) + (l2 == nullptr ? 0 : l2->val) + flag);
            flag = sum / 10;
            auto pnode = new ListNode(sum % 10);
            cur->next = pnode;

            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
            cur = pnode;
        }
        if(flag != 0){
            auto pnode = new ListNode(flag);
            cur->next = pnode;
        }
        return start.next;
    }
};
