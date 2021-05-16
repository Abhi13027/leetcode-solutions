class Solution {
public:
    
     bool findRow(vector<vector<int>> matrix, int m, int n, int target){
        int lo = 0;
        int hi = m-1;
        
        while(lo<=hi){
            int mid = (lo + hi)/2;
            
            if(matrix[mid][0] == target || matrix[mid][n-1] == target){
                return true;
            }
            else if(matrix[mid][0] < target && matrix[mid][n-1] > target){
                return binarySearch(matrix, m, n, target, mid);
            }
            else if(target < matrix[mid][0]){
                hi = mid-1;
            }
            else{
                lo = mid + 1;
            }
        }
        return false;
    }
    
    bool binarySearch(vector<vector<int>> matrix, int m, int n, int target, int row){
        int lo = 0;
        int hi = n-1;
        
        while(lo<=hi){
            int mid = (lo + hi)/2;
            if(matrix[row][mid] == target){
                return true;
            }
            else if(matrix[row][mid] < target){
                lo = mid + 1;
            }
            else{
                hi = mid -1;
            }
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        return findRow(matrix, m, n, target);
        
    }
};
