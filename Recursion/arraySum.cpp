#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

    #define sazzad

int sumArray(int arr[],int size)
{
    if(size == -1) {
        return 0;
    }

    return sumArray(arr,size-1)+arr[size];
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

    int sum = sumArray(arr,n-1);
    cout<<sum<<endl;
   
}