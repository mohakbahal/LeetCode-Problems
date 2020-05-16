class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        merge(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(result));
        auto middle=result.size()/2;
        if(result.size()%2==0)
        {
            int a=result[middle-1];
            int b=result[middle];
            return (a+b)/2.0;
        }
        else
            return result[middle];
        }
};