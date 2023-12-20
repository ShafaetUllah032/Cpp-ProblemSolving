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
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
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
    int n,d;
    while (t--)
    {

        cin>>n;
        vector<pair<int,int>>a,b,c,ans;
        for(int i=1; i<=n; i++)
        {
            cin>>d;
            a.push_back(make_pair(d,i));
        }
        for(int i=1; i<=n; i++)
        {
            cin>>d;
            b.push_back(make_pair(d,i));
        }
        for(int i=1; i<=n; i++)
        {
            cin>>d;
            c.push_back(make_pair(d,i));
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());

        vector<int>val;
        int mx=0;
        for(int i=0; i<3; i++)
            for(int j=0; j<3; j++)
                for(int k=0; k<3; k++)
                {
                    if(a[n-i-1].second!=b[n-j-1].second && (a[n-i-1].second!=c[n-k-1].second && b[n-j-1].second!= c[n-k-1].second ))
                    {
                        int data=a[n-i-1].first+b[n-j-1].first+c[n-k-1].first;
                        mx=max(mx,data);

                    }
                }
            
            cout<<mx<<endl;

        
    }
    return 0;
}
/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/