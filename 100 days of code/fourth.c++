//leetcode
//mapping
//hash table
// https://leetcode.com/submissions/detail/783173761/

// question - https://leetcode.com/problems/contains-duplicate-ii/

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int count=0;
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            //if nums[i] occured its value will be 1 otherwise 0
           if(m.count(nums[i])){
               if(abs(i-m[nums[i]])<=k)
               {
                   return true;
               }
           }
            //first storing values
            m[nums[i]]=i;
        }
       return false;
    }
};

//good vdo to understand  -  reference - https://www.youtube.com/watch?v=yHIEUkW6BnY