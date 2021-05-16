// Log(n) Solution

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        int mid;
        
        while(lo<=hi){
            mid = (lo + hi)/2;
            if(nums[mid]>=nums[hi]){
                lo = mid + 1;
            }
            else{
                hi = mid;
            }
        }
        
        return nums[mid];

    }
};

// Linear time solution
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]> nums[i]){
                return nums[i];
            }
        }
        return nums[0];
    }
};
