class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,j;
        int len=haystack.length()-needle.length();
        if(haystack.length()==NULL && needle.length() == NULL)
            return 0;
        else
        {
        for(i=0;i<=len;i++)
        {
            j=0;
            for(;j<needle.length();j++)
            {
                if(haystack[i+j]!=needle[j])
                    break;
            } 
        if(j==needle.length())
            return i;
        }
        return -1;
        }
    }
};