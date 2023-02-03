// Time -> O(N)
// Space -> O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int total = (n*(n+1))/2;
        for(auto x:nums){
            sum = sum + x;
        }
        int missingNum = total - sum;
        return missingNum;
    }
};