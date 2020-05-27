class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j,count=0;
            for(i=0,j=0;i<t.length();i++)
            {
                if(s[j]==t[i])
                {
                    count++;
                    j++;
                }
            }
        if(count==s.length())
            return true;
        else
            return false;
    }
};