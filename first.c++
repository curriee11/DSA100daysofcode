// binary search
// Problem - https://www.codechef.com/submit/TRICOIN
// https://www.codechef.com/LTIME35

// https://www.youtube.com/watch?v=UZFvIMtPy8E

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,h=1;
        cin >> n;
        for(int i=1;i<=n;i++){
            h=h*(h+1)/2;
            if(h<=n){
                h++;
            }else{
                break;
            }
        }
        cout<<h<<endl;
    }
    return 0;
}

// submission - https://www.codechef.com/viewsolution/71923994