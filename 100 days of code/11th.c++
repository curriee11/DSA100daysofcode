// https://leetcode.com/problems/search-insert-position/	
// https://leetcode.com/submissions/detail/788569660/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        int mid;
      //  bool found=false;
        mid=(start+end)/2;
        while(start<=end ){
          
            if(target==nums[mid]){
         //       found =true;
                return mid;
            }
            else if(target>nums[mid]){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
              mid=(start+end)/2;
        }
        return start;
    }
};

// good use of concept of binary search in depth
//time complexity of binary searcg o(log n)
//////////*************88imp link down below*****************8///////////////
// https://www.hackerearth.com/practice/notes/sorting-and-searching-algorithms-time-complexities-cheat-sheet/
