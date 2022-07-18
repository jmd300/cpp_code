#include <vector>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    int maxDepth(TreeNode* root) {
        return get_depth(root, 0);
    }
    int get_depth(TreeNode* root, int depth){
        if(root == nullptr) return depth;
        return max(get_depth(root->left, depth + 1), get_depth(root->right, depth + 1));
    }
};