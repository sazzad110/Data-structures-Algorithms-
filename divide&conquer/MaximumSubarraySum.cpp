#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

  //  #define sazzad

int max_crossSum_subarray(int arr[],int low,int mid,int high)
{
    int leftSum=INT_MIN,sum=0;

    for(int i=mid;i>=low;i--) {

        sum+=arr[i];
        if(sum>leftSum) {
            leftSum=sum;
        }
    }

    int rightsum = INT_MIN;
    sum=0;

    for(int i=mid;i<=high;i++) {

        sum+=arr[i];
        if(sum>rightsum) {
            rightsum=sum;
        }
    }

    return max(leftSum,max(rightsum,leftSum+rightsum-arr[mid]));  // mid duibar sum hoyeche
}

int max_sum_subarray(int arr[],int low,int high)
{
    if(low==high) {
        return arr[high];   //one element in array
    }

    int mid = (high+low)/2;

    int leftSum  = max_sum_subarray(arr,low,mid);
    int rghtSum  = max_sum_subarray(arr,mid+1,high);
    int crossSum = max_crossSum_subarray(arr,low,mid,high);

    int maxSum = max(leftSum,max(rghtSum,crossSum));
    
    return maxSum;
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

    int maxSum = max_sum_subarray(arr,0,n-1);
    cout<<maxSum<<endl;
   
}