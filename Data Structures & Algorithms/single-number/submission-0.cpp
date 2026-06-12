class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int k=0;
        for(int num:nums) 
        {
            k^=num;
        }
        return k;
    }
};
