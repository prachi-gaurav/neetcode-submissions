class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=0,l=s.size()-1;
        while(n<l) 
        {
            swap(s[n++],s[l--]);
        }
    }
};