#include <vector>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    vector<int> ret;
    void in_order(TreeNode * head){
        if(head == nullptr) return;
        in_order(head->left);
        ret.push_back(head->val);
        in_order(head->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        in_order(root);
        return ret;
    }   
};