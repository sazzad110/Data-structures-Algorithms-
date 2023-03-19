#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

     //  #define sazzad


bool is_prime(int num)                  // check prime or no
{
    if(num<2){
        return false;
    }

    for(int i=2;i*i<=num;i++) {
        if(num % i ==0){
            return false;
        }
    }
    return true;
}

int count_prime(int arr[],int low,int high)   // recursively calling
{
    if(low == high) {                        // one element in the array , 
        
        if(is_prime(arr[low]) == true ) {
            cout<<arr[low]<< " ";
            return 1;
        }
    } else {

        int mid = (low+high)/2;

        int c1 = count_prime(arr,low,mid);    // merging
        int c2 = count_prime(arr,mid+1,high); // merging

        return c1+c2;
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

    int Primes = count_prime(arr,0,n-1);    // calling recursive func to count & print primes

    cout<<"\n#Primes= "<<Primes<<endl;
    
    return 0;
   
}