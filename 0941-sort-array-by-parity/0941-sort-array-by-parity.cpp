class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        // for(int i=0;i<n;i++){
        //     if(nums[low]%2==0)
        //         low++;
        //     if(nums[high]%2==1)
        //         high--;
        // }
        while(low<high){
            while(low<high && nums[low]%2==0)
                low++;
            while(low<high && nums[high]%2==1)
                high--;
                
            swap(nums[low],nums[high]);
        }

        return nums;
    }
};