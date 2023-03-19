#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

  //  #define sazzad

void OddPrint(int arr[],int low,int high)
{
    if(low == high) {
                           // one element in an array
        if(arr[low]%2 == 1) {

            cout<<arr[low]<< " ";
        }

    } else {

        int mid = (high+low)/2;

        OddPrint(arr,low,mid);   
        OddPrint(arr,mid+1,high); 

    }


}
int main()
{
    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif

    int n; cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++) cin>>arr[i];

    OddPrint(arr,0,n-1);
    
    return 0;
   
}