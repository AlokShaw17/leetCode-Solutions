class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> arr(n, vector<int>(n));
        int k = 0;
        for (int i = n - 1; i >= 0; i--) 
        {
            for (int j = 0; j < n; j++) 
            {
                arr[j][k] = matrix[i][j];
            }
            k++;
        }
        matrix = arr;
    }
};
