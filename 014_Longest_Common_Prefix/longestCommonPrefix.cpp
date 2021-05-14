class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
                if(i==strs[j].length()){
                    return res;
                }
                if(strs[0][i]!=strs[j][i]){
                    return res;
                }
            }
            res.append(1, strs[0][i]);
        }
        return res;
    }
};
