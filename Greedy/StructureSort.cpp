#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

struct Pair {
    int a,b;
};

bool comp(Pair p1,Pair p2)
{
    if(p1.a == p2.a) {
        return p1.b < p2.b;
    } else {
        return p1.a > p2.a;
    }
}

int main()
{
    Pair pairs[] = {
        {7,2},
        {7,4},
        {7,6},
        {7,8}
    };

    int n = sizeof(pairs)/sizeof(pairs[0]);
    cout<<n<<endl;

    sort(pairs,pairs+n,comp);

    for(int i=0;i<n;i++) {
        cout<<pairs[i].a<< "  "<<pairs[i].b<<endl;
    }
}