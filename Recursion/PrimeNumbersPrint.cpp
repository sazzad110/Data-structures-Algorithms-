#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

    #define sazzad

bool isPrime(int num)
{
    if(num<2) return false;
    if( num == 2) return true;

    for(int i=2;i*i<=num;i++) {
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}

void PrimePrint(int arr[],int size)
{
    static int i=0;

    if(i==size) {
        return;
    }

    if(isPrime(arr[i])) {
        cout<< "Prime: "<<arr[i]<<endl;
    }
    i++;

    PrimePrint(arr,size);
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

    PrimePrint(arr,n);
   
}