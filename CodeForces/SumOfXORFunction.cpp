#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define modx 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

ll n,ans;
ll a[300001];
const ll mod = 998244353;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    //cin >> t;
    t=1;
    while (t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        //cout<<"solve"<<endl;
        for(ll bit=0;bit<=30;bit++) {
		vector<ll> pre(2,0), sum(2,0);
		pre[0]=1;
		ll x=0;
		for(ll i=1;i<=n;i++) {
			x^=(a[i]&(1ll<<bit)) ? 1: 0;
            //cout<<a[i]<<" "<<x<<endl;
			ans+=(((pre[x^1]*i)%mod-sum[x^1]+mod)%mod)*(1ll<<bit)%mod;
            // cout<<(pre[x^1]*i)<<" "<<sum[x^1]<<" "<<ans<<endl;
			ans%=mod;
			pre[x]++, sum[x]+=i;
			sum[x]%=mod;
		}
	}
	cout<<ans;
    }
    return 0;
}

/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/