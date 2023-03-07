class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]>nums[i])
                count++;
        }
        // edge case 2 1 3 4
        if(nums[nums.size()-1]>nums[0]){
            count++;
        }
        // count should be less than 1 so that array is rotated and can be sorted
        if(count<=1){
            return true;
        }
    return false;
    }
};