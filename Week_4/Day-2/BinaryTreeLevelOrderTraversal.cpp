#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode *left,*right;

    TreeNode(int x){
        val=x;
        left=NULL;
        right=NULL;
    }
};

class Solution{
public:
    vector<vector<int>> levelOrder(TreeNode* root){
        vector<vector<int>>ans;

        if(root==NULL)
            return ans;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int n=q.size();
            vector<int>level;

            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();

                level.push_back(node->val);

                if(node->left)
                    q.push(node->left);

                if(node->right)
                    q.push(node->right);
            }

            ans.push_back(level);
        }

        return ans;
    }
};

int main(){
    Solution s;

    TreeNode* root=new TreeNode(3);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);

    vector<vector<int>>ans=s.levelOrder(root);

    for(auto level:ans){
        for(int x:level)
            cout<<x<<" ";
        cout<<endl;
    }

    return 0;
}