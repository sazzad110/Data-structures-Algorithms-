#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

   // #define sazzad

int EvenCount(int arr[],int low,int high)
{
    if(low == high) {                   // one element in an array
        if(arr[low]%2==0) {
            return 1;
        } else {
            return 0;
        }
    }

    int mid = (high+low)/2;

    int sum1 = EvenCount(arr,low,mid);    // left array's even count
    int sum2 = EvenCount(arr,mid+1,high); // right array's even count

    return sum1+sum2;
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

    int ans = EvenCount(arr,0,n-1);
    
    cout<< "Total even number: "<<ans<<endl;
    return 0;
   
}