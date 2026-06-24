#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0,l=0;
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[j]){
                j++;
                l++;
            }
            if(l==needle.length()){
                return i+1-needle.length();
            }
            if(needle[j]!=haystack[i+1]){
                l=0;
                j=0;
            }
        }
        return -1;
    }
};
int