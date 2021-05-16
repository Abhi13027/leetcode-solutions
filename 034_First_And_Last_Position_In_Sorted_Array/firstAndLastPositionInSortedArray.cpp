class Solution {
public:
    
    int first(vector<int> nums, int lo, int hi, int target){
        if(lo<=hi){
            int mid = (lo + hi)/2;
            if((mid==0 || nums[mid-1] < target) && nums[mid]== target){
                return mid;
            }
            else if(nums[mid] < target){
                return first(nums, mid+1, hi, target);
            }
            else{
                return first(nums, lo, mid-1, target);
            }
        }
        else{
            return -1; 
        }
       
    }
    
     int second(vector<int> nums, int lo, int hi, int target){
        int n = nums.size();
        if(lo<=hi){
            int mid = (lo + hi)/2;
            if((mid==n-1 || nums[mid+1] > target) && nums[mid]== target){
                return mid;
            }
            else if(target < nums[mid]){
                return second(nums, lo, mid-1, target);
            }
            else{
                return second(nums, mid+1, hi, target);
            }
        }
        else{
            return -1;
        }
        
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0, hi = n-1;
        
        int index1 = first(nums, 0, n-1, target);
        int index2 = second(nums, 0, n-1, target);
        
        vector<int> res;
        res.push_back(index1);
        res.push_back(index2);
        return res;
    }
};
