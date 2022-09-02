// https://leetcode.com/submissions/detail/789304088/
// https://leetcode.com/problems/two-sum/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(target==nums[i]+nums[j]){
                   return {i,j};
                    //return vector<int> {i,j};
                    //vector
        //                 vector<int> output;
        //             output.push_back(i);
        //             output.push_back(j);
        //             return output;
                }
            }
        }
        return {};
    }
};