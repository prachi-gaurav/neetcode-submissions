class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int c=0,curr_sum=0;
        unordered_map<int,int>psum;
        psum[0]=1;
        for(int num:nums) 
        {
            curr_sum+=num;
            int diff=curr_sum-k;
            c+=psum[diff];
            psum[curr_sum]++;
        }
        return c;
    }
};