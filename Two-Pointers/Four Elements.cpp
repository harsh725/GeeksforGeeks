Given an array A of N integers, find a combination of four elements in the array whose sum is equal to a given value X.

Input:
First line consists of T test cases. First line of every test case consists of an integer N, denoting the number of elements in an array. Second line consists of N spaced array elements. Third line of every test case X.

Output:
Single line output, print 1 if combination is found else 0.




=========================================================================================== 	


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

bool prime(ll s);
ll power(ll x, ll y) ;

bool ispower2(ll n)
{
    
    return n && (!(n&(n-1)));
}
void solve()
{
    ll n;
    cin>>n;
    int a[n];
    loop(0,n)cin>>a[i];
    int x;cin>>x;
    sort(a,a+n);
    for(int i=0;i<n-3;i++)
    {
        int res=a[i];
        for(int j=i+1;j<n-2;j++)
        {
            int sum=0;
            if(res+a[j] <x)
            sum=res+a[j];
            else
            break;
            int l=j+1,r=n-1;
            while(l<r)
            {
                
                if((sum+a[l]+a[r])==x)
                {
                    // cout<<sum<<a[l]<<a[r];
                    cout<<"1\n";return ;
                }
                else if((sum+a[l]+a[r])<x)
                l++;
                else
                r--;
            }
        }
    }
    cout<<"0\n";
    
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



bool prime(ll s)
{
    if (s <= 1)  return false;
    if (s <= 3)  return true;
    if (s%2 == 0 || s%3 == 0) return false;

    for (ll i=5; i*i<=s; i=i+6)
        if (s%i == 0 || s%(i+2) == 0)
           return false;

    return true;
}

ll power(ll x, ll y) 
{ 
    ll temp; 
    if( y == 0) 
        return 1; 
    temp = power(x, y/2); 
    if (y%2 == 0) 
        return temp*temp; 
    else
        return x*temp*temp; 
}