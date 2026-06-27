class Solution {
public:
    double myPow(double x, int n) {
        if(x==0) return 0;
        if(n==0) return 1;
        double k=1;
        long p=abs((long)n);
        while(p) 
        {
            if(p&1) 
                k*=x;
            x*=x;
            p>>=1;
        }
        return n>=0?k:1/k;
    }
};
