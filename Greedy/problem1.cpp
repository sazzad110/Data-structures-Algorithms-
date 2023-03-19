#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

     //    #define sazzad


struct Item {
    string names;
    int v,w;
};

bool comp(Item i1,Item i2)
{
    return (float)i1.v/(float)i1.w > (float)i2.v/(float)i2.w;
}


int main()
{

    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif



    //cout<< "How many items:"<<endl;
    int n; cin>>n;

    Item items[n];

    cout<< "Please enter item's corresponding value and weight"<<endl;

    for(int i=0;i<n;i++) {
        cin>>items[i].names>>items[i].v>>items[i].w;
    }
    //cout<< "Enter the size of knapsack"<<endl;
    int k; cin>>k; // theives
    int arr[k];
    for(int i=0;i<k;i++) cin>>arr[i];

    // for(int i=0;i<n;i++) {
    //     cout<<items[i].v<< "   "<<items[i].w<<endl;
    // }

    sort(items,items+n,comp);
    //cout<< "after sorting by value/ weight"<<endl;

    // for(int i=0;i<n;i++) {
    //     cout<<items[i].v<< "   "<<items[i].w<<endl;
    // }

    for(int i=0;i<k;i++) {
        float finalval = 0.0;
        float totalweight = 0;

        for(int j=0;j<n;j++) {

            if(totalweight+ items[j].w<=arr[i]) {
                cout<< "taking :"<<items[j].names<< " :"<<items[j].w<<endl;
                totalweight += items[j].w;
                finalval += items[j].v;
            } else {
                cout<< "taking :"<<items[j].names<< " :"<<(float)arr[i]/(float)items[j].w<<endl;
                int wt = arr[i]-totalweight;
                finalval += (wt* ((float)items[j].v/(float)items[j].w));
                totalweight += wt;
                break;
            }
        }

        cout<< "theif"<<i+1<< "profit: "<<finalval<<endl;
        
        
    }

    


    return 0;
}