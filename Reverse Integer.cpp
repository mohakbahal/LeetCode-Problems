class Solution {
public:
    int reverse(int x) {
        long sum=0,temp;
        while(x!=0)
        {
            temp=x%10;
            if (sum > INT_MAX/10 || (sum == INT_MAX / 10 && temp > 7))
                return 0;
            if (sum < INT_MIN/10 || (sum == INT_MIN / 10 && temp < -8))
                return 0;
            sum=sum*10+temp;
            x/=10;
        }
        return sum;
    }
};