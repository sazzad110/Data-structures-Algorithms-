#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

    #define sazzad

void OddEvenPrint(int arr[],int size)
{
    static int i=0;

    if(i==size) {
        return;
    }

    if(arr[i]%2) {
        cout<< "Odd: "<<arr[i]<<endl;
    } else {
        cout<< "Even: "<<arr[i]<<endl;
    }
    i++;

    OddEvenPrint(arr,size);
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

    OddEvenPrint(arr,n);
   
}