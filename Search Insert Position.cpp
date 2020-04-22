class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int count=0,i;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>=target)
                break;
        }
        count=i;
        return count;
    }
};