class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>arr;
        for(int num:nums) 
        {
            arr[num]++;
        }
        vector<int>n;
        for(auto& pair:arr) 
        {
            if(pair.second>nums.size()/3) 
            {
                n.push_back(pair.first);
            }
        }
        return n;
    }
};