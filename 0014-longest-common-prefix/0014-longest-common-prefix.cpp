class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for(int i=0;i<strs[0].size();i++){
        for(int j=0;j<strs.size();j++){
            if (i>=strs[j].size()||strs[j][i] != strs[0][i]){
            return ans;
        }
        }
        ans+=strs[0][i];
    }
    return ans;
    }
};