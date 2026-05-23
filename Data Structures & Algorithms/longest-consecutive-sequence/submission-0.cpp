class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        unordered_set<int> s;
        int c, n, maxlen=0;
        for(auto num:nums)
        {
            s.insert(num);
        }
        for(auto k:s)
        {
            n=k;
            if(s.find(n-1)!=s.end()) continue;
            else
            {
                c=1;
                while(s.find(n+1)!=s.end())
                {
                    c++;
                    n++;
                }
                if(c>maxlen) maxlen=c;
            }

        } return maxlen;
    }
};
