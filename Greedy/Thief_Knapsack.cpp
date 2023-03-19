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

    int d,m,n; cin>>d>>m>>n;
    int arr[n]; 
    for(int i=0;i<n;i++) cin>>arr[i];

    int start = 0,lastFuel = 0;

    for(int i=0;i<n;i++) {

        if(arr[i]-lastFuel > m) {
            cout<< "stop at gas station "<<i<<"( "<<arr[i-1]<< " miles )"<<endl;
            lastFuel = arr[i-1]; 
        } 
    }

    


    return 0;
}