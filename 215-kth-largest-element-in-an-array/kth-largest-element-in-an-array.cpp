class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int>pq;

        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }

        int f = k-1;

        while(f>0){
            pq.pop();
            f--;
        }
        int ans = pq.top();
        return ans;
    }
};