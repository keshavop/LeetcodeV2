class Solution {
public:
    int reverse(int x) {
        int temp = 0;
        long long rev = 0;
        while(x!=0){
            temp = x%10;
            rev = rev *10 + temp;
            x = x/10;
        }
        if(rev>INT_MAX || rev<INT_MIN){
            return 0;
        }
    return rev;
    }
};