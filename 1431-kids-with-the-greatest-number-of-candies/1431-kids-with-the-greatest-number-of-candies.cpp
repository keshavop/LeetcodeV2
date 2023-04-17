class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        vector<bool> ans;
        int maxVal = *max_element(candies.begin(),candies.end());
        
        for(int i=0;i<candies.size();i++){
            int curr = candies[i] + extraCandies;
            if(curr >= maxVal){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
    return ans;
    }
};