class Solution {
public:
    int reverse(int x) {
        long k=r(abs(x),0)*(x<0?-1:1);
        if(k<INT_MIN || k>INT_MAX) 
            return 0;
        return (int)k;
    }

private:
    long r(int n,long rev) 
    {
        if(n==0) 
            return rev;
        rev=rev*10+n%10;
        return r(n/10,rev);
    }
};
