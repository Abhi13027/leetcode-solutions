// Solution using brute force
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res{0,0};
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] + nums[j] == target){
                    res[0] = i;
                    res[1] = j;
                }
            }
        }
        
        return res;
    }
};

// Solution using Hash Map  
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int, int> cache;
        vector<int> res;
        
        for(int i=0;i<nums.size();i++){
            int required = target - nums[i];
            
            if(cache.find(required) != cache.end()){
                res.push_back(cache[required]);
                 res.push_back(i);
                return res;
            }
            else{
                cache.insert(make_pair(nums[i], i));
            }
        }
        return res;
    }
};
