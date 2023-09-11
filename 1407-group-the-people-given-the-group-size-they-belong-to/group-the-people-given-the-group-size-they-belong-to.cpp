class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans{};
        unordered_map<int, vector<int>> dict{}; // K: group size, V: indices
        for (int i=0; i<groupSizes.size(); i++) {
            int key = groupSizes[i];
            if (dict.count(key) > 0) { // check existing groups to fill
                dict[key].push_back(i);
            } else { // create a new group
                dict[key] = vector<int>{i};
            }
            if (dict[key].size() == key) { // group is full
                ans.push_back(dict[key]);
                dict.erase(key);
            }
        }
        return ans;
    }
    
};