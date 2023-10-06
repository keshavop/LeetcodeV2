class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        int row = grid.size()-1;
        int col = 0;
        int totalCol = grid[0].size();
        while(row>=0 && col<totalCol){
            if(grid[row][col]<0){
                ans += totalCol - col;
                row--;
            }
            else{
                col++;
            }
        }
        return ans;
    }
};