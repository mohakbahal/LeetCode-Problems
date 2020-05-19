class Solution {
public:
    bool isUgly(int num) {
        if (num <= 0) 
        	return false;
        while (num % 2 == 0) 
        	num /= 2;
        while (num % 3 == 0) 
        	num /= 3;
        while (num % 5 == 0) 
        	num /= 5;
        return num == 1;
    }
};

//OR

class Solution {
public:
	bool isUgly(int num) {
for (int i=2; i<6 && num; i++)
    while (num % i == 0)
        num /= i;
return num == 1;
 	}
};