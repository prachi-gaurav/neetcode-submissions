class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int c=0;
        std::vector<int> ans(2*nums.size());
        for(int i=0; i<2*nums.size(); i++)
        {
            if(i==nums.size())
            {
                c=0;
                ans[i]=nums[c];
                c++;
            }
            else
            {
                ans[i]=nums[c];
                c++;
            }
        }
        return ans;
    }
};