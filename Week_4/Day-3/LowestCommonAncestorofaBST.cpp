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
    TreeNode* lowestCommonAncestor(TreeNode* root,TreeNode* p,TreeNode* q){
        while(root){
            if(p->val<root->val&&q->val<root->val)
                root=root->left;
            else if(p->val>root->val&&q->val>root->val)
                root=root->right;
            else
                return root;
        }
        return NULL;
    }
};

int main(){
    Solution s;

    TreeNode* root=new TreeNode(6);
    root->left=new TreeNode(2);
    root->right=new TreeNode(8);
    root->left->left=new TreeNode(0);
    root->left->right=new TreeNode(4);
    root->left->right->left=new TreeNode(3);
    root->left->right->right=new TreeNode(5);
    root->right->left=new TreeNode(7);
    root->right->right=new TreeNode(9);

    TreeNode* p=root->left;
    TreeNode* q=root->left->right;

    TreeNode* ans=s.lowestCommonAncestor(root,p,q);

    cout<<ans->val;

    return 0;
}