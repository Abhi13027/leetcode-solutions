class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int r = n-1;
        int l = 0;
        int result = 0;
        while(l < r){
            result = max(result, min(height[l], height[r]) * (r-l));
            
            if(height[l] < height[r]){
                l++;
            }else{
                r--;
            }
        }
        
        return result;
    }
