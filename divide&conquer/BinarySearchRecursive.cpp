#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long
#define NOT_FOUND -1

       #define sazzad

int BinarySearch(int arr[],int key,int low,int high)
{
    if(low == high) {
        if(arr[low] == key){
            return low;
        } else {
            return -1;
        }
    }

    int mid=(high+low)/2;

    if(key == arr[mid]) {
        return mid;
    } else if(key > arr[mid]) {
        BinarySearch(arr,key,mid+1,high);
    } else {
        BinarySearch(arr,key,low,mid-1);
    }
}

int main()
{
    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif

    int n,key; cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];  // must be sorted array

    int ans = BinarySearch(arr,key,0,n-1);
    
    if(ans== -1){
        cout<< "element is not found"<<endl;
    } else {
        cout<< "element at index: "<<ans+1<<endl;
    }

    

    


    
    return 0;
   
}