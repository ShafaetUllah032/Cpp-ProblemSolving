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

int ar[1005][1005];
int val[1005];


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x;
    cin>>x;
    //cout<<x+1<<endl;
    int n;
    while (x--)
    {
        //cout<<t<<"1  "<<endl;
        cin>>n;

        for(int i=1;i<=n;i++)
        {
            val[i]=(1<<30)-1;
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>ar[i][j];
                if(i!=j)
                {
                    val[i] &=ar[i][j];
                    val[j] &=ar[i][j];
                }
            }
        }
        bool ok =true;
        //cout<<"array assign"<<endl;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i !=j && ( val[i]|val[j]) != ar[i][j]){
                    ok=false;
                    cout<<"NO"<<endl;
                    break;
                }
            }
            if(!ok)
            {
                break;
            }
        }
        if(ok)
        {
         cout<<"YES"<<endl;
        for(int i=1;i<=n;i++)
        {
            cout<<val[i]<<" ";
        }
        cout<<endl;
        }

    }
    return 0;
}
/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/