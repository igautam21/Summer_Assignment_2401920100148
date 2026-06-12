#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>hash;
        for(int i=0;i<s.length();i++){
            hash[s[i]]++;
        }
        for(int i=0;i<hash.size();i++){
            if(hash[s[i]]==1) return i;
        }
        return -1;
    }
};
int main(){
    string s;
    cin>>s;
    Solution ob;
    cout<<ob.firstUniqChar(s);
}