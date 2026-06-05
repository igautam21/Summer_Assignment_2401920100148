#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int i=0;
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};
int main(){
    Solution s;
    vector<int>nums={1,1,2};
    int ans=s.removeDuplicates(nums);
    cout<<ans<<" ";
    for(int i=0;i<ans;i++){
        cout<<nums[i]<<" ";
    }
}