// Normal Iterative solution using Auxillary space
class Solution {
public:
    int fib(int n) {
        int dp[n+1];
        dp[0] = 0;
        if(n>=1){
            dp[1] = 1;
        }       
        for(int i=2;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        
        return dp[n];
    }
};

// Space Efficient solution
class Solution {
public:
    int fib(int n) {
        int prev2=0, prev1=1, current=0;
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        for(int i=2;i<=n;i++){
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
        return current;
    }
};

