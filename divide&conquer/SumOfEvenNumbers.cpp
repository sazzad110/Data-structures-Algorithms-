#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

       #define sazzad

int SumOfEvenNumbers(int arr[],int low,int high)
{
    if(low == high) {
        
        if(arr[low]%2 == 0 ) {
            return arr[low];
        } else {
            return 0;
        }
    } 

    int mid = (high+low)/2;

    int sum1=SumOfEvenNumbers(arr,low,mid);
    int sum2=SumOfEvenNumbers(arr,mid+1,high);
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
    
    int evensum = SumOfEvenNumbers(arr,0,n-1);
    cout<< "sum of even numbers is: "<<evensum<<endl;
    
    return 0;
   
}