class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int max_till_here = 0;
        int max_so_far = INT_MIN;
        
        for(int i=0;i<n;i++){
            max_till_here += nums[i];
            if(max_so_far < max_till_here){
                max_so_far = max_till_here;
            }
            if(max_till_here < 0){
                max_till_here = 0;
            }
        }
        
        return max_so_far;
        
    }
};
