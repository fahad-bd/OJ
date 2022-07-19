//                            In the name of Allah
#include<bits/stdc++.h> 
#include<ext/pb_ds/assoc_container.hpp> 
#include<ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds; 

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
const ll MOD = 1e9+7;
const ll INF = 9e18;
const ll MAX = 2e5+5;

#define pb                      push_back
#define ppb                     pop_back
#define mp                      make_pair
#define PQ                      priority_queue
#define fi                      first
#define se                      second 
#define all(x)                  x.begin(), x.end()
#define allr(x)                 x.rbegin(), x.rend()
#define sz(x)                   ((int)(x).size())
#define sortall(x)              sort(all(x))
#define sortallr(x)             sort(allr(x))
#define revS(s)                 reverse(all(s))
#define setbits                 __builtin_popcountll 
#define zerobits                __builtin_ctzll 
#define lcm(a,b)                a/__gcd(a,b)*b
#define mset(a,v)               memset(a,v,sizeof(a))
#define nl                      '\n'
#define test                    int T; cin>>T; while(T--)
#define lp(i,s,e)               for(int i=s;i<e;i++)
#define lpr(i,s,e)              for(int i=e-1;i>=s;i--)
#define II                      ({ ll TEMP; cin>>TEMP; TEMP; })
#define SI                      ({ string TEMP; cin>>TEMP; TEMP; })
#define AI(a)                   ({ int n=sizeof(a)/sizeof(a[0]); lp(I,0,n)a[I]=II; })
#define AO(a)                   ({ int n=sizeof(a)/sizeof(a[0]); lp(I,0,n){cout<<(I?" ":"")<<a[I];}})
#define VI(v)                   ({ lp(I,0,v.size())v[I]=II; })
#define VO(v)                   ({ lp(I,0,v.size()){cout<<(I?" ":"")<<v[I];}}) 
#define PI                      3.1415926535897932384626

template<class T> void _print(T x){cerr<<x;}
template<class T, class V> void _print(pair <T, V> p) {cerr << "{ "; _print(p.fi); cerr << ", "; _print(p.se); cerr << " }";}
template<class T> void _print(vector<T> &v){cerr << "[ ";for(auto i : v){_print(i); cerr<<' ';}cerr << ']';}
template<class T> void _print(set<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}
template<class T> void _print(multiset<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}
template<class T> void _print(unordered_set<T> &a){cerr<<'['<<' ';for(auto i : a){_print(i);cerr<<' ';}cerr<<']';}
template<class T> void _print(vector<vector<T>> &a){cerr << "[ ";for(auto i : a){_print(i); cerr<<' ';}cerr << ']';}
template<class T, class V> void _print(vector<pair<T, V> > &a){cerr << "[ ";for(auto i : a){cerr<<'{';_print(i.fi); cerr<<", ";_print(i.se);cerr<<"} ";}cerr << ']';}
template<class T, class V> void _print(map<T, V> &a){cerr<<"[ ";for(auto i: a){_print(i);cerr<<' ';}cerr<<" ]";}
template<class T, class V> void _print(unordered_map<T, V> &a){cerr<<"[ ";for(auto i: a){_print(i);cerr<<' ';}cerr<<" ]";}
template<class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll binMultiplay(ll a, ll b){
    ll ans = 0;
    while(b){
        if(b&1) ans = (ans + a) % MOD;
        a = (a + a) % MOD;
        b >>= 1;
    }
    return ans;
}

ll power(ll a, ll b){
    ll ans = 1;
    while(b){
        if(b&1) ans = binMultiplay(ans, a);
        a = binMultiplay(a, a);
        b >>= 1;
    }
    return ans;
}

bool palindrome(string s){
    string st=s;
    revS(st);
    if(st==s)return true;
    else return false;
}

vector<ll>isPrime(5000011,1); 
void prime_sieve(ll n){
    isPrime[0]=0, isPrime[1]=0;
    for(ll i=2; i<=n; i+=2){
        if(i==2)continue;
        isPrime[i]=0;
    }
    for(ll i=3; i*i<=n; i+=2){
        if(isPrime[i]==1){
            for(ll j=i*i; j<=n; j+=2*i){
                isPrime[j]=0;
            }
        }
    }
}

void IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif

    #ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x <<" = "; _print(x); cerr << '\n';
    #else
    #define debug(x)
    #endif
}

void solve();

//main 
int main()
{
    IO();
    test 
    solve();
    return 0;
}

void solve()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    VI(arr);

    if(n%2){
        lp(i,1,n){
            if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
            i++;
        }
    }
    else{
        lp(i,0,n){
            if(arr[i]>arr[i+1])
            swap(arr[i],arr[i+1]);
            i++;
        }
    }

    debug(arr);

    bool flag=true;
    lp(i,0,n-1){
        if(arr[i]>arr[i+1]){
            flag=false;
            break;
        }
    }

    if(flag)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}