class Solution {
public:
    double average(vector<int>& salary) {
        // if(salary.size()==2){
        //     return 0;
        // }
        int mins = INT_MAX;
        int maxs = INT_MIN;
        double sum = 0;
        for(int x:salary){
            mins = min(mins,x);
            maxs = max(maxs,x);
            sum = sum + x;
        }
        return (sum -(maxs+mins))/(salary.size()-2);
    }
};