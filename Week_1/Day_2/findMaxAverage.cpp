#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        long long sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        long long ans=sum;
        for(int i=k;i<nums.size();i++){
            sum+=nums[i];
            sum-=nums[i-k];
            ans=max(ans,sum);
        }
        return (double)ans/k;
    }
};
int main(){
    Solution s;
    vector<int> nums={1,12,-5,-6,50,3};
    int k=4;
    cout<<s.findMaxAverage(nums,k);
}