//code- https://www.youtube.com/watch?v=qoyARrLN_jQ
//explanation and code taken - https://www.youtube.com/watch?v=YJeoQBevNVo

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter length of array";
    cin>>n;
    int key;
    cout<<"enter number to find";
    cin>>key;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start,end,mid;
    bool found=false;
    start=0;
    end=n-1;
    mid=(start+end)/2;

    while(start<=end  && !found){
        if(arr[mid]==key){
            cout<<mid;
            found=true;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else {
            end = mid -1;
        }
        mid=(start+end)/2;
    }
   
    return 0;
}
