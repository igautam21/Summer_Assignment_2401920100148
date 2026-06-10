#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string st=strs[0];
        string ans="";
        for(int i=0;i<st.length();i++){
            for(int j=0;j<strs.size();j++){
                if(st[i]!=strs[j][i]) return ans;
            }
            ans+=st[i];
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<string> strs={"flower","flow","flight"};
    cout<<s.longestCommonPrefix(strs);
}