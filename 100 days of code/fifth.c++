/*Day 5 of #100daysofcodechallenge

Fibonacci Number - LeetCode https://leetcode.com/problems/fibonacci-number/… 
Submission
https://leetcode.com/submissions/detail/784025155/…
*/

class Solution {
public:
    int fib(int n) {
      //  int i=0,j=1;
        if(n==0 || n==1){
            return n;
        }
        else{
            //function calling itself
         return fib(n-1)+fib(n-2);
        }
    }
};

/*
https://www.geeksforgeeks.org/recursion/


The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function

*/