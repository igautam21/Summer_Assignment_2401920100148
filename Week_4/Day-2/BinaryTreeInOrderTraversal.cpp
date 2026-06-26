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
    vector<int> inorderTraversal(TreeNode* root){
        vector<int>ans;
        inorder(root,ans);
        return ans;
    }

    void inorder(TreeNode* root,vector<int>&ans){
        if(root==NULL)
            return;

        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
};

int main(){
    Solution s;

    TreeNode* root=new TreeNode(1);
    root->right=new TreeNode(2);
    root->right->left=new TreeNode(3);

    vector<int>ans=s.inorderTraversal(root);

    for(int x:ans)
        cout<<x<<" ";

    return 0;
}