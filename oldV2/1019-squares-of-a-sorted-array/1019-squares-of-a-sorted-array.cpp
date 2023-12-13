class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int i = nums.size()-1;
        int l = 0;
        int r = nums.size()-1;
        while(l<=r){
            int ls = nums[l] * nums[l];
            int rs = nums[r] * nums[r];

            if(ls<rs){
                ans[i] = rs;
                r--;
            }
            else{
                ans[i] = ls;
                l++;
            }
            i--;
        }
        return ans;
    }
};