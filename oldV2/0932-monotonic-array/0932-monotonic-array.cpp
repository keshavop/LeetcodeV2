class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();

        bool increasing = true;
        bool decreasing = true;

        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1])
                decreasing = false;
            
            if(nums[i]<nums[i-1])
                increasing = false;

            if(increasing == false && decreasing == false)
                return false;
        }
    return true;
    }
};