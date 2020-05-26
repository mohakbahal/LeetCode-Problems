class Solution {
public:
    string reverseWords(string s) {
        vector<string> vecStr;
        istringstream istr(s);
        string str;
        while(istr>>str)
            vecStr.push_back(str);

        string out;
        for(int i = vecStr.size()-1; i >= 0; i--)
        {
            out += vecStr[i];
            if(i) 
                out+=' ';
        }
        return out;
    }
};