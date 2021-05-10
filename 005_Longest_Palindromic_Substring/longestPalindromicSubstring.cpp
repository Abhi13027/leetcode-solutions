class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0, end =0;
        
        if(s.length()<1){
            return "";
        }
        
        for(int i=0;i<s.length();i++){
            int len1 = expandFromMiddle(s, i, i);
            int len2 = expandFromMiddle(s, i, i+1);
            int len = max(len1, len2);
            if(len > end - start){
                 start = i - (len-1)/2;
                 end = i + len/2;
            }
        }
        
        return s.substr(start, end - start + 1);
       
    }
    
    int expandFromMiddle(string s, int left, int right){
        if(left > right){
            return 0;
        }
        
        while(left >=0 && right < s.length() && s[left] == s[right]){
            left--;
            right++;
        }
        
        return right-left-1;
    }
};
