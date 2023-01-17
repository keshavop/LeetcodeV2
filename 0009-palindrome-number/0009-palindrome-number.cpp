class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0 || x%10==0 && x!=0){
            return false;
        }
        long long rev = 0;
        int num = x;
        while(num!=0){
            int ld = num %10;
            rev = rev * 10 + ld;
            num = num / 10;
        }
    return rev == x;
    }
};