#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,idx=0;
        int n=chars.size();

        while(i<n){
            char curr=chars[i];
            int cnt=0;

            while(i<n && chars[i]==curr){
                cnt++;
                i++;
            }

            chars[idx++]=curr;

            if(cnt>1){
                string s=to_string(cnt);
                for(char ch:s){
                    chars[idx++]=ch;
                }
            }
        }

        return idx;
    }
};

int main(){
    Solution obj;

    vector<char> chars={'a','a','b','b','c','c','c'};

    int len=obj.compress(chars);

    cout<<len<<endl;

    for(int i=0;i<len;i++){
        cout<<chars[i]<<" ";
    }

    return 0;
}