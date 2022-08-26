// Day 5 of #100daysofcodechallenge

// Fibonacci Number - LeetCode https://leetcode.com/problems/fibonacci-number/… 
// Submission
// https://leetcode.com/submissions/detail/784025155/…

class Solution {
public:
    int fib(int n) {
      //  int i=0,j=1;
        if(n==0 || n==1){
            return n;
        }
        else{
         return fib(n-1)+fib(n-2);
        }
    }
};
