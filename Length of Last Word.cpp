class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())
            return 0;
        int i=0;
        string temp="";
        string result="";
        for(;i<s.length();i++)
        {
            if(s[i]== ' ')
                temp="";
            else
            {
                temp=temp+s[i];
                result=temp;
            }
        }
        return result.length();
    }
};