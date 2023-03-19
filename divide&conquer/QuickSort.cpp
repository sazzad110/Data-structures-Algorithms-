#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

       #define sazzad

int Partition(int arr[],int low,int high)
{
    int pivot = arr[high];

    int i= low - 1;

    for(int j=low;j<high;j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[high]);

    return (i+1);

}

void QuickSort(int arr[],int low,int high)
{
    if(low<high) {

        int pivot = Partition(arr,low,high);

        QuickSort(arr,low,pivot-1);  // recur call to left sub array
        QuickSort(arr,pivot+1,high); // recur call to right sub aray
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

    QuickSort(arr,0,n-1);

    for(int x:arr) {
        cout<<x<< " ";
    }
    cout<<endl;
   
}