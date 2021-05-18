class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        int i=0;
        while(i < sizeof(uint32_t) * 8){
            if((1<<i) & n){
                res++;
            }
            i++;
        }
        return res;
    }
};
