class Solution {
public:
    bool isPalindrome(int x) {
        int sum=0,y;
        y=x;
        if (x<0)
            return false;
        else
        {
            while(x!=0)
            {
                int temp=x%10;
                if(sum>INT_MAX/10 || (sum==INT_MAX/10 && temp>7))
                    return false;
                if(sum<INT_MIN/10 || (sum==INT_MIN/10 && temp<-8))
                    return false;
                sum=sum*10+temp;
                x/=10;
            }
        if(sum==y)
            return true;
        else
            return false;
        }
    }
};