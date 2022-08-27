// https://leetcode.com/problems/majority-element/
// https://leetcode.com/submissions/detail/784780089/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int y=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
        //    int j=1;
        if(m.count(nums[i]))
        {
             m[nums[i]]=m[nums[i]]+1;
        }
            else{
                m[nums[i]]=1;
            }
        }
        
    
    for(int b=0;b<n;b++){
        if(m[nums[b]]>n/2){
            y=nums[b];
        }
    }
        return y;
    }
};