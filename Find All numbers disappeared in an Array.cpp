class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int len = nums.size();
        vector<int> temp(len+1);
        for (int i=0; i<len; i++)
        {
            temp[nums[i]]++;
        }
        vector<int>result;
        for (int i = 1; i<len+1; i++) {
            if (temp[i] == 0) 
                result.push_back(i);
        }
        return result; 
    }
};