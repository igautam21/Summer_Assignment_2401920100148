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
    int diameter=0;

    int height(TreeNode* root){
        if(root==NULL)
            return 0;

        int lh=height(root->left);
        int rh=height(root->right);

        diameter=max(diameter,lh+rh);

        return 1+max(lh,rh);
    }

    int diameterOfBinaryTree(TreeNode* root){
        height(root);
        return diameter;
    }
};

int main(){
    Solution s;

    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->left->left=new TreeNode(4);
    root->left->right=new TreeNode(5);

    cout<<s.diameterOfBinaryTree(root);

    return 0;
}