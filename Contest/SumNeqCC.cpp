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
    int n,x,y,a,b;
    cin >> t;
    vi data;
    int i=0;
    while (t--)
    {
        //write code here
        
        cin>>n;
        //cout<<"T "<<n<<endl;
        fo(i,n)
        {
            cin>>x;
            data.pb(x);
        }

        i=0;
        int j=n-1;
        y=0;
        while((j-i)>2)
        {
            for(a=i+1,b=j-1;a<b;a++,b--)
            {
                if((data[i]+data[a])!=(data[j]+data[b]))
                {
                    cout<<"YES"<<endl;
                    i=j;
                    y=6;
                    break;
                }
            }
            i +=1;
            j -=1;
        }

        if(y==0)
        {
            cout<<"NO"<<endl;
        }
        
        data.clear();
        
    }
    return 0;
}
/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/