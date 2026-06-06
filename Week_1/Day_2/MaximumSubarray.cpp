#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            mx=max(mx,sum);
            if(sum<0) sum=0;
        }
        return mx;
    }
};
int main(){
    Solution s;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    cout<<s.maxSubArray(nums);
}