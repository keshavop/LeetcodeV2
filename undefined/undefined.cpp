class Solution {
public:

    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            string digit = to_string(nums[i]);
            for(int j =0;j<digit.length();j++){
                ans.push_back(digit[j]-'0');
            }
        }
    return ans;
    }
};