#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        int n = s.length();
        int m = p.length();

        if(m > n) return ans;

        vector<int> freqP(26, 0);
        vector<int> freqS(26, 0);

        for(char ch : p) {
            freqP[ch - 'a']++;
        }

        int l = 0;

        for(int r = 0; r < n; r++) {

            freqS[s[r] - 'a']++;

            if(r - l + 1 > m) {
                freqS[s[l] - 'a']--;
                l++;
            }

            if(freqS == freqP) {
                ans.push_back(l);
            }
        }

        return ans;
    }
};

int main() {

    Solution obj;

    string s = "cbaebabacd";
    string p = "abc";

    vector<int> ans = obj.findAnagrams(s, p);

    cout << "Indices: ";

    for(int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}