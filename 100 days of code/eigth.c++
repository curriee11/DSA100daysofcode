//Palindrome Number
//https://leetcode.com/problems/palindrome-number/

//	https://leetcode.com/submissions/detail/786421329/

class Solution {
public:
    bool isPalindrome(int x) {
       long long int r=0,sum=0;
       long long int y;
        y=x;
        while(x!=0){
            r=x%10;
            sum=10*sum+r;
            x=x/10;
        }
        if(sum==y && y>=0){
            return true;
        }
        else{
            return false;
        }
    }
};