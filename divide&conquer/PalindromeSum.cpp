#include<bits/stdc++.h>
#define read(x)    freopen(x, "r", stdin);
#define write(x)   freopen(x, "w", stdout);
using namespace std;
#define ll long long

     //  #define sazzad

int is_palindrome(int num,int tempNum)              // return number and it's reverse number
{
    if(num==0) {
        return tempNum;
    }

    int rem = num%10;
    num/=10;
    tempNum*=10;
    tempNum+=rem;

    return is_palindrome(num,tempNum);
}


int sum_palindrome(int l,int r)
{
    if(l==r) { 
        int revNumber = is_palindrome(l,0);
        if(revNumber == l) {                   // check num or rev equal or not
            cout<<l<< " ";
            return l;
        } else {
            return 0;
        }

    } else {

        int mid = (l+r)/2;

        int c1 = sum_palindrome(l,mid);      // merging
        int c2 = sum_palindrome(mid+1,r);    // merging
        
        return c1+c2;
    }

}

int main()
{
    #ifdef sazzad
    read ("input.txt");
    write("output.txt");
    #endif

    int x,y; cin>>x>>y;

    int palindromeSum = sum_palindrome(x,y);

    cout<<"\nsum "<<palindromeSum<<endl;
    
    return 0;
   
}