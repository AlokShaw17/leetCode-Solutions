class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> m;
        int top=0,bottom=matrix.size()-1,left=0,right=matrix[0].size()-1;
        while(left<=right && top<=bottom)
        {
            for(int i=left;i<=right;i++)
            {
                m.push_back(matrix[top][i]);
            }
            top++;
            for(int j=top;j<=bottom;j++)
            {
                m.push_back(matrix[j][right]);
            }
            right--;
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    m.push_back(matrix[bottom][i]);
                }
            }
            bottom--;
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    m.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return m;
    }
};