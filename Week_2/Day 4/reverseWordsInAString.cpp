#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string word="";

        for(char ch:s){
            if(ch!=' '){
                word+=ch;
            }
            else{
                if(word!=""){
                    v.push_back(word);
                    word="";
                }
            }
        }

        if(word!="") v.push_back(word);

        reverse(v.begin(),v.end());

        string ans="";

        for(int i=0;i<v.size();i++){
            ans+=v[i];
            if(i!=v.size()-1) ans+=" ";
        }

        return ans;
    }
};

int main(){
    Solution obj;

    string s="  the sky   is blue  ";

    cout<<obj.reverseWords(s);

    return 0;
}