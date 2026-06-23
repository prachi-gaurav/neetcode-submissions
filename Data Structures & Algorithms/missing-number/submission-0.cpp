class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int op=n;
        for (int i=0;i<n;i++) 
        {
            op^=i^nums[i];
        }
        return op;
    }
};
