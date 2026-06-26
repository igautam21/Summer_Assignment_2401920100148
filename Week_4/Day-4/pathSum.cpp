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
    bool hasPathSum(TreeNode* root,int targetSum){
        if(root==NULL)
            return false;

        if(root->left==NULL&&root->right==NULL)
            return targetSum==root->val;

        return hasPathSum(root->left,targetSum-root->val)||hasPathSum(root->right,targetSum-root->val);
    }
};

int main(){
    Solution s;

    TreeNode* root=new TreeNode(5);
    root->left=new TreeNode(4);
    root->right=new TreeNode(8);
    root->left->left=new TreeNode(11);
    root->left->left->left=new TreeNode(7);
    root->left->left->right=new TreeNode(2);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(4);
    root->right->right->right=new TreeNode(1);

    int targetSum=22;

    cout<<s.hasPathSum(root,targetSum);

    return 0;
}