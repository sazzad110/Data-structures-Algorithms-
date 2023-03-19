#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

    #define sazzad

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