class Solution {
public:
    vector<int> sortArray(vector<int>& nums) 
    {
        if (nums.size()<=1) 
            return nums;

        int mid=nums.size()/2;
        vector<int> left(nums.begin(),nums.begin()+mid);
        vector<int> right(nums.begin()+mid,nums.end());
        
        left=sortArray(left);
        right=sortArray(right);
        vector<int> result;
        auto i=left.begin(),j=right.begin();
        while(i!=left.end() && j!=right.end()) 
        {
            result.push_back((*i<=*j)?*i++:*j++);
        }
        result.insert(result.end(),i,left.end());
        result.insert(result.end(),j,right.end());

    return result;
    }
};