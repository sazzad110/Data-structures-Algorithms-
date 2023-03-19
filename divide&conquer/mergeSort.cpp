#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

    #define sazzad

void merge(int arr[],int low,int middle,int high)
{
    int len1 = middle-low+1;
    int len2 = high-middle;
    int totallen=high-low+1;

    int leftArray[len1],rightArray[len2];

    for(int i=0;i<len1;i++) { 
        leftArray[i]=arr[low+i];
    }
    for(int i=0;i<len2;i++) {
        rightArray[i]=arr[middle+1+i];
    }
    
    int i, j, k;
    i = 0;
    j = 0;
    k = low;

    while (i < len1 && j < len2) {
    if (leftArray[i] <= rightArray[j]) {
    arr[k] = leftArray[i];
    i++;
    } else {
    arr[k] = rightArray[j];
    j++;
    }
    k++;
    }

    // remaining element in left array
    while (i < len1) {
    arr[k] = leftArray[i];
    i++;
    k++;
    }

    //remaining elemnet in right array

    while (j < len2) {
    arr[k] = rightArray[j];
    j++;
    k++;
    }


}

void mergeSort(int arr[],int l,int r)
{
    int mid = l+ (r-l)/2;
    
    if(l<r) {
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r);
    }
} 

int main()
{
    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif

    int n; cin>>n;
    //cout<<n<<endl;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int mid=(n-1)/2;
    mergeSort(arr,0,n-1);

    for(int x:arr) {
        cout<<x<< " ";
    }


    return 0;
   
}