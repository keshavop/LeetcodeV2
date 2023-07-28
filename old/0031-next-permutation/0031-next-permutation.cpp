class Solution {
public:
void nextPermutation(vector<int>& nums) {
        int n=nums.size(),i,j,y;
        for(i = n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i==-1){
            reverse(nums.begin(),nums.end());
            return;
        }y=-1;
        for(j = n-1; j >i; j--){
            if(nums[j]>nums[i]){
                y = j;
                break;
            }
        }
        swap(nums[i],nums[y]);
        reverse(nums.begin()+i+1,nums.end());
    }
};