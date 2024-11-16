class Solution {
public:
    int climbStairs(int n) { // Correct function name for the LeetCode problem.
    int one=1;
    int second=1;
    int temp;
    for(int i =0;i<n-1;i++){
        temp=one; //1              //2        //3
        one=one+second;//2         //2+1      //3+2
        second = temp;//1          //2        //3


    }
    return one;
   
    }
};
