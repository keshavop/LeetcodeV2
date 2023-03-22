class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans = 0 , idx = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                idx++;
                ans = ans  + idx;
            }
            else{
                idx = 0;
            }
        }
    return ans;
    }
};