class Solution {
public:
    int reverse(int x) {
        long long int y = 0;
        int type = 0;
        if(x < 0){
            type = 1;
        }
        if(x < 0){
            x = abs(x);
        }
        
        while(x>0){
            y = 10*y + x%10;
            x = x / 10;
        }
        
        if(y > INT_MAX || y < INT_MIN){
            return 0;
        }
        
        if(type == 1){
            return -y;
        }
        
        return y;
        
    }
};
