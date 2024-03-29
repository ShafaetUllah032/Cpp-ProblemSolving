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
    int t,n,x,y,a,b,i;
    cin >> t;
    while (t--)
    {
        cin>>a>>b;

        if(a<b || (a%2==1 && b%2==0))
        {
            cout<<"NO"<<endl;
        }
        else if ((a%2==0 && b%2==0)|| (a%2==1 && b%2==1))
        {
            cout<<"YES"<<endl;

            fo(i,b-1)
            {
                cout<<1<<" ";
            }
            cout<<(a-(b-1))<<endl;
        }
        else if(a%2==0 && b%2==1)
        {
            if(a<(b*2))
            {
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;

            fo(i,b-1)
            {
                cout<<2<<" ";
            }
            cout<<(a-(b-1)*2)<<endl;
            }
        }
    }
    return 0;
}
/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/