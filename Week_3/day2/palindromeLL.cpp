#include<bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x){
        val=x;
        next=NULL;
    }
};

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;

        while(head){
            v.push_back(head->val);
            head=head->next;
        }

        int l=0,r=v.size()-1;

        while(l<r){
            if(v[l]!=v[r]) return false;
            l++;
            r--;
        }

        return true;
    }
};

int main(){
    ListNode *head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(2);
    head->next->next->next=new ListNode(1);

    Solution obj;

    if(obj.isPalindrome(head))
        cout<<"true";
    else
        cout<<"false";

    return 0;
}