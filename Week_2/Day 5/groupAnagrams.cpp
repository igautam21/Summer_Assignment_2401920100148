#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(string s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            mp[temp].push_back(s);
        }

        vector<vector<string>> ans;

        for(auto it:mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};

int main(){
    Solution obj;

    vector<string> strs={"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans=obj.groupAnagrams(strs);

    for(auto v:ans){
        for(string s:v){
            cout<<s<<" ";
        }
        cout<<endl;
    }

    return 0;
}