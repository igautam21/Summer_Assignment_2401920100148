#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<s.length();i++){
            if(s[i]!=t[i]) return false;
        }
        return true;
    }
};
int main(){
    string s,t;
    cin>>s>>t;
    Solution ob;
    if(ob.isAnagram(s,t)) cout<<"True";
    else cout<<"False";
}