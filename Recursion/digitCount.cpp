#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

    #define sazzad

int digitCount(int num)
{
    if(num == 0) {
        return 0;
    }

    int temp = num/10;
    return digitCount(temp)+1;

}
int main()
{
    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif

    int n; cin>>n;
    
    cout<<digitCount(n)<<endl;
   
}