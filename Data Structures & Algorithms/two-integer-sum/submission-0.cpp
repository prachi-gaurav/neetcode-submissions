class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size(); int diff=0;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++) 
        {
            diff=target-nums[i];
            if(map.find(diff)!=map.end()) 
                return{map[diff],i};
            map.insert({nums[i],i});
        }
        return {};
    }
};
