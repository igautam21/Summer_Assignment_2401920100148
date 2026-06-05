#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=INT_MAX;
        int ans=0;
        for(int i=0;i<prices.size();i++){
            mn=min(mn,prices[i]);
            ans=max(ans,prices[i]-mn);
        }
        return ans;
    }
};
int main(){
    Solution s;
    vector<int>prices={7,1,5,3,6,4};
    int ans=s.maxProfit(prices);
    cout<<ans<<" ";
}