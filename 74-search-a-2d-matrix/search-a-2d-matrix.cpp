class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();  //row
        int m = matrix[0].size();  //col

        int low = 0;
        int high = (n*m) - 1;

        while(low<=high){
            int mid = (low + (high - low)/2);

            if(matrix[mid/m][mid%m] == target){  //[mid/m] -> col number
                return true;                     //[mid%m] -> col index
            }
            if(matrix[mid/m][mid%m] < target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return false;
    }
};