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
    TreeNode* searchBST(TreeNode* root,int val){
        while(root){
            if(root->val==val)
                return root;

            if(val<root->val)
                root=root->left;
            else
                root=root->right;
        }

        return NULL;
    }
};

void inorder(TreeNode* root){
    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->val<<" ";
    inorder(root->right);
}

int main(){
    Solution s;

    TreeNode* root=new TreeNode(4);
    root->left=new TreeNode(2);
    root->right=new TreeNode(7);
    root->left->left=new TreeNode(1);
    root->left->right=new TreeNode(3);

    int val=2;

    TreeNode* ans=s.searchBST(root,val);

    if(ans)
        inorder(ans);
    else
        cout<<"Value not found";

    return 0;
}