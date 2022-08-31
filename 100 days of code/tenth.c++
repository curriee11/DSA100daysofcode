// https://leetcode.com/submissions/detail/788205116/
// https://leetcode.com/problems/single-number/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
  //      map<int,int> m;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i=i+2){
//             if(m.count[nums[i]]){
                
//             }
//             else{
//                 m[nums[i]]=i;
//             }
            if(nums[i]!=nums[i+1]){
                //return true;
                return nums[i];
            }
        }
      return nums[nums.size()-1];
         
    }
};