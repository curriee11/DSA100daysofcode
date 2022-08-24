//bubble sort
//https://www.youtube.com/watch?v=o4bAoo_gFBU
// https://www.programiz.com/dsa/sorting-algorithm
// BubbleSort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.
//  This algorithm is not suitable for large data sets as its average and worst-case time complexity is quite high.
// https://www.geeksforgeeks.org/bubble-sort/ - deatiled analysis of time complexities

#include <bits/stdc++.h>
using namespace std;
void bubbleSort(vector <int> &a , int m)
{
    int temp=0;
    for(int i = 0 ; i < m-1 ; i++)
    {
        for(int j=0;j<m-1-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    vector <int> a = {3 , 2 , 6};
    int m = 3 ;
    bubbleSort(a,m);
    // for(int &x : a)
    //     cout << x << " ";
    for(int h=0;h<m;h++){
        cout<<a[h]<<" ";
    }
    return 0;
}