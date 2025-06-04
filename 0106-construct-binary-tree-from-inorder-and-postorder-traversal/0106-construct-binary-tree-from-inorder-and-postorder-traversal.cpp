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

TreeNode* solve(vector<int>& postorder,int prstart,int prend, vector<int>& inorder,int instart,int inend,map<int,int>&map){
            if(prstart>prend || instart>inend) return NULL;
            TreeNode* root=new TreeNode(postorder[prend]);

            int x=map[root->val];
            int ind=x-instart;
            root->left=solve(postorder,prstart,prstart+ind-1,inorder,instart,x-1,map);
            root->right=solve(postorder,prstart+ind,prend-1,inorder,x+1,inend,map);

            return root;

        }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
          map<int,int>in;
        for(int i=0;i<postorder.size();i++){
            in[inorder[i]]=i;
        }
        TreeNode*  root=solve(postorder,0,postorder.size()-1,inorder,0,inorder.size()-1,in);
        return root;
            
    
    }
};




 
   
