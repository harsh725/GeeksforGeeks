Given an array of n integers. Count the total number of sub-array having total distinct elements same as that of total distinct elements of the original array.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains
the number of elements in the array a[] as n and next line contains space separated n elements in
the array.

Output:
For each test case output an integer which is the required answer.


####################################################################
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ull unsigned long long int
#define eb  emplace_back
#define all(x) x.begin(),x.end()
#define loop(a,n) for(ll i=a;i<n;i++)
#define debug(x)  cout<<#x<<" "<<x<<"\n";
#define mod 1e9+7
#define setbits(x)  __builtin_popcountll(x)
#define digits(a,x)  a=floor(log10(x)) + 1


void solve()
{
    ll n;
    cin>>n;
    vector<ll> v(n);
    std::set<ll> s;
    loop(0,n)
    {
        cin>>v[i];
        s.insert(v[i]);
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        set<int > temp;
        for(int j=i;j<n;j++)
        {
            temp.insert(v[j]);
            if(s.size()==temp.size())
            c++;
        }
    }
    cout<<c<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    ll t;cin>>t;
    // int t=1;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
