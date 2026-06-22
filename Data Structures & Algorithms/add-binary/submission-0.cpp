class Solution {
public:
    string addBinary(string a, string b) {
        string s="";
        int c=0;
        int i=a.size()-1,j=b.size()-1;
        while (i>=0||j>=0||c>0) 
        {
            int d1=i>=0?a[i]-'0':0;
            int d2=j>=0?b[j]-'0':0;
            int tot=d1+d2+c;
            s+=(tot% 2)+'0';
            c=tot/2;
            i--;
            j--;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};