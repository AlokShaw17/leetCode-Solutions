class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> col;
        vector<int> row;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    col.push_back(j);
                    row.push_back(i);
                }
            }
        }
        for (auto a : row)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[a][j] = 0;
            }
        }
        for (auto b : col)
        {
            for (int i = 0; i < m; i++)
            {
                matrix[i][b] = 0;
            }
        }
    }
};
