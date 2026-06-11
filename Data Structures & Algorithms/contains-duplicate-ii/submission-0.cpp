class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>n;
        int l=0;
        for(int i=0;i<nums.size();i++) 
        {
            if(i-l>k) 
            {
                n.erase(nums[l]);
                l++;
            }
            if(n.find(nums[i]) != n.end()) 
            {
                return true;
            }
            n.insert(nums[i]);
        }
        return false;
    }
};