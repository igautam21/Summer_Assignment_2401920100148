#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>r(26,0),m(26,0);
        for(int i=0;i<ransomNote.length();i++){
            r[ransomNote[i]-'a']++;
        }
        for(int i=0;i<magazine.length();i++){
            m[magazine[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(r[i]>m[i]) return false;
        }
        return true;
    }
};
int main(){
    string ransomNote,magazine;
    cin>>ransomNote>>magazine;
    Solution ob;
    if(ob.canConstruct(ransomNote,magazine)) cout<<"True";
    else cout<<"False";
}