class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestPrefix="";
        if(strs.size()==0)
            return longestPrefix;
        for(int i=0;i<strs[0].size();i++){
            for(int j=0;j<strs.size()-1;j++){
                if(strs[j][i]==strs[j+1][i]){
                }
                else{
                    return longestPrefix;
                }
            }
            longestPrefix=longestPrefix+(strs[0][i]);;
        }
        return longestPrefix;
    }
};