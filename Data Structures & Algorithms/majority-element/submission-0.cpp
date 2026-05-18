class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int current=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(c==0)
            {
                current=nums[i];
            }
            if(current!=nums[i])
            {
                c--;
            }
            else
            {
                c++;
            }
        }
        return current;
    }
};