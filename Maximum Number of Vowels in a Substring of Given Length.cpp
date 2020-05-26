class Solution {
public:
    int maxVowels(string s, int k) {
        int i,count=0,max_count=0;
        bool vowels[26]={false};
        vowels[0]=vowels[4]=vowels[8]=vowels[14]=vowels[20]=true;
        for(i=0;i<s.length();i++)
        {
            if(i>=k && vowels[s[i-k]-'a'])
                count--;
            if(vowels[s[i]-'a'])
                count++;
        max_count=max(max_count,count);
        }
        return max_count;
    }
};