class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix[0].size();
        
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
               swap(matrix[i][j], matrix[j][i]);    
           }
           reverse(matrix[i].begin(), matrix[i].end());
       }
    }
};
