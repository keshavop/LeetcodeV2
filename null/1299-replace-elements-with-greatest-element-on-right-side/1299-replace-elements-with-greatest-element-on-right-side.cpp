class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxRight = -1;
        int n = arr.size();
        for(int i = n-1; i>=0 ; i--){
            int temp = maxRight;
            if(arr[i]>maxRight){
                maxRight = arr[i];
            }
            arr[i] = temp;
        }
    return arr;
    }
};