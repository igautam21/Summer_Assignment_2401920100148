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
    unordered_map<int,int>mp;

    TreeNode* build(vector<int>&preorder,int preStart,int preEnd,
                    vector<int>&inorder,int inStart,int inEnd){
        if(preStart>preEnd||inStart>inEnd)
            return NULL;

        TreeNode* root=new TreeNode(preorder[preStart]);

        int inRoot=mp[root->val];
        int numsLeft=inRoot-inStart;

        root->left=build(preorder,preStart+1,preStart+numsLeft,
                         inorder,inStart,inRoot-1);

        root->right=build(preorder,preStart+numsLeft+1,preEnd,
                          inorder,inRoot+1,inEnd);

        return root;
    }

    TreeNode* buildTree(vector<int>&preorder,vector<int>&inorder){
        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;

        return build(preorder,0,preorder.size()-1,
                     inorder,0,inorder.size()-1);
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

    vector<int>preorder={3,9,20,15,7};
    vector<int>inorder={9,3,15,20,7};

    TreeNode* root=s.buildTree(preorder,inorder);

    levelOrder(root);

    return 0;
}