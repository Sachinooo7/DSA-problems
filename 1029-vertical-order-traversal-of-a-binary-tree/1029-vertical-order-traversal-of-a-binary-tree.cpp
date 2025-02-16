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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       vector<vector<int>>ans;

       queue<pair<int,pair<TreeNode*,int>>>q;
       q.push({0,{root,0}});
       map<int,vector<pair<int,int>>>mapp;
       while(!q.empty()){
        auto t=q.front(); q.pop();
        TreeNode* node=t.second.first;
        int x=t.second.second;
        int lvl=t.first;
        mapp[x].push_back({lvl,node->val});

        if(node->left){
            q.push({lvl+1,{node->left,x-1}});
        }
        if(node->right){
            q.push({lvl+1,{node->right,x+1}});
        }
       } 

       for(auto t:mapp){
        sort(t.second.begin(),t.second.end());
       vector<int>v;
        for(auto a:t.second){
            v.push_back(a.second);
        }
        ans.push_back(v);
       }
       return ans;
    }
};