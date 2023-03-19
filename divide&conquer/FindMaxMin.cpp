#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

       #define sazzad

struct st{
    int mx,mn;
};

st FindMaxMin(int arr[],int low,int high)
{
    if(high==low) {
        return {arr[low],arr[low]};
    } else {
        int mid = (high+low)/2;

        st LeftResult = FindMaxMin(arr,low,mid);
        st RightResult = FindMaxMin(arr,mid+1,high);

        st Res;

        Res.mx = max(LeftResult.mx,RightResult.mx);
        Res.mn = min(LeftResult.mn,RightResult.mn);

        return Res;
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

    st ans = FindMaxMin(arr,0,n-1);

    cout<< "max element: "<<ans.mx<< "   "<< "min element: "<<ans.mn<<endl;


    
    return 0;
   
}