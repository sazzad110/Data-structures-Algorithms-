#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

    #define sazzad

int merge(int arr[], int left, int mid, int right) {

    int i = left, j = mid, k = 0;
    int invCount = 0;
    int temp[(right - left + 1)];

    while ((i < mid) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k] = arr[i];
            ++k;
            ++i;
    } else {
        temp[k] = arr[j];
        invCount += (mid - i);
        ++k;
        ++j;
    }
    }

    while (i < mid) {
        temp[k] = arr[i];
        ++k;
        ++i;
    }

    while (j <= right) {
        temp[k] = arr[j];
        ++k;
        ++j;
    }

    for (i = left, k = 0; i <= right; i++, k++) {
        arr[i] = temp[k];
    }

    return invCount;
}

int mergeSort(int arr[], int left, int right) {

    int invCount = 0;

    if (right > left) {
    int mid = (right + left) / 2;
    invCount = mergeSort(arr, left, mid);
    invCount += mergeSort(arr, mid + 1, right);
    invCount += merge(arr, left, mid + 1, right);
    }
    return invCount;
} 

int main()
{
    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif

    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int ans = mergeSort(arr,0,n-1);

    cout<< "Number of inversion: "<<ans<<endl;



    return 0;
   
}