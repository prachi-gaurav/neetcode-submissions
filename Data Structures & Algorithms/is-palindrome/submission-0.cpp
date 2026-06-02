class Solution {
public:
    bool isPalindrome(string s) {
        int r=0,len=s.length()-1;
        while(r<len) 
        {
            while(r<len && !check(s[r])) 
                r++;
            while(len>r && !check(s[len]))
                len--;
            if(tolower(s[r]) != tolower(s[len])) 
                return false;
            r++; 
            len--;
        }
        return true;
    }
    bool check(char c) 
    {
        return (c>='A' && c<='Z' || c>='a' && c<='z' || c >='0' && c<='9');
    }
};
