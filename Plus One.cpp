class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int flag=0;
        int last=digits.size()-1;
        while(last>=0)
            {
                if(digits[last]==9)
                {
                    flag=1;
                    digits[last]=0;
                    --last;
                }
                else
                {
                    digits[last]+=1;
                    flag=0;
                    break;
                }
              }
            if(flag==1)
            {
                digits[0]=1;
                digits.push_back(0);
            }
        return digits;
    }
};