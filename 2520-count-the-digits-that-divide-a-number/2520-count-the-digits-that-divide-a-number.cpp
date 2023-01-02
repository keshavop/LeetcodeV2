class Solution {
public:
    int countDigits(int num) {
        int ans = 0;
        int n = num;
        while(n>0){
            int val = n % 10;
            if(num%val==0){
                ans++;
            }
            n = n/10;
        }
    return ans;
    }
};