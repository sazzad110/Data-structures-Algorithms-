#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

     //  #define sazzad

int CalcSum(int arr[],int low,int high)
{
    if(low == high) {
        return arr[low];
    }

    int mid = (high+low)/2;

    int sum1=CalcSum(arr,low,mid);
    int sum2=CalcSum(arr,mid+1,high);

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

    int ans = CalcSum(arr,0,n-1);

    cout<< "total sum is: "<<ans<<endl;
    
    return 0;
   
}