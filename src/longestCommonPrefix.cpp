class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        
        sort(s.begin(), s.end());
        string ss="";
        for(int i=0;i<s[s.size()-1].length();i++)
        {
            if(s[0][i]==s[s.size()-1][i])
            {
                ss+=s[0][i];
            }
            else
                break;
        }
        return ss;
    }
};