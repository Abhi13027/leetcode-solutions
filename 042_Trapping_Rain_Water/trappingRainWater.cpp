// O(N) time and O(N) space complexity 
class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<=2){
            return 0;
        }
        int left[n], right[n];
        left[0] = height[0];
        
        for(int i=1;i<n;i++){
            left[i] = max(left[i-1], height[i]);
        }
        
        right[n-1] = height[n-1];
        for(int i=n-2;i>=0;i--){
            right[i] = max(right[i+1], height[i]);
        }
        
        int result = 0;
        for(int i=0;i<n;i++){
            result+= min(right[i], left[i]) - height[i];
        }
        return result;
    }
};

// O(N) time and O(1) space complexity

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if(n<=2){
            return 0;
        }
        int leftMax = 0, rightMax=0;
        int lo =0, hi= n-1;
        
        int result = 0;
        while(lo<=hi){
            if(height[lo]<height[hi]){
                if(height[lo] >leftMax){
                    leftMax = height[lo];
                }else{
                    result+= leftMax - height[lo];
                }
                lo++;
            }
            else{
                if(height[hi] > rightMax){
                    rightMax = height[hi];
                }else{
                    result+= rightMax - height[hi];
                }
                hi--;
            }
        }
        return result;
    }
};
