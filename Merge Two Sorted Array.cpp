class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i,j=0;
        for(i=m;i<nums1.size();i++)
        {
            if(j<n)
            nums1[i]=nums2[j];
            j++;
        }
        sort(nums1.begin(),nums1.end());
      }            
};