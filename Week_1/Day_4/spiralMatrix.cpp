#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty()) return result;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        int direction = 0;

        while (top <= bottom && left <= right) {
            if (direction == 0) {
                for (int col = left; col <= right; col++)
                    result.push_back(matrix[top][col]);
                top++;
            } 
            else if (direction == 1) {
                for (int row = top; row <= bottom; row++)
                    result.push_back(matrix[row][right]);
                right--;
            } 
            else if (direction == 2) {
                for (int col = right; col >= left; col--)
                    result.push_back(matrix[bottom][col]);
                bottom--;
            } 
            else if (direction == 3) {
                for (int row = bottom; row >= top; row--)
                    result.push_back(matrix[row][left]);
                left++;
            }
            direction = (direction + 1) % 4;
        }

        return result;
    }
};
int main(){
    Solution s;
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    vector<int> ans=s.spiralOrder(matrix);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}