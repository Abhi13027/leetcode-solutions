// Reversing the number and comparing 

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        
        if(x == 0){
            return true;
        }
        
        long long int y=0;
        int temp = x;
        
        while(x>0){
            y = 10*y + x%10;
            x = x/10;
        }
        
        if(y==temp){
            return true;
        }
        
        return false;
    }
};

// Using the inbuilt functions

class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        string num = to_string(x);
        string temp = num;
        
        reverse(num.begin(), num.end());
        if(temp == num){
            return true;
        }
        
        return false;
    }
};
