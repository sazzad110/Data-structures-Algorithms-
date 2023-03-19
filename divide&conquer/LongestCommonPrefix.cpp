#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

    #define sazzad

string common(string left, string right) {

    int lsize = left.length(), rsize = right.length();
    int l = 0, r = 0;

    while(l < lsize && r < rsize) {

        if(left[l] != right[r]) 
            break;
        l++;
        r++;
    }
    return left.substr(0, l);
}

string MaxString(vector<string>v,int low,int high)
{
    if(high==low) {
        return v[low];
        
    } else {

        int mid = (high+low)/2;
        string s1 = MaxString(v,low,mid);
        string s2 = MaxString(v,mid+1,high);

        string LCP = common(s1,s2);

        return LCP;
    }
}

int main()
{
    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif

    int n; cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    string maxStr = MaxString(v,0,n-1);
    cout<<maxStr<<endl;
   
}