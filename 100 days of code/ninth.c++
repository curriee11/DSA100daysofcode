// https://leetcode.com/problems/missing-number/	
// https://leetcode.com/submissions/detail/787306827/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
            k=i;
        }
        return k+1;
    }
};