struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode start(0);
        ListNode* p_cur = &start;

        while(list1 != nullptr && list2 != nullptr){
            if(list1->val <= list2->val){
                ListNode* temp = list1->next;
                p_cur->next = list1;
                p_cur = p_cur->next;
                list1 = temp;
            }else{
                ListNode* temp = list2->next;
                p_cur->next = list2;
                p_cur = p_cur->next;
                list2 = temp;
            }
        }
        while(list1 != nullptr){
            ListNode* temp = list1->next;
            p_cur->next = list1;
            p_cur = p_cur->next;
            list1 = temp;
        }
        while(list2 != nullptr){
            ListNode* temp = list2->next;
            p_cur->next = list2;
            p_cur = p_cur->next;
            list2 = temp;
        }
        return start.next;
    }
};