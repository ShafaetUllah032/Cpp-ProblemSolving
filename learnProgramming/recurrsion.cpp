#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (int i = 0; i < n; i++)
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

void recur(int n) // printing number continuously without loop 
{

    if(n==404)
    {
        cout<<"not found "<<endl;
        return ;
    }
    cout<<n<<endl;
    recur(n+1);

    
}

vector<string> recurString(int n) /// pushing on string vector without loop 
{

    vector<string> data;
    cout<<"called for " <<n<<endl<<data.size()<<endl;

    if(n>0)
    {
        data=recurString(n-1); // updated as return 
        cout<<"responded for "<<n<<" "<<data.size()<<endl;
        //cout<<data.size()<<" "<<n<<endl;
        data.push_back("this is Safaet");
    }
    return data;
}


int sumRecur(int n)
{
    ll val=0;
    if(n>0)
    {
        val = sumRecur(n-1);
        
        val +=n;
        cout<<val<<endl;

    }
    return val;
}


int factoRecur(int n)
{
    ll val=1;
    /*
    
    if(n==0)
    {
        return 1;
    }
    factoRecur(n)=n*factoRecur(n-1);

    */

    if(n>0)
    {
        val = factoRecur(n-1)*n;
        //cout<<n<<" "<<val<<endl;

    }
    return val;
}

void revArray(vector<int> &data,int start,int end)
{
    if(start<end)
    {
        swap(data[start],data[end]);
        revArray(data,start+1,end-1);
        cout<<"swap done "<<endl;
    }
    return ;
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
    int n;
    cin>>n;

    //recur(n);
    vector<string> dstr;
    //dstr=recurString(n);
    //cout<<dstr.size()<<endl;

    //ll val=sumRecur(5);
    //cout<<val<<endl;
    ll fac=factoRecur(n);
    cout<<fac<<endl;

    vi data={1,2,3,4,5};

    revArray(data,0,data.size()-1);
    for(int i=0;i<data.size();i++)
    {
        cout<<data[i]<<endl;
    }



    return 0;
}
/** মৃতরা কি ব্যাথা পায় ? যখন দেহ মাটিতে খায় ! **/
/**LaZyBadB0y **/