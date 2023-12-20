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
//#define mod 1000000007
#define mod 998244353
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;



ll int fac[200005];

void val()
{
  fac[0]=1;
  for(int i=1;i<=200000;i++)
  {
    fac[i] = ((i%mod)*(fac[i-1]%mod)%mod);
    //cout<<fac[i]<<endl;
  }
}

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
    cin >> t;

    val();
    string s;
    ll int sum=1;
    ll int flag=1;
    ll int fct;
    ll int x,y;
    while (t--)
    {
        cin>>s;
        flag=1;
        sum=1;
        x=s.size();
        y=0;
        for(int i=1;i<x;i++)
        {
          if(s[i]==s[i-1])
          {
            flag++;
          }
          else{
            sum = (sum%mod)*(flag%mod)%mod; /// permutation among themselves
            y +=(flag-1);
            flag=1;
          }
        }
        if(flag!=1){
          sum = (sum%mod)*(flag%mod)%mod;
          y +=(flag-1);
        }
        sum=(sum%mod)*(fac[y]%mod)%mod;
        cout<<y<<" "<<sum<<endl;

    }
    return 0;
}
/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/