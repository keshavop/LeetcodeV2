class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0;
        int j = 0;

        for(auto x:pushed){
            pushed[i++] = x;
            while(i>0 && pushed[i-1] == popped[j]){
                i--;
                j++;
            }
        }
        return i==0;
    }
};