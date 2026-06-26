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
    bool isValidBST(TreeNode* root){
        return solve(root,LONG_MIN,LONG_MAX);
    }

    bool solve(TreeNode* root,long low,long high){
        if(root==NULL)
            return true;

        if(root->val<=low||root->val>=high)
            return false;

        return solve(root->left,low,root->val)&&solve(root->right,root->val,high);
    }
};

int main(){
    Solution s;

    TreeNode* root=new TreeNode(2);
    root->left=new TreeNode(1);
    root->right=new TreeNode(3);

    cout<<s.isValidBST(root);

    return 0;
}