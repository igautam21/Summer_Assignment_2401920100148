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
    int maxSum=INT_MIN;

    int solve(TreeNode* root){
        if(root==NULL)
            return 0;

        int left=max(0,solve(root->left));
        int right=max(0,solve(root->right));

        maxSum=max(maxSum,left+right+root->val);

        return root->val+max(left,right);
    }

    int maxPathSum(TreeNode* root){
        solve(root);
        return maxSum;
    }
};

int main(){
    Solution s;

    TreeNode* root=new TreeNode(-10);
    root->left=new TreeNode(9);
    root->right=new TreeNode(20);
    root->right->left=new TreeNode(15);
    root->right->right=new TreeNode(7);

    cout<<s.maxPathSum(root);

    return 0;
}