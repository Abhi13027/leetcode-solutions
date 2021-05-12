// Brute Force
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int res = 1;
        for(int i=0;i<n;i++){
            if(nums[i]==res){
                res++;
            }
        }
        return res;
    }
};

// Efficient Solution
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<=0){
                nums[i] = n + 5;
            }
        }
        
        for(int i=0;i<n;i++){
            if(abs(nums[i])<=n){
                nums[abs(nums[i])-1] = abs(nums[abs(nums[i])-1]) * -1;
            }
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]> 0){
                return i+1;
            }
        }
        
        return nums.size() + 1;
    }
};
