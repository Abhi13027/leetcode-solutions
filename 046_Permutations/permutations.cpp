class Solution {
public:
    vector<vector<int>> res;
    vector<vector<int>> permute(vector<int>& nums) {
        permuteHelper(nums, 0, nums.size()-1);
        return res;
    }
    
    void permuteHelper(vector<int> nums, int left, int right){
        if(left == right){
            res.push_back(nums);
            return;
        }
        for(int i=left;i<=right;i++){
            swap(nums[i], nums[left]);
            permuteHelper(nums, left+1, right);
            swap(nums[i], nums[left]);
        }
    }
};
