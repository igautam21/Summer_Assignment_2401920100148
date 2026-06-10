#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int l=0,r=s.size()-1;
        while(l<r){
            swap(s[l],s[r]);
            l++,r--;
        }
    }
};
int main(){
    Solution s;
    vector<char> str={'h','e','l','l','o'};
    s.reverseString(str);
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<" ";
    }
}