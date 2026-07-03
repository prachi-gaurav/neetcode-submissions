class Solution {
public:
    bool isHappy(int n) {
        int slow=n,fast=sumOfSquares(n);
        int p=1,k=1;
        while(slow!=fast) 
        {
            if(p==k) 
            {
                slow=fast;
                p*=2;
                k=0;
            }
            k++;
            fast=sumOfSquares(fast);
        }
        return fast==1;
    }
    private:
    int sumOfSquares(int n) 
    {
        int op=0;
        while(n!=0) 
        {
            op+=(n%10)*(n%10);
            n/=10;
        }
        return op;
    }

};
