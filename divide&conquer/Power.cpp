#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

       #define sazzad

int powerr(int x,int y)
{
    if(y == 0) {   // smthg to the power 0 = 1
        return 1;
    }

    int temp = powerr(x,y/2);

    if(y%2 ==0) {
        return temp*temp;
    } else {
        return temp*temp*x;
    }
}

int main()
{
    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif

    int x,y; cin>>x>>y;      // calc x^y

    int ans = powerr(x,y);

    cout<< x<<"^"<<y<< " is: "<<ans<<endl;
    
    return 0;
   
}