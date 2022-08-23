// https://www.codechef.com/submit/POSTAL?tab=statement
// cant solve no proper editorial
// based on bubble sorting


/////////

// merge sorted arrays
//leetcode
//
// https://www.tutorialcup.com/leetcode-solutions/merge-sorted-arrays-leetcode-solution.htm
// question - https://leetcode.com/problems/merge-sorted-array/
//leetcode solution done by me

// https://leetcode.com/submissions/detail/781002565/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        for(int i=0;i<n;i++){
            //merging nums1 and nums2 in nums1
            nums1[m+i]=nums2[i];
        }
        
        sort(nums1.begin(),nums1.end());
        return;
    }
};

//other leetcode solutions

#include <bits/stdc++.h>
using namespace std;
void merge(vector <int> &a , int m , vector <int> &b , int n)
{
    for(int i = 0 ; i < n ; i++)
        a[i + m] = b[i];
    sort(a.begin() , a.end());
    return;
}
int main()
{
    vector <int> a = {1 , 2 , 3};
    vector <int> b = {2 , 6 , 7};
    int m = 3 , n = 3;
    a.resize(m + n);
    merge(a , m , b , n);
    for(int &x : a)
        cout << x << " ";
    return 0;
}
