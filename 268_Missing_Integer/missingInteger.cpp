class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sumRequired = n *(n+1)/2;
        int sumPresent = 0;
        for(int i=0;i<n;i++){
            sumPresent+= nums[i];
        }
        
        return sumRequired - sumPresent;
    }
};
