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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode *tail=&dummy;

        while(list1 && list2){
            if(list1->val <= list2->val){
                tail->next=list1;
                list1=list1->next;
            }
            else{
                tail->next=list2;
                list2=list2->next;
            }
            tail=tail->next;
        }

        if(list1) tail->next=list1;
        else tail->next=list2;

        return dummy.next;
    }
};

int main(){
    ListNode *list1=new ListNode(1);
    list1->next=new ListNode(2);
    list1->next->next=new ListNode(4);

    ListNode *list2=new ListNode(1);
    list2->next=new ListNode(3);
    list2->next->next=new ListNode(4);

    Solution obj;
    ListNode *ans=obj.mergeTwoLists(list1,list2);

    while(ans){
        cout<<ans->val<<" ";
        ans=ans->next;
    }

    return 0;
}