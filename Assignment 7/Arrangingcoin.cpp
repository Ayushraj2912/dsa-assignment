class Solution {
public:
    int arrangeCoins(int n) {
        int k=n;
        long long i=1;
        if(n==0)
        return 0;
        else if (n==1)
        return 1;
        while (k>0)
        {
            i++;
            k-=i;
        }
        return i-1;
    }
};
