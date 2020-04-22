 int romanToInt(string s) {
        unordered_map<char,int> roman;
        roman['I'] = 1; roman['V'] = 5; roman['X'] = 10; roman['L'] = 50; roman['C'] = 100; roman['D'] = 500; roman['M'] = 1000;
        
        int num = 0;
        for(int i = s.size()-1 ; i >=0 ; i--)
        {
            if( i-1>=0 && roman[s[i]]>roman[s[i-1]] )
            {
                num +=roman[s[i]]-roman[s[i-1]];
                i--;
            }
            else
            {
                num +=roman[s[i]];
            }
        }
        return num;
    }