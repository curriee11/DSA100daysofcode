https://practice.geeksforgeeks.org/problems/insertion-sort/1

goood one below!!
https://www.geeksforgeeks.org/insertion-sort/

public:
    void insert(int arr[], int i)
    {
        //code here
          arr[i+1]=arr[i];
        
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        int key,j;
        for(int i=1;i<n;i++){
            key=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>key){
               // arr[j+1]=arr[j];
                insert(arr,j);
                j=j-1;
            }
            arr[j+1]=key;
        }
    }
    
    
    
