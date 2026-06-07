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
    TreeNode* createBinaryTree(vector<vector<int>>& desc) {

        set<int>vis;

        unordered_map<int,TreeNode*>map;

        for(auto a:desc){
           int p=a[0];
           int c=a[1];
           int l=a[2];
            if(!map.count(p)){
                map[p]=new TreeNode(p);
            }
            if(!map.count(c)){
                map[c]=new TreeNode(c);
            }
            if(l){
                map[p]->left=map[c];
            }
            else{
                map[p]->right=map[c];
            }
            vis.insert(c);

        }

         for(auto a:map){
            if(!vis.count(a.first)){
                return map[a.first];
            }
        }
        
         

        
return nullptr;
        
    }
};