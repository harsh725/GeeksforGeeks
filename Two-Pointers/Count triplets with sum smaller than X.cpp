// Given an array A of distinct integers and a sum value X. Find count of triplets with sum smaller than given sum value X.

// Input:
// First line consists of T test cases. First line of every test case consists of N and X, denoting the number of elements in array and Sum Value respectively. Second line consists of array elements.

// Output:
// For each testcase, output the count of Triplets.




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
    ll n,x,c=0;
    cin>>n>>x;
    vector<ll> v(n);
    loop(0,n)cin>>v[i];
    sort(all(v));
    for(ll i=0;i<n-2;i++)
    {
        ll a=v[i],l=i+1,r=n-1;
        while(l<r)
        {
            if(a+v[l]+v[r]<x)
            {
                c+=(abs(r-l));
                l++;
            }
            else
            r--;
            
            
            
        }
    }
    cout<<c<<"\n";
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

