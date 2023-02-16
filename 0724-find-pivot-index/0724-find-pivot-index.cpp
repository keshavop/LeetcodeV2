class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0,lsum=0,n=nums.size();
        for(int i=0;i<n;i++){
            sum += nums[i];
        }

        for(int i=0;i<n;i++){
            sum = sum - nums[i];
            if(lsum == sum){
                return i;
            }
            lsum = lsum + nums[i];
        }
    return -1;
    }
};