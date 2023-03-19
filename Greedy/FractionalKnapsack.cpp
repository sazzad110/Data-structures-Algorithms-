#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

         #define sazzad


struct Item {
    int v,w;
};

bool comp(Item i1,Item i2)
{
    return (float)i1.v/(float)i1.w > (float)i2.v/(float)i2.w;
}

int FractionalKnapsack(Item items[],int n,int bagSize)
{
    sort(items,items+n,comp);
    cout<< "after sorting by value/ weight"<<endl;

    for(int i=0;i<n;i++) {
        cout<<items[i].v<< "   "<<items[i].w<<endl;
    }

    for(int i=0;i<n;i++) {
        
    }

}

int main()
{

    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif



    cout<< "How many items:"<<endl;
    int n; cin>>n;

    Item items[n];

    cout<< "Please enter item's corresponding value and weight"<<endl;

    for(int i=0;i<n;i++) {
        cin>>items[i].v>>items[i].w;
    }
    cout<< "Enter the size of knapsack"<<endl;
    int bagSize; cin>>bagSize;

    for(int i=0;i<n;i++) {
        cout<<items[i].v<< "   "<<items[i].w<<endl;
    }

    int ans = FractionalKnapsack(items,n,bagSize);
    //cout<<ans<<endl;

    


    return 0;
}