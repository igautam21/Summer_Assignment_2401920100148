#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        stack<int> nums;
        stack<string> st;

        string curr="";
        int num=0;

        for(char ch:s){
            if(isdigit(ch)){
                num=num*10+(ch-'0');
            }
            else if(ch=='['){
                nums.push(num);
                st.push(curr);
                num=0;
                curr="";
            }
            else if(ch==']'){
                int k=nums.top();
                nums.pop();

                string temp=curr;
                curr=st.top();
                st.pop();

                while(k--){
                    curr+=temp;
                }
            }
            else{
                curr+=ch;
            }
        }

        return curr;
    }
};

int main(){
    Solution obj;

    string s="3[a2[c]]";

    cout<<obj.decodeString(s);

    return 0;
}