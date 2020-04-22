class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) 
        return "";
    sort(strs.begin(),strs.end());
        int n=strs.size();
       string a=strs[0];
        string result="";
        string b=strs[n-1];
        for(int i=0;i<a.length();i++)
        {
            if(a[i]==b[i])
                result=result+a[i];
            else
                break;
        }
        return result;
    }
};