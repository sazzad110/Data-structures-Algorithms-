#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

    #define sazzad

void PrintArray(int arr[],int size)
{
    static int i=0;
    
    if(i==size) {
        return;
    }

    cout<<arr[i]<< " ";
    i++;
    PrintArray(arr,size);
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

    PrintArray(arr,n);
   
}