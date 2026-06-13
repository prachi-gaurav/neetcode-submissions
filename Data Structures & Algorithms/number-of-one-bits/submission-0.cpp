class Solution {
public:
    int hammingWeight(uint32_t n) {
        int k=0;
        while(n!=0) 
        {
            k+=(n&1)?1:0;
            n>>=1;
        }
        return k;
    }
};
