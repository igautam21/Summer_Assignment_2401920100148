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

class Codec{
public:
    string serialize(TreeNode* root){
        if(root==NULL)
            return "#,";

        return to_string(root->val)+","+serialize(root->left)+serialize(root->right);
    }

    TreeNode* deserialize(string data){
        queue<string>q;
        string s;

        for(char c:data){
            if(c==','){
                q.push(s);
                s="";
            }
            else
                s+=c;
        }

        return build(q);
    }

    TreeNode* build(queue<string>&q){
        string val=q.front();
        q.pop();

        if(val=="#")
            return NULL;

        TreeNode* root=new TreeNode(stoi(val));

        root->left=build(q);
        root->right=build(q);

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
    Codec c;

    TreeNode* root=new TreeNode(1);
    root->left=new TreeNode(2);
    root->right=new TreeNode(3);
    root->right->left=new TreeNode(4);
    root->right->right=new TreeNode(5);

    string s=c.serialize(root);

    cout<<"Serialized: "<<s<<endl;

    TreeNode* newRoot=c.deserialize(s);

    cout<<"Level Order: ";
    levelOrder(newRoot);

    return 0;
}