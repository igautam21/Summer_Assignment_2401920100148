#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0;
        int ans=0;
        vector<int>hash(255,-1);
        while(r<s.length()){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            ans=max(ans,r-l+1);
            hash[s[r]]=r;
            r++;
        }
        return ans;
    }
};
int main() {
    Solution s;
    string str = "abcabcbb";
    int length = s.lengthOfLongestSubstring(str);
    cout << "Length of longest substring without repeating characters: " << length << endl;
    return 0;
}