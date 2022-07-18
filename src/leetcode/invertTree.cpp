#include <algorithm>

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
    void invert(TreeNode* root){
        if(root == nullptr) return;
        // auto temp = root->right;
        // root->right = root->left;
        // root->left = temp;
        swap(root->left, root->right);
        // std::tie(root->left, root->right) = std::make_tuple(root->right, root->left);

        invert(root->left);
        invert(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        invert(root);
        return root;
    }
};