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
    int t,n;
    string s;
    int a,b,c;
    cin>>t;
    //cout<<t<<endl;
    string mxs;
    int mxa;
    string mns;
    int mna;
    int area;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        mxs="";
        mxa=INT_MIN;
        mns="";
        mna=INT_MAX;
        for(int j=1;j<=n;j++)
        {
            cin>>s>>a>>b>>c;
            area=a*b*c;
            if(area>mxa)
            {
                mxa=area;
                mxs=s;
            }
            if(area<mna)
            {
                mna=area;
                mns=s;
            }
        }
        
        if(mna == mxa)
        {
            cout<<"Case "<<i<<": "<<"no thief"<<endl;
        }
        else{
            cout<<"Case "<<i<<": "<<mxs<<" took chocolate from "<<mns<<endl;
        }
    }
    return 0;
}
/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/