// https://leetcode.com/problems/move-zeroes/
// https://leetcode.com/submissions/detail/790462731/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                //two pointer approach
                //nums[j]=nums[i];
                //j++;
                swap(nums[j],nums[i]);
                j++;
            }
        }
        
    }
};


/*
good one
https://leetcode.com/problems/move-zeroes/discuss/1857060/Two-pointer-or-C%2B%2B-or-Easiest-solutionor

easy one
https://leetcode.com/problems/move-zeroes/discuss/1857060/Two-pointer-or-C%2B%2B-or-Easiest-solutionor
*/