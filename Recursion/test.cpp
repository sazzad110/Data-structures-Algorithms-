#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

    #define sazzad

void change(int v[])
{
    for(int i=0;i<5;i++) v[i] = 1;
}

int main()
{
    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif

    int n; cin>>n;
    int v[n];
    for(int i=0;i<n;i++) cin>>v[i];

    change(v);

    for(int x:v) cout<<x<< " ";

    return 0;
   
}