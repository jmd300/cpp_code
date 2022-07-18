/*
19. 删除链表的倒数第 N 个结点
https://leetcode.cn/problems/remove-nth-node-from-end-of-list/
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode before_k_node{0};
        before_k_node.next = head;
        ListNode* before_k_p_node = &before_k_node;

        ListNode *k_p_node = head, *tail_p_node = head;
        while(n--){
            tail_p_node = tail_p_node->next;
        }
        while(tail_p_node != nullptr){
            tail_p_node = tail_p_node->next;
            k_p_node = k_p_node->next;
            before_k_p_node = before_k_p_node->next;
        }
        before_k_p_node->next = k_p_node->next;
        delete k_p_node;
        return before_k_node.next;
    }
};