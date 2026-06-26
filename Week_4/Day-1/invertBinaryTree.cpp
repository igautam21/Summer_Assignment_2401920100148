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
    TreeNode* invertTree(TreeNode* root){
        if(root==NULL)
            return NULL;

        swap(root->left,root->right);

        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};

void levelOrder(TreeNode* root){
    if(root==NULL)
        return;

    queue<TreeNode*>q;
    q.push(root);

    while(!q.empty()){
        TreeNode* node=q.front();
        q.pop();

        cout<<node->val<<" ";

        if(node->left)
            q.push(node->left);

        if(node->right)
            q.push(node->right);
    }
}

int main(){
    Solution s;

    TreeNode* root=new TreeNode(4);
    root->left=new TreeNode(2);
    root->right=new TreeNode(7);
    root->left->left=new TreeNode(1);
    root->left->right=new TreeNode(3);
    root->right->left=new TreeNode(6);
    root->right->right=new TreeNode(9);

    root=s.invertTree(root);

    levelOrder(root);

    return 0;
}