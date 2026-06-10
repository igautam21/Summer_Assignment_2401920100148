#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size();

        if (m * n != r * c)
            return mat;

        vector<vector<int>> ans(r, vector<int>(c));

        for (int idx = 0; idx < m * n; idx++) {
            ans[idx / c][idx % c] = mat[idx / n][idx % n];
        }

        return ans;
    }
};
int main(){
    Solution s;
    vector<vector<int>> mat={{1,2},{3,4}};
    int r=1,c=4;
    vector<vector<int>> ans=s.matrixReshape(mat,r,c);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}