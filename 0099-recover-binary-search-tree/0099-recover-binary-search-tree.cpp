/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
TreeNode* fir=nullptr;
TreeNode* mid=nullptr;
TreeNode* prev;
TreeNode* last=nullptr;
void inorder(TreeNode* root){
    if(!root) return;

    inorder(root->left);

    if(prev!=nullptr && (root->val<prev->val)){
        if(!fir){
            fir=prev;
            mid=root;
        }
        else{
            last=root;
        }
    }
    prev=root;
    inorder(root->right);

}
    void recoverTree(TreeNode* root) {
        prev =new TreeNode(INT_MIN);
        inorder(root);
        if(fir && last){ swap(fir->val,last->val);}
        else if(fir && mid){swap(fir->val,mid->val);}
    }
};