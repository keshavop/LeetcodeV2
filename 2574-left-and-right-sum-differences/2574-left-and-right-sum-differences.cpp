class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> lsum , res;
        int n = nums.size();
        int leftsum = 0;
        int rightsum = 0;
        vector<int> rsum(n, 0);

        for(int i=0;i<n;i++){
            lsum.push_back(leftsum);
            leftsum += nums[i];
        }

        for(int j=n-1;j>=0;j--){
            rsum[j] = rightsum;
            rightsum += nums[j];
        }

        for(int k=0;k<n;k++){
            res.push_back(abs(lsum[k]-rsum[k]));
        }

        return res;
    }
};