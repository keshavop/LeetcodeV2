class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = INT_MIN;
        int cs=0;
        for(int i=0;i<n;i++){
            cs += nums[i];

            sum = max(sum,cs);

            if(cs<0){
                cs = 0;
            }
        }
        return sum;
    }
};