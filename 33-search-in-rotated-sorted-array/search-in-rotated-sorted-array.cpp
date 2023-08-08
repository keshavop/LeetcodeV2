class Solution {
public:
    int search(vector<int>& arr, int target) {
        
        int start = 0;
        int n = arr.size();
        int end = n-1;

        while(start <= end){

            int mid = (start + end)/2;

            // cout<<arr[mid]<<"\n";

            if(arr[mid] == target){
                return mid;
            }

            else if(arr[start] <= arr[mid]){  //left side sorted
                if(arr[start] <= target && arr[mid] >= target){
                    // cout<<"no"<<"\n";
                    end = mid -1;
                }
                else{
                    // cout<<"yes"<<"\n";
                    start = mid + 1;
                }
            }

            else if(arr[end] >= arr[mid]){
                if(arr[mid] <= target && arr[end] >= target){
                    start = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }

        }
        return -1;
    }
};