class Solution {
public:
    string convertToTitle(int columnNumber) {
        string r;
        while(columnNumber>0) 
        {
            columnNumber--;
            int off=columnNumber%26;
            r+=('A'+off);
            columnNumber/=26;
        }
        reverse(r.begin(),r.end());
        return r;
    }
};