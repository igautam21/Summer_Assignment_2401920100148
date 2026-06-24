#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();

        for(int len=1;len<=n/2;len++){
            if(n%len!=0) continue;

            string sub=s.substr(0,len);
            string temp="";

            while(temp.size()<n){
                temp+=sub;
            }

            if(temp==s) return true;
        }

        return false;
    }
};

int main(){
    Solution obj;

    string s="abab";

    if(obj.repeatedSubstringPattern(s))
        cout<<"true";
    else
        cout<<"false";

    return 0;
}