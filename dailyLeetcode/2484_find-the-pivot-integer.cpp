// 2485. Find the Pivot Integer

// Time: 0(N^2)
// Space: 0(1)
class Solution {
public:
    int pivotInteger(int n) {
        for(int i=1;i<=n;i++){
            int leftSum = 0;
            int rightSum = 0;

            for(int j=1;j<=i;j++){
                leftSum += j;
            }
            for(int k=i;k<=n;k++){
                rightSum += k;
            }

            if(rightSum == leftSum){
                return i;
            }
        }
        return -1;
    }
};


// Time: 0(N)
// Space: 0(1)
class Solution {
public:
    int pivotInteger(int n) {
        int leftValue = 1;
        int rightValue = n;
        int leftSum = leftValue;
        int rightSum = rightValue;

        if(n==1) return n;

        while(leftValue < rightValue){
            if(leftSum < rightSum){
                leftValue++;
                leftSum += leftValue;
            }
            else{
                rightValue--;
                rightSum += rightValue;
            }
            if(leftSum == rightSum && leftValue+1 == rightValue-1){
                return leftValue+1;
            }
        }
        return -1;
    }
};