class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
        vector<int> ans;

        while (srow <= erow && scol <= ecol) {
            // 1. Traverse Right (Top row)
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(matrix[srow][j]);
            }
            srow++;

            // 2. Traverse Down (Right column)
            for (int i = srow; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }
            ecol--;

            // 3. Traverse Left (Bottom row)
            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--) {
                    ans.push_back(matrix[erow][j]);
                }
                erow--;
            }

            // 4. Traverse Up (Left column)
            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    ans.push_back(matrix[i][scol]);
                }
                scol++;
            }
        }

        return ans;
    }
};