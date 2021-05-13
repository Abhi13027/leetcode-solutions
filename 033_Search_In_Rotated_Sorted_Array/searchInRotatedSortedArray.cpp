class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        
        while(lo<=hi){
            int mid = (lo + hi) /2 ;
            if(target == nums[mid]){
                return mid;
            }
            else if (nums[lo] <= nums[mid]){
                if(target >= nums[lo] && target <= nums[mid]){
                    hi = mid-1;
                }
                else{
                    lo = mid + 1;
                }
            }
            else{
                if(target >= nums[mid] && target <= nums[hi]){
                    lo = mid +1;
                }
                else{
                    hi = mid-1;
                }
            }
        }
        
        return -1;
        
    }
};
