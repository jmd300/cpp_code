#include <set>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode *> nodes;
        ListNode * p_start = head;
        while(nodes.find(p_start) == nodes.end() && p_start != nullptr){
            nodes.insert(p_start);
            p_start = p_start->next;
        }
        return p_start != nullptr;
    }
};