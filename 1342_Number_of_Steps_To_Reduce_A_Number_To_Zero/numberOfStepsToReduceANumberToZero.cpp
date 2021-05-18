// Simple Brute Force Approach
class Solution {
public:
    int numberOfSteps(int num) {
        int ans = 0;
        while(num!=0){
            if(num%2==0){
                num = num /2;
            }
            else{
                num = num - 1;
            }
            ans++;
        }
        return ans;
    }
};

// Bitwise Operator Solution
class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0){
            return 0;
        }
        
        int steps = 0;
        for(int i=1;i<=num;i=i*2){
            if((num & i) != 0){
                steps = steps + 2;
            }else{
                steps = steps + 1;
            }
        }
      
        return steps - 1;
    }
};
