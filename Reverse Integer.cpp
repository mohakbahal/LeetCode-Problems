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

//If reverse == Integer.MAX_VALUE/10, then reverse = 2,147,483,640. We know that anything over 2,147,483,647 causes integer overflow, 
//so pop cannot be greater than 7.
//Likewise, if reverse == Integer.MIN_VALUE/10, then reverse = -2,147,483,640. We know that anything under -2,147,483,648 causes integer 
//underflow, so pop cannot be less than -8.
